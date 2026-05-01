/*
 * XREFs of ??$?RAEAUsize_tag@tson@@@input_archive@tson@@QEAAAEAV01@AEAUsize_tag@1@@Z @ 0x180461788
 * Callers:
 *     ??$load_nothrow@HV?$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV?$vector@HV?$allocator@H@std@@@std@@@Z @ 0x18023058C (--$load_nothrow@HV-$allocator@H@std@@@tson@@YAXAEAVinput_archive@0@AEAV-$vector@HV-$allocator@H@.c)
 * Callees:
 *     ?consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z @ 0x18046BD20 (-consume_n@read_buffer@tson@@QEAA_NPEAX_K@Z.c)
 */

__int64 __fastcall tson::input_archive::operator()<tson::size_tag &>(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int16 v7; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  if ( !*(_BYTE *)(a1 + 25) )
  {
    v4 = *(_QWORD *)(a1 + 136);
    if ( v4 )
    {
      v5 = 4 * v4;
    }
    else
    {
      *(_BYTE *)(a1 + 32) = 1;
      v5 = 4LL;
    }
    if ( *(_DWORD *)(v5 + a1 + 32) != 1 && *(int *)(a1 + 8) >= 0 )
      *(_DWORD *)(a1 + 8) = -2147023267;
    v7 = 0;
    tson::read_buffer::consume_n(*(tson::read_buffer **)a1, &v7, 2uLL);
    *a2 = v7;
  }
  return a1;
}
