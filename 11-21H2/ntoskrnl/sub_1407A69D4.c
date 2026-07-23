/*
 * XREFs of sub_1407A69D4 @ 0x1407A69D4
 * Callers:
 *     sub_1407A8B00 @ 0x1407A8B00 (sub_1407A8B00.c)
 * Callees:
 *     sub_1402F5DDC @ 0x1402F5DDC (sub_1402F5DDC.c)
 *     sub_1402F63D0 @ 0x1402F63D0 (sub_1402F63D0.c)
 */

__int64 __fastcall sub_1407A69D4(__int64 a1, void *a2, __int64 a3, KPROCESSOR_MODE a4, LARGE_INTEGER *a5)
{
  if ( _bittestandreset((signed __int32 *)(a1 + 48), 2u) )
    return sub_1402F63D0(a1, a2, WrLpcReceive, a4, a5, 0);
  else
    return sub_1402F5DDC(a2, WrLpcReceive, a4, (*(_DWORD *)(a1 + 48) & 0x200000) != 0, a5);
}
