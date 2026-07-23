/*
 * XREFs of sub_1405029CC @ 0x1405029CC
 * Callers:
 *     sub_140502688 @ 0x140502688 (sub_140502688.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1405029CC(_BYTE *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // rdx
  __int64 result; // rax

  v3 = 256LL;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0xC000000D : 0;
  if ( a3 )
  {
    if ( v3 )
      *a3 = 256 - v3;
    else
      *a3 = 0LL;
  }
  return result;
}
