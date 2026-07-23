/*
 * XREFs of sub_140560AAC @ 0x140560AAC
 * Callers:
 *     sub_1409466AC @ 0x1409466AC (sub_1409466AC.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140459E52 @ 0x140459E52 (sub_140459E52.c)
 *     sub_140459F42 @ 0x140459F42 (sub_140459F42.c)
 */

__int64 __fastcall sub_140560AAC(__int64 a1, _BYTE *a2)
{
  __int64 v4; // rsi
  __int64 *v5; // rcx
  unsigned __int8 CurrentIrql; // al
  unsigned __int8 v7; // bl
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v9; // r9
  int v10; // eax
  bool v11; // zf
  unsigned __int8 v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = 0;
  *a2 = 1;
  sub_140459E52(&v13);
  v4 = sub_140459F42(*(_DWORD *)(a1 + 20));
  if ( !v4 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 192));
    v5 = (__int64 *)qword_140C468F8;
    if ( *(__int64 **)qword_140C468F8 != &qword_140C468F0 )
      __fastfail(3u);
    *(_QWORD *)a1 = &qword_140C468F0;
    *(_QWORD *)(a1 + 8) = v5;
    *v5 = a1;
    qword_140C468F8 = a1;
  }
  KeReleaseSpinLockFromDpcLevel(&qword_140C468E8);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
  {
    v7 = v13;
    if ( v13 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v9 = *((_QWORD *)CurrentPrcb + 4375);
      v7 = v13;
      v10 = ~(unsigned __int16)(-1LL << (v13 + 1));
      v11 = (v10 & *(_DWORD *)(v9 + 20)) == 0;
      *(_DWORD *)(v9 + 20) &= v10;
      if ( v11 )
        sub_140418E4C((__int64)CurrentPrcb);
    }
  }
  else
  {
    v7 = v13;
  }
  __writecr8(v7);
  if ( v4 )
    *a2 = 0;
  return 0LL;
}
