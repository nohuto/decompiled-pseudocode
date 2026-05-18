/*
 * XREFs of ??0GpuQueryD3D11@D3D11@Engine@Spectre@@QEAA@XZ @ 0x1800D7BC4
 * Callers:
 *     ?_Do_call@?$_Func_impl_no_alloc@V_lambda_53997277a49255653d15a2e9d753df18_@@V?$shared_ptr@VRendererResource@Engine@Spectre@@@std@@$$V@std@@EEAA?AV?$shared_ptr@VRendererResource@Engine@Spectre@@@2@XZ @ 0x1800C7D10 (-_Do_call@-$_Func_impl_no_alloc@V_lambda_53997277a49255653d15a2e9d753df18_@@V-$shared_ptr@VRende.c)
 * Callees:
 *     ??0GpuQuery@Engine@Spectre@@QEAA@XZ @ 0x1800E37A8 (--0GpuQuery@Engine@Spectre@@QEAA@XZ.c)
 */

Spectre::Engine::D3D11::GpuQueryD3D11 *__fastcall Spectre::Engine::D3D11::GpuQueryD3D11::GpuQueryD3D11(
        Spectre::Engine::D3D11::GpuQueryD3D11 *this)
{
  Spectre::Engine::D3D11::GpuQueryD3D11 *result; // rax

  Spectre::Engine::GpuQuery::GpuQuery(this);
  *(_QWORD *)this = &Spectre::Engine::D3D11::GpuQueryD3D11::`vftable';
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 4;
  *((_DWORD *)this + 35) = 4;
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  *((_BYTE *)this + 152) = 1;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  return result;
}
