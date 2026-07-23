/*
 * XREFs of KeQueryActiveProcessorAffinity2 @ 0x1403CF350
 * Callers:
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_14098AAF0 @ 0x14098AAF0 (sub_14098AAF0.c)
 *     sub_1409E101C @ 0x1409E101C (sub_1409E101C.c)
 * Callees:
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 */

__int64 __fastcall KeQueryActiveProcessorAffinity2(__int64 a1)
{
  sub_140300030(a1, *(_WORD *)(a1 + 2), (unsigned __int16 *)dword_140D06E40);
  return (unsigned int)dword_140D06884;
}
