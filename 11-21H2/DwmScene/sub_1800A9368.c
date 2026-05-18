/*
 * XREFs of sub_1800A9368 @ 0x1800A9368
 * Callers:
 *     sub_1801071D0 @ 0x1801071D0 (sub_1801071D0.c)
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 */

__int64 __fastcall sub_1800A9368(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int64 v3; // rdx
  __int64 result; // rax
  char *v5; // rcx

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 40);
    if ( v3 >= 0x10 )
      result = sub_180010884(*(char **)(v1 + 16), v3 + 1);
    *(_QWORD *)(v1 + 32) = 0LL;
    *(_QWORD *)(v1 + 40) = 15LL;
    *(_BYTE *)(v1 + 16) = 0;
  }
  v5 = *(char **)(a1 + 8);
  if ( v5 )
    return sub_180010884(v5, 0x38uLL);
  return result;
}
