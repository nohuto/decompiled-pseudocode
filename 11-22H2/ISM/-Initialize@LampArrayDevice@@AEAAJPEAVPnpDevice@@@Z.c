/*
 * XREFs of ?Initialize@LampArrayDevice@@AEAAJPEAVPnpDevice@@@Z @ 0x1800FA910
 * Callers:
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800FA860 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A8B5C (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z @ 0x1800F9068 (--4-$ComPtr@VPnpDevice@@@WRL@Microsoft@@QEAAAEAV012@PEAVPnpDevice@@@Z.c)
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800FA1E4 (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@UColor@UI@Windows@@@std@@@std@@YAPEAUColor@UI@Windows@@PEAU123@_KAEAV?$allocator@UColor@UI@Windows@@@0@@Z @ 0x1800FA2BC (--$_Uninitialized_value_construct_n@V-$allocator@UColor@UI@Windows@@@std@@@std@@YAPEAUColor@UI@W.c)
 *     ?CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800FF678 (-CreateAndInitialize@HidLampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall LampArrayDevice::Initialize(LampArrayDevice *this, struct PnpDevice *a2)
{
  char *v3; // rsi
  int v4; // eax
  unsigned int v5; // ebx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rcx
  char *v10; // rax
  const char *v11; // r9
  const char *v12; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Microsoft::WRL::ComPtr<PnpDevice>::operator=((RefCountedObject **)this + 2, (volatile signed __int32 *)a2);
  v3 = (char *)this + 24;
  v4 = HidLampArrayDevice::CreateAndInitialize(*((struct PnpDevice **)this + 2), (struct HidLampArrayDevice **)this + 3);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x66,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
      (const char *)(unsigned int)v4);
    return v5;
  }
  try
  {
    v7 = *(int *)(*(_QWORD *)v3 + 544LL);
    v8 = *((_QWORD *)this + 21);
    v9 = (*((_QWORD *)this + 22) - v8) >> 2;
    if ( v7 < v9 )
    {
      v10 = (char *)(v8 + 4 * v7);
LABEL_9:
      *((_QWORD *)this + 22) = v10;
      goto LABEL_10;
    }
    if ( v7 > v9 )
    {
      if ( v7 <= (*((_QWORD *)this + 23) - v8) >> 2 )
      {
        v10 = std::_Uninitialized_value_construct_n<std::allocator<Windows::UI::Color>>(*((char **)this + 22), v7 - v9);
        goto LABEL_9;
      }
      std::vector<Windows::UI::Color>::_Resize_reallocate<std::_Value_init_tag>((const void **)this + 21, v7);
    }
LABEL_10:
    if ( !QueryPerformanceFrequency((LARGE_INTEGER *)this + 24) )
      wil::details::in1diag3::_FailFast_GetLastError(
        retaddr,
        (void *)0x6A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
        v11);
    *((_QWORD *)this + 26) = *((_QWORD *)this + 24) * (*(_DWORD *)(*(_QWORD *)v3 + 564LL) + 1000) / 1000000LL;
    QueryPerformanceCounter((LARGE_INTEGER *)this + 25);
    *((_QWORD *)this + 25) -= *((_QWORD *)this + 26);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x75,
                           (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\lamparraydevice.cpp",
                           v12);
  }
  return result;
}
