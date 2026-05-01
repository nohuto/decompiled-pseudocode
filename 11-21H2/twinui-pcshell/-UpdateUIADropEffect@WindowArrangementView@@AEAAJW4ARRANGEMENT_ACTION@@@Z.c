/*
 * XREFs of ?UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z @ 0x18051D45C
 * Callers:
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x18051CBD8 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLayout@@W4ARRANGEMENT_ACTION@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x180524028 (-GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLay.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowArrangementView::UpdateUIADropEffect(_QWORD *a1, unsigned int a2)
{
  __int64 v4; // rdi
  __int64 (__fastcall *v5)(__int64, GUID *, __int64 *); // rbx
  int v6; // ebx
  int WindowArrangementDropEffect; // eax
  int v9[2]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v10; // [rsp+38h] [rbp-18h]
  __int64 v11; // [rsp+40h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  __int64 v13; // [rsp+70h] [rbp+20h] BYREF
  __int64 v14; // [rsp+80h] [rbp+30h] BYREF

  v13 = 0LL;
  v4 = a1[10];
  v5 = *(__int64 (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v4 + 152LL);
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  v6 = v5(v4, &GUID_959cb746_add4_483a_8acd_059d06f3798a, &v13);
  if ( v6 >= 0 )
  {
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 80LL))(v13, &v14);
    *(_QWORD *)v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v9);
    v10 = -1LL;
    v11 = -1LL;
    WindowArrangementDropEffect = TabletModeDragPattern::GenerateWindowArrangementDropEffect(
                                    a1[11],
                                    a1[14],
                                    a2,
                                    v14,
                                    v9);
    v6 = WindowArrangementDropEffect;
    if ( WindowArrangementDropEffect >= 0 )
    {
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, *(_QWORD *)v9);
      v6 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x672,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\windowarrangementview.cpp",
        (const char *)(unsigned int)WindowArrangementDropEffect);
    }
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v9);
  }
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v13);
  return (unsigned int)v6;
}
