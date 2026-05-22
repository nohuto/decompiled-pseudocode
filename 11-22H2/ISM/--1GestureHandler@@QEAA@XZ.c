/*
 * XREFs of ??1GestureHandler@@QEAA@XZ @ 0x180160F70
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VGestureHandler@@@std@@EEAAXXZ @ 0x180162350 (-_Destroy@-$_Ref_count_obj2@VGestureHandler@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001A954 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B9CDC (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@GestureHandler@@QEAU12@AEAV?$allocator@UGestureClient@GestureHandler@@@0@@Z @ 0x180160A98 (--$_Destroy_range@V-$allocator@UGestureClient@GestureHandler@@@std@@@std@@YAXPEAUGestureClient@G.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall GestureHandler::~GestureHandler(GestureHandler *this)
{
  void *v2; // rcx
  __int64 v3; // rcx
  GestureHandler::GestureClient *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx

  Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease((__int64 *)this + 31);
  v2 = (void *)*((_QWORD *)this + 25);
  if ( v2 )
  {
    std::_Deallocate<16,0>(v2, (*((_QWORD *)this + 27) - (_QWORD)v2) & 0xFFFFFFFFFFFFFFF0uLL);
    *((_QWORD *)this + 25) = 0LL;
    *((_QWORD *)this + 26) = 0LL;
    *((_QWORD *)this + 27) = 0LL;
  }
  v3 = *((_QWORD *)this + 18);
  if ( v3 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  v4 = (GestureHandler::GestureClient *)*((_QWORD *)this + 14);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<GestureHandler::GestureClient>>(
      v4,
      *((GestureHandler::GestureClient **)this + 15));
    std::_Deallocate<16,0>(*((void **)this + 14), 8 * ((__int64)(*((_QWORD *)this + 16) - *((_QWORD *)this + 14)) >> 3));
    *((_QWORD *)this + 14) = 0LL;
    *((_QWORD *)this + 15) = 0LL;
    *((_QWORD *)this + 16) = 0LL;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 12);
  v6 = *((_QWORD *)this + 11);
  if ( v6 )
  {
    LOBYTE(v5) = v6 != (_QWORD)this + 32;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 32LL))(v6, v5);
    *((_QWORD *)this + 11) = 0LL;
  }
  std::enable_shared_from_this<GestureHandler>::~enable_shared_from_this<GestureHandler>((__int64)this);
}
