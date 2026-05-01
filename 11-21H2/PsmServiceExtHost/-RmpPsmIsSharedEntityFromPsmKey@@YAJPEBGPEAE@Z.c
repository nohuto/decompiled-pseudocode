/*
 * XREFs of ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x18002828C
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180018FC0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029CF0 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

__int64 __fastcall RmpPsmIsSharedEntityFromPsmKey(const unsigned __int16 *a1, unsigned __int8 *a2)
{
  int ApplicationNameFromKey; // ebx
  int v6[4]; // [rsp+30h] [rbp-B8h] BYREF
  WCHAR String1[72]; // [rsp+40h] [rbp-A8h] BYREF

  memset_0(String1, 0, 0x82uLL);
  v6[0] = 130;
  *a2 = 0;
  ApplicationNameFromKey = PsmGetApplicationNameFromKey(a1, String1, v6);
  if ( ApplicationNameFromKey >= 0
    && CompareStringOrdinal(String1, -1, L"ppleae38af2e007f4358a809ac99a64a67c1", -1, 1) == 2 )
  {
    *a2 = 1;
  }
  return (unsigned int)ApplicationNameFromKey;
}
