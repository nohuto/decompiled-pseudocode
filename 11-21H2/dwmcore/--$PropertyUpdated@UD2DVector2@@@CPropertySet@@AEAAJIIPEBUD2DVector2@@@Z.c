/*
 * XREFs of ??$PropertyUpdated@UD2DVector2@@@CPropertySet@@AEAAJIIPEBUD2DVector2@@@Z @ 0x180019288
 * Callers:
 *     ??$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x180019198 (--$AddProperty@UD2DVector2@@@CPropertySet@@AEAAJIIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2.c)
 *     ??$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVector2@@@Z @ 0x180239528 (--$UpdateProperty@UD2DVector2@@@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DVecto.c)
 * Callees:
 *     ??$LogValueUpdate@UD2DVector2@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVector2@@@Z @ 0x1800193A8 (--$LogValueUpdate@UD2DVector2@@@CPropertySet@@AEAAXIW4DCOMPOSITION_EXPRESSION_TYPE@@IPEBUD2DVect.c)
 *     ?NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180047FBC (-NotifyPropertyValue@CPropertySet@@AEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800485B4 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsValidPropertyId@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_NI@Z @ 0x1801BCAB8 (-IsValidPropertyId@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAA_N.c)
 *     ModuleFailFastForHRESULT @ 0x180260218 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CPropertySet::PropertyUpdated<D2DVector2>(CResource *this, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  _QWORD *v11; // r10
  __int64 (__fastcall ***v12)(_QWORD, __int64, _QWORD); // rcx
  unsigned int v13; // ebp
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int v17; // [rsp+20h] [rbp-28h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  v4 = (unsigned int)a2;
  if ( (unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                          (char *)this + 88,
                          a2) )
  {
    if ( !(unsigned __int8)PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::IsValidPropertyId(
                             v8,
                             (unsigned int)v4) )
      ModuleFailFastForHRESULT(2147942487LL, retaddr);
    v12 = (__int64 (__fastcall ***)(_QWORD, __int64, _QWORD))*((_QWORD *)this + 10);
    v13 = *(_DWORD *)(*v11 + 8 * v4);
    if ( v12 && (v14 = (**v12)(v12, v10, v13), v9 = v14, v14 < 0) )
    {
      v17 = 456;
    }
    else
    {
      CResource::InvalidateAnimationSources(this, v4);
      CPropertySet::LogValueUpdate<D2DVector2>((_DWORD)this, v4, v13, a3, a4);
      v14 = CPropertySet::NotifyPropertyValue(this, (unsigned int)v4, v13);
      v9 = v14;
      if ( v14 >= 0 )
        return 0;
      v17 = 475;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, v17, 0LL);
    return v9;
  }
  v9 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024809, 0x1BCu, 0LL);
  return v9;
}
