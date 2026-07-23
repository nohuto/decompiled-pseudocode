/*
 * XREFs of sub_1406419B0 @ 0x1406419B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1406419B0(unsigned int a1, __int64 a2)
{
  char i; // bl
  __int64 result; // rax

  for ( i = 0; ; i = 1 )
  {
    do
      result = sub_14042A5E0(a1, a2);
    while ( (_BYTE)result );
    if ( i )
      break;
    a2 = 104LL * a1;
    _InterlockedExchange((volatile __int32 *)(a2 + qword_140C11460 + 96), 0);
  }
  return result;
}
