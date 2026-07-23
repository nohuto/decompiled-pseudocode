/*
 * XREFs of sub_140953CF8 @ 0x140953CF8
 * Callers:
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140953508 @ 0x140953508 (sub_140953508.c)
 * Callees:
 *     sub_140661C18 @ 0x140661C18 (sub_140661C18.c)
 *     sub_140953B2C @ 0x140953B2C (sub_140953B2C.c)
 */

void __fastcall sub_140953CF8(__int64 a1)
{
  __int64 *v1; // rdi
  void *v2; // rbx

  v1 = *(__int64 **)(a1 + 64);
  v2 = (void *)*v1;
  if ( *v1 )
  {
    sub_140953B2C(*v1, a1);
    sub_140661C18(v2);
    *v1 = 0LL;
  }
}
