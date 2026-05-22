/*
 * XREFs of ??1PropInfo@CompObjectDiagnosticsPrincipal@@QEAA@XZ @ 0x18019CA68
 * Callers:
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@1@@Z @ 0x18019C360 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@.c)
 *     ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrincipal@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18019C7B4 (--1-$_Tree_temp_node@V-$allocator@U-$_Tree_node@U-$pair@$$CBIUPropInfo@CompObjectDiagnosticsPrin.c)
 *     ?ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z @ 0x18019D6D4 (-ForgetContributor@CompObjectDiagnosticsPrincipal@@AEAAXI@Z.c)
 *     ?ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Composition@UI@Windows@@@Z @ 0x18019D780 (-ForgetProperties@CompObjectDiagnosticsPrincipal@@QEAA_NPEAVDebugPropertyRegistration@Compositio.c)
 * Callees:
 *     ?InternalUnlock@?$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXXZ @ 0x18000BCF4 (-InternalUnlock@-$RefPtr@VCompositionPropertySet@Composition@UI@Windows@@@WRL2@Microsoft@@IEAAXX.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Destroy_range@V?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUContributor@CompObjectDiagnosticsPrincipal@@QEAU12@AEAV?$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@0@@Z @ 0x18019C104 (--$_Destroy_range@V-$allocator@UContributor@CompObjectDiagnosticsPrincipal@@@std@@@std@@YAXPEAUC.c)
 */

void __fastcall CompObjectDiagnosticsPrincipal::PropInfo::~PropInfo(CompObjectDiagnosticsPrincipal::PropInfo *this)
{
  CompObjectDiagnosticsPrincipal::Contributor **v1; // rdi
  CompObjectDiagnosticsPrincipal::Contributor *v3; // rcx

  v1 = (CompObjectDiagnosticsPrincipal::Contributor **)((char *)this + 32);
  v3 = (CompObjectDiagnosticsPrincipal::Contributor *)*((_QWORD *)this + 4);
  if ( v3 )
  {
    std::_Destroy_range<std::allocator<CompObjectDiagnosticsPrincipal::Contributor>>(v3, v1[1]);
    std::_Deallocate<16,0>(*v1, (v1[2] - *v1) & 0xFFFFFFFFFFFFFFE0uLL);
    *v1 = 0LL;
    v1[1] = 0LL;
    v1[2] = 0LL;
  }
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 3);
  Microsoft::WRL2::RefPtr<Windows::UI::Composition::CompositionPropertySet>::InternalUnlock((Microsoft::WRL2::NestableRuntimeClass **)this + 2);
  WindowsDeleteString(*(HSTRING *)this);
  *(_QWORD *)this = 0LL;
}
