/*
 * XREFs of sub_1409BBAB0 @ 0x1409BBAB0
 * Callers:
 *     RtlValidateCorrelationVector @ 0x1409BB8C0 (RtlValidateCorrelationVector.c)
 * Callees:
 *     sub_1409BBA8C @ 0x1409BBA8C (sub_1409BBA8C.c)
 */

__int64 __fastcall sub_1409BBAB0(_BYTE *a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // r8d
  unsigned int v4; // r9d
  __int64 v5; // r11
  __int64 v6; // rdx
  unsigned int v7; // r10d
  __int64 v8; // rdi

  v1 = sub_1409BBA8C(a1);
  v6 = 0LL;
  do
  {
    v7 = v3;
    if ( v6 >= v1 )
      break;
    LOBYTE(v2) = *(_BYTE *)(v5 + v6 + 1);
    if ( !(_BYTE)v2 )
      break;
    if ( (unsigned __int8)(v2 - 43) <= 0x2Fu && (v8 = 0xFFFFFFC07FF1LL, _bittest64(&v8, (unsigned int)(v2 - 43)))
      || (unsigned __int8)(v2 - 97) <= 0x19u )
    {
      v4 = v3;
    }
    ++v3;
    ++v6;
  }
  while ( v4 == v7 );
  return v4;
}
