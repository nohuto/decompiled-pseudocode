/*
 * XREFs of ?IShellItem_GetFilePlaceholderStatus@@YAJPEAUIShellItem@@PEAK@Z @ 0x18079AEB0
 * Callers:
 *     ?_IsFilePlaceholder@@YA_NPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z @ 0x18079B31C (-_IsFilePlaceholder@@YA_NPEAUIShellFolder@@PEFBU_ITEMID_CHILD@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitFromItem@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYSTOREFLAGS@@PEBU_tagpropertykey@@I@Z @ 0x1806A2E8C (-InitFromItem@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEAAJPEAUIUnknown@@W4GETPROPERTYS.c)
 *     ??$GetAsUInt32@U_tagpropertykey@@@?$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpropertykey@@PEAK@Z @ 0x1807413FC (--$GetAsUInt32@U_tagpropertykey@@@-$PropertyStoreHelperBase@UIPropertyStore@@@wil@@QEBAJU_tagpro.c)
 *     ??R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ @ 0x18079A5B8 (--R_lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_@@QEBA@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall IShellItem_GetFilePlaceholderStatus(struct IShellItem *a1, unsigned int *a2)
{
  int As; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdx
  PROPERTYKEY v8; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v10; // [rsp+68h] [rbp+18h] BYREF
  bool *v11; // [rsp+70h] [rbp+20h] BYREF

  *a2 = 7;
  LOBYTE(v10) = 1;
  v11 = (bool *)&v10;
  _lambda_ea9c6a719f4a9bb818bf1c421ccbcdfc_::operator()(&v11, (const unsigned __int16 **)a2);
  if ( !(_BYTE)v10
    || ((unsigned int (__fastcall *)(struct IShellItem *, __int64, __int64 *))a1->lpVtbl->GetAttributes)(
         a1,
         0x40000000LL,
         &v10) )
  {
    return 0LL;
  }
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v10);
  As = wil::PropertyStoreHelperBase<IPropertyStore>::InitFromItem(
         &v10,
         a1,
         8u,
         (__int64)&PKEY_FilePlaceholderStatus,
         1u);
  v5 = As;
  if ( As >= 0 )
  {
    v8 = PKEY_FilePlaceholderStatus;
    As = wil::PropertyStoreHelperBase<IPropertyStore>::GetAsUInt32<_tagpropertykey>(&v10, (__int128 *)&v8, a2);
    v5 = As;
    if ( As == -2147023728 )
    {
      *a2 = 7;
    }
    else if ( As < 0 )
    {
      v6 = 203LL;
      goto LABEL_11;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
    return 0LL;
  }
  v6 = 202LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"onecoreuap\\internal\\shell\\inc\\private\\itemutil.h",
    (const char *)(unsigned int)As);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  return v5;
}
