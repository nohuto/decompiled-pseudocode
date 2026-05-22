/*
 * XREFs of ??1CDeviceTextureManager@DirectComposition@@UEAA@XZ @ 0x1800985B4
 * Callers:
 *     ??_ECDeviceTextureManager@DirectComposition@@UEAAPEAXI@Z @ 0x1800986B0 (--_ECDeviceTextureManager@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180080EBC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Texture2D@@@std@@V?$allocator@U?$pair@QEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@DirectComposition@@@std@@@6@$0A@@std@@@std@@QEAA@XZ @ 0x1800984F4 (--1-$_Tree@V-$_Tmap_traits@PEAUID3D11Texture2D@@UPresentationBufferInfo@CDeviceTextureManager@Di.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@$0A@@std@@@std@@QEAA_KAEBQEAUID3D11Device5@@@Z @ 0x1800A0C48 (-erase@-$_Tree@V-$_Tmap_traits@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U.c)
 */

void __fastcall DirectComposition::CDeviceTextureManager::~CDeviceTextureManager(
        DirectComposition::CDeviceTextureManager *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  void *v4; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &DirectComposition::CDeviceTextureManager::`vftable';
  v2 = *((_QWORD *)this + 5);
  v3 = *((_QWORD *)this + 2) + 720LL;
  v5 = v2;
  std::_Tree<std::_Tmap_traits<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *,std::less<ID3D11Device5 *>,std::allocator<std::pair<ID3D11Device5 * const,DirectComposition::CDeviceTextureManager *>>,0>>::erase(
    v3,
    &v5);
  v4 = (void *)*((_QWORD *)this + 10);
  if ( v4 )
  {
    std::_Deallocate<16,0>(v4, (*((_QWORD *)this + 12) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 11) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
  }
  std::_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>::~_Tree<std::_Tmap_traits<ID3D11Texture2D *,DirectComposition::CDeviceTextureManager::PresentationBufferInfo,std::less<ID3D11Texture2D *>,std::allocator<std::pair<ID3D11Texture2D * const,DirectComposition::CDeviceTextureManager::PresentationBufferInfo>>,0>>((void **)this + 8);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 6);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 4);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 3);
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)this + 2);
}
