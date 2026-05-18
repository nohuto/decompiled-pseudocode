/*
 * XREFs of sub_18001E804 @ 0x18001E804
 * Callers:
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 *     sub_180050E70 @ 0x180050E70 (sub_180050E70.c)
 *     sub_18008EE7C @ 0x18008EE7C (sub_18008EE7C.c)
 * Callees:
 *     <none>
 */

void **__fastcall sub_18001E804(void **a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  bool v3; // cf
  void **result; // rax

  v2 = (unsigned __int64)a1[2];
  if ( v2 >= (unsigned __int64)a1[3] )
    return sub_18001E2E0(a1, a2, v2, a2);
  v3 = (unsigned __int64)a1[3] < 0x10;
  result = (void **)(v2 + 1);
  a1[2] = (void *)(v2 + 1);
  if ( !v3 )
    a1 = (void **)*a1;
  *((_BYTE *)a1 + v2) = a2;
  *((_BYTE *)a1 + v2 + 1) = 0;
  return result;
}
