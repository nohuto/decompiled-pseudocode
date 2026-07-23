/*
 * XREFs of sub_14084881C @ 0x14084881C
 * Callers:
 *     ExRegisterExtension @ 0x1408484A0 (ExRegisterExtension.c)
 *     sub_1408486C4 @ 0x1408486C4 (sub_1408486C4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14084881C(__int16 a1, __int16 a2)
{
  __int64 result; // rax

  for ( result = qword_140D3CF38; ; result = *(_QWORD *)result )
  {
    if ( (__int64 *)result == &qword_140D3CF38 )
      return 0LL;
    if ( *(_WORD *)(result + 24) == a1 && *(_WORD *)(result + 26) == a2 )
      break;
  }
  _InterlockedIncrement((volatile signed __int32 *)(result + 16));
  return result;
}
