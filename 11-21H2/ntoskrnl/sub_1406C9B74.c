/*
 * XREFs of sub_1406C9B74 @ 0x1406C9B74
 * Callers:
 *     sub_140687EEC @ 0x140687EEC (sub_140687EEC.c)
 *     sub_1406C9A70 @ 0x1406C9A70 (sub_1406C9A70.c)
 *     sub_1407AC250 @ 0x1407AC250 (sub_1407AC250.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1406C9B74(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 result; // rax
  bool v4; // zf

  v2 = *(_QWORD *)(a1 + 1296);
  result = 291LL;
  while ( v2 )
  {
    v4 = v2 == a2;
    v2 = *(_QWORD *)(v2 + 1264);
    if ( v4 )
      result = 292LL;
  }
  return result;
}
