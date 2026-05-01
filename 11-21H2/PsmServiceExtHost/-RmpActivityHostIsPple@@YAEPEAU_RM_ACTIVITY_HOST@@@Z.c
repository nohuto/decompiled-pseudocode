/*
 * XREFs of ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028348
 * Callers:
 *     ?ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x18001F950 (-ReleaseResourcesInternal@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180028940 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

bool __fastcall RmpActivityHostIsPple(struct _RM_ACTIVITY_HOST *a1)
{
  char v1; // bl
  int v4[4]; // [rsp+30h] [rbp-B8h] BYREF
  WCHAR String1[72]; // [rsp+40h] [rbp-A8h] BYREF

  v1 = 0;
  if ( *((_DWORD *)a1 + 156) == 2 )
  {
    memset_0(String1, 0, 0x82uLL);
    v4[0] = 130;
    v1 = 0;
    if ( (int)PsmGetApplicationNameFromKey((char *)a1 + 88, String1, v4) >= 0 )
      return CompareStringOrdinal(String1, -1, L"ppleae38af2e007f4358a809ac99a64a67c1", -1, 1) == 2;
  }
  return v1;
}
