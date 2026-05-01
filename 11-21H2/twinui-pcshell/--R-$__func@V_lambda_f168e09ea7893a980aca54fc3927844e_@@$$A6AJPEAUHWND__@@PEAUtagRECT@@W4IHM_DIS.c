/*
 * XREFs of ??R?$__func@V_lambda_f168e09ea7893a980aca54fc3927844e_@@$$A6AJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@11@Z@__function@wistd@@UEAAJ$$QEAPEAUHWND__@@$$QEAPEAUtagRECT@@$$QEAW4IHM_DISPLAY_MODE@@11@Z @ 0x18038E690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800752E4 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::__function::__func<_lambda_f168e09ea7893a980aca54fc3927844e_,long (HWND__ *,tagRECT *,enum IHM_DISPLAY_MODE,tagRECT *,tagRECT *)>::operator()(
        __int64 a1,
        __int64 *a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned int v9; // r14d
  __int64 v10; // r15
  __int64 v11; // r12
  unsigned int v12; // ebx

  v6 = a1 + 8;
  v7 = *a6;
  v8 = *a5;
  v9 = *a4;
  v10 = *a3;
  v11 = *a2;
  v12 = 0;
  a6 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 8), (__int64)&a6) >= 0 )
    v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, _QWORD, __int64, __int64))(v6 + 16))(
            *(_QWORD *)(v6 + 8) + *(int *)(v6 + 24),
            v11,
            v10,
            v9,
            v8,
            v7);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a6);
  return v12;
}
