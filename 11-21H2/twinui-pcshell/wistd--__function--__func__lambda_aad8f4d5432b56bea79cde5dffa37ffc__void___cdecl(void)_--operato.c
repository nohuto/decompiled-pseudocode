/*
 * XREFs of wistd::__function::__func__lambda_aad8f4d5432b56bea79cde5dffa37ffc__void___cdecl(void)_::operator() @ 0x180544AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??$try_query@UIUnknown@@@?$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@1@XZ @ 0x1805440F0 (--$try_query@UIUnknown@@@-$com_ptr_t@UIWeakReference@@Uerr_returncode_policy@wil@@@wil@@QEBA-AV-.c)
 *     ?UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z @ 0x18054C1E8 (-UpdateCurrentDesktopWallpaperPath@CVirtualDesktopManager@@AEAAJPEAUHMONITOR__@@@Z.c)
 */

void __fastcall wistd::__function::__func__lambda_aad8f4d5432b56bea79cde5dffa37ffc__void___cdecl_void__::operator()(
        __int64 a1)
{
  void *v2; // [rsp+30h] [rbp+8h] BYREF

  wil::com_ptr_t<IWeakReference,wil::err_returncode_policy>::try_query<IUnknown>(
    (struct IWeakReference **)(a1 + 16),
    &v2);
  if ( v2 )
    CVirtualDesktopManager::UpdateCurrentDesktopWallpaperPath(
      *(CVirtualDesktopManager **)(a1 + 8),
      *(HMONITOR *)(a1 + 24));
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)&v2);
}
