/*
 * XREFs of sub_1402DF9D0 @ 0x1402DF9D0
 * Callers:
 *     sub_1406974B8 @ 0x1406974B8 (sub_1406974B8.c)
 *     sub_140698AAC @ 0x140698AAC (sub_140698AAC.c)
 *     sub_1406C47D8 @ 0x1406C47D8 (sub_1406C47D8.c)
 *     sub_1406DB1B4 @ 0x1406DB1B4 (sub_1406DB1B4.c)
 *     sub_1407446E0 @ 0x1407446E0 (sub_1407446E0.c)
 *     sub_140772790 @ 0x140772790 (sub_140772790.c)
 *     sub_140772B6C @ 0x140772B6C (sub_140772B6C.c)
 *     sub_14077DF24 @ 0x14077DF24 (sub_14077DF24.c)
 *     sub_14077EF20 @ 0x14077EF20 (sub_14077EF20.c)
 *     sub_14077FAC0 @ 0x14077FAC0 (sub_14077FAC0.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 *     sub_140A2D760 @ 0x140A2D760 (sub_140A2D760.c)
 *     sub_140A3037C @ 0x140A3037C (sub_140A3037C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1402DF9D0(_WORD *a1, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( !a1 )
  {
    result = 3221225485LL;
LABEL_12:
    if ( a3 )
      *a3 = 0LL;
    return result;
  }
  v3 = a2;
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
      *a3 = a2 - v3;
    else
      *a3 = 0LL;
  }
  if ( !v3 )
    goto LABEL_12;
  return result;
}
