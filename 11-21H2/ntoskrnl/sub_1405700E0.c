/*
 * XREFs of sub_1405700E0 @ 0x1405700E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG_PTR __fastcall sub_1405700E0(ULONG_PTR Argument)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned int v2; // eax

  CurrentPrcb = KeGetCurrentPrcb();
  v2 = *((_DWORD *)CurrentPrcb + 9);
  if ( v2 < *(_DWORD *)(Argument + 8) && !*((_QWORD *)CurrentPrcb + 216) )
    *((_QWORD *)CurrentPrcb + 216) = (*(_QWORD *)(*(_QWORD *)Argument + 8LL * v2) + 63LL) & 0xFFFFFFFFFFFFFFC0uLL;
  return 0LL;
}
