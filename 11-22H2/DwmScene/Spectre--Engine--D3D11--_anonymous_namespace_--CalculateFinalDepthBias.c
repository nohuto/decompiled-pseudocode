/*
 * XREFs of Spectre::Engine::D3D11::_anonymous_namespace_::CalculateFinalDepthBias @ 0x1800D4CAC
 * Callers:
 *     ?GetRasterizerDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_RASTERIZER_DESC@@@Z @ 0x1800D53E4 (-GetRasterizerDesc@D3D11@Engine@Spectre@@YAXAEBURenderStateDesc@23@AEAUD3D11_RASTERIZER_DESC@@@Z.c)
 * Callees:
 *     powf @ 0x18000C05C (powf.c)
 *     _Init_thread_footer @ 0x18000C538 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18000C5A0 (_Init_thread_header.c)
 */

__int64 __fastcall Spectre::Engine::D3D11::_anonymous_namespace_::CalculateFinalDepthBias(float a1, char a2)
{
  if ( !a2 )
    return (unsigned int)(int)a1;
  if ( dword_1801D9688 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1801D9688);
    if ( dword_1801D9688 == -1 )
    {
      dword_1801D968C = powf(2.0, 23.0);
      Init_thread_footer(&dword_1801D9688);
    }
  }
  return (unsigned int)(int)(float)(*(float *)&dword_1801D968C * a1);
}
