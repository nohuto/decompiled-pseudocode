/*
 * XREFs of ??1RenderOutputD3D11@D3D11@Engine@Spectre@@MEAA@XZ @ 0x1800C8FA0
 * Callers:
 *     ??1RenderOutputDwm@@UEAA@XZ @ 0x180010F94 (--1RenderOutputDwm@@UEAA@XZ.c)
 *     ??1RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C8FF8 (--1RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAA@XZ.c)
 *     ??1RenderOutputD3D11Window@D3D11@Engine@Spectre@@UEAA@XZ @ 0x1800C9044 (--1RenderOutputD3D11Window@D3D11@Engine@Spectre@@UEAA@XZ.c)
 *     ??_ERenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAAPEAXI@Z @ 0x1800C9060 (--_ERenderOutputD3D11Xaml@D3D11@Engine@Spectre@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18000E72C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@IT_LARGE_INTEGER@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIT_LARGE_INTEGER@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18003189C (--1-$_Tree@V-$_Tmap_traits@IT_LARGE_INTEGER@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIT_LARGE_IN.c)
 *     ??1?$_Tree@V?$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUDXGI_FRAME_STATISTICS@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x1800C8F64 (--1-$_Tree@V-$_Tmap_traits@IUDXGI_FRAME_STATISTICS@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUDX.c)
 */

void __fastcall Spectre::Engine::D3D11::RenderOutputD3D11::~RenderOutputD3D11(
        Spectre::Engine::D3D11::RenderOutputD3D11 *this)
{
  *(_QWORD *)this = &Spectre::Engine::D3D11::RenderOutputD3D11::`vftable';
  std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>((void **)this + 210);
  std::_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,_LARGE_INTEGER,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,_LARGE_INTEGER>>,0>>((void **)this + 208);
  std::_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,DXGI_FRAME_STATISTICS,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,DXGI_FRAME_STATISTICS>>,0>>((void **)this + 206);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 63);
  Spectre::Engine::RenderOutput::~RenderOutput(this);
}
