/*
 * XREFs of sub_1406AFBF0 @ 0x1406AFBF0
 * Callers:
 *     sub_1406AD6BC @ 0x1406AD6BC (sub_1406AD6BC.c)
 * Callees:
 *     sub_140236710 @ 0x140236710 (sub_140236710.c)
 */

void *__fastcall sub_1406AFBF0(unsigned int a1)
{
  void *result; // rax
  void *v3; // r8
  __int64 v4; // r9
  unsigned int v5; // eax

  for ( result = sub_140236710(0LL); ; result = sub_140236710(v3) )
  {
    v3 = result;
    if ( !result )
      break;
    v4 = *(_QWORD *)(*(_QWORD *)result + 16600LL);
    if ( a1 )
    {
      if ( a1 < 0xC )
      {
        LOWORD(v5) = 1000;
      }
      else
      {
        v5 = 0x3E8 / (a1 / 6);
        if ( v5 <= 1 )
          LOWORD(v5) = 1;
      }
    }
    else
    {
      LOWORD(v5) = 0;
    }
    *(_WORD *)(v4 + 2348) = v5;
  }
  return result;
}
