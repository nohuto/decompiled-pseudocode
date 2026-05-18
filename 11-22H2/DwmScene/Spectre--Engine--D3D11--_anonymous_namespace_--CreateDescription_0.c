/*
 * XREFs of Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0 @ 0x1800D4170
 * Callers:
 *     ?CreateInternal@VertexLayoutD3D11@D3D11@Engine@Spectre@@MEAAXAEAVRenderDevice@34@AEBVShaderProgram@34@@Z @ 0x1800D4350 (-CreateInternal@VertexLayoutD3D11@D3D11@Engine@Spectre@@MEAAXAEAVRenderDevice@34@AEBVShaderProgr.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     ?_Tidy_deallocate@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAAXXZ @ 0x180011B24 (-_Tidy_deallocate@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEAAXXZ.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180017648 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ??$?HDU?$char_traits@D@std@@V?$allocator@D@1@@std@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@AEBV10@QEBD@Z @ 0x18001C600 (--$-HDU-$char_traits@D@std@@V-$allocator@D@1@@std@@YA-AV-$basic_string@DU-$char_tra_ea_18001C600.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18001DDE0 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ?_Tidy@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAXXZ @ 0x180051E80 (-_Tidy@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@A.c)
 *     ??$_Emplace_reallocate@UD3D11_INPUT_ELEMENT_DESC@@@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@QEAAPEAUD3D11_INPUT_ELEMENT_DESC@@QEAU2@$$QEAU2@@Z @ 0x1800D386C (--$_Emplace_reallocate@UD3D11_INPUT_ELEMENT_DESC@@@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$alloca.c)
 *     Spectre::Engine::D3D11::_anonymous_namespace_::GetNativeFormat @ 0x1800D44D4 (Spectre--Engine--D3D11--_anonymous_namespace_--GetNativeFormat.c)
 *     ?_Reallocate_exactly@?$vector@UD3D11_INPUT_ELEMENT_DESC@@V?$allocator@UD3D11_INPUT_ELEMENT_DESC@@@std@@@std@@AEAAX_K@Z @ 0x1800D4568 (-_Reallocate_exactly@-$vector@UD3D11_INPUT_ELEMENT_DESC@@V-$allocator@UD3D11_INPUT_ELEMENT_DESC@.c)
 */

// Hidden C++ exception states: #wind=4
_QWORD *__fastcall Spectre::Engine::D3D11::_anonymous_namespace_::CreateDescription_0(_QWORD *a1, __int64 **a2)
{
  _OWORD *v4; // r14
  unsigned __int64 v5; // rdx
  __int64 *v6; // rbx
  __int64 *v7; // r15
  _OWORD *v8; // rdi
  __int64 *v9; // rax
  char *v10; // rax
  unsigned __int64 v11; // r8
  __int64 v12; // rax
  __int128 v14; // [rsp+20h] [rbp-39h] BYREF
  _OWORD *v15; // [rsp+30h] [rbp-29h]
  _QWORD *v16; // [rsp+40h] [rbp-19h]
  __int128 v17; // [rsp+48h] [rbp-11h] BYREF
  __int128 v18; // [rsp+58h] [rbp-1h]
  void *Src[2]; // [rsp+68h] [rbp+Fh] BYREF
  __m128i si128; // [rsp+78h] [rbp+1Fh]

  v16 = a1;
  v14 = 0LL;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0xAAAAAAAAAAAAAAABuLL * (((char *)a2[1] - (char *)*a2) >> 4);
  if ( v5 )
  {
    if ( v5 > 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("vector too long");
    std::vector<D3D11_INPUT_ELEMENT_DESC>::_Reallocate_exactly(&v14);
    v4 = v15;
  }
  Src[0] = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = *a2;
  v7 = a2[1];
  v8 = (_OWORD *)*((_QWORD *)&v14 + 1);
  while ( v6 != v7 )
  {
    v9 = v6;
    if ( (unsigned __int64)v6[3] >= 0x10 )
      v9 = (__int64 *)*v6;
    *(_QWORD *)&v17 = v9;
    DWORD2(v17) = *((_DWORD *)v6 + 8);
    HIDWORD(v17) = Spectre::Engine::D3D11::_anonymous_namespace_::GetNativeFormat(
                     *((unsigned int *)v6 + 9),
                     *((unsigned __int8 *)v6 + 40));
    v18 = *((unsigned int *)v6 + 11);
    if ( v8 == v4 )
    {
      std::vector<D3D11_INPUT_ELEMENT_DESC>::_Emplace_reallocate<D3D11_INPUT_ELEMENT_DESC>(
        (__int64 *)&v14,
        (__int64)v8,
        &v17);
      v4 = v15;
      v8 = (_OWORD *)*((_QWORD *)&v14 + 1);
    }
    else
    {
      *v8 = v17;
      v8[1] = v18;
      v8 += 2;
      *((_QWORD *)&v14 + 1) = v8;
    }
    v10 = std::operator+<char>((char *)&v17, v6, " ");
    v11 = *((_QWORD *)v10 + 2);
    if ( *((_QWORD *)v10 + 3) >= 0x10uLL )
      v10 = *(char **)v10;
    std::string::append(Src, v10, v11);
    std::string::_Tidy_deallocate((__int64)&v17);
    v6 += 6;
  }
  v15 = 0LL;
  v12 = v14;
  v14 = 0uLL;
  *a1 = v12;
  a1[1] = v8;
  a1[2] = v4;
  std::string::string(a1 + 3, (__int64)Src);
  std::string::_Tidy_deallocate((__int64)Src);
  std::vector<D3D11_INPUT_ELEMENT_DESC>::_Tidy((__int64)&v14);
  return a1;
}
