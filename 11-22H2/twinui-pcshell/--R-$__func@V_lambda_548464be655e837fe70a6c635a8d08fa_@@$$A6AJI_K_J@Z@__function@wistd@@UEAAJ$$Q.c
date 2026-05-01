/*
 * XREFs of ??R?$__func@V_lambda_548464be655e837fe70a6c635a8d08fa_@@$$A6AJI_K_J@Z@__function@wistd@@UEAAJ$$QEAI$$QEA_K$$QEA_J@Z @ 0x18042A1E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func<_lambda_548464be655e837fe70a6c635a8d08fa_,long (unsigned int,unsigned __int64,__int64)>::operator()(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  struct IInspectable *v10; // [rsp+50h] [rbp+8h] BYREF

  v4 = a1 + 8;
  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  v8 = 0;
  v10 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 8), &v10) >= 0 )
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(v4 + 16))(
           *(_QWORD *)(v4 + 8) + *(int *)(v4 + 24),
           v7,
           v6,
           v5);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v10);
  return v8;
}
