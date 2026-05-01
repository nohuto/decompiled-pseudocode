/*
 * XREFs of CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b296685___ @ 0x1805E78C0
 * Callers:
 *     ?IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z @ 0x1805E81B4 (-IsApplicationInteractive@ApiPolicyChecker@CallerIdentity@@YAJPEBGPEAH@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800A02C0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z @ 0x1805E71E4 (-FindAllApplicationsByAppID@CallerIdentity@@YAJPEBGPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall CallerIdentity::ApiPolicyChecker::_ForEachApplicationByAppID__lambda_66c33cbe5bd20407278e6b687b296685___(
        struct IUnknown *this,
        _QWORD *a2)
{
  __int64 *v4; // rbx
  struct IObjectArray **v5; // r8
  int AllApplicationsByAppID; // ebx
  bool v7; // r15
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, _QWORD, GUID *, __int64 *); // rsi
  __int64 *v11; // rdi
  __int64 v13; // [rsp+30h] [rbp-10h] BYREF
  __int64 v14; // [rsp+38h] [rbp-8h] BYREF
  __int64 v15; // [rsp+80h] [rbp+40h] BYREF
  __int64 v16; // [rsp+88h] [rbp+48h] BYREF

  v16 = 0LL;
  v4 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v16, &v15);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v4);
  AllApplicationsByAppID = CallerIdentity::FindAllApplicationsByAppID(this, (const unsigned __int16 *)v4, v5);
  if ( AllApplicationsByAppID >= 0 )
  {
    v7 = 1;
    v8 = 0;
    for ( AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 24LL))(v16, &v15);
          AllApplicationsByAppID >= 0;
          ++v8 )
    {
      if ( !v7 || v8 >= (unsigned int)v15 )
        break;
      v9 = v16;
      v13 = 0LL;
      v10 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v16 + 32LL);
      v11 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v13, &v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v11);
      AllApplicationsByAppID = v10(v9, v8, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v11);
      if ( AllApplicationsByAppID >= 0 )
      {
        AllApplicationsByAppID = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 168LL))(v13, *a2);
        if ( AllApplicationsByAppID >= 0 )
          v7 = *(_DWORD *)*a2 == 0;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
    }
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
  return (unsigned int)AllApplicationsByAppID;
}
