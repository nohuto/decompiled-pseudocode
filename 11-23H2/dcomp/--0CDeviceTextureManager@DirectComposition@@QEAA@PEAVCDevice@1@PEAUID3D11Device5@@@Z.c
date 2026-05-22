/*
 * XREFs of ??0CDeviceTextureManager@DirectComposition@@QEAA@PEAVCDevice@1@PEAUID3D11Device5@@@Z @ 0x180098420
 * Callers:
 *     ?Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@Z @ 0x180098700 (-Create@CDeviceTextureManager@DirectComposition@@SAJPEAVCDevice@2@PEAUID3D11Device5@@PEAPEAV12@@.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$com_ptr_t@UID3D11Device5@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUID3D11Device5@@@Z @ 0x1800E769C (--0-$com_ptr_t@UID3D11Device5@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUID3D11Device5@@@Z.c)
 */

DirectComposition::CDeviceTextureManager *__fastcall DirectComposition::CDeviceTextureManager::CDeviceTextureManager(
        DirectComposition::CDeviceTextureManager *this,
        struct DirectComposition::CDevice *a2,
        struct ID3D11Device5 *a3)
{
  __int64 v5; // rax
  DirectComposition::CDeviceTextureManager *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DirectComposition::CDeviceTextureManager::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct DirectComposition::CDevice *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  wil::com_ptr_t<ID3D11Device5,wil::err_returncode_policy>::com_ptr_t<ID3D11Device5,wil::err_returncode_policy>(
    (char *)this + 40,
    a3);
  *((_QWORD *)this + 6) = 0LL;
  *((_BYTE *)this + 56) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *(_QWORD *)v5 = v5;
  *(_QWORD *)(v5 + 8) = v5;
  *(_QWORD *)(v5 + 16) = v5;
  *(_WORD *)(v5 + 24) = 257;
  *((_QWORD *)this + 8) = v5;
  result = this;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  return result;
}
