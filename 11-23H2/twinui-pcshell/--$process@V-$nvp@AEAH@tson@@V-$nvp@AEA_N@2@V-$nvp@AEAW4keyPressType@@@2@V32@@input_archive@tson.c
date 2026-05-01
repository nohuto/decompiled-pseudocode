/*
 * XREFs of ??$process@V?$nvp@AEAH@tson@@V?$nvp@AEA_N@2@V?$nvp@AEAW4keyPressType@@@2@V32@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAH@1@$$QEAV?$nvp@AEA_N@1@$$QEAV?$nvp@AEAW4keyPressType@@@1@1@Z @ 0x18025E660
 * Callers:
 *     ??$process@V?$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V12@V12@V?$nvp@AEAI@2@V?$nvp@AEAH@2@V12@V?$nvp@AEAW4keyPressType@@@2@V12@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@000000$$QEAV?$nvp@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@1@00$$QEAV?$nvp@AEAI@1@$$QEAV?$nvp@AEAH@1@0$$QEAV?$nvp@AEAW4keyPressType@@@1@0@Z @ 0x18025FA2C (--$process@V-$nvp@AEA_N@tson@@V12@V12@V12@V12@V12@V12@V-$nvp@AEAV-$basic_string@GU-$char_traits@.c)
 * Callees:
 *     ??$?RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z @ 0x1802246C4 (--$-RAEAH@input_archive@tson@@QEAAAEAV01@AEAH@Z.c)
 *     ??$process@V?$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEA_N@1@@Z @ 0x1804641A0 (--$process@V-$nvp@AEA_N@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ?consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z @ 0x18046BCE4 (-consume_expected_marker@input_archive@tson@@AEAA_NW4archive_marker@details@2@J@Z.c)
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 *     ?search@input_archive@tson@@AEAA_NXZ @ 0x18046DE50 (-search@input_archive@tson@@AEAA_NXZ.c)
 */

__int64 __fastcall tson::input_archive::process<tson::nvp<int &>,tson::nvp<bool &>,tson::nvp<enum keyPressType &>,tson::nvp<bool &>>(
        tson::input_archive *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  char v5; // r10
  char v9; // dl
  int v10; // ebx
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v15; // [rsp+30h] [rbp+8h] BYREF

  v5 = *(_BYTE *)(a2 + 8);
  *((_QWORD *)this + 2) = *(_QWORD *)a2;
  *((_BYTE *)this + 24) = v5;
  tson::input_archive::operator()<int &>((tson::read_buffer **)this, *(_DWORD **)(a2 + 16));
  tson::input_archive::process<tson::nvp<bool &>>(this, a3);
  v9 = *(_BYTE *)(a4 + 8);
  v10 = 0;
  *((_QWORD *)this + 2) = *(_QWORD *)a4;
  *((_BYTE *)this + 24) = v9;
  v11 = *(_DWORD **)(a4 + 16);
  v15 = 0;
  if ( tson::input_archive::search(this) )
  {
    LOBYTE(v12) = 18;
    tson::input_archive::consume_expected_marker(this, v12, 2147944029LL);
    tson::read_buffer::consume_n(*(tson::read_buffer **)this, &v15, 4uLL);
    v10 = v15;
  }
  v13 = a5;
  *v11 = v10;
  return tson::input_archive::process<tson::nvp<bool &>>(this, v13);
}
