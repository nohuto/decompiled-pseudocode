/*
 * XREFs of ?Present@RenderOutputD3D11Gdi@D3D11@Engine@Spectre@@UEAAXAEAV?$unique_lock@VMutex@Engine@Spectre@@@std@@00@Z @ 0x180011560
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x180011CA0 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 *     ?GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV?$shared_ptr@VCommandList@Engine@Spectre@@@std@@XZ @ 0x180026500 (-GetCommandList@RenderDevice@Engine@Spectre@@QEBAAEBV-$shared_ptr@VCommandList@Engine@Spectre@@@.c)
 *     ?Flush@CommandList@Engine@Spectre@@QEAAX_N@Z @ 0x18003935C (-Flush@CommandList@Engine@Spectre@@QEAAX_N@Z.c)
 *     ?GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@std@@XZ @ 0x1800C9F3C (-GetRendererD3D11@RenderOutputD3D11@D3D11@Engine@Spectre@@IEBA-AV-$shared_ptr@VRenderDeviceD3D11.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Spectre::Engine::D3D11::RenderOutputD3D11Gdi::Present(__int64 a1)
{
  Spectre::Engine::CommandList **CommandList; // rax
  bool v3; // dl
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v6; // [rsp+28h] [rbp-20h]
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  std::chrono::steady_clock::now(v7);
  Spectre::Engine::D3D11::RenderOutputD3D11::GetRendererD3D11(a1, &v5);
  if ( v5 )
  {
    CommandList = (Spectre::Engine::CommandList **)Spectre::Engine::RenderDevice::GetCommandList();
    Spectre::Engine::CommandList::Flush(*CommandList, v3);
  }
  if ( v6 )
    std::_Ref_count_base::_Decref(v6);
  std::chrono::steady_clock::now(&v5);
  return Spectre::Engine::RenderOutput::SetFramePresentStatistics(a1, v7[0], v5, v5 - v7[0]);
}
