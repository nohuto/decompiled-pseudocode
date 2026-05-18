/*
 * XREFs of sub_18009839C @ 0x18009839C
 * Callers:
 *     sub_180098544 @ 0x180098544 (sub_180098544.c)
 *     sub_18009B824 @ 0x18009B824 (sub_18009B824.c)
 * Callees:
 *     memcmp @ 0x18000CA6D (memcmp.c)
 */

char __fastcall sub_18009839C(__int64 a1, size_t *a2, const void **a3)
{
  const void *v3; // r9
  const void *v4; // rcx
  const void *v5; // rax
  size_t v6; // r8
  int v7; // eax
  char v8; // cl

  v3 = a3;
  v4 = a3[2];
  v5 = a2;
  if ( (unsigned __int64)a3[3] >= 0x10 )
    v3 = *a3;
  v6 = a2[2];
  if ( a2[3] >= 0x10 )
    v5 = (const void *)*a2;
  if ( (const void *)v6 != v4 )
    return 1;
  v7 = memcmp(v5, v3, v6);
  v8 = 0;
  if ( v7 )
    return 1;
  return v8;
}
