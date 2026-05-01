/*
 * XREFs of ?s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z @ 0x18075F140
 * Callers:
 *     ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x18074EDC0 (-RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z.c)
 *     ?_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z @ 0x18075E800 (-_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     ?s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18075F2A4 (-s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CPinnedList::s_GetDarwinLinkInfo(
        struct IShellLinkW *a1,
        int *a2,
        unsigned __int16 *a3,
        unsigned int a4)
{
  __int64 v4; // rbp
  unsigned int v7; // esi
  int FeatureStateFromDescriptorW; // eax
  bool v9; // zf
  int v10; // eax
  HLOCAL hMem; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h] BYREF
  int v14; // [rsp+30h] [rbp-38h] BYREF

  v4 = a4;
  if ( a3 )
    *a3 = 0;
  if ( a2 )
    *a2 = 0;
  v7 = 0;
  if ( ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
         a1,
         &GUID_45e2b4ae_b1c3_11d0_b92f_00a0c90312e1,
         &v13) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v13 + 48LL))(v13, &v14) >= 0 && (v14 & 0x1000) != 0 )
    {
      v7 = 1;
      if ( (*(int (__fastcall **)(__int64, __int64, HLOCAL *))(*(_QWORD *)v13 + 32LL))(v13, 2684354566LL, &hMem) >= 0 )
      {
        if ( a2 )
        {
          FeatureStateFromDescriptorW = MsiQueryFeatureStateFromDescriptorW((char *)hMem + 268);
          if ( FeatureStateFromDescriptorW < 0 || (v9 = FeatureStateFromDescriptorW == 2, v10 = 1, v9) )
            v10 = 0;
          *a2 = v10;
        }
        if ( a3 )
          StringCchCopyW(a3, v4, (const wchar_t *)hMem + 134);
        LocalFree(hMem);
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return v7;
}
