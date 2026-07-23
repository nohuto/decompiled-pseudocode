/*
 * XREFs of sub_140646C90 @ 0x140646C90
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     WheaLogInternalEvent @ 0x1403D2A90 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     MmGetPageBadStatus @ 0x14058F140 (MmGetPageBadStatus.c)
 *     sub_140A0A460 @ 0x140A0A460 (sub_140A0A460.c)
 */

__int64 sub_140646C90()
{
  KIRQL v0; // al
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf
  _SINGLE_LIST_ENTRY *v8; // rsi
  struct _SINGLE_LIST_ENTRY *v9; // rdi
  int PageBadStatus; // eax
  struct _SINGLE_LIST_ENTRY *v12; // [rsp+20h] [rbp-40h] BYREF
  __int128 Src; // [rsp+28h] [rbp-38h] BYREF
  __int128 v14; // [rsp+38h] [rbp-28h]
  struct _SINGLE_LIST_ENTRY *v15; // [rsp+48h] [rbp-18h]

  Src = 0LL;
  v15 = 0LL;
  v14 = 0LL;
  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140C0E988);
  Next = stru_140C0E980.Next;
  stru_140C0E980.Next = 0LL;
  dword_140C0E990 = 0;
  v2 = v0;
  KeReleaseSpinLockFromDpcLevel(&qword_140C0E988);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v5 = *((_QWORD *)CurrentPrcb + 4375);
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & *(_DWORD *)(v5 + 20)) == 0;
        *(_DWORD *)(v5 + 20) &= v6;
        if ( v7 )
          sub_140418E4C((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v2);
  while ( Next )
  {
    v8 = Next;
    Next = Next->Next;
    v9 = v8[1].Next;
    v12 = v9;
    PageBadStatus = MmGetPageBadStatus(&v12);
    if ( PageBadStatus == -1073740023 )
    {
      *(_QWORD *)&Src = 0x1674C6857LL;
      *((_QWORD *)&Src + 1) = 40LL;
      *(_QWORD *)&v14 = 0x800000324C4E524BuLL;
      *((_QWORD *)&v14 + 1) = 0x800000002LL;
      v15 = v9;
      WheaLogInternalEvent(&Src);
      goto LABEL_11;
    }
    if ( PageBadStatus == 259 )
    {
      sub_140A0A460(v8);
    }
    else
    {
LABEL_11:
      sub_140348B40((ULONG_PTR)v8);
      _InterlockedDecrement(&dword_140C0E9A0);
    }
  }
  return 0LL;
}
