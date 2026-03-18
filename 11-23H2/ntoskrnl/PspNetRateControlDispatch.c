/*
 * XREFs of PspNetRateControlDispatch @ 0x1409B25E4
 * Callers:
 *     PspJobDelete @ 0x140207000 (PspJobDelete.c)
 *     PspQueryRateControlHistory @ 0x140706E4C (PspQueryRateControlHistory.c)
 *     PspSetNetRateControl @ 0x1409B2FF4 (PspSetNetRateControl.c)
 * Callees:
 *     ExGetExtensionTable @ 0x1402FA440 (ExGetExtensionTable.c)
 *     ExReleaseExtensionTable @ 0x1402FA470 (ExReleaseExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  __int64 (__fastcall **ExtensionTable)(__int64); // rax
  unsigned int v3; // ebx

  ExtensionTable = (__int64 (__fastcall **)(__int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*ExtensionTable)(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
