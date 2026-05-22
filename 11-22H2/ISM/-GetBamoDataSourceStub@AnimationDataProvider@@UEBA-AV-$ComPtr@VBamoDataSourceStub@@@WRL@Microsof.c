/*
 * XREFs of ?GetBamoDataSourceStub@AnimationDataProvider@@UEBA?AV?$ComPtr@VBamoDataSourceStub@@@WRL@Microsoft@@V?$ComPtr@VDataSourcePrincipal@@@34@@Z @ 0x18011E5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ @ 0x18001ABBC (-VerifyLockHeldIfOffThread@BaseBamoConnectionImpl@BamoImpl@Microsoft@@QEBAXXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InternalRelease@?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ @ 0x1800B9CDC (-InternalRelease@-$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_N@Z @ 0x18011E818 (-GetStub@BamoPrincipalImpl@BamoImpl@Microsoft@@QEAAPEAVBamoStubImpl@23@PEAVBaseBamoPeer@Bamo@3@_.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall AnimationDataProvider::GetBamoDataSourceStub(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v5; // rdi
  struct Microsoft::Bamo::BaseBamoPeer *v6; // rbx
  void (__fastcall ***v7)(_QWORD); // rsi
  bool v8; // r8
  struct Microsoft::BamoImpl::BamoStubImpl *Stub; // rax
  const char *v10; // r9
  void (__fastcall ***v11)(_QWORD); // rax
  void (__fastcall ***v12)(_QWORD); // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0LL;
  v5 = *a3;
  v6 = *(struct Microsoft::Bamo::BaseBamoPeer **)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 32LL) + 16LL);
  Microsoft::BamoImpl::BaseBamoConnectionImpl::VerifyLockHeldIfOffThread(*(Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*a3 + 32) + 32LL));
  v7 = 0LL;
  Stub = Microsoft::BamoImpl::BamoPrincipalImpl::GetStub((Microsoft::BamoImpl::BamoPrincipalImpl *)(v5 + 16), v6, v8);
  if ( Stub )
    v7 = (void (__fastcall ***)(_QWORD))((char *)Stub - 16);
  v11 = (void (__fastcall ***)(_QWORD))*a2;
  if ( (void (__fastcall ***)(_QWORD))*a2 != v7 )
  {
    if ( v7 )
      (**v7)(v7);
    v12 = (void (__fastcall ***)(_QWORD))*a2;
    *a2 = v7;
    v11 = v7;
    if ( v12 )
    {
      (*v12)[1](v12);
      v11 = (void (__fastcall ***)(_QWORD))*a2;
    }
  }
  if ( !v11 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xDB,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\animationdataprovider\\animationdataprovider.cpp",
      v10);
  Microsoft::WRL::ComPtr<DataSourcePrincipal>::InternalRelease(a3);
  return a2;
}
