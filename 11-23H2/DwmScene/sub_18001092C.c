/*
 * XREFs of sub_18001092C @ 0x18001092C
 * Callers:
 *     sub_18001090C @ 0x18001090C (sub_18001090C.c)
 * Callees:
 *     sub_180011AC4 @ 0x180011AC4 (sub_180011AC4.c)
 *     sub_18001C190 @ 0x18001C190 (sub_18001C190.c)
 */

unsigned __int64 __fastcall sub_18001092C(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    sub_180011AC4();
  v1 = sub_18001C190(a1 + 39);
  v2 = v1;
  if ( !v1 )
  {
    o__invalid_parameter_noinfo_noreturn();
    __debugbreak();
    JUMPOUT(0x18001096ELL);
  }
  result = (v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v2;
  return result;
}
