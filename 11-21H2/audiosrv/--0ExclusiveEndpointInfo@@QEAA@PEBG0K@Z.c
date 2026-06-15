/*
 * XREFs of ??0ExclusiveEndpointInfo@@QEAA@PEBG0K@Z @ 0x1801098A0
 * Callers:
 *     ?AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInfo@@KKHPEAUResourceHandleInfo@@@Z @ 0x18010A530 (-AssignResourceGroup@CConstraintModelResourceManager@@AEAAJPEAUIMMDevice@@PEBG1KPEAU_ResourceInf.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x18010BDC0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_18010BDC0.c)
 *     ?ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x18010C830 (-ProcessRevokedResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 *     ?ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z @ 0x18010D4D0 (-ReleaseResource@CConstraintModelResourceManager@@UEAAJPEA_K@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004CB1C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 */

ExclusiveEndpointInfo *__fastcall ExclusiveEndpointInfo::ExclusiveEndpointInfo(
        ExclusiveEndpointInfo *this,
        char *a2,
        char *a3,
        int a4)
{
  *((_DWORD *)this + 232) = 0;
  *((_DWORD *)this + 233) = -1;
  *((_DWORD *)this + 231) = a4;
  if ( a2 )
    StringCchCopyW((char *)this, 201LL, a2);
  else
    memset_0(this, 0, 0x192uLL);
  StringCchCopyW((char *)this + 402, 261LL, a3);
  return this;
}
