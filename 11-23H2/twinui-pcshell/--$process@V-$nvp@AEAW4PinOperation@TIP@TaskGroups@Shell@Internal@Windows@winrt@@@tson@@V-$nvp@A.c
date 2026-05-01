/*
 * XREFs of ??$process@V?$nvp@AEAW4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@tson@@V?$nvp@AEAW4PinState@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@2@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAW4PinOperation@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@1@$$QEAV?$nvp@AEAW4PinState@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@1@@Z @ 0x18028C19C
 * Callers:
 *     ??$process@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@input_archive@tson@@AEAAXAEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windows@winrt@@@Z @ 0x18028C0FC (--$process@AEAU_tip_TaskGroupPinUnpinToAllVirtualDesktopTest@TIP@TaskGroups@Shell@Internal@Windo.c)
 * Callees:
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

bool __fastcall tson::input_archive::process<tson::nvp<enum winrt::Windows::Internal::Shell::TaskGroups::TIP::PinOperation &>,tson::nvp<enum winrt::Windows::Internal::Shell::TaskGroups::TIP::PinState &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 *a3)
{
  char v3; // r9
  int v4; // edi
  int v7; // ebp
  _DWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rax
  _DWORD *v11; // rsi
  bool result; // al
  __int64 v13; // rdx
  int v14; // [rsp+40h] [rbp+8h] BYREF

  v3 = *(_BYTE *)(a2 + 8);
  v4 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v3;
  v7 = 0;
  v8 = *(_DWORD **)(a2 + 16);
  v14 = 0;
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v9) = 18;
    tson::input_archive::consume_expected_marker(this, v9, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v14, 4uLL);
    v7 = v14;
  }
  *v8 = v7;
  v10 = *a3;
  *((_BYTE *)this + 24) = *((_BYTE *)a3 + 8);
  *((_QWORD *)this + 2) = v10;
  v11 = (_DWORD *)a3[2];
  v14 = 0;
  result = tson::input_archive::search(this);
  if ( result )
  {
    LOBYTE(v13) = 18;
    tson::input_archive::consume_expected_marker(this, v13, 2147944029LL);
    result = tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v14, 4uLL);
    v4 = v14;
  }
  *v11 = v4;
  return result;
}
