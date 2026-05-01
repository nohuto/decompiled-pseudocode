/*
 * XREFs of ?_RemoveItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804B6B40
 * Callers:
 *     ?_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z @ 0x180232C8C (-_ApplyFilterToItem@SwitchItemFilteredCollection@@AEAAJPEAUIObservableItem@@_N@Z.c)
 *     ?UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804A83D0 (-UpdateTabSelection@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1804A8754 (-_RemoveViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804A87DC (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 *     ?_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z @ 0x1804A99FC (-_RemoveDesktopItem@VirtualDesktopItemCollection@@AEAAJPEAUIVirtualDesktop@@@Z.c)
 *     ?ItemRemoved@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@Z @ 0x1804AA9F0 (-ItemRemoved@SwitchItemFilteredCollection@@UEAAXPEAUIObservableObjectArray@@PEAUIObservableItem@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memmove_0 @ 0x1801EACFB (memmove_0.c)
 *     ?_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObservableObjectArray@@PEAUIObservableItem@@@ZW4ObservableArrayOperation@@1@Z @ 0x180233EA4 (-_FireNotification@ObservableObjectArray@@AEAAJP8IObservableObjectArrayChanged@@EAAXPEAUIObserva.c)
 *     ??$FindEx@VComPtrCompareHelper@@@?$CTSimpleFixedArray@V?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@VComPtrCompareHelper@@@@QEBAJAEBVComPtrCompareHelper@@AEBV?$ComPtr@UIMultitaskingViewGridElement@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1804A9D9C (--$FindEx@VComPtrCompareHelper@@@-$CTSimpleFixedArray@V-$ComPtr@UIMultitaskingViewGridElement@@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ObservableObjectArray::_RemoveItem(RTL_SRWLOCK *a1, struct IUnknown **a2, unsigned int a3)
{
  struct IUnknown *v6; // rbx
  RTL_SRWLOCK *v7; // rsi
  __int64 v8; // rdx
  int v9; // edi
  char *v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  char *Ptr; // rdx
  int v15; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct IUnknown *v17; // [rsp+50h] [rbp+8h] BYREF
  char *v18; // [rsp+58h] [rbp+10h] BYREF

  v6 = *a2;
  v17 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v17);
  v7 = a1 + 2;
  v9 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IMultitaskingViewGridElement>,ComPtrCompareHelper>::FindEx<ComPtrCompareHelper>(
         &a1[2].Ptr,
         v8,
         a2,
         &v18);
  if ( v9 < 0 )
    goto LABEL_4;
  v10 = v18;
  if ( v18 >= a1[3].Ptr )
  {
    v9 = -2147316575;
LABEL_4:
    v11 = (unsigned int)v9;
    v12 = 54LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\observablearray.cpp",
      (const char *)v11);
    goto LABEL_6;
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)v7->Ptr + (_QWORD)v18);
  Ptr = (char *)a1[3].Ptr;
  if ( v10 != Ptr - 1 )
  {
    memmove_0((char *)v7->Ptr + 8 * (_QWORD)v10, (char *)v7->Ptr + 8 * (_QWORD)v10 + 8, 8 * (Ptr - v10) - 8);
    Ptr = (char *)a1[3].Ptr;
  }
  a1[3].Ptr = Ptr - 1;
  v15 = ObservableObjectArray::_FireNotification(
          a1,
          (void (__fastcall *)(__int64, RTL_SRWLOCK *, __int64)) IObservableObjectArrayChanged::`vcall'{32,{flat}},
          a3,
          (__int64)v6);
  v9 = v15;
  if ( v15 < 0 )
  {
    v11 = (unsigned int)v15;
    v12 = 55LL;
    goto LABEL_5;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v17);
  return (unsigned int)v9;
}
