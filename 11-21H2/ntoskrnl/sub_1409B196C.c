/*
 * XREFs of sub_1409B196C @ 0x1409B196C
 * Callers:
 *     sub_1409B0FC0 @ 0x1409B0FC0 (sub_1409B0FC0.c)
 *     sub_1409B1074 @ 0x1409B1074 (sub_1409B1074.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     sub_1407E7750 @ 0x1407E7750 (sub_1407E7750.c)
 */

__int64 __fastcall sub_1409B196C(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *v3; // rax
  void *v4; // rbx

LABEL_1:
  for ( i = 0LL; ; i = v3 )
  {
    v3 = sub_1407E7750(a1, i);
    v4 = v3;
    if ( !v3 )
      break;
    if ( (*((_DWORD *)v3 + 29) & 0x400) == 0 && !*((_BYTE *)v3 + 4) )
    {
      ObfReferenceObjectWithTag(v3, 0x65547350u);
      ObfDereferenceObjectWithTag(v4, 0x6E457350u);
      KeWaitForSingleObject(v4, Executive, 0, 0, 0LL);
      ObfDereferenceObjectWithTag(v4, 0x65547350u);
      goto LABEL_1;
    }
  }
  return 0LL;
}
