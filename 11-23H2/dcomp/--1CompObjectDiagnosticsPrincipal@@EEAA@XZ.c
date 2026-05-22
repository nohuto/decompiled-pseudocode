/*
 * XREFs of ??1CompObjectDiagnosticsPrincipal@@EEAA@XZ @ 0x18019C7F0
 * Callers:
 *     ??_ECompObjectDiagnosticsPrincipal@@EEAAPEAXI@Z @ 0x18019CC90 (--_ECompObjectDiagnosticsPrincipal@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@UI@Windows@@W4HolographicCompositorStatus@2345@@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000FA18 (-InternalRelease@-$ComPtr@U-$ITypedEventHandler@PEAVHolographicCompositor@Internal@Composition@U.c)
 *     ?InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ @ 0x18007BB44 (-InternalRelease@NestableRuntimeClass@WRL2@Microsoft@@QEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180089E78 (-InternalRelease@-$ComPtr@VCompositor@Composition@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@std@@@std@@YAXPEAV?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@QEAV123@AEAV?$allocator@V?$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL2@Microsoft@@@0@@Z @ 0x180122454 (--$_Destroy_range@V-$allocator@V-$RefPtr@VDebugPropertyRegistration@Composition@UI@Windows@@@WRL.c)
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18016DDE0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@1@@Z @ 0x18019C360 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@.c)
 *     ?DropCallbacks@CompObjectDiagnosticsPrincipal@@AEAAXXZ @ 0x18019D674 (-DropCallbacks@CompObjectDiagnosticsPrincipal@@AEAAXXZ.c)
 */

void __fastcall CompObjectDiagnosticsPrincipal::~CompObjectDiagnosticsPrincipal(CompObjectDiagnosticsPrincipal *this)
{
  bool v1; // zf
  Microsoft::WRL2::NestableRuntimeClass **v3; // rcx
  Microsoft::WRL2::NestableRuntimeClass *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  const char *v7; // r9
  Microsoft::BamoImpl::BamoImplObject *v8; // rcx

  v1 = *((_QWORD *)this + 11) == 0LL;
  *(_QWORD *)this = &CompObjectDiagnosticsPrincipal::`vftable'{for `Microsoft::Bamo::BamoPrincipal'};
  *((_QWORD *)this + 1) = &CompObjectDiagnosticsPrincipal::`vftable'{for `ICompObjectDiagnosticsPrincipal'};
  if ( !v1 )
    CompObjectDiagnosticsPrincipal::DropCallbacks(this);
  v3 = (Microsoft::WRL2::NestableRuntimeClass **)*((_QWORD *)this + 12);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL2::RefPtr<Windows::UI::Composition::DebugPropertyRegistration>>>(
      v3,
      *((Microsoft::WRL2::NestableRuntimeClass ***)this + 13));
    std::_Deallocate<16,0>(
      *((void **)this + 12),
      (*((_QWORD *)this + 14) - *((_QWORD *)this + 12)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 12) = 0LL;
    *((_QWORD *)this + 13) = 0LL;
    *((_QWORD *)this + 14) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::ITypedEventHandler<Windows::UI::Composition::Internal::HolographicCompositor *,enum Windows::UI::Composition::Internal::HolographicCompositorStatus>>::InternalRelease((__int64 *)this + 11);
  v4 = (Microsoft::WRL2::NestableRuntimeClass *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    *((_QWORD *)this + 10) = 0LL;
    Microsoft::WRL2::NestableRuntimeClass::InternalRelease(v4);
  }
  Microsoft::WRL::ComPtr<Windows::UI::Composition::Compositor>::InternalRelease((Microsoft::WRL2::NestableRuntimeClass **)this + 9);
  std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<unsigned int const,CompObjectDiagnosticsPrincipal::PropInfo>,void *>>>(
    (__int64)this + 56,
    (__int64)this + 56,
    *(__int64 **)(*((_QWORD *)this + 7) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 7), 0x60uLL);
  v8 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v8 )
    Microsoft::BamoImpl::BamoImplObject::Release(v8, v5, v6, v7);
}
