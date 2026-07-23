/*
 * XREFs of KsepMatchInitCpuInfo @ 0x140B6144C
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140B6137C (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepStringAnsiToUnicode @ 0x140844990 (KsepStringAnsiToUnicode.c)
 */

NTSTATUS KsepMatchInitCpuInfo()
{
  __int64 v0; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  char *VendorString; // r8
  NTSTATUS result; // eax

  xmmword_140C70D10 = 0LL;
  qword_140C70D40 = 0LL;
  v0 = -1LL;
  xmmword_140C70D20 = 0LL;
  xmmword_140C70D30 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  VendorString = (char *)CurrentPrcb->VendorString;
  do
    ++v0;
  while ( VendorString[v0] );
  result = KsepStringAnsiToUnicode(word_140D15ED0, 0x20Au, VendorString, v0);
  if ( result >= 0 )
  {
    DWORD1(xmmword_140C70D30) = CurrentPrcb->CpuType;
    LODWORD(xmmword_140C70D30) = CurrentPrcb->CpuModel;
    *(_QWORD *)&xmmword_140C70D10 = word_140D15ED0;
  }
  return result;
}
