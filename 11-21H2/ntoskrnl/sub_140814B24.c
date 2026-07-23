/*
 * XREFs of sub_140814B24 @ 0x140814B24
 * Callers:
 *     sub_140814660 @ 0x140814660 (sub_140814660.c)
 *     sub_1408823E0 @ 0x1408823E0 (sub_1408823E0.c)
 *     sub_140AD7DE4 @ 0x140AD7DE4 (sub_140AD7DE4.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 */

__int64 __fastcall sub_140814B24(__int64 a1)
{
  int v1; // edi
  _QWORD *v2; // rdx
  __int64 i; // rsi
  _QWORD *v4; // rax
  void *v5; // rbx

  v1 = 0;
  v2 = 0LL;
  for ( i = a1; ; a1 = i )
  {
    v4 = sub_1407E7750(a1, v2);
    v5 = v4;
    if ( !v4 )
      break;
    v1 = sub_14042A5E0(i, v4);
    if ( v1 < 0 )
    {
      ObfDereferenceObjectWithTag(v5, 0x6E457350u);
      return (unsigned int)v1;
    }
    v2 = v5;
  }
  return (unsigned int)v1;
}
