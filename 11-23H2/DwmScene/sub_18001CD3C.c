/*
 * XREFs of sub_18001CD3C @ 0x18001CD3C
 * Callers:
 *     sub_18001C7B4 @ 0x18001C7B4 (sub_18001C7B4.c)
 * Callees:
 *     memcmp @ 0x18000CA6D (memcmp.c)
 */

char __fastcall sub_18001CD3C(const void *a1, size_t a2, const void *a3, size_t a4)
{
  size_t v5; // r8
  int v8; // ecx

  v5 = a4;
  if ( a4 >= a2 )
    v5 = a2;
  v8 = memcmp(a1, a3, v5);
  if ( v8 )
    return v8;
  if ( a2 >= a4 )
    return a2 > a4;
  return -1;
}
