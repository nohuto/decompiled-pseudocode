/*
 * XREFs of EtwpRegisterPrivateSession @ 0x1409ECAEC
 * Callers:
 *     NtTraceControl @ 0x140725DD0 (NtTraceControl.c)
 * Callees:
 *     ObReferenceObjectByPointer @ 0x14022AA90 (ObReferenceObjectByPointer.c)
 *     KeLeaveCriticalRegionThread @ 0x14022F7F0 (KeLeaveCriticalRegionThread.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140231280 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     RtlRbRemoveNode @ 0x14024BA00 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14024CD90 (RtlRbInsertNodeEx.c)
 *     PsGetCurrentThreadProcessId @ 0x1402AFB30 (PsGetCurrentThreadProcessId.c)
 *     ObCreateObjectEx @ 0x140730AA0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x140735BC0 (ObInsertObjectEx.c)
 *     PidNodeCompare @ 0x1409ED040 (PidNodeCompare.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpRegisterPrivateSession(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  _RTL_RB_TREE *v4; // r13
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *Root; // rdi
  BOOLEAN v10; // si
  int v11; // eax
  _RTL_BALANCED_NODE *v12; // rax
  __int64 Pool2; // rax
  _RTL_BALANCED_NODE *v14; // rbx
  unsigned int inserted; // edi
  _RTL_BALANCED_NODE **v16; // r14
  _RTL_BALANCED_NODE *i; // rsi
  char *v18; // r12
  _RTL_BALANCED_NODE *v19; // rcx
  _RTL_BALANCED_NODE *v20; // rax
  __int64 v21; // [rsp+28h] [rbp-69h]
  int CurrentThreadProcessId; // [rsp+58h] [rbp-39h] BYREF
  PVOID Object; // [rsp+60h] [rbp-31h] BYREF
  __int64 v24; // [rsp+68h] [rbp-29h] BYREF
  __int64 v25; // [rsp+70h] [rbp-21h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+78h] [rbp-19h]
  __int128 v27; // [rsp+80h] [rbp-11h] BYREF
  __int128 v28; // [rsp+90h] [rbp-1h]
  __int128 v29; // [rsp+A0h] [rbp+Fh]

  v4 = (_RTL_RB_TREE *)(a1 + 4080);
  *(_QWORD *)&v29 = 0LL;
  DWORD2(v29) = 0;
  v24 = 0LL;
  Object = 0LL;
  v25 = 0LL;
  v6 = KeGetCurrentThread()->PreviousMode == 1;
  v27 = 0LL;
  v28 = 0LL;
  if ( !v6 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  BugCheckParameter2 = (ULONG_PTR)&v4[1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[1], 0LL);
  Root = v4->Root;
  v10 = 0;
  if ( v4->Root )
  {
    while ( 1 )
    {
      v11 = PidNodeCompare(&CurrentThreadProcessId, Root);
      if ( v11 <= 0 )
      {
        if ( v11 >= 0 )
        {
          v14 = Root;
LABEL_15:
          v16 = &v14[1].Children[1];
          for ( i = v14[1].Children[1]; i != (_RTL_BALANCED_NODE *)v16; i = i->Children[0] )
          {
            if ( *(_WORD *)&i->0 == a2 )
            {
              inserted = -1073741811;
              goto LABEL_24;
            }
            if ( *(_WORD *)&i->0 > a2 )
              break;
          }
          LODWORD(v27) = 48;
          *((_QWORD *)&v27 + 1) = 0LL;
          DWORD2(v28) = 64;
          *(_QWORD *)&v28 = 0LL;
          v29 = 0LL;
          inserted = ObCreateObjectEx(0, EtwpSessionDemuxObjectType, (__int64)&v27, 1, v21, 32, 0, 0, &Object, 0LL);
          if ( !inserted )
          {
            v18 = (char *)Object;
            v19 = (_RTL_BALANCED_NODE *)Object;
            *((_WORD *)Object + 8) = a2;
            WORD2(v19->ParentValue) = ++*(_WORD *)(a1 + 4104);
            v19[1].Children[0] = v14;
            v20 = i->Children[1];
            i->Children[1] = v19;
            v20->Children[0] = v19;
            v19->Children[1] = v20;
            v19->Children[0] = i;
            ObReferenceObjectByPointer(v19, 0, EtwpSessionDemuxObjectType, 0);
            inserted = ObInsertObjectEx(v18, 0LL, 0, 0, 0, (PVOID *)&v25, &v24);
            if ( !inserted )
            {
              *a3 = *((_WORD *)v18 + 10);
              *a4 = v24;
              goto LABEL_27;
            }
          }
LABEL_24:
          if ( v14 && *v16 == (_RTL_BALANCED_NODE *)v16 )
          {
            RtlRbRemoveNode(v4, v14);
            ExFreePoolWithTag(v14, 0);
          }
          goto LABEL_27;
        }
        v12 = Root->Children[0];
        if ( !Root->Children[0] )
          break;
      }
      else
      {
        v12 = Root->Children[1];
        if ( !v12 )
        {
          v10 = 1;
          break;
        }
      }
      Root = v12;
    }
  }
  Pool2 = ExAllocatePool2(256LL, 48LL, 1215788101LL);
  v14 = (_RTL_BALANCED_NODE *)Pool2;
  if ( Pool2 )
  {
    *(_DWORD *)(Pool2 + 24) = CurrentThreadProcessId;
    *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
    *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
    RtlRbInsertNodeEx(v4, Root, v10, (PRTL_BALANCED_NODE)Pool2);
    goto LABEL_15;
  }
  inserted = -1073741801;
LABEL_27:
  ExReleasePushLockEx((__int64 *)BugCheckParameter2, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  return inserted;
}
