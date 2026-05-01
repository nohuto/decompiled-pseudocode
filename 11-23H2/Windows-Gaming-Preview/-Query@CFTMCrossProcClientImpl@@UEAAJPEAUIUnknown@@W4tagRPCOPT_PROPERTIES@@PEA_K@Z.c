/*
 * XREFs of ?Query@CFTMCrossProcClientImpl@@UEAAJPEAUIUnknown@@W4tagRPCOPT_PROPERTIES@@PEA_K@Z @ 0x18004ACC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008CE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CopyTo@AgileRef@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180029D40 (-CopyTo@AgileRef@WRL@Microsoft@@QEBAJAEBU_GUID@@PEAPEAUIUnknown@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CFTMCrossProcClientImpl::Query(
        CFTMCrossProcClientImpl *this,
        struct IUnknown *a2,
        unsigned int a3,
        unsigned __int64 *a4)
{
  signed int v6; // esi
  Microsoft::WRL::AgileRef *v7; // rdi
  int v8; // ebx
  struct IUnknown *v9; // rbx
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rdi
  int v11; // eax
  __int64 v13[2]; // [rsp+30h] [rbp-10h] BYREF
  struct IUnknown *v14; // [rsp+78h] [rbp+38h] BYREF

  *a4 = 0LL;
  v6 = a3 != 2 ? 0x80070057 : 0;
  if ( a3 == 2 )
  {
    v7 = (CFTMCrossProcClientImpl *)((char *)this + 16);
    v8 = -2147467262;
    if ( *((_QWORD *)this + 2) )
    {
      v14 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      v14 = 0LL;
      if ( *(_QWORD *)v7 )
      {
        v6 = Microsoft::WRL::AgileRef::CopyTo(v7, &GUID_00000000_0000_0000_c000_000000000046, &v14);
        if ( v6 >= 0 )
        {
          v9 = v14;
          v13[0] = 0LL;
          QueryInterface = v14->lpVtbl->QueryInterface;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
          v11 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
                  v9,
                  &GUID_00000144_0000_0000_c000_000000000046,
                  v13);
          v8 = v11;
          if ( v11 < 0 )
          {
            if ( v11 != -2147467262 )
              v6 = v11;
          }
          else
          {
            v6 = (*(__int64 (__fastcall **)(__int64, struct IUnknown *, _QWORD, unsigned __int64 *))(*(_QWORD *)v13[0] + 32LL))(
                   v13[0],
                   v14,
                   a3,
                   a4);
          }
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
        }
      }
      else
      {
        v6 = -2147467259;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
    }
    if ( v6 >= 0 && v8 == -2147467262 )
    {
      *a4 = 0LL;
      return 0;
    }
  }
  return (unsigned int)v6;
}
