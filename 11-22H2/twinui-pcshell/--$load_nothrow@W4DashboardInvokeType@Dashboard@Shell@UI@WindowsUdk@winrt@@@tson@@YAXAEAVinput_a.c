/*
 * XREFs of ??$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@Z @ 0x180230670
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180232188 (--$serialize@Vinput_archive@tson@@@_tip_ToggleDashboardThroughSVC@@QEAAXAEAVinput_archive@tson@@.c)
 * Callees:
 *     ??$?RAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@input_archive@tson@@QEAAAEAV01@AEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18022ED84 (--$-RAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@input_archive@tson@@QEAAAEAV.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 *     ?value@?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGAAAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@XZ @ 0x180698FD0 (-value@-$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@QEGAAAEAW4Das.c)
 */

unsigned __int8 __fastcall tson::load_nothrow<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>(
        tson::input_archive *a1,
        __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  char *v6; // rax
  char v7; // cl
  unsigned __int8 result; // al
  _DWORD *v9; // rax
  unsigned __int8 v11; // [rsp+40h] [rbp+18h]

  if ( tson::input_archive::search(a1) )
  {
    LOBYTE(v4) = 10;
    tson::input_archive::consume_expected_marker(a1, v4, 2147944029LL);
    v5 = *(_QWORD *)a1;
    v6 = *(char **)(*(_QWORD *)a1 + 8LL);
    if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)a1 + 16LL) )
    {
      *(_BYTE *)(v5 + 24) = 1;
      result = v11;
    }
    else
    {
      v7 = *v6;
      *(_QWORD *)(v5 + 8) = v6 + 1;
      result = v7 != 0;
    }
  }
  else
  {
    result = 0;
  }
  *(_BYTE *)(a2 + 4) = 0;
  if ( result )
  {
    *(_DWORD *)a2 = 0;
    *(_BYTE *)(a2 + 4) = 1;
    try
    {
      v9 = (_DWORD *)std::optional<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType>::value();
      result = (unsigned __int8)tson::input_archive::operator()<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType &>(
                                  (tson::read_buffer **)a1,
                                  v9);
    }
    catch ( ... )
    {
      result = (unsigned __int8)a1;
      if ( *((int *)a1 + 2) >= 0 )
        *((_DWORD *)a1 + 2) = -2147024882;
    }
  }
  return result;
}
