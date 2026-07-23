/*
 * XREFs of FsRtlRegisterUncProviderEx2 @ 0x140856780
 * Callers:
 *     <none>
 * Callees:
 *     sub_1408567A8 @ 0x1408567A8 (sub_1408567A8.c)
 */

__int64 __fastcall FsRtlRegisterUncProviderEx2(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( *(_WORD *)(a3 + 2) >= 0x200u )
    return sub_1408567A8();
  *a4 = -1LL;
  return 3221225485LL;
}
