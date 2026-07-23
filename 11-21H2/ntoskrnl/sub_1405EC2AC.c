/*
 * XREFs of sub_1405EC2AC @ 0x1405EC2AC
 * Callers:
 *     RtlIncrementCorrelationVector @ 0x1409BB750 (RtlIncrementCorrelationVector.c)
 * Callees:
 *     sub_1409BBA8C @ 0x1409BBA8C (sub_1409BBA8C.c)
 */

__int64 __fastcall sub_1405EC2AC(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // r8d
  int v4; // r9d
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // rax
  char v8; // dl
  int v9; // ecx

  v2 = sub_1409BBA8C(a1, a2, 0xFFFFFFFFLL);
  v6 = v2;
  if ( v2 > 0 )
  {
    v7 = 0LL;
    do
    {
      v8 = *(_BYTE *)(v5 + v7 + 1);
      v9 = v4;
      if ( !v8 )
        break;
      ++v4;
      ++v7;
      if ( v8 != 46 )
        v9 = v3;
      v3 = v9;
    }
    while ( v7 < v6 );
  }
  return v3;
}
