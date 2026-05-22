/*
 * XREFs of ??$?RV?$nvp@_N@tson@@@output_archive@tson@@QEAAAEAV01@$$QEAV?$nvp@_N@1@@Z @ 0x180068C20
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18006C660 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 * Callees:
 *     ?reserve@write_buffer@tson@@AEAA_N_K@Z @ 0x18006C474 (-reserve@write_buffer@tson@@AEAA_N_K@Z.c)
 *     ?write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z @ 0x18006D398 (-write_type@output_archive@tson@@AEAA_N_NW4archive_marker@details@2@@Z.c)
 */

__int64 __fastcall tson::output_archive::operator()<tson::nvp<bool>>(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v4; // rax
  char v5; // si
  __int64 v6; // rbx

  v4 = *a2;
  *(_BYTE *)(a1 + 8) = *((_BYTE *)a2 + 8);
  LOBYTE(a3) = 10;
  *(_QWORD *)a1 = v4;
  v5 = *((_BYTE *)a2 + 9);
  LOBYTE(a2) = v5 == 0;
  if ( (unsigned __int8)tson::output_archive::write_type(a1, a2, a3) )
  {
    v6 = *(_QWORD *)(a1 + 144);
    if ( *(_QWORD *)(v6 + 2072) < *(_QWORD *)(v6 + 2080)
      || tson::write_buffer::reserve(*(tson::write_buffer **)(a1 + 144), 1uLL) )
    {
      *(_BYTE *)(*(_QWORD *)(v6 + 2072))++ = v5;
    }
  }
  return a1;
}
