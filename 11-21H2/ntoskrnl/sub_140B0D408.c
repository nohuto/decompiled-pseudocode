/*
 * XREFs of sub_140B0D408 @ 0x140B0D408
 * Callers:
 *     sub_140B0C004 @ 0x140B0C004 (sub_140B0C004.c)
 *     sub_140B0C87C @ 0x140B0C87C (sub_140B0C87C.c)
 *     sub_140B0CDAC @ 0x140B0CDAC (sub_140B0CDAC.c)
 *     sub_140B0D360 @ 0x140B0D360 (sub_140B0D360.c)
 * Callees:
 *     sub_140B0D440 @ 0x140B0D440 (sub_140B0D440.c)
 *     sub_140B0D470 @ 0x140B0D470 (sub_140B0D470.c)
 */

__int64 __fastcall sub_140B0D408(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  v4 = sub_140B0D470(a1, a2);
  if ( v4 && (v5 = sub_140B0D440(v4, a3)) != 0 )
    return *(_QWORD *)(v5 + 8);
  else
    return 0LL;
}
