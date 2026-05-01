/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@0000$$QEAV?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@1@0@Z @ 0x180220E38
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180220FB0 (--$serialize@Vinput_archive@tson@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVinput_archive@tson@@@Z.c)
 * Callees:
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7,
        __int64 a8)
{
  __int64 *v11; // rdx
  int v12; // ebx
  __int64 v13; // rax
  _DWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rdx

  tson::input_archive::process<tson::nvp<bool &>>(this, a2);
  tson::input_archive::process<tson::nvp<bool &>>(this, a3);
  tson::input_archive::process<tson::nvp<bool &>>(this, a4);
  tson::input_archive::process<tson::nvp<bool &>>(this, a5);
  tson::input_archive::process<tson::nvp<bool &>>(this, a6);
  v11 = a7;
  v12 = 0;
  LODWORD(a5) = 0;
  v13 = *a7;
  *((_BYTE *)this + 24) = *((_BYTE *)a7 + 8);
  *((_QWORD *)this + 2) = v13;
  v14 = (_DWORD *)v11[2];
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v15) = 18;
    tson::input_archive::consume_expected_marker(this, v15, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &a5, 4uLL);
    v12 = a5;
  }
  v16 = a8;
  *v14 = v12;
  return tson::input_archive::process<tson::nvp<bool &>>(this, v16);
}
