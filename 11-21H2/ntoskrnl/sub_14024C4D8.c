/*
 * XREFs of sub_14024C4D8 @ 0x14024C4D8
 * Callers:
 *     sub_1402E67E8 @ 0x1402E67E8 (sub_1402E67E8.c)
 * Callees:
 *     sub_14024C5E0 @ 0x14024C5E0 (sub_14024C5E0.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140336AD8 @ 0x140336AD8 (sub_140336AD8.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

ULONG_PTR __fastcall sub_14024C4D8(ULONG_PTR a1, unsigned __int64 a2, char a3)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // [rsp+48h] [rbp+10h] BYREF

  v5 = *((_QWORD *)KeGetCurrentThread() + 23);
  if ( a2 )
  {
    v14 = sub_140317A10(((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v6 = 48 * (((unsigned __int64)sub_140317A10(&v14) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
    v7 = (unsigned __int8)sub_1402F2700(v6);
    sub_140336AD8(v6);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          a2 = -1LL << ((unsigned __int8)v7 + 1);
          v11 = *((_QWORD *)CurrentPrcb + 4375);
          v12 = ~(unsigned __int16)a2;
          v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
          *(_DWORD *)(v11 + 20) &= v12;
          if ( v13 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v7);
    if ( !a1 )
      return 0LL;
  }
  LOBYTE(a2) = a3;
  sub_1402B0CE0(v5 + 1664, a2);
  sub_14024C5E0(a1);
  sub_1402CF4F0(v5 + 1664);
  return a1;
}
