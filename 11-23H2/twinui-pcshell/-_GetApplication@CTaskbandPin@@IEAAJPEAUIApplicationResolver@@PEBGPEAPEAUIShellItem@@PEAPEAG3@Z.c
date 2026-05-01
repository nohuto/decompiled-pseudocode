/*
 * XREFs of ?_GetApplication@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEBGPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18074F380
 * Callers:
 *     ?_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAUIShellItem@@PEAPEAG3@Z @ 0x18074F600 (-_ProcessDestinationFile@CTaskbandPin@@IEAAJPEAUIApplicationResolver@@PEFBU_ITEMIDLIST@@KPEAPEAU.c)
 *     ?v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@PEAPEAG43@Z @ 0x18074FDD0 (-v_IsAcceptableTarget@CTaskbandPin@@MEAAHPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAP.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18004EB90 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800ECDD4 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z @ 0x1806C9820 (--$SafeRelease@UIShellItem@@@@YAXPEAPEAUIShellItem@@@Z.c)
 *     ?_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z @ 0x18074F57C (-_GetShellItem@CTaskbandPin@@IEAAJPEBGPEAPEAUIShellItem@@@Z.c)
 *     ?GenerateAppID@CPinnedList@@SAJPEBG00PEAPEAG@Z @ 0x18075411C (-GenerateAppID@CPinnedList@@SAJPEBG00PEAPEAG@Z.c)
 *     ?_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z @ 0x18075E468 (-_IsLocalHardDisk@CPinnedList@@IEAAHPEBG@Z.c)
 */

__int64 __fastcall CTaskbandPin::_GetApplication(
        CTaskbandPin *this,
        struct IApplicationResolver *a2,
        const unsigned __int16 *a3,
        struct IShellItem **a4,
        unsigned __int16 **a5,
        unsigned __int16 **a6)
{
  int ShellItem; // ebx
  DWORD v10; // r11d
  CTaskbandPin *v11; // rcx
  const unsigned __int16 *v12; // rdx
  void *v13; // rcx
  unsigned __int64 v14; // r9
  const unsigned __int16 *v16; // r8
  __int64 v17; // [rsp+20h] [rbp-E0h]
  struct IShellItem *v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t szShortPath[264]; // [rsp+40h] [rbp-C0h] BYREF

  if ( a4 )
    *a4 = 0LL;
  if ( a5 )
    *a5 = 0LL;
  if ( a6 )
    *a6 = 0LL;
  ShellItem = -2147467259;
  if ( CPinnedList::_IsLocalHardDisk(this, a3) )
  {
    ShellItem = StringCchCopyW(szShortPath, 260LL, a3);
    if ( ShellItem >= 0 )
    {
      if ( a6 && !GetLongPathNameW(szShortPath, szShortPath, v10) )
        ResultFromKnownLastError();
      ShellItem = (*(__int64 (__fastcall **)(struct IApplicationResolver *, wchar_t *, struct IShellItem **, unsigned __int16 **))(*(_QWORD *)a2 + 72LL))(
                    a2,
                    szShortPath,
                    v18,
                    a5);
      if ( ShellItem >= 0 )
      {
        if ( a4 )
        {
          *a4 = v18[0];
          v18[0] = 0LL;
        }
        SafeRelease<IShellItem>((__int64 *)v18);
        goto LABEL_16;
      }
      ShellItem = CTaskbandPin::_GetShellItem(v11, szShortPath, v18);
      if ( ShellItem >= 0 )
      {
        ShellItem = (*(__int64 (__fastcall **)(struct IApplicationResolver *, struct IShellItem *))(*(_QWORD *)a2 + 80LL))(
                      a2,
                      v18[0]);
        if ( ShellItem >= 0 && a4 )
        {
          *a4 = v18[0];
          v18[0] = 0LL;
        }
        SafeRelease<IShellItem>((__int64 *)v18);
        if ( ShellItem >= 0 )
        {
          if ( !a5 || (ShellItem = CPinnedList::GenerateAppID(szShortPath, v12, v16, a5), ShellItem >= 0) )
          {
LABEL_16:
            if ( a6 )
            {
              v14 = -1LL;
              do
                ++v14;
              while ( szShortPath[v14] );
              return (unsigned int)_AllocStringWorker<CTCoAllocPolicy>(
                                     v13,
                                     (__int64)v12,
                                     szShortPath,
                                     v14,
                                     v17,
                                     (void **)a6);
            }
            return (unsigned int)ShellItem;
          }
          if ( a4 )
            SafeRelease<IShellItem>((__int64 *)a4);
        }
      }
    }
  }
  return (unsigned int)ShellItem;
}
