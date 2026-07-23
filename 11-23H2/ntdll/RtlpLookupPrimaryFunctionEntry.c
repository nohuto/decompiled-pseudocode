/*
 * XREFs of RtlpLookupPrimaryFunctionEntry @ 0x18007E134
 * Callers:
 *     RtlDispatchException @ 0x18001E680 (RtlDispatchException.c)
 *     RtlpSameFunction @ 0x18007E0DC (RtlpSameFunction.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1801106A0 (RtlRaiseStatus.c)
 */

_BYTE *__fastcall RtlpLookupPrimaryFunctionEntry(_BYTE *a1, __int64 a2)
{
  unsigned int v2; // r9d
  _BYTE *v3; // r8
  int v5; // ecx
  int v6; // eax

  v2 = 0;
  while ( 1 )
  {
    v3 = (_BYTE *)(a2 + *((unsigned int *)a1 + 2));
    if ( (*v3 & 0x20) == 0 )
      break;
    v5 = (unsigned __int8)v3[2];
    v6 = v5 + 1;
    if ( (v5 & 1) == 0 )
      v6 = (unsigned __int8)v3[2];
    ++v2;
    a1 = &v3[2 * v6 + 4];
    if ( v2 > 0x20 )
      RtlRaiseStatus(-1073741569);
  }
  return a1;
}
