/*
 * XREFs of ?_TryDestinationViaAppID@CTaskbandPin@@IEAAJPEAUIAssociationArray@@PEAUIApplicationResolver@@PEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18074FAC8
 * Callers:
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18074F600 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800ECDD4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z @ 0x1806C9820 (--$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z.c)
 *     ?GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z @ 0x180754248 (-GetAppPathFromShortcut@CPinnedList@@SAJPEAUIShellLinkW@@PEAUIShellItem@@KPEAGH@Z.c)
 */

__int64 __fastcall CTaskbandPin::_TryDestinationViaAppID(
        CTaskbandPin *this,
        struct IAssociationArray *a2,
        struct IApplicationResolver *a3,
        struct IShellItem **a4,
        unsigned __int16 **a5,
        unsigned __int16 **a6)
{
  int AppPathFromShortcut; // ebx
  __int64 v9; // rdx
  void *v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v13; // [rsp+20h] [rbp-E0h]
  struct IShellItem *v14; // [rsp+30h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  struct IShellLinkW *v16; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 v17[264]; // [rsp+50h] [rbp-B0h] BYREF

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  *a6 = 0LL;
  AppPathFromShortcut = (*(__int64 (__fastcall **)(struct IAssociationArray *, __int64, _QWORD, LPVOID *))(*(_QWORD *)a2 + 24LL))(
                          a2,
                          67567638LL,
                          0LL,
                          &pv);
  if ( AppPathFromShortcut >= 0 )
  {
    AppPathFromShortcut = (*(__int64 (__fastcall **)(struct IApplicationResolver *, LPVOID, struct IShellItem **))(*(_QWORD *)a3 + 64LL))(
                            a3,
                            pv,
                            &v14);
    if ( AppPathFromShortcut >= 0 )
    {
      AppPathFromShortcut = ((__int64 (__fastcall *)(struct IShellItem *, _QWORD, const GUID *, GUID *))v14->lpVtbl->BindToHandler)(
                              v14,
                              0LL,
                              &BHID_SFUIObject,
                              &GUID_000214f9_0000_0000_c000_000000000046);
      if ( AppPathFromShortcut >= 0 )
      {
        AppPathFromShortcut = CPinnedList::GetAppPathFromShortcut(v16, v14, 0x4000u, v17, (int)&v16);
        if ( AppPathFromShortcut >= 0 )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( v17[v11] );
          AppPathFromShortcut = _AllocStringWorker<CTCoAllocPolicy>(v10, v9, v17, v11, v13, (void **)a6);
          if ( AppPathFromShortcut >= 0 )
          {
            if ( a4 )
            {
              *a4 = v14;
              v14 = 0LL;
            }
            if ( a5 )
            {
              *a5 = (unsigned __int16 *)pv;
              pv = 0LL;
            }
          }
        }
        ((void (__fastcall *)(struct IShellLinkW *))v16->lpVtbl->Release)(v16);
      }
      SafeRelease<IShellItem>((__int64 *)&v14);
    }
    CoTaskMemFree(pv);
  }
  return (unsigned int)AppPathFromShortcut;
}
