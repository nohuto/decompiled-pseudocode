/*
 * XREFs of KeFlushEntireTb @ 0x1403C39C0
 * Callers:
 *     sub_140B06C7C @ 0x140B06C7C (sub_140B06C7C.c)
 * Callees:
 *     sub_1402F3FE0 @ 0x1402F3FE0 (sub_1402F3FE0.c)
 *     sub_1402F411C @ 0x1402F411C (sub_1402F411C.c)
 *     sub_14039D960 @ 0x14039D960 (sub_14039D960.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14063F75C @ 0x14063F75C (sub_14063F75C.c)
 */

__int64 KeFlushEntireTb()
{
  __int64 v0; // r8
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // r10
  unsigned __int8 v4; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v6; // r8
  int v7; // eax
  bool v8; // zf
  char v9; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 v10; // [rsp+58h] [rbp+20h] BYREF

  v9 = 0;
  v10 = 0;
  sub_1402F3FE0(1, 3u, 2, &v9, &v10);
  if ( v9 )
  {
    LOBYTE(v0) = 1;
    result = sub_14039D960(0LL, 0LL, v0, 1);
  }
  else
  {
    result = sub_1402F411C(2);
  }
  if ( dword_140D01470 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v3 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v3 + 20) |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
    }
    sub_14063F75C(0LL, 0LL, 3LL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v4 = KeGetCurrentIrql();
        if ( v4 <= 0xFu && CurrentIrql <= 0xFu && v4 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v6 = *((_QWORD *)CurrentPrcb + 4375);
          v7 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v8 = (v7 & *(_DWORD *)(v6 + 20)) == 0;
          *(_DWORD *)(v6 + 20) &= v7;
          if ( v8 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
