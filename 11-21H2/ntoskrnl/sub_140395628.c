/*
 * XREFs of sub_140395628 @ 0x140395628
 * Callers:
 *     sub_1403A39F4 @ 0x1403A39F4 (sub_1403A39F4.c)
 *     sub_1403A5020 @ 0x1403A5020 (sub_1403A5020.c)
 *     sub_1403A51D0 @ 0x1403A51D0 (sub_1403A51D0.c)
 *     sub_1405DF54C @ 0x1405DF54C (sub_1405DF54C.c)
 *     ?MSPLogRegister@@YAHPEBG@Z @ 0x140A6B7AC (-MSPLogRegister@@YAHPEBG@Z.c)
 * Callees:
 *     sub_140248A04 @ 0x140248A04 (sub_140248A04.c)
 */

__int64 __fastcall sub_140395628(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  __int64 v3; // r8

  if ( a1 && (v2 = *(_QWORD *)(a1 + 8), (v3 = *(_QWORD *)(v2 + 64)) != 0) && *(_WORD *)(v2 + 56) )
    return sub_140248A04(a2, 0x80uLL, v3, *(unsigned __int16 *)(v2 + 56));
  else
    return 3221225473LL;
}
