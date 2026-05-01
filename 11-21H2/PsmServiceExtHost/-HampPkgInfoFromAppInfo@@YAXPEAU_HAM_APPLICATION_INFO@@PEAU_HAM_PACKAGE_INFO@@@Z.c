/*
 * XREFs of ?HampPkgInfoFromAppInfo@@YAXPEAU_HAM_APPLICATION_INFO@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800073E0
 * Callers:
 *     ?HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z @ 0x180007348 (-HampAppFind@@YAPEAU_HAM_APPLICATION@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x180009970 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CempPackageFamilyNameFromPsmKey @ 0x180025F60 (CempPackageFamilyNameFromPsmKey.c)
 *     __security_check_cookie @ 0x18004E310 (__security_check_cookie.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 */

void __fastcall HampPkgInfoFromAppInfo(struct _HAM_APPLICATION_INFO *a1, struct _HAM_PACKAGE_INFO *a2)
{
  unsigned __int16 v4[72]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v4, 0, 0x82uLL);
  CempPackageFamilyNameFromPsmKey(a1, v4);
  HampPkgInfoInitialize(v4, (char *)a1 + 464, *((_DWORD *)a1 + 133), a2);
}
