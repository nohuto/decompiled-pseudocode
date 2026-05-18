/*
 * XREFs of ?UpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@AEAAXPEAUID3D11Buffer@@PEBXI@Z @ 0x1800D3560
 * Callers:
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VArrayBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D27D0 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VArrayBuffer@En.c)
 *     ?SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV?$shared_ptr@VConstantBuffer@Engine@Spectre@@@std@@PEBXI@Z @ 0x1800D2900 (-SubmitUpdateBuffer@CommandListD3D11@D3D11@Engine@Spectre@@MEAAXAEBV-$shared_ptr@VConstantBuffer.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     memset_0 @ 0x18000C0BC (memset_0.c)
 *     memcpy_s @ 0x18000FF54 (memcpy_s.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180010530 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?lock@?$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA?AV?$shared_ptr@VRenderDevice@Engine@Spectre@@@2@XZ @ 0x180011C50 (-lock@-$weak_ptr@VRenderDevice@Engine@Spectre@@@std@@QEBA-AV-$shared_ptr@VRenderDevice@Engine@Sp.c)
 *     ?ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z @ 0x1800C76D0 (-ValidateDeviceApiCall@RenderDeviceD3D11@D3D11@Engine@Spectre@@IEAAXJ@Z.c)
 *     ??$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA?AV?$shared_ptr@VRenderDeviceD3D11@D3D11@Engine@Spectre@@@0@$$QEAV?$shared_ptr@VRenderDevice@Engine@Spectre@@@0@@Z @ 0x1800CF74C (--$dynamic_pointer_cast@VRenderDeviceD3D11@D3D11@Engine@Spectre@@VRenderDevice@34@@std@@YA-AV-$s.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Spectre::Engine::D3D11::CommandListD3D11::UpdateBuffer(
        Spectre::Engine::D3D11::CommandListD3D11 *this,
        struct ID3D11Buffer *a2,
        const void *a3,
        unsigned int a4)
{
  rsize_t v4; // r15
  ULONG_PTR v8; // rbx
  __int64 v9; // [rsp+40h] [rbp-C0h] BYREF
  std::_Ref_count_base *v10; // [rsp+48h] [rbp-B8h]
  Spectre::Engine::D3D11::RenderDeviceD3D11 *v11; // [rsp+50h] [rbp-B0h] BYREF
  std::_Ref_count_base *v12; // [rsp+58h] [rbp-A8h]
  void *Destination; // [rsp+60h] [rbp-A0h] BYREF
  EXCEPTION_RECORD pExceptionRecord; // [rsp+70h] [rbp-90h] BYREF
  void *retaddr; // [rsp+158h] [rbp+58h]

  v4 = a4;
  v8 = (*(int (__fastcall **)(_QWORD, struct ID3D11Buffer *, _QWORD, __int64, _DWORD, void **))(**((_QWORD **)this + 18)
                                                                                              + 112LL))(
         *((_QWORD *)this + 18),
         a2,
         0LL,
         4LL,
         0,
         &Destination);
  std::weak_ptr<Spectre::Engine::RenderDevice>::lock((__int64)this + 72, &v9);
  std::dynamic_pointer_cast<Spectre::Engine::D3D11::RenderDeviceD3D11,Spectre::Engine::RenderDevice>(
    (__int64 *)&v11,
    &v9);
  if ( v10 )
    std::_Ref_count_base::_Decref(v10);
  Spectre::Engine::D3D11::RenderDeviceD3D11::ValidateDeviceApiCall(v11, v8);
  if ( (v8 & 0x80000000) != 0LL )
  {
    memset_0(&pExceptionRecord, 0, sizeof(pExceptionRecord));
    pExceptionRecord.ExceptionCode = -532265403;
    pExceptionRecord.ExceptionAddress = retaddr;
    pExceptionRecord.NumberParameters = 1;
    pExceptionRecord.ExceptionInformation[0] = v8;
    RaiseFailFastException(&pExceptionRecord, 0LL, 0);
  }
  memcpy_s(Destination, v4, a3, v4);
  (*(void (__fastcall **)(_QWORD, struct ID3D11Buffer *, _QWORD))(**((_QWORD **)this + 18) + 120LL))(
    *((_QWORD *)this + 18),
    a2,
    0LL);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
}
