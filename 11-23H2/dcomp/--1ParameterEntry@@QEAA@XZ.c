/*
 * XREFs of ??1ParameterEntry@@QEAA@XZ @ 0x18003FEF4
 * Callers:
 *     ?SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector3@Numerics@Foundation@4@@Z @ 0x180029908 (-SetVector3Parameter@CompositionAnimation@Composition@UI@Windows@@QEAAJPEAUHSTRING__@@AEBUVector.c)
 *     ?RemoveElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z @ 0x18003FD0C (-RemoveElement@-$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAXPEAVParameterEntry@@@Z.c)
 *     ?GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVParameterEntry@@PEA_N@Z @ 0x18003FDB4 (-GetElementForKey@CompositionAnimation@Composition@UI@Windows@@AEAAXPEAUHSTRING__@@_NPEAPEAVPara.c)
 *     ?FindElement@?$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAPEAVParameterEntry@@PEAUHSTRING__@@@Z @ 0x18014F264 (-FindElement@-$CGenericTableMap@PEAUHSTRING__@@VParameterEntry@@@@QEAAPEAVParameterEntry@@PEAUHS.c)
 * Callees:
 *     ?ClearMatrixValue@ParameterEntry@@QEAAXXZ @ 0x180029BFC (-ClearMatrixValue@ParameterEntry@@QEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall ParameterEntry::~ParameterEntry(Microsoft::WRL2::NestableRuntimeClass **this)
{
  Microsoft::WRL2::NestableRuntimeClass *v2; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v3; // rcx

  ParameterEntry::ClearMatrixValue((ParameterEntry *)this);
  v2 = this[3];
  if ( v2 )
  {
    this[3] = 0LL;
    (*(void (__fastcall **)(Microsoft::WRL2::NestableRuntimeClass *))(*(_QWORD *)v2 + 16LL))(v2);
  }
  v3 = this[2];
  if ( v3 )
  {
    this[2] = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v3);
  }
}
