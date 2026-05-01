/*
 * XREFs of ?_UnwrapStream@CFTMCrossProcClientImpl@@AEAAJW4UnmarshalAction@@PEAUIStream@@@Z @ 0x180049F4C
 * Callers:
 *     ?UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x180049D70 (-UnmarshalInterface@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z @ 0x180049DE0 (-ReleaseMarshalData@CFTMCrossProcClientImpl@@UEAAJPEAUIStream@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008C3C (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x1800445C4 (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     CoTaskMemFree_0 @ 0x18004B886 (CoTaskMemFree_0.c)
 *     RoGetAgileReference_0 @ 0x18004B8AA (RoGetAgileReference_0.c)
 *     CoReleaseMarshalData_0 @ 0x18004B8B6 (CoReleaseMarshalData_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004BFD0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CFTMCrossProcClientImpl::_UnwrapStream(__int64 *a1, unsigned int a2, IStream *a3)
{
  signed int AgileReference_0; // edi
  __int64 *v7; // rbx
  LPVOID v8; // rsi
  UINT *v9; // rsi
  SIZE_T v10; // rcx
  BYTE *v11; // rbx
  IStream *v12; // rsi
  __int64 v13; // rcx
  __int64 v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  LPVOID ppv; // [rsp+78h] [rbp+48h] BYREF

  if ( a2 )
  {
    AgileReference_0 = CoReleaseMarshalData_0(a3);
  }
  else
  {
    ppv = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
    AgileReference_0 = CoUnmarshalInterface(a3, &GUID_00000000_0000_0000_c000_000000000046, &ppv);
    if ( AgileReference_0 >= 0 )
    {
      v7 = a1 + 9;
      v8 = ppv;
      v16 = 0LL;
      v15 = a1[9];
      a1[9] = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
      AgileReference_0 = 0;
      if ( v8 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1 + 9);
        AgileReference_0 = RoGetAgileReference_0(0LL, &GUID_00000000_0000_0000_c000_000000000046, v8, a1 + 9);
      }
      else
      {
        v15 = 0LL;
        v16 = *v7;
        *v7 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
      }
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&ppv);
  }
  if ( AgileReference_0 >= 0 )
  {
    v9 = (UINT *)(a1 + 4);
    AgileReference_0 = IStream_Read(a3, a1 + 4, 4u);
    if ( AgileReference_0 >= 0 )
    {
      v10 = *v9;
      v11 = 0LL;
      ppv = 0LL;
      if ( is_mul_ok(v10, 1uLL) )
      {
        AgileReference_0 = CTCoAllocPolicy::Alloc((IMalloc *)v10, (v10 * (unsigned __int128)1uLL) >> 64, v10, &ppv);
        v11 = (BYTE *)ppv;
        if ( AgileReference_0 >= 0 )
        {
          if ( !*v9 || (AgileReference_0 = IStream_Read(a3, ppv, *v9), AgileReference_0 >= 0) )
          {
            v12 = SHCreateMemStream(v11, *v9);
            v13 = a1[10];
            if ( v13 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            a1[10] = (__int64)v12;
            AgileReference_0 = v12 == 0LL ? 0x8007000E : 0;
            if ( v12 )
              AgileReference_0 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, IStream *))(*a1 + 96))(a1, a2, v12);
          }
        }
      }
      else
      {
        AgileReference_0 = -2147024362;
      }
      CoTaskMemFree_0(v11);
    }
  }
  return (unsigned int)AgileReference_0;
}
