/*
 * XREFs of ?CreateInternal@VertexLayoutD3D11@D3D11@Engine@Spectre@@MEAAXAEAVRenderDevice@34@AEBVShaderProgram@34@@Z @ 0x1800D4350
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180017C40 (--4-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??1?$pair@V?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@std@@QEAA@XZ @ 0x1800D39F0 (--1-$pair@V-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@st.c)
 *     ?Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT_DESC@@IAEBVShaderProgram@34@@Z @ 0x1800D3A4C (-Create@VertexLayoutD3D11@D3D11@Engine@Spectre@@QEAAXAEAVRenderDevice@34@PEAUD3D11_INPUT_ELEMENT.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription @ 0x1800D3BF8 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0 @ 0x1800D4170 (Spectre--Engine--D3D11--_anonymous_namespace_--CreateDescription_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E3930 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall Spectre::Engine::D3D11::VertexLayoutD3D11::CreateInternal(
        Spectre::Engine::D3D11::VertexLayoutD3D11 *this,
        struct Spectre::Engine::RenderDevice *a2,
        const struct Spectre::Engine::ShaderProgram *a3)
{
  int v6; // ecx
  const char *p_String; // rbx
  __int64 v8; // rdi
  void (__fastcall *v9)(__int64, const GUID *, _QWORD, const char *); // rsi
  unsigned int v10; // eax
  __int128 String; // [rsp+30h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+40h] [rbp-C0h]
  struct D3D11_INPUT_ELEMENT_DESC *v13; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v14[2]; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[40]; // [rsp+68h] [rbp-98h] BYREF
  D3D11_INPUT_ELEMENT_DESC v16; // [rsp+90h] [rbp-70h] BYREF

  *(_QWORD *)&String = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = *((_DWORD *)this + 24);
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0(&v13, (__int64 **)this + 14);
      Spectre::Engine::D3D11::VertexLayoutD3D11::Create(this, a2, v13, (__int64)(v14[0] - (_QWORD)v13) >> 5, a3);
      std::string::operator=(&String, (__int64)v15);
      std::pair<std::vector<D3D11_INPUT_ELEMENT_DESC>,std::string>::~pair<std::vector<D3D11_INPUT_ELEMENT_DESC>,std::string>((__int64)&v13);
    }
  }
  else
  {
    Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription(
      (__int64)&v13,
      *((_QWORD *)this + 13),
      (__int64)&v16);
    Spectre::Engine::D3D11::VertexLayoutD3D11::Create(this, a2, &v16, (unsigned int)v13, a3);
    std::string::operator=(&String, (__int64)v14);
    std::string::_Tidy_deallocate((__int64)v14);
  }
  p_String = (const char *)&String;
  if ( si128.m128i_i64[1] >= 0x10uLL )
    p_String = (const char *)String;
  v8 = *((_QWORD *)this + 18);
  if ( v8 )
  {
    v9 = *(void (__fastcall **)(__int64, const GUID *, _QWORD, const char *))(*(_QWORD *)v8 + 40LL);
    if ( p_String )
      v10 = strnlen(p_String, 0x7FFFFFFFuLL);
    else
      v10 = 0;
    v9(v8, &WKPDID_D3DDebugObjectName, v10, p_String);
  }
  std::string::_Tidy_deallocate((__int64)&String);
}
