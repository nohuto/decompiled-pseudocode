/*
 * XREFs of RtlValidateCorrelationVector @ 0x1409BB8C0
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1409BB750 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     strncmp @ 0x1403E0910 (strncmp.c)
 *     sub_1405EC264 @ 0x1405EC264 (sub_1405EC264.c)
 *     sub_1409BBA8C @ 0x1409BBA8C (sub_1409BBA8C.c)
 *     sub_1409BBAB0 @ 0x1409BBAB0 (sub_1409BBAB0.c)
 */

DWORD __cdecl RtlValidateCorrelationVector(PCORRELATION_VECTOR Vector)
{
  int v2; // esi
  __int64 v3; // rdx
  int v4; // eax
  int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // rbp
  int v9; // ecx
  __int64 v10; // r8
  CHAR *v11; // rdx

  if ( !Vector )
    return -1073741811;
  if ( (int)sub_1409BBA8C(Vector) < 0 )
    return -1073741811;
  v2 = sub_1409BBAB0(Vector);
  v4 = sub_1405EC264((__int64)Vector, v3);
  if ( v4 < 0 )
    return -1073741811;
  if ( Vector->Version == 1 )
  {
    if ( v2 != 15 )
      return -1073741811;
  }
  else if ( Vector->Version == 2 && v2 != 21 )
  {
    return -1073741811;
  }
  v6 = v2 + 1;
  v7 = v6;
  if ( Vector->Vector[v6] != 46 )
    return -1073741811;
  v8 = v4;
  while ( v7 < v8 )
  {
    if ( Vector->Vector[v7] == 46 )
    {
      ++v6;
      ++v7;
      v9 = 0;
      v10 = v6;
      if ( v7 < v8 )
      {
        v11 = &Vector->Vector[v7];
        do
        {
          if ( (unsigned __int8)(*v11 - 48) > 9u )
            break;
          ++v6;
          ++v7;
          ++v11;
          ++v9;
        }
        while ( v7 < v8 );
        if ( v9 && v9 <= 10 && (v9 != 10 || strncmp(&Vector->Vector[v10], "2147483647", 0xAuLL) <= 0) )
          continue;
      }
    }
    return -1073741811;
  }
  return 0;
}
