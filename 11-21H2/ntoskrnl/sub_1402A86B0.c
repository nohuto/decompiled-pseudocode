/*
 * XREFs of sub_1402A86B0 @ 0x1402A86B0
 * Callers:
 *     sub_140246140 @ 0x140246140 (sub_140246140.c)
 *     sub_14030F330 @ 0x14030F330 (sub_14030F330.c)
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 *     sub_1407A0088 @ 0x1407A0088 (sub_1407A0088.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_14030F870 @ 0x14030F870 (sub_14030F870.c)
 *     sub_140344640 @ 0x140344640 (sub_140344640.c)
 *     sub_140345AA0 @ 0x140345AA0 (sub_140345AA0.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x1403494F0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140461A66 @ 0x140461A66 (sub_140461A66.c)
 */

__int64 __fastcall sub_1402A86B0(ULONG_PTR BugCheckParameter1)
{
  _DWORD *v1; // rdi
  unsigned __int8 v4; // si
  REGHANDLE v5; // rbx
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KPRCB *v8; // r14
  __int64 v9; // rcx
  struct _KPRCB *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  struct _KPRCB *v19; // rcx
  __int64 v20; // rdx
  bool v21; // zf
  __int64 v22; // r9
  unsigned __int8 v23; // al
  struct _KPRCB *v24; // r9
  __int64 v25; // r8
  int v26; // eax
  int v27; // [rsp+40h] [rbp-68h] BYREF
  int v28; // [rsp+44h] [rbp-64h] BYREF
  int v29; // [rsp+48h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-58h] BYREF
  int *v31; // [rsp+60h] [rbp-48h]
  __int64 v32; // [rsp+68h] [rbp-40h]

  v1 = *(_DWORD **)(BugCheckParameter1 + 1552);
  if ( !v1 )
    return 3221225473LL;
  if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x200) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v12 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v12 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    _disable();
    sub_140345AA0(CurrentPrcb, BugCheckParameter1, 0LL);
    _enable();
    v8 = KeGetCurrentPrcb();
    v27 = 0;
    v9 = *((_QWORD *)v8 + 4375);
    if ( v9 )
    {
      if ( *((_BYTE *)v8 + 32) <= 1u )
      {
        v15 = *(_DWORD *)(v9 + 24);
        *(_DWORD *)(v9 + 24) = v15 + 1;
        if ( v15 == -1 )
LABEL_26:
          sub_140418E4C(v8);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
    {
      v13 = *((_QWORD *)v8 + 4375);
      if ( v13 )
      {
        if ( *((_BYTE *)v8 + 32) <= 1u )
        {
          v16 = *(_DWORD *)(v13 + 24) - 1;
          *(_DWORD *)(v13 + 24) = v16;
          if ( !v16 )
            sub_140418E4C(v8);
        }
      }
      do
        sub_1402F32E0(&v27);
      while ( *((_QWORD *)CurrentPrcb + 6) );
      v14 = *((_QWORD *)v8 + 4375);
      if ( v14 )
      {
        if ( *((_BYTE *)v8 + 32) <= 1u )
        {
          v17 = *(_DWORD *)(v14 + 24);
          *(_DWORD *)(v14 + 24) = v17 + 1;
          if ( v17 == -1 )
            goto LABEL_26;
        }
      }
    }
    _interlockedbittestandreset((volatile signed __int32 *)BugCheckParameter1, 0x12u);
    *(_QWORD *)(BugCheckParameter1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 9u);
    _InterlockedAnd64((volatile signed __int64 *)CurrentPrcb + 6, 0LL);
    v10 = KeGetCurrentPrcb();
    v11 = *((_QWORD *)v10 + 4375);
    if ( v11 )
    {
      if ( *((_BYTE *)v10 + 32) <= 1u )
      {
        v18 = *(_DWORD *)(v11 + 24) - 1;
        *(_DWORD *)(v11 + 24) = v18;
        if ( !v18 )
          sub_140418E4C(v10);
      }
    }
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v19 = KeGetCurrentPrcb();
        v20 = *((_QWORD *)v19 + 4375);
        v21 = (*(_DWORD *)(v20 + 20) & 0xFFFF0001) == 0;
        *(_DWORD *)(v20 + 20) &= 0xFFFF0001;
        if ( v21 )
          sub_140418E4C(v19);
      }
    }
    __writecr8(0LL);
  }
  v4 = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v4 <= 0xFu )
  {
    v22 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v22 + 20) |= (-1 << (v4 + 1)) & 4;
  }
  if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    sub_140461A66(&dword_140C1BEA4, v4);
  else
    sub_14030F870(&dword_140C1BEA4, v4);
  *(_QWORD *)(BugCheckParameter1 + 1552) = 0LL;
  sub_140344640(BugCheckParameter1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C1BEA4);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v23 = KeGetCurrentIrql();
      if ( v23 <= 0xFu && v4 <= 0xFu && v23 >= 2u )
      {
        v24 = KeGetCurrentPrcb();
        v25 = *((_QWORD *)v24 + 4375);
        v26 = ~(unsigned __int16)(-1LL << (v4 + 1));
        v21 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v21 )
          sub_140418E4C(v24);
      }
    }
  }
  __writecr8(v4);
  v5 = qword_140C15FF8;
  if ( EtwEventEnabled(qword_140C15FF8, &stru_140010E38) )
  {
    v28 = v1[308];
    *(_QWORD *)&UserData.Size = 4LL;
    UserData.Ptr = (ULONGLONG)&v28;
    v29 = 0;
    v31 = &v29;
    v32 = 4LL;
    EtwWriteEx(v5, &stru_140010E38, 0LL, 1u, 0LL, 0LL, 2u, &UserData);
  }
  ObDereferenceObjectDeferDeleteWithTag(v1, 0x746E6F43u);
  return 0LL;
}
