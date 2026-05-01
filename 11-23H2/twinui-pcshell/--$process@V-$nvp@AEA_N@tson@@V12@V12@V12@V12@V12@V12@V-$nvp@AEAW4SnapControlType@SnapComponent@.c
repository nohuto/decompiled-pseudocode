/*
 * XREFs of ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@2@V12@@output_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000$$QEAV?$nvp@AEAW4SnapControlType@SnapComponent@Shell@Internal@Windows@winrt@@@1@0@Z @ 0x180220D6C
 * Callers:
 *     ??$serialize@Voutput_archive@tson@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVoutput_archive@tson@@@Z @ 0x180221108 (--$serialize@Voutput_archive@tson@@@_tip_SnapFlyoutShowTest@@QEAAXAEAVoutput_archive@tson@@@Z.c)
 * Callees:
 *     ?saveValue@output_archive@tson@@QEAAX_N@Z @ 0x1800138EC (-saveValue@output_archive@tson@@QEAAX_N@Z.c)
 */

__int64 __fastcall tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
        tson::output_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4,
        __int64 *a5,
        __int64 a6,
        __int64 a7)
{
  char v8; // r10
  char v11; // dl
  __int64 v12; // rax
  __int64 v13; // rax

  v8 = *(_BYTE *)(a2 + 8);
  *(_QWORD *)this = *(_QWORD *)a2;
  *((_BYTE *)this + 8) = v8;
  tson::output_archive::saveValue(this, **(_BYTE **)(a2 + 16));
  v11 = *(_BYTE *)(a3 + 8);
  *(_QWORD *)this = *(_QWORD *)a3;
  *((_BYTE *)this + 8) = v11;
  tson::output_archive::saveValue(this, **(_BYTE **)(a3 + 16));
  v12 = *a4;
  *((_BYTE *)this + 8) = *((_BYTE *)a4 + 8);
  *(_QWORD *)this = v12;
  tson::output_archive::saveValue(this, *(_BYTE *)a4[2]);
  v13 = *a5;
  *((_BYTE *)this + 8) = *((_BYTE *)a5 + 8);
  *(_QWORD *)this = v13;
  tson::output_archive::saveValue(this, *(_BYTE *)a5[2]);
  return tson::output_archive::process<tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<bool &>,tson::nvp<enum winrt::Windows::Internal::Shell::SnapComponent::SnapControlType &>,tson::nvp<bool &>>(
           this,
           a6,
           a7);
}
