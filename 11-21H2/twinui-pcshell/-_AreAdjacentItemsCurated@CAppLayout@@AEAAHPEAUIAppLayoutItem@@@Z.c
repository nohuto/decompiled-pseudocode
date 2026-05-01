/*
 * XREFs of ?_AreAdjacentItemsCurated@CAppLayout@@AEAAHPEAUIAppLayoutItem@@@Z @ 0x1806180C4
 * Callers:
 *     ?IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z @ 0x180617190 (-IsCurated@CAppLayout@@UEAAHPEAUIAppLayoutItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B7A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_TYPE@@AEBU_GUID@@PEAPEAX@Z @ 0x1806188A4 (-_GetAdjacentItem@CAppLayout@@AEAAJPEAUIAppLayoutItem@@W4ABSOLUTE_DIRECTION@@W4APP_LAYOUT_ITEM_T.c)
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
    (__int64)"pcshell\\twinui\\applayout\\lib\\applayout.cpp",
    (const char *)(unsigned int)AdjacentItem);
LABEL_7:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v11);
  return v2;
}
