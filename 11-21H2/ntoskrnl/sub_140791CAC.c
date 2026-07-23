/*
 * XREFs of sub_140791CAC @ 0x140791CAC
 * Callers:
 *     sub_1406E6DC0 @ 0x1406E6DC0 (sub_1406E6DC0.c)
 *     sub_1407919CC @ 0x1407919CC (sub_1407919CC.c)
 *     sub_1407920F0 @ 0x1407920F0 (sub_1407920F0.c)
 * Callees:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     RtlAvlRemoveNode @ 0x1402C66C0 (RtlAvlRemoveNode.c)
 *     ExWaitForRundownProtectionRelease @ 0x1402F0990 (ExWaitForRundownProtectionRelease.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     sub_14079204C @ 0x14079204C (sub_14079204C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140791CAC(__int64 a1, struct _EX_RUNDOWN_REF *a2, char a3)
{
  unsigned __int64 *v3; // rsi
  __int64 v7; // rax
  __int64 v8; // rbx
  volatile signed __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rsi
  struct _EX_RUNDOWN_REF *Count; // rsi
  ULONG_PTR v15; // rax
  unsigned __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rsi
  ULONG_PTR v19; // rcx
  struct _EX_RUNDOWN_REF **v20; // rdx
  ULONG_PTR v22; // r13
  unsigned __int64 *v23; // r12
  __int64 v24; // rax
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // r13
  struct _EX_RUNDOWN_REF v28; // rax
  struct _EX_RUNDOWN_REF **v29; // rcx

  v3 = (unsigned __int64 *)(a1 + 48);
  v7 = sub_140347C10(a1 + 48, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    sub_14029F120(v3, v7, (__int64)v3);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  if ( a2[6].Count )
  {
    v9 = (volatile signed __int64 *)&a2[14];
    v10 = sub_140347C10((__int64)&a2[14], 0LL);
    v11 = v10;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&a2[14], 0LL) )
      sub_14029F120(&a2[14].Count, v10, (__int64)&a2[14]);
    if ( v11 )
      *(_BYTE *)(v11 + 18) = 1;
    if ( a3 )
      RtlAvlRemoveNode((unsigned __int64 *)(a1 + 56), &a2[2].Count);
    a2[6].Count = 0LL;
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&a2[14]);
    sub_1402AFC00((ULONG_PTR)&a2[14]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    sub_1402AFC00((ULONG_PTR)v3);
    v12 = sub_140347C10((__int64)&a2[14], 0LL);
    v13 = v12;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
      sub_14029F120(&a2[14].Count, v12, (__int64)&a2[14]);
    if ( v13 )
      *(_BYTE *)(v13 + 18) = 1;
    while ( 1 )
    {
      Count = (struct _EX_RUNDOWN_REF *)a2[15].Count;
      if ( Count == &a2[15] )
        break;
      sub_140347810(Count - 7);
      v22 = Count[-3].Count;
      if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(&a2[14]);
      sub_1402AFC00((ULONG_PTR)&a2[14]);
      v23 = (unsigned __int64 *)(*(_QWORD *)(v22 + 2152) + 80LL);
      v24 = sub_140347C10((__int64)v23, 0LL);
      v25 = v24;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v23, 0LL) )
        sub_14029F120(v23, v24, (__int64)v23);
      if ( v25 )
        *(_BYTE *)(v25 + 18) = 1;
      v26 = sub_140347C10((__int64)&a2[14], 0LL);
      v27 = v26;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v9, 0LL) )
        sub_14029F120(&a2[14].Count, v26, (__int64)&a2[14]);
      if ( v27 )
        *(_BYTE *)(v27 + 18) = 1;
      if ( Count[-2].Count )
      {
        v28.Count = Count->Count;
        if ( *(struct _EX_RUNDOWN_REF **)(Count->Count + 8) != Count )
          goto LABEL_54;
        v29 = (struct _EX_RUNDOWN_REF **)Count[1].Count;
        if ( *v29 != Count )
          goto LABEL_54;
        *v29 = (struct _EX_RUNDOWN_REF *)v28.Count;
        *(_QWORD *)(v28.Count + 8) = v29;
        Count[-2].Count = 0LL;
      }
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v23);
      sub_1402AFC00((ULONG_PTR)v23);
      sub_1402AD030(Count - 7);
    }
    if ( (_InterlockedExchangeAdd64(v9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&a2[14]);
    sub_1402AFC00((ULONG_PTR)&a2[14]);
    v15 = a2[19].Count;
    if ( v15 )
    {
      v16 = (unsigned __int64 *)(*(_QWORD *)(v15 + 2152) + 56LL);
      v17 = sub_140347C10((__int64)v16, 0LL);
      v18 = v17;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v16, 0LL) )
        sub_14029F120(v16, v17, (__int64)v16);
      if ( v18 )
        *(_BYTE *)(v18 + 18) = 1;
      v19 = a2[17].Count;
      if ( *(struct _EX_RUNDOWN_REF **)(v19 + 8) != &a2[17]
        || (v20 = (struct _EX_RUNDOWN_REF **)a2[18].Count, *v20 != &a2[17]) )
      {
LABEL_54:
        __fastfail(3u);
      }
      *v20 = (struct _EX_RUNDOWN_REF *)v19;
      *(_QWORD *)(v19 + 8) = v20;
      a2[19].Count = 0LL;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v16);
      sub_1402AFC00((ULONG_PTR)v16);
    }
    sub_1402AD030(a2 + 1);
    ExWaitForRundownProtectionRelease(a2 + 1);
    sub_14079204C(a2);
    ObDereferenceSecurityDescriptor(a2[9].Count, 1u);
    ExFreePoolWithTag(a2, 0x20666E57u);
    return 1LL;
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v3);
    sub_1402AFC00((ULONG_PTR)v3);
    return 0LL;
  }
}
