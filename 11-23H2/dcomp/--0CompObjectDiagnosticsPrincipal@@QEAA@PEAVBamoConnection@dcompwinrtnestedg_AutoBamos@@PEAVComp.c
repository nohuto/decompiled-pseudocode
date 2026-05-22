/*
 * XREFs of ??0CompObjectDiagnosticsPrincipal@@QEAA@PEAVBamoConnection@dcompwinrtnestedg_AutoBamos@@PEAVCompositor@Composition@UI@Windows@@PEAVDebugReference@Private@456@PEAUIDebugAnimationCallback@8456@@Z @ 0x18019C604
 * Callers:
 *     ?DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDebugAnimationCallback@Private@234@PEAUHSTRING__@@PEAPEAUIClosable@Foundation@4@@Z @ 0x18016B67C (-DebugProperty2@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVProxyObject@234@PEAUIDe.c)
 *     ?DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagnosticsPrincipal@@IAEBUObjectPropertyStringTuple@@@Z @ 0x18016BB7C (-DebugReferenceProperty@AnimationLoggingManager@Composition@UI@Windows@@QEAAJPEAVCompObjectDiagn.c)
 * Callees:
 *     ?InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18001EE7C (-InternalAddRef@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z @ 0x18019C5A4 (--0BamoPrincipalImpl@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnection@Bamo@2@@Z.c)
 */

CompObjectDiagnosticsPrincipal *__fastcall CompObjectDiagnosticsPrincipal::CompObjectDiagnosticsPrincipal(
        CompObjectDiagnosticsPrincipal *this,
        struct dcompwinrtnestedg_AutoBamos::BamoConnection *a2,
        struct Windows::UI::Composition::Compositor *a3,
        struct Windows::UI::Composition::Private::DebugReference *a4,
        struct Windows::UI::Composition::Private::IDebugAnimationCallback *a5)
{
  __int64 v8; // rax
  CompObjectDiagnosticsPrincipal *result; // rax

  *(_QWORD *)this = &BamoCompObjectDiagnosticsPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &CompObjectDiagnosticsPrincipal::`vftable'{for `ICompObjectDiagnosticsPrincipal'};
  Microsoft::BamoImpl::BamoPrincipalImpl::BamoPrincipalImpl((CompObjectDiagnosticsPrincipal *)((char *)this + 16), a2);
  *((_QWORD *)this + 2) = &BamoImpl::BamoCompObjectDiagnosticsPrincipalImpl::`vftable';
  *(_QWORD *)this = &CompObjectDiagnosticsPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &CompObjectDiagnosticsPrincipal::`vftable'{for `ICompObjectDiagnosticsPrincipal'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  v8 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x60uLL);
  *(_QWORD *)v8 = v8;
  *(_QWORD *)(v8 + 8) = v8;
  *(_QWORD *)(v8 + 16) = v8;
  *(_WORD *)(v8 + 24) = 257;
  *((_QWORD *)this + 7) = v8;
  *((_QWORD *)this + 9) = a3;
  if ( a3 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a3);
  *((_QWORD *)this + 10) = a4;
  if ( a4 )
    Microsoft::WRL2::NestableRuntimeClass::InternalAddRef(a4);
  *((_QWORD *)this + 11) = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct Windows::UI::Composition::Private::IDebugAnimationCallback *))(*(_QWORD *)a5 + 8LL))(a5);
  result = this;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  return result;
}
