/*
 * XREFs of ?make_string_tag@tson@@YA?AUstring_tag@1@PEBG@Z @ 0x18009E8F4
 * Callers:
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z @ 0x18009ED20 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAUtest_flag@tip2@@@Z.c)
 *     ?save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z @ 0x18009F074 (-save_nothrow@tson@@YAXAEAVoutput_archive@1@AEAVStoredFailureInfo@wil@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall tson::make_string_tag(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a2;
  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( *(_WORD *)(a2 + 2 * v2) );
  }
  else
  {
    v2 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = v2;
  result = a1;
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}
