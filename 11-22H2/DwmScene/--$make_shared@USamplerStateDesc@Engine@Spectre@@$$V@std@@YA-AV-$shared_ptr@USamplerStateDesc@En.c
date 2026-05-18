/*
 * XREFs of ??$make_shared@USamplerStateDesc@Engine@Spectre@@$$V@std@@YA?AV?$shared_ptr@USamplerStateDesc@Engine@Spectre@@@0@XZ @ 0x180054350
 * Callers:
 *     ??0DeviceSampler@Engine@Spectre@@QEAA@XZ @ 0x1800543E4 (--0DeviceSampler@Engine@Spectre@@QEAA@XZ.c)
 *     ??0Sampler@Engine@Spectre@@QEAA@XZ @ 0x180054428 (--0Sampler@Engine@Spectre@@QEAA@XZ.c)
 *     ?Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z @ 0x1800D5E20 (-Create@DepthBufferD3D11@D3D11@Engine@Spectre@@UEAAXIIW4Format@34@I@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001C110 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::make_shared<Spectre::Engine::SamplerStateDesc,>(_QWORD *a1)
{
  char *v2; // rax
  char *v3; // rdx

  v2 = (char *)operator new(0x48uLL);
  v3 = v2;
  if ( v2 )
  {
    *((_DWORD *)v2 + 2) = 1;
    *((_DWORD *)v2 + 3) = 1;
    *(_QWORD *)v2 = &std::_Ref_count_obj2<Spectre::Engine::SamplerStateDesc>::`vftable';
    *((_OWORD *)v2 + 1) = 0LL;
    *((_OWORD *)v2 + 2) = 0LL;
    *((_OWORD *)v2 + 3) = 0LL;
    *((_DWORD *)v2 + 16) = 0;
    *((_QWORD *)v2 + 2) = 1LL;
    *((_QWORD *)v2 + 3) = 0LL;
    *((_DWORD *)v2 + 8) = 0;
    *((_DWORD *)v2 + 9) = 1;
    *((_DWORD *)v2 + 10) = 7;
    *((_DWORD *)v2 + 15) = 0;
    *((_DWORD *)v2 + 16) = 2139095039;
    *(_OWORD *)(v2 + 44) = Spectre::Utils::Math::Color::Black;
  }
  else
  {
    v3 = 0LL;
  }
  a1[1] = v3;
  *a1 = v3 + 16;
  return a1;
}
