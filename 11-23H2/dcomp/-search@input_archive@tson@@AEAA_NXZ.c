/*
 * XREFs of ?search@input_archive@tson@@AEAA_NXZ @ 0x18009F220
 * Callers:
 *     ??$?RV?$nvp@AEAD@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAD@1@@Z @ 0x18009C3D4 (--$-RV-$nvp@AEAD@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAD@1@@Z.c)
 *     ??$?RV?$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAE@1@@Z @ 0x18009C4D4 (--$-RV-$nvp@AEAE@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAE@1@@Z.c)
 *     ??$?RV?$nvp@AEAF@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAF@1@@Z @ 0x18009C588 (--$-RV-$nvp@AEAF@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAF@1@@Z.c)
 *     ??$?RV?$nvp@AEAJ@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAJ@1@@Z @ 0x18009C5F0 (--$-RV-$nvp@AEAJ@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAJ@1@@Z.c)
 *     ??$?RV?$nvp@AEAK@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAK@1@@Z @ 0x18009C658 (--$-RV-$nvp@AEAK@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAK@1@@Z.c)
 *     ??$?RV?$nvp@AEAN@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEAN@1@@Z @ 0x18009C6C0 (--$-RV-$nvp@AEAN@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEAN@1@@Z.c)
 *     ??$?RV?$nvp@AEA_J@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_J@1@@Z @ 0x18009C90C (--$-RV-$nvp@AEA_J@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_J@1@@Z.c)
 *     ??$?RV?$nvp@AEA_K@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_K@1@@Z @ 0x18009C974 (--$-RV-$nvp@AEA_K@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_K@1@@Z.c)
 *     ??$?RV?$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@AEA_N@1@@Z @ 0x18009C9DC (--$-RV-$nvp@AEA_N@tson@@@input_archive@tson@@QEAAAEAV01@$$QEAV-$nvp@AEA_N@1@@Z.c)
 *     ??$process@V?$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV?$nvp@AEAG@1@@Z @ 0x18009CDF8 (--$process@V-$nvp@AEAG@tson@@@input_archive@tson@@AEAAX$$QEAV-$nvp@AEAG@1@@Z.c)
 *     ??$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_buffer_tag@1@@Z @ 0x18009D1F0 (--$read_string_buffer@Uansistring_buffer_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@de.c)
 *     ??$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUansistring_tag@1@@Z @ 0x18009D2CC (--$read_string_two_phase@Uansistring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@detail.c)
 *     ??$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@AEAUstring_tag@1@@Z @ 0x18009D370 (--$read_string_two_phase@Ustring_tag@tson@@@input_archive@tson@@AEAAXW4archive_marker@details@1@.c)
 *     ?startNode@input_archive@tson@@QEAAXXZ @ 0x18009F7B8 (-startNode@input_archive@tson@@QEAAXXZ.c)
 * Callees:
 *     ?advance@read_buffer@tson@@QEAAPEAEXZ @ 0x18009DB98 (-advance@read_buffer@tson@@QEAAPEAEXZ.c)
 *     memcmp_0 @ 0x1800A8120 (memcmp_0.c)
 */

char __fastcall tson::input_archive::search(tson::input_archive *this)
{
  const char *v1; // r9
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int8 *v6; // rax
  unsigned __int8 v7; // al
  _BYTE *v8; // rdx
  _BYTE *v9; // rcx

  v1 = (const char *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  *((_BYTE *)this + 25) = 0;
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    v4 = 4 * v3;
  }
  else
  {
    *((_BYTE *)this + 32) = 1;
    v4 = 4LL;
  }
  if ( *(_DWORD *)((char *)this + v4 + 32) == 1 )
    return 1;
  v5 = *(_QWORD *)this;
  v6 = *(unsigned __int8 **)(*(_QWORD *)this + 8LL);
  if ( (unsigned __int64)v6 >= *(_QWORD *)(*(_QWORD *)this + 16LL) )
    v7 = 0;
  else
    v7 = *v6;
  if ( v7 != 6 )
  {
    if ( (unsigned int)v7 - 7 >= 2 )
    {
      if ( !v1 )
      {
        v1 = "-";
        *((_BYTE *)this + 24) = 1;
      }
      v8 = *(_BYTE **)(v5 + 8);
      v9 = &v8[*((unsigned __int8 *)this + 24) + 2];
      if ( (unsigned __int64)v9 > *(_QWORD *)(v5 + 16) )
      {
        *(_BYTE *)(v5 + 24) = 1;
      }
      else
      {
        *(_QWORD *)(v5 + 8) = v9;
        if ( v8 )
        {
          if ( *v8 != 5 && *((int *)this + 2) >= 0 )
            *((_DWORD *)this + 2) = -2147023267;
          if ( (v8[1] != *((_BYTE *)this + 24) || memcmp_0(v1, v8 + 2, *((unsigned __int8 *)this + 24)))
            && *((int *)this + 2) >= 0 )
          {
            *((_DWORD *)this + 2) = -2147023092;
          }
        }
      }
      return 1;
    }
    *((_BYTE *)this + 25) = 1;
  }
  tson::read_buffer::advance((tson::read_buffer *)v5);
  return 0;
}
