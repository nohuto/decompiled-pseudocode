/*
 * XREFs of ?_GetSelectedItem@CWRLExecuteCommandBase@@IEAAJKAEBU_GUID@@PEAPEAX@Z @ 0x1804FF754
 * Callers:
 *     ?Execute@VirtualTouchpadUriHandler@@UEAAJXZ @ 0x1804FEDB0 (-Execute@VirtualTouchpadUriHandler@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18006F258 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800C29A0 (--I-$ComPtr@UIApplicationResolver@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UIApplicationRes.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::_GetSelectedItem(
        CWRLExecuteCommandBase *this,
        __int64 a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 v5; // r14
  int v6; // ebx
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64 *); // rdi
  __int64 *v8; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  const struct _GUID *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  *a4 = 0LL;
  v5 = *((_QWORD *)this + 15);
  v6 = -2147024809;
  if ( v5 )
  {
    v11 = 0LL;
    v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 64LL);
    v8 = (__int64 *)*Microsoft::WRL::ComPtr<IApplicationResolver>::operator&((__int64)&v11, &v10);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(v8);
    v6 = v7(v5, 0LL, v8);
    if ( v6 >= 0 )
      v6 = (**(__int64 (__fastcall ***)(const struct _GUID *, GUID *, void **))&v11->Data1)(
             v11,
             &GUID_7e9fb0d3_919f_4307_ab2e_9b1860310c93,
             a4);
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&v11);
  }
  return (unsigned int)v6;
}
