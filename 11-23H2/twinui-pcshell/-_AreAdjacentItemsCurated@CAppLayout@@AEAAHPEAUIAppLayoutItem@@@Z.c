/*
 * XREFs of ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x1807969F8
 * Callers:
 *     ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180795A20 (-IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800CAB68 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1807971E4 (-_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_T.c)
 */

__int64 __fastcall CAppLayout::_AreAdjacentItemsCurated(CAppLayout *this, struct IAppLayoutItem *a2)
{
  unsigned int v2; // edi
  __int64 *v5; // rbx
  int AdjacentItem; // eax
  __int64 v7; // rdx
  __int64 *v8; // rbx
  __int64 v10; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h] BYREF
  __int128 v12; // [rsp+40h] [rbp-30h] BYREF
  __int128 v13; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v2 = 0;
  v11 = 0LL;
  v10 = 0LL;
  v5 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v11, &v12);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v5);
  AdjacentItem = CAppLayout::_GetAdjacentItem(this, a2, 1LL, 5LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, v5);
  if ( AdjacentItem >= 0 )
  {
    v8 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v10, &v12);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v8);
    AdjacentItem = CAppLayout::_GetAdjacentItem(
                     this,
                     a2,
                     0xFFFFFFFFLL,
                     5LL,
                     &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98,
                     v8);
    if ( AdjacentItem >= 0 )
    {
      v12 = 0LL;
      v13 = 0LL;
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v11 + 56LL))(v11, 0LL, &v12);
      (*(void (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v10 + 56LL))(v10, 0LL, &v13);
      LOBYTE(v2) = (unsigned int)(v13 + 1 + DWORD2(v12) - DWORD2(v13) - v12) <= 2;
      goto LABEL_7;
    }
    v7 = 1226LL;
  }
  else
  {
    v7 = 1225LL;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
    (const char *)(unsigned int)AdjacentItem);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v2;
}
