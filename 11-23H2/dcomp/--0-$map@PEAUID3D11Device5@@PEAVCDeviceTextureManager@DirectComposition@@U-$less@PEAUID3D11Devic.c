/*
 * XREFs of ??0?$map@PEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@U?$less@PEAUID3D11Device5@@@std@@V?$allocator@U?$pair@QEAUID3D11Device5@@PEAVCDeviceTextureManager@DirectComposition@@@std@@@5@@std@@QEAA@XZ @ 0x18009A620
 * Callers:
 *     ??0CDevice@DirectComposition@@QEAA@PEAUIDeviceOwner@1@W4DeviceVersion@1@@Z @ 0x18001DA88 (--0CDevice@DirectComposition@@QEAA@PEAUIDeviceOwner@1@W4DeviceVersion@1@@Z.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180046CF8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 */

__int64 *__fastcall std::map<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *>::map<ID3D11Device5 *,DirectComposition::CDeviceTextureManager *>(
        __int64 *a1)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x30uLL);
  *(_QWORD *)v2 = v2;
  *(_QWORD *)(v2 + 8) = v2;
  *(_QWORD *)(v2 + 16) = v2;
  *(_WORD *)(v2 + 24) = 257;
  *a1 = v2;
  return a1;
}
