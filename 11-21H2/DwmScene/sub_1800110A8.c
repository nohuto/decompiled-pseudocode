/*
 * XREFs of sub_1800110A8 @ 0x1800110A8
 * Callers:
 *     sub_180011088 @ 0x180011088 (sub_180011088.c)
 * Callees:
 *     sub_1800120D4 @ 0x1800120D4 (sub_1800120D4.c)
 *     sub_18001D684 @ 0x18001D684 (sub_18001D684.c)
 */

unsigned __int64 __fastcall sub_1800110A8(unsigned __int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
LABEL_5:
    sub_1800120D4();
  v1 = sub_18001D684(a1 + 39);
  v3 = v1;
  if ( !v1 )
  {
    o__invalid_parameter_noinfo_noreturn(0LL, v2);
    __debugbreak();
    goto LABEL_5;
  }
  result = (v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v3;
  return result;
}
