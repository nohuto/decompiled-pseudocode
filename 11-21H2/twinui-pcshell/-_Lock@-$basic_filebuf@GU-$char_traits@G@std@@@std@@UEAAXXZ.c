/*
 * XREFs of ?_Lock@?$basic_filebuf@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x1805DE290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::_Lock(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 128) )
    return _o__lock_file();
  return result;
}
