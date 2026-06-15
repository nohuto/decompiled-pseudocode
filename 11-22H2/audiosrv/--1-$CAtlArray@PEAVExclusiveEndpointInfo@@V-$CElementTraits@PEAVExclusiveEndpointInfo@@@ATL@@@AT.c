/*
 * XREFs of ??1?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800FE958
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18005C0C4 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$11 @ 0x18007D374 (_CConstraintModel--Initialize_--_1_--dtor$11.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x1801006F0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_1801006F0.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$0 @ 0x180100B49 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$0.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x180126F78 (--1CVolumeControlBase@@MEAA@XZ.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x18015F5D0 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x18015F9C8 (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVExclu.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>::~CAtlArray<ExclusiveEndpointInfo *,ATL::CElementTraits<ExclusiveEndpointInfo *>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    free(v1);
}
