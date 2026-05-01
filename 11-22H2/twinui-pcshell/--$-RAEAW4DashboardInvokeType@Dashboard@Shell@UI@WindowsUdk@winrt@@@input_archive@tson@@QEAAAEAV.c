/*
 * XREFs of ??$?RAEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@input_archive@tson@@QEAAAEAV01@AEAW4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z @ 0x18022ED84
 * Callers:
 *     ??$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_archive@0@AEAV?$optional@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@std@@@Z @ 0x180230670 (--$load_nothrow@W4DashboardInvokeType@Dashboard@Shell@UI@WindowsUdk@winrt@@@tson@@YAXAEAVinput_a.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

tson::read_buffer **__fastcall tson::input_archive::operator()<enum winrt::WindowsUdk::UI::Shell::Dashboard::DashboardInvokeType &>(
        tson::read_buffer **a1,
        _DWORD *a2)
{
  int v2; // edi
  __int64 v5; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v7 = 0;
  if ( tson::input_archive::search((tson::input_archive *)a1) )
  {
    LOBYTE(v5) = 18;
    tson::input_archive::consume_expected_marker(a1, v5, 2147944029LL);
    tson::read_buffer::consume_n(*a1, &v7, 4uLL);
    v2 = v7;
  }
  *a2 = v2;
  return a1;
}
