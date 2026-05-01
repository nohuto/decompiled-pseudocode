/*
 * XREFs of ?KeyDown@CVirtualDesktopBarElement@@UEAA_NIW4ModifierKeys@@@Z @ 0x1804C6AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z @ 0x1804B16F4 (-IsSameElement@ElementHelpers@@YA_NPEAUIMultitaskingViewElement@@0@Z.c)
 *     ?MapToChildNavDir@ElementHelpers@@YAII@Z @ 0x1804BEF64 (-MapToChildNavDir@ElementHelpers@@YAII@Z.c)
 *     ?SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z @ 0x1804C5528 (-SetFocusToElement@ElementHelpers@@YAXPEAUIMultitaskingViewElement@@@Z.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall CVirtualDesktopBarElement::KeyDown(__int64 a1, int a2)
{
  char v4; // di
  int v5; // ebx
  struct IMultitaskingViewElement *v6; // r8
  unsigned int v7; // ebp
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v9)(_QWORD, GUID *, __int64 *); // rbx
  int v10; // eax
  ElementHelpers **v11; // rax
  struct IMultitaskingViewElement *v12; // rdx
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF
  ElementHelpers *v17; // [rsp+78h] [rbp+20h] BYREF

  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 240LL))(*(_QWORD *)(a1 + 168));
  if ( !v4 && ((a2 - 37) & 0xFFFFFFFD) == 0 )
  {
    v5 = -(a2 != 39);
    (*(void (__fastcall **)(__int64, ElementHelpers **, _QWORD, _QWORD, _DWORD))(*(_QWORD *)a1 + 272LL))(
      a1,
      &v17,
      *(_QWORD *)(a1 + 168),
      (unsigned int)(v5 + 4),
      0);
    if ( v17 )
    {
      if ( ElementHelpers::IsSameElement((struct IUnknown *)v17, *(struct IUnknown **)(a1 + 744), v6) )
      {
        v7 = ElementHelpers::MapToChildNavDir((ElementHelpers *)(unsigned int)(v5 + 4));
        v16 = 0LL;
        v8 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 736);
        v9 = **v8;
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
        v10 = v9(v8, &GUID_0bb549a1_eae6_47ed_b29e_ca24ee64ad8d, &v16);
        if ( v10 >= 0 )
        {
          v11 = (ElementHelpers **)(*(__int64 (__fastcall **)(__int64, __int64 *, _QWORD, _QWORD, _DWORD))(*(_QWORD *)v16 + 272LL))(
                                     v16,
                                     v14,
                                     0LL,
                                     v7,
                                     0);
          ElementHelpers::SetFocusToElement(*v11, v12);
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v14);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x8D,
            (__int64)"pcshell\\twinui\\multitaskingview\\lib\\virtualdesktopbarelement.cpp",
            (const char *)(unsigned int)v10);
        }
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v16);
      }
      (*(void (__fastcall **)(__int64, ElementHelpers *))(*(_QWORD *)a1 + 288LL))(a1, v17);
    }
    v4 = 1;
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  }
  return v4;
}
