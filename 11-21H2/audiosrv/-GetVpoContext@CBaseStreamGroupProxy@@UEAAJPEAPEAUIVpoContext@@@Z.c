/*
 * XREFs of ?GetVpoContext@CBaseStreamGroupProxy@@UEAAJPEAPEAUIVpoContext@@@Z @ 0x1800F9600
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::GetVpoContext(CBaseStreamGroupProxy *this, struct IVpoContext **a2)
{
  HRESULT Instance; // eax
  int v5; // ebx
  struct IVpoContext *v6; // rax
  struct IVpoContext *v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0LL;
  Instance = CoCreateInstance(
               &GUID_d9aaaf82_03b1_4f9f_9fd5_07d2a42c8531,
               0LL,
               0x17u,
               &GUID_4f4f92b5_6ded_4e9b_a93f_013891b3a8b7,
               (LPVOID *)&v8);
  v9 = 0LL;
  v5 = Instance;
  if ( Instance >= 0 )
  {
    v5 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 11) + 56LL))(*((_QWORD *)this + 11), &v9);
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(struct IVpoContext *, _QWORD, __int64))(*(_QWORD *)v8 + 24LL))(
             v8,
             *((_QWORD *)this + 10),
             v9);
      if ( v5 >= 0 )
      {
        v6 = v8;
        v8 = 0LL;
        *a2 = v6;
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v8);
  return (unsigned int)v5;
}
