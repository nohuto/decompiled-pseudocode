/*
 * XREFs of sub_1403C4AE0 @ 0x1403C4AE0
 * Callers:
 *     sub_14053E700 @ 0x14053E700 (sub_14053E700.c)
 * Callees:
 *     sub_140275290 @ 0x140275290 (sub_140275290.c)
 *     sub_1402766A0 @ 0x1402766A0 (sub_1402766A0.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     sub_14027DB4C @ 0x14027DB4C (sub_14027DB4C.c)
 *     sub_14028F324 @ 0x14028F324 (sub_14028F324.c)
 *     sub_14029C970 @ 0x14029C970 (sub_14029C970.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x1402AD0A0 (ExReleasePushLockEx.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_1402EF060 @ 0x1402EF060 (sub_1402EF060.c)
 *     KeWaitForMultipleObjects @ 0x1402F13C0 (KeWaitForMultipleObjects.c)
 *     sub_1402F5AEC @ 0x1402F5AEC (sub_1402F5AEC.c)
 *     sub_1402F5D4C @ 0x1402F5D4C (sub_1402F5D4C.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_1403C4AE0(_DWORD *StartContext)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  __int64 v3; // rdi
  __int64 v5; // rbx
  __int64 v6; // r13
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // rdx
  void *v10; // r14
  bool v11; // zf
  void *v12; // rax
  NTSTATUS v13; // eax
  ULONG_PTR v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // r14
  _QWORD *v17; // r8
  _SLIST_ENTRY *v18; // rbx
  _SLIST_ENTRY *v19; // rcx
  _SLIST_ENTRY *v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r14
  _QWORD *v23; // rcx
  unsigned int v24; // edi
  __int64 v25; // r14
  PSLIST_ENTRY v26; // rbx
  _SLIST_ENTRY *Next; // rcx
  __int64 v28; // rcx
  _SLIST_ENTRY *v29; // rax
  signed __int64 v30; // rax
  bool v31; // cc
  signed __int64 v32; // rax
  unsigned int v33; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v34; // [rsp+48h] [rbp-B8h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  __int64 v36; // [rsp+58h] [rbp-A8h]
  unsigned int v37; // [rsp+60h] [rbp-A0h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-98h] BYREF
  __int64 v39; // [rsp+70h] [rbp-90h]
  __int64 v40; // [rsp+78h] [rbp-88h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  PVOID Object[3]; // [rsp+88h] [rbp-78h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+A0h] [rbp-60h] BYREF
  _QWORD v45[64]; // [rsp+100h] [rbp+0h] BYREF
  PSLIST_ENTRY ListEntry[64]; // [rsp+300h] [rbp+200h] BYREF

  if ( StartContext )
  {
    v1 = StartContext[10];
    v2 = 0LL;
    v3 = (unsigned int)StartContext[9];
    v5 = *((_QWORD *)StartContext + 9);
    v6 = *((_QWORD *)StartContext + 8);
    BugCheckParameter2 = 0LL;
    v7 = 3;
    v33 = v1;
    v37 = v3;
    v36 = *((_QWORD *)StartContext + 7);
    v35 = v5;
    memset(v45, 0, sizeof(v45));
    memset(ListEntry, 0, sizeof(ListEntry));
    v8 = *(_QWORD *)(v5 + 272);
    v41 = 3 * v3;
    v9 = (unsigned int)v3;
    v40 = (unsigned int)v3;
    v10 = (void *)(v8 + 24 * v3);
    v34 = (unsigned __int64)v10;
    v11 = *(_DWORD *)(v5 + 4) == 1;
    v39 = *(_QWORD *)(v5 + 280) + 404 * v3;
    Object[0] = v10;
    if ( v11 )
      v12 = (void *)(v36 + 1240);
    else
      v12 = (void *)(v6 + 1176);
    Object[1] = v12;
    while ( 1 )
    {
      if ( (unsigned int)v2 < 0x3F && *(_QWORD *)(*(_QWORD *)(v5 + 256) + 16 * v9) != *(_QWORD *)(v5 + 256) + 16 * v9 )
      {
LABEL_39:
        v7 = 0;
        goto LABEL_11;
      }
      if ( !(_DWORD)v2 )
        break;
      v24 = sub_14027DB4C((__int64)v45, v2, v10);
      if ( v24 >= (unsigned int)v2 )
        goto LABEL_39;
      v7 = 1;
      _mm_lfence();
      v25 = v24;
      v26 = ListEntry[v25];
      if ( !v26 || (Next = v26[3].Next) == 0LL )
      {
        v5 = v35;
        goto LABEL_21;
      }
      ExFreePoolWithTag(Next, 0x73416343u);
      LOBYTE(v26[8].Next) = 6;
      v26[3].Next = 0LL;
      v45[v24] = 0LL;
      ListEntry[v24] = 0LL;
      if ( *((_DWORD *)&v26[1].Next[32].Next + 2) == 1 && *((_DWORD *)&v26[2].Next + 2) <= 0x20000u )
      {
        sub_14028F324((__int64)v26);
        sub_1402766A0(v26);
      }
      else
      {
        sub_1402F5AEC(v26, 0LL);
      }
      v2 = (unsigned int)(v2 - 1);
      while ( v24 < (unsigned int)v2 )
      {
        v45[v25++] = v45[++v24];
        v45[v25 + 63] = ListEntry[v24];
      }
      v28 = v39;
      v10 = (void *)v34;
      v5 = v35;
      v45[v24] = 0LL;
      ListEntry[v24] = 0LL;
      _InterlockedDecrement((volatile signed __int32 *)(v28 + 4LL * v33));
      if ( !v34 )
      {
        v10 = (void *)(*(_QWORD *)(v35 + 272) + 8 * v41);
        v34 = (unsigned __int64)v10;
      }
LABEL_22:
      v9 = v40;
      if ( v33 && !(_DWORD)v2 )
        return;
    }
    v13 = KeWaitForMultipleObjects(2u, Object, WaitAny, WrFreePage, 0, 0, 0LL, &WaitBlockArray);
    if ( v13 )
    {
      if ( v13 == 1 )
        v7 = 2;
    }
    else
    {
      v7 = 0;
    }
    if ( !v7 )
    {
LABEL_11:
      v14 = v36 + 1160;
      ExAcquirePushLockExclusiveEx(v36 + 1160, 0LL);
      v16 = 16 * v40;
      while ( 1 )
      {
        v17 = (_QWORD *)(v16 + *(_QWORD *)(v5 + 256));
        if ( (_QWORD *)*v17 == v17 )
        {
          v22 = v36;
          goto LABEL_19;
        }
        if ( (unsigned int)v2 >= 0x3F )
        {
          ExReleasePushLockEx(v14, 0LL);
          v22 = v36;
          sub_1402F5D4C(v36, (_QWORD *)v5, &BugCheckParameter2, v37);
          ExAcquirePushLockExclusiveEx(v14, 0LL);
LABEL_19:
          ExReleasePushLockEx(v14, 0LL);
          v23 = (_QWORD *)BugCheckParameter2;
          if ( BugCheckParameter2 )
          {
            *(_DWORD *)(v39 + 4LL * *(unsigned int *)(BugCheckParameter2 + 40)) = 0;
            *v23 = 0LL;
            sub_1402EF060((ULONG_PTR)v23, 0, *(_DWORD *)(v5 + 24), *(_QWORD *)(v22 + 8));
            BugCheckParameter2 = 0LL;
          }
LABEL_21:
          v10 = (void *)v34;
          goto LABEL_22;
        }
        v18 = (_SLIST_ENTRY *)sub_140275290(v15, v5, v17);
        ExReleasePushLockEx(v14, 0LL);
        if ( !sub_14029C970((__int64)v18) )
          goto LABEL_42;
        v19 = v18[3].Next;
        v20 = v19->Next;
        if ( v19->Next )
        {
          v21 = v39;
          v45[v2] = v20;
          ListEntry[v2] = v18;
          v2 = (unsigned int)(v2 + 1);
          _InterlockedIncrement((volatile signed __int32 *)(v21 + 4LL * v33));
          v34 &= -(__int64)((unsigned int)v2 < 0x3F);
          goto LABEL_17;
        }
        ExFreePoolWithTag(v19, 0x73416343u);
        v29 = v18[1].Next;
        v18[3].Next = 0LL;
        LOBYTE(v18[8].Next) = 6;
        if ( *((_DWORD *)&v29[32].Next + 2) != 1 || *((_DWORD *)&v18[2].Next + 2) > 0x20000u )
        {
          sub_1402F5AEC(v18, 0LL);
        }
        else
        {
LABEL_42:
          sub_14028F324((__int64)v18);
          sub_1402766A0(v18);
        }
LABEL_17:
        ExAcquirePushLockExclusiveEx(v14, 0LL);
        v5 = v35;
      }
    }
    if ( v7 == 1 )
      goto LABEL_22;
    v34 = (unsigned __int64)v10;
    if ( v7 != 2 )
      goto LABEL_22;
    if ( !v33 )
    {
      ExFreePoolWithTag(StartContext, 0x71576343u);
      sub_140276728(v36);
      if ( v6 )
      {
        v30 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 + 8), 0xFFFFFFFFFFFFFFFFuLL);
        v31 = v30 <= 1;
        v32 = v30 - 1;
        if ( v31 )
        {
          if ( v32 )
            __fastfail(0xEu);
          KeSetEvent((PRKEVENT)(v6 + 1200), 0, 0);
        }
      }
    }
  }
}
