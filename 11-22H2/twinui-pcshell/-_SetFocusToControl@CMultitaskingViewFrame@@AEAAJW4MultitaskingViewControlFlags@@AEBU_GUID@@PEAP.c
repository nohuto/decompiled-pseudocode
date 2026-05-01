/*
 * XREFs of ?_SetFocusToControl@CMultitaskingViewFrame@@AEAAJW4MultitaskingViewControlFlags@@AEBU_GUID@@PEAPEAX@Z @ 0x18056F794
 * Callers:
 *     ?Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z @ 0x18056E440 (-Navigate@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@I@Z.c)
 *     ?NavigateToItem@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@PEAUIUnknown@@@Z @ 0x18056E730 (-NavigateToItem@CMultitaskingViewFrame@@UEAAJW4MultitaskingViewControlFlags@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??4?$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18009D7A4 (--4-$ComPtr@UIChainLink@Chaining@Shell@Internal@Windows@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$As@UIMultitaskingViewElement@@@?$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@@Details@12@@Z @ 0x18056BF80 (--$As@UIMultitaskingViewElement@@@-$ComPtr@UIScrollViewer@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CMultitaskingViewFrame::_SetFocusToControl(__int64 a1, int a2, __int64 a3, _QWORD *a4)
{
  __int64 *v7; // rbx
  __int64 v8; // r11
  unsigned int v9; // ebx
  __int64 (__fastcall ***v10)(_QWORD, __int64, _QWORD *); // rcx
  int v11; // edx
  int v12; // edx
  __int64 v13; // r9
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 (__fastcall ***v19)(_QWORD, __int64, _QWORD *); // [rsp+30h] [rbp+8h] BYREF

  *a4 = 0LL;
  v7 = (__int64 *)(a1 + 2520);
  v8 = *(_QWORD *)(a1 + 2520);
  if ( v8 )
  {
    v10 = 0LL;
    v19 = 0LL;
    if ( a2 )
    {
      v11 = a2 - 1;
      if ( v11 )
      {
        v12 = v11 - 1;
        if ( !v12 || v12 == 2 )
        {
          v9 = -2147467263;
          v13 = 2147500033LL;
          v14 = 895LL;
LABEL_15:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v14,
            (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
            (const char *)v13);
          goto LABEL_16;
        }
        goto LABEL_12;
      }
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 288LL))(v8, *(_QWORD *)(a1 + 2528));
      v15 = Microsoft::WRL::ComPtr<IScrollViewer>::As<IMultitaskingViewElement>(
              (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(a1 + 2536),
              (__int64 *)&v19);
      v9 = v15;
      if ( v15 < 0 )
      {
        v14 = 889LL;
LABEL_14:
        v13 = (unsigned int)v15;
        goto LABEL_15;
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::Internal::Shell::Chaining::IChainLink>::operator=((__int64 *)&v19, v7);
      LOBYTE(v16) = 1;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v7 + 296LL))(*v7, v16);
    }
    v10 = v19;
LABEL_12:
    v15 = (**v10)(v10, a3, a4);
    v9 = v15;
    if ( v15 >= 0 )
    {
LABEL_16:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v19);
      return v9;
    }
    v14 = 899LL;
    goto LABEL_14;
  }
  v9 = -2147019873;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x368,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\frame.cpp",
    (const char *)0x8007139FLL);
  return v9;
}
