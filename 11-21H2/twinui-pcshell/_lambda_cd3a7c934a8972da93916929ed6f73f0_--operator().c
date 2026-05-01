/*
 * XREFs of _lambda_cd3a7c934a8972da93916929ed6f73f0_::operator() @ 0x1805E7D70
 * Callers:
 *     CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6f73f0___ @ 0x1805E7A14 (CallerIdentity--ApiPolicyChecker--_ForEachApplicationByAppID__lambda_cd3a7c934a8972da93916929ed6.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_cd3a7c934a8972da93916929ed6f73f0_::operator()(bool **a1, __int64 *a2, bool *a3)
{
  __int64 v3; // rax
  __int64 (__fastcall *v7)(__int64 *, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v8; // rbx
  int v9; // ebx
  bool v10; // zf
  bool *v11; // rax
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF
  HWND hWnd; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a2;
  v13 = 0LL;
  v7 = *(__int64 (__fastcall **)(__int64 *, _QWORD, GUID *, __int64 *))(v3 + 24);
  v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v13, &hWnd);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v8);
  v9 = v7(a2, 0LL, &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891, v8);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v13 + 32LL))(v13, &hWnd);
    if ( v9 >= 0 )
    {
      v10 = GetPropW(hWnd, L"PROP_APPWINDOW_BLOCK_UNTRUSTED_LAUNCHES") == 0LL;
      v11 = *a1;
      *a3 = !v10;
      *v11 = !v10;
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  return (unsigned int)v9;
}
