/*
 * XREFs of sub_1409EBDD0 @ 0x1409EBDD0
 * Callers:
 *     NtTraceControl @ 0x1407954F0 (NtTraceControl.c)
 * Callees:
 *     PsGetCurrentThreadProcessId @ 0x1402A7BC0 (PsGetCurrentThreadProcessId.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ObReferenceObjectByPointer @ 0x1402E0270 (ObReferenceObjectByPointer.c)
 *     sub_1402F9540 @ 0x1402F9540 (sub_1402F9540.c)
 *     RtlRbRemoveNode @ 0x14034D8D0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x14034E6B0 (RtlRbInsertNodeEx.c)
 *     sub_140729C30 @ 0x140729C30 (sub_140729C30.c)
 *     sub_14072B3B0 @ 0x14072B3B0 (sub_14072B3B0.c)
 *     sub_1409EC320 @ 0x1409EC320 (sub_1409EC320.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1409EBDD0(__int64 a1, unsigned __int16 a2, _WORD *a3, _DWORD *a4)
{
  _RTL_RB_TREE *v4; // r13
  bool v6; // zf
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *Root; // rbx
  BOOLEAN v10; // di
  int v11; // eax
  _RTL_BALANCED_NODE *v12; // rax
  __int64 Pool2; // rax
  _RTL_BALANCED_NODE *v14; // rsi
  unsigned int v15; // ebx
  _RTL_BALANCED_NODE **v16; // r14
  _RTL_BALANCED_NODE *i; // rdi
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
  v6 = *((_BYTE *)KeGetCurrentThread() + 562) == 1;
  v27 = 0LL;
  v28 = 0LL;
  if ( !v6 )
    return 3221225659LL;
  if ( a2 > 8u )
    return 3221225485LL;
  CurrentThreadProcessId = PsGetCurrentThreadProcessId();
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  BugCheckParameter2 = (ULONG_PTR)&v4[1];
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&v4[1], 0LL);
  Root = v4->Root;
  v10 = 0;
  if ( v4->Root )
  {
    while ( 1 )
    {
      v11 = sub_1409EC320(&CurrentThreadProcessId, Root);
      if ( v11 <= 0 )
      {
        if ( v11 >= 0 )
        {
          v14 = Root;
LABEL_15:
          v16 = &v14[1].Children[1];
          for ( i = v14[1].Children[1]; i != (_RTL_BALANCED_NODE *)v16; i = i->Children[0] )
          {
            if ( i->16 == a2 )
            {
              v15 = -1073741811;
              goto LABEL_24;
            }
            if ( *(_WORD *)&i->16 > a2 )
              break;
          }
          LODWORD(v27) = 48;
          *((_QWORD *)&v27 + 1) = 0LL;
          DWORD2(v28) = 64;
          *(_QWORD *)&v28 = 0LL;
          v29 = 0LL;
          v15 = sub_14072B3B0(0, qword_140D06D78, (int)&v27, 1u, v21, 32, 0, 0, &Object, 0LL);
          if ( !v15 )
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
            ObReferenceObjectByPointer(v19, 0, qword_140D06D78, 0);
            v15 = sub_140729C30(v18, 0LL, 0, 0, 0, (__int64)&v25, &v24);
            if ( !v15 )
            {
              *a3 = *((_WORD *)v18 + 10);
              *a4 = v24;
              goto LABEL_26;
            }
          }
LABEL_24:
          if ( *v16 == (_RTL_BALANCED_NODE *)v16 )
          {
            RtlRbRemoveNode(v4, v14);
            ExFreePoolWithTag(v14, 0);
          }
          goto LABEL_26;
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
  v15 = -1073741801;
LABEL_26:
  ExReleasePushLockEx(BugCheckParameter2, 0LL);
  sub_1402F9540((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  return v15;
}
