/*
 * XREFs of sub_1402302B0 @ 0x1402302B0
 * Callers:
 *     sub_14026F180 @ 0x14026F180 (sub_14026F180.c)
 *     sub_14032F0E0 @ 0x14032F0E0 (sub_14032F0E0.c)
 *     sub_140334C40 @ 0x140334C40 (sub_140334C40.c)
 *     sub_140336B30 @ 0x140336B30 (sub_140336B30.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_1403277D0 @ 0x1403277D0 (sub_1403277D0.c)
 *     sub_140338D00 @ 0x140338D00 (sub_140338D00.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExpInterlockedPushEntrySList @ 0x1404298C0 (ExpInterlockedPushEntrySList.c)
 *     memset @ 0x140435E00 (memset.c)
 */

PSLIST_ENTRY __fastcall sub_1402302B0(PSLIST_ENTRY ListEntry)
{
  int v2; // edi
  __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // r14
  unsigned __int64 Next; // rax
  PSLIST_ENTRY result; // rax
  __int64 v7; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v10; // r8
  int v11; // eax
  bool v12; // zf
  _DWORD v13[4]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v14[112]; // [rsp+30h] [rbp-A8h] BYREF

  memset(v14, 0, 0x68uLL);
  v2 = 0;
  v3 = *(_QWORD *)(qword_140C51F48 + 8 * ((*((_QWORD *)&ListEntry[2].Next + 1) >> 43) & 0x3FFLL));
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v7 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v7 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v13[0] = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&ListEntry[1].Next + 2, 0x3FuLL) )
  {
    do
      sub_1402F32E0(v13);
    while ( *((__int64 *)&ListEntry[1].Next + 1) < 0 );
  }
  if ( (BYTE3(ListEntry[2].Next) & 8) != 0 )
  {
    sub_1403277D0(v3 + 3320, ListEntry, 1LL, v14, v13[0]);
    Next = (unsigned __int64)ListEntry[1].Next;
    if ( qword_140C50780 && (Next & 0x10) == 0 )
      Next &= ~qword_140C50780;
    if ( ((Next >> 12) & 0xFFFFFFFFFFLL) == 0xAAAAAAAAAAAAAAABuLL * ((__int64)&ListEntry[0x22000000000LL] >> 4) )
    {
      sub_140326870((ULONG_PTR)ListEntry);
      v2 = 1;
    }
    BYTE3(ListEntry[2].Next) &= ~8u;
    sub_140338D00(v3 + 3320, v14);
  }
  else
  {
    v2 = 1;
  }
  _InterlockedAnd64((volatile signed __int64 *)&ListEntry[1].Next + 1, 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v8 = KeGetCurrentIrql();
      if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v10 = *((_QWORD *)CurrentPrcb + 4375);
        v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v12 = (v11 & *(_DWORD *)(v10 + 20)) == 0;
        *(_DWORD *)(v10 + 20) &= v11;
        if ( v12 )
          sub_140418E4C(CurrentPrcb);
      }
    }
  }
  result = (PSLIST_ENTRY)CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v2 )
    return ExpInterlockedPushEntrySList(&stru_140C52CF0, ListEntry);
  return result;
}
