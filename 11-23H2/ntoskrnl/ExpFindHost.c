/*
 * XREFs of ExpFindHost @ 0x140821A6C
 * Callers:
 *     ExRegisterExtension @ 0x1408216F0 (ExRegisterExtension.c)
 *     ExRegisterHost @ 0x140821910 (ExRegisterHost.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpFindHost(__int16 a1, __int16 a2)
{
  __int64 result; // rax

  for ( result = ExpHostList; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == &ExpHostList )
      return 0LL;
    if ( *(_WORD *)(result + 24) == a1 && *(_WORD *)(result + 26) == a2 )
      break;
  }
  _InterlockedIncrement((volatile signed __int32 *)(result + 16));
  return result;
}
