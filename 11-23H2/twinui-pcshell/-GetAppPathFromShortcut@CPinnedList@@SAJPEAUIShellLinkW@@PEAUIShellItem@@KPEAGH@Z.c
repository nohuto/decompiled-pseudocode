/*
 * XREFs of ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x180754248
 * Callers:
 *     ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18074FAC8 (-_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEA.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18074FDD0 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 *     ?v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18075F610 (-v_IsAcceptableTarget@CPinnedList@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPinnedList::GetAppPathFromShortcut(
        struct IShellLinkW *a1,
        struct IShellItem *a2,
        unsigned int a3,
        unsigned __int16 *a4)
{
  unsigned int v8; // esi
  HRESULT v9; // eax
  int v10; // ebx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  LPVOID v13; // rbx
  __int64 (__fastcall *v14)(LPVOID, struct IShellLinkW *, struct IShellItem *, _QWORD, wchar_t **, _QWORD, _QWORD); // rdi
  LPVOID ppv; // [rsp+40h] [rbp-38h] BYREF
  wchar_t *v17[2]; // [rsp+48h] [rbp-30h] BYREF
  __int64 v18; // [rsp+58h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+40h]

  v8 = 0;
  v17[0] = 0LL;
  v17[1] = 0LL;
  v18 = 0LL;
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  v9 = CoCreateInstance(&stru_1808B7BC8, 0LL, 3u, &GUID_6c6c33ee_f1d4_1bdd_601d_0fa334303bc2, &ppv);
  v10 = v9;
  if ( v9 < 0 )
  {
    v11 = (unsigned int)v9;
    v12 = 4132LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\shell\\pinninglib\\lib\\PinnedList.cpp",
      (const char *)v11);
    goto LABEL_10;
  }
  v13 = ppv;
  v14 = *(__int64 (__fastcall **)(LPVOID, struct IShellLinkW *, struct IShellItem *, _QWORD, wchar_t **, _QWORD, _QWORD))(*(_QWORD *)ppv + 32LL);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v17);
  v17[1] = (wchar_t *)-1LL;
  v18 = -1LL;
  v10 = v14(v13, a1, a2, a3, v17, 0LL, 0LL);
  if ( v10 >= 0 )
  {
    if ( v17[0] )
    {
      v10 = StringCchCopyW(a4, 260LL, v17[0]);
      if ( v10 >= 0 )
        goto LABEL_11;
    }
    else
    {
      *a4 = 0;
      v10 = -2147023728;
    }
    v11 = (unsigned int)v10;
    v12 = 4134LL;
    goto LABEL_9;
  }
LABEL_10:
  v8 = v10;
LABEL_11:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&ppv);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)v17);
  return v8;
}
