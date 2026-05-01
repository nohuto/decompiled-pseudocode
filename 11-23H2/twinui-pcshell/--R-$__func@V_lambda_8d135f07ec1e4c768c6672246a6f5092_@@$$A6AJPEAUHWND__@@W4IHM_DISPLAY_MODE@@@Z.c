/*
 * XREFs of ??R?$__func@V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@__function@wistd@@UEAAJ$$QEAPEAUHWND__@@$$QEAW4IHM_DISPLAY_MODE@@@Z @ 0x1804669A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>::operator()(
        __int64 a1,
        __int64 *a2,
        unsigned int *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbp
  unsigned int v6; // ebx
  struct IInspectable *v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1 + 8;
  v4 = *a3;
  v5 = *a2;
  v6 = 0;
  v8 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 8), &v8) >= 0 )
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(v3 + 16))(*(_QWORD *)(v3 + 8) + *(int *)(v3 + 24), v5, v4);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v8);
  return v6;
}
