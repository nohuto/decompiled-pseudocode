/*
 * XREFs of ??4?$ObservableProperty@V?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@@@QEAAAEBV?$ComPtr@UIWICBitmap@@@WRL@Microsoft@@AEBV123@@Z @ 0x180498238
 * Callers:
 *     _lambda_6825ce5d1ace0209a4941c0102e86eff_::operator() @ 0x1802310C4 (_lambda_6825ce5d1ace0209a4941c0102e86eff_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall ObservableProperty<Microsoft::WRL::ComPtr<IWICBitmap>>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  v4 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v4 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(*a2);
      v3 = *a1;
    }
    v8 = v3;
    *a1 = v4;
    Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(&v8);
  }
  v5 = (_QWORD *)a1[1];
  v6 = &v5[a1[2]];
  while ( v5 != v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 24LL))(*v5);
    ++v5;
  }
  return a1;
}
