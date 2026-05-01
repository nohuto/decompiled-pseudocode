/*
 * XREFs of ?stoul@std@@YAKAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@PEA_KH@Z @ 0x1802DC8F2
 * Callers:
 *     _lambda_5a9ec3bdba9975d084688ff203e80696_::operator() @ 0x180207BEC (_lambda_5a9ec3bdba9975d084688ff203e80696_--operator().c)
 *     ?OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z @ 0x180534320 (-OnInputAppPropertyChanged@TabTipAdapterPolicy@KeyboardHosting@@UEAAJPEAUHSTRING__@@0@Z.c)
 *     ?InitConfig@api_alchemy_config@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@0Uapi_spec@api_alchemy@@@Z @ 0x1806E2BA0 (-InitConfig@api_alchemy_config@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     <none>
 */

void __fastcall std::stoul(wchar_t *String, wchar_t *a2, __int64 a3)
{
  wchar_t *v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  wchar_t *EndPtr; // [rsp+38h] [rbp+10h] BYREF

  EndPtr = a2;
  v3 = String;
  v4 = (_DWORD *)_o__errno(String, a2, a3);
  v5 = v4;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(wchar_t **)v3;
  *v4 = 0;
  wcstoul(v3, &EndPtr, 10);
  if ( v3 == EndPtr )
  {
    std::_Xinvalid_argument("invalid stoul argument");
    __debugbreak();
  }
  if ( *v5 == 34 )
  {
    std::_Xout_of_range("stoul argument out of range");
    __debugbreak();
  }
}
