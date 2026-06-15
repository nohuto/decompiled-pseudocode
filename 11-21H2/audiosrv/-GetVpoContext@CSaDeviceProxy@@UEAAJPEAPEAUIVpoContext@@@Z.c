/*
 * XREFs of ?GetVpoContext@CSaDeviceProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x1800F9870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CSaDeviceProxy::GetVpoContext(CSaDeviceProxy *this, struct IVpoContext **a2)
{
  HRESULT Instance; // ebx
  struct IVpoContext *v5; // rax
  struct IVpoContext *v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0LL;
  Instance = CoCreateInstance(
               &GUID_d9aaaf82_03b1_4f9f_9fd5_07d2a42c8531,
               0LL,
               0x17u,
               &GUID_4f4f92b5_6ded_4e9b_a93f_013891b3a8b7,
               (LPVOID *)&v7);
  if ( Instance >= 0 )
  {
    Instance = (*(__int64 (__fastcall **)(struct IVpoContext *, _QWORD, _QWORD))(*(_QWORD *)v7 + 24LL))(
                 v7,
                 0LL,
                 *((_QWORD *)this + 9));
    if ( Instance >= 0 )
    {
      v5 = v7;
      v7 = 0LL;
      *a2 = v5;
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v7);
  return (unsigned int)Instance;
}
