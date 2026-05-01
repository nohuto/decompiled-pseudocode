/*
 * XREFs of ?RmpActivityHostIsPple@@YAEPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E4EC
 * Callers:
 *     ?ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceManager@2@KKPEAU_ResourceInfo@2@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x180006D40 (-ResolveUnknownExternalResourcePriorities@ExternalResourceSet@ExecutionModel@@SAXPEAVResourceMan.c)
 *     ?RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002DF98 (-RmpPsmAppFamilyAddActivityHost@@YAJPEAU_RM_PSM_APP_FAMILY@@PEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002E2D0 (-ApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004BFA0 (-HampHostInitialize@@YAXKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@.c)
 * Callees:
 *     ?RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z @ 0x18003D344 (-RmpPsmIsSharedEntityFromPsmKey@@YAJPEBGPEAE@Z.c)
 */

unsigned __int8 __fastcall RmpActivityHostIsPple(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int8 result; // al
  bool v2; // zf
  unsigned __int8 v3; // [rsp+30h] [rbp+8h] BYREF

  result = 0;
  v2 = *((_DWORD *)a1 + 156) == 2;
  v3 = 0;
  if ( v2 )
  {
    RmpPsmIsSharedEntityFromPsmKey((const unsigned __int16 *)a1 + 44, &v3);
    return v3;
  }
  return result;
}
