/*
 * XREFs of ??1?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@QEAA@XZ @ 0x1800CB90C
 * Callers:
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x180055800 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 *     _CConstraintModel::Initialize_::_1_::dtor$11 @ 0x1800718B0 (_CConstraintModel--Initialize_--_1_--dtor$11.c)
 *     ??1CVolumeControlBase@@MEAA@XZ @ 0x1800CB9CC (--1CVolumeControlBase@@MEAA@XZ.c)
 *     ?InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4AUDIO_DIRECTION@@HK@Z @ 0x18010BDC0 (-InternalEnforceEndpointExclusivity@CConstraintModelResourceManager@@AEAAJPEBG0KKW4_ea_18010BDC0.c)
 *     _CConstraintModelResourceManager::InternalEnforceEndpointExclusivity_::_1_::dtor$0 @ 0x18010C222 (_CConstraintModelResourceManager--InternalEnforceEndpointExclusivity_--_1_--dtor$0.c)
 *     ??1CConstraintModel@@UEAA@XZ @ 0x1801582C0 (--1CConstraintModel@@UEAA@XZ.c)
 *     ?CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV?$CAtlArray@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@V?$CElementTraits@PEAV?$CAtlArray@PEAVExclusiveEndpointInfo@@V?$CElementTraits@PEAVExclusiveEndpointInfo@@@ATL@@@ATL@@@2@@ATL@@@Z @ 0x1801585E4 (-CleanResourceExclusiveEndpoint@CConstraintModel@@AEAAXPEAV-$CAtlArray@PEAV-$CAtlArray@PEAVExclu.c)
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
