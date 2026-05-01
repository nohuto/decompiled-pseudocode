/*
 * XREFs of ?HampUserCompareByIdentity@@YAJPEAX0@Z @ 0x18000F420
 * Callers:
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180028520 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z @ 0x180031ED0 (-HampUserFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAT_RM_SID@@KPEAPEAU_HAM_USER@@@Z.c)
 * Callees:
 *     memcmp_0 @ 0x1800536D6 (memcmp_0.c)
 */

int __fastcall HampUserCompareByIdentity(void *Buf1, char *a2)
{
  ULONG v4; // ebx
  ULONG v5; // eax

  v4 = RtlLengthSid(Buf1);
  v5 = RtlLengthSid(a2 + 88);
  if ( v4 < v5 )
    return -1;
  if ( v4 > v5 )
    return 1;
  return memcmp_0(Buf1, a2 + 88, v4);
}
