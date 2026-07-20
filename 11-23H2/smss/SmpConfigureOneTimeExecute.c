/*
 * XREFs of SmpConfigureOneTimeExecute @ 0x140007110
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureOneTimeExecute(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  _WORD *v6; // rdx
  unsigned __int64 i; // rax
  unsigned __int64 v8; // rcx

  if ( !a3 )
    return 0LL;
  v6 = a3;
  for ( i = (unsigned __int64)a4 >> 1; i; --i )
  {
    if ( !*v6 )
      break;
    ++v6;
  }
  v8 = i ? ((unsigned __int64)a4 >> 1) - i : 0LL;
  if ( i && 2 * v8 )
    return SmpSaveRegistryValue(a6, a3, 0LL, 1LL, 0LL);
  else
    return 0LL;
}
