/*
 * XREFs of ??$process@V?$nvp@AEAH@tson@@V12@V?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4MultiTaskingViewInputType@SwitcherTip@@@1@@Z @ 0x180289C7C
 * Callers:
 *     ??$serialize@Vinput_archive@tson@@@_tip_TaskViewShowTest@SwitcherTip@@QEAAXAEAVinput_archive@tson@@@Z @ 0x180289DCC (--$serialize@Vinput_archive@tson@@@_tip_TaskViewShowTest@SwitcherTip@@QEAAXAEAVinput_archive@tso.c)
 * Callees:
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1802246C4 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<int &>,tson::nvp<int &>,tson::nvp<enum SwitcherTip::MultiTaskingViewInputType &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  char v4; // r10
  char v8; // dl
  int v9; // ebx
  __int64 v10; // rax
  _DWORD *v11; // rdi
  bool result; // al
  __int64 v13; // rdx
  int v14; // [rsp+30h] [rbp+8h] BYREF

  v4 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v4;
  tson::input_archive::operator()<int &>((tson::read_buffer **)this, *(_DWORD **)(a2 + 16));
  v8 = *(_BYTE *)(a3 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a3;
  *((_BYTE *)this + 24) = v8;
  tson::input_archive::operator()<int &>((tson::read_buffer **)this, *(_DWORD **)(a3 + 16));
  v9 = 0;
  v10 = *a4;
  *((_BYTE *)this + 24) = *((_BYTE *)a4 + 8);
  *((_QWORD *)this + 2) = v10;
  v11 = (_DWORD *)a4[2];
  v14 = 0;
  result = tson::input_archive::search(this);
  if ( result )
  {
    LOBYTE(v13) = 18;
    tson::input_archive::consume_expected_marker(this, v13, 2147944029LL);
    result = tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v14, 4uLL);
    v9 = v14;
  }
  *v11 = v9;
  return result;
}
