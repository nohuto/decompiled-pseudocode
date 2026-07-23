/*
 * XREFs of sub_14037592C @ 0x14037592C
 * Callers:
 *     sub_14025E9D0 @ 0x14025E9D0 (sub_14025E9D0.c)
 *     sub_14037556C @ 0x14037556C (sub_14037556C.c)
 * Callees:
 *     sub_140375974 @ 0x140375974 (sub_140375974.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_140980040 @ 0x140980040 (sub_140980040.c)
 */

__int64 __fastcall sub_14037592C(int a1, void *a2)
{
  bool v2; // zf
  struct _KPROCESS *v3; // rcx

  if ( a1 == 3 )
  {
    sub_1406D9550(a2);
    return 0LL;
  }
  else
  {
    v2 = a1 == 2;
    v3 = (struct _KPROCESS *)*((_QWORD *)KeGetCurrentThread() + 23);
    if ( v2 )
      return sub_140980040(v3, a2);
    else
      return sub_140375974(v3);
  }
}
