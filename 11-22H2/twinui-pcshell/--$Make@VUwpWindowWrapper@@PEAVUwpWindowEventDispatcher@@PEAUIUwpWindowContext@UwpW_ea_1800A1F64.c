/*
 * XREFs of ??$Make@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@AEA_K@Details@WRL@Microsoft@@YA?AV?$ComPtr@VUwpWindowWrapper@@@12@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@AEA_K@Z @ 0x1800A1F64
 * Callers:
 *     ??$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@67@AEAUUwpWindowContextId@4567@PEAUIWindow@WindowManagement@ApplicationModel@67@AEAUWindowId@WindowManagement@ApplicationModel@67@PEBGW4WindowCreatedType@@AEA_K@wil@@YA?AV?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVUwpWindowEventDispatcher@@$$QEAPEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@$$QEAPEAUHSTRING__@@AEBW4AppModelKind@WindowManagement@ApplicationModel@89@AEAUUwpWindowContextId@6789@$$QEAPEAUIWindow@WindowManagement@ApplicationModel@89@AEAUWindowId@WindowManagement@ApplicationModel@89@$$QEAPEBG$$QEAW4WindowCreatedType@@AEA_K@Z @ 0x1800A1ED4 (--$MakeOrThrow@VUwpWindowWrapper@@PEAVUwpWindowEventDispatcher@@PEAUIUwpWindowConte_ea_1800A1ED4.c)
 * Callees:
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x1800A1100 (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?Attach@?$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVUwpWindowWrapper@@@Z @ 0x1800A209C (-Attach@-$ComPtr@VUwpWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVUwpWindowWrapper@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Microsoft::WRL::Details::Make<UwpWindowWrapper,UwpWindowEventDispatcher *,Windows::Internal::Shell::UwpWindowLifecycleManagement::IUwpWindowContext *,HSTRING__ *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind const &,Windows::Internal::Shell::UwpWindowLifecycleManagement::UwpWindowContextId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType,unsigned __int64 &>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 *a3,
        __int64 *a4,
        int *a5,
        int *a6,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow **a7,
        int *a8,
        __int64 *a9,
        int *a10,
        __int64 *a11)
{
  void *v15; // rax
  void *v16; // rbp
  __int64 v17; // rax

  *a1 = 0LL;
  v15 = operator new(0x2F0uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    v17 = UwpWindowWrapper::UwpWindowWrapper(
            (__int64)v15,
            (*a2 + 16LL) & -(__int64)(*a2 != 0LL),
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8,
            *a9,
            *a10,
            *a11);
    Microsoft::WRL::ComPtr<UwpWindowWrapper>::Attach(a1, v17);
    v16 = 0LL;
  }
  if ( v16 )
    operator delete(v16, 1uLL);
  return a1;
}
