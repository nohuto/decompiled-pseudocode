/*
 * XREFs of sub_140973418 @ 0x140973418
 * Callers:
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_14075FC44 @ 0x14075FC44 (sub_14075FC44.c)
 * Callees:
 *     sub_14025D494 @ 0x14025D494 (sub_14025D494.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall sub_140973418(PVOID P)
{
  unsigned __int64 v1; // rbx
  unsigned __int64 v3; // rdi

  v1 = 0LL;
  v3 = 8LL * (((unsigned int)dword_140C4F478 >> 12) + ((dword_140C4F478 & 0xFFF) != 0));
  if ( v3 )
  {
    do
    {
      sub_14025D494((unsigned __int64)P + v1);
      v1 += 4096LL;
    }
    while ( v1 < v3 );
  }
  ExFreePoolWithTag(P, 0);
}
