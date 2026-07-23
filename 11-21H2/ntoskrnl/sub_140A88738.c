/*
 * XREFs of sub_140A88738 @ 0x140A88738
 * Callers:
 *     sub_1405FE460 @ 0x1405FE460 (sub_1405FE460.c)
 *     sub_1405FE590 @ 0x1405FE590 (sub_1405FE590.c)
 *     sub_1405FE5E0 @ 0x1405FE5E0 (sub_1405FE5E0.c)
 *     sub_1405FE610 @ 0x1405FE610 (sub_1405FE610.c)
 *     sub_1405FE650 @ 0x1405FE650 (sub_1405FE650.c)
 *     sub_140A84180 @ 0x140A84180 (sub_140A84180.c)
 *     sub_140A843D0 @ 0x140A843D0 (sub_140A843D0.c)
 *     sub_140A84630 @ 0x140A84630 (sub_140A84630.c)
 *     sub_140A846E0 @ 0x140A846E0 (sub_140A846E0.c)
 *     sub_140A847C0 @ 0x140A847C0 (sub_140A847C0.c)
 *     sub_140A84860 @ 0x140A84860 (sub_140A84860.c)
 *     sub_140A849F0 @ 0x140A849F0 (sub_140A849F0.c)
 *     sub_140A84BC0 @ 0x140A84BC0 (sub_140A84BC0.c)
 *     sub_140A84F20 @ 0x140A84F20 (sub_140A84F20.c)
 *     sub_140A850E0 @ 0x140A850E0 (sub_140A850E0.c)
 *     sub_140A85150 @ 0x140A85150 (sub_140A85150.c)
 *     sub_140A85220 @ 0x140A85220 (sub_140A85220.c)
 *     sub_140A85260 @ 0x140A85260 (sub_140A85260.c)
 *     sub_140A852B0 @ 0x140A852B0 (sub_140A852B0.c)
 *     sub_140A853A0 @ 0x140A853A0 (sub_140A853A0.c)
 *     sub_140A85550 @ 0x140A85550 (sub_140A85550.c)
 *     sub_140A85600 @ 0x140A85600 (sub_140A85600.c)
 *     sub_140A856B0 @ 0x140A856B0 (sub_140A856B0.c)
 *     sub_140A85840 @ 0x140A85840 (sub_140A85840.c)
 *     sub_140A85910 @ 0x140A85910 (sub_140A85910.c)
 *     sub_140A85960 @ 0x140A85960 (sub_140A85960.c)
 *     sub_140A859A0 @ 0x140A859A0 (sub_140A859A0.c)
 *     sub_140A85AA0 @ 0x140A85AA0 (sub_140A85AA0.c)
 *     sub_140A85CB0 @ 0x140A85CB0 (sub_140A85CB0.c)
 *     sub_140A85CF0 @ 0x140A85CF0 (sub_140A85CF0.c)
 *     sub_140A85D30 @ 0x140A85D30 (sub_140A85D30.c)
 *     sub_140A85DA0 @ 0x140A85DA0 (sub_140A85DA0.c)
 *     sub_140A86160 @ 0x140A86160 (sub_140A86160.c)
 *     sub_140A86450 @ 0x140A86450 (sub_140A86450.c)
 *     sub_140A86510 @ 0x140A86510 (sub_140A86510.c)
 *     sub_140A866D0 @ 0x140A866D0 (sub_140A866D0.c)
 *     sub_140A868E0 @ 0x140A868E0 (sub_140A868E0.c)
 *     sub_140A86C30 @ 0x140A86C30 (sub_140A86C30.c)
 *     sub_140A86E70 @ 0x140A86E70 (sub_140A86E70.c)
 * Callees:
 *     sub_1405FFA20 @ 0x1405FFA20 (sub_1405FFA20.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88948 @ 0x140A88948 (sub_140A88948.c)
 */

__int64 __fastcall sub_140A88738(ULONG_PTR a1, unsigned int a2)
{
  __int64 v3; // rdi
  struct _LIST_ENTRY *v4; // rax
  struct _LIST_ENTRY *Flink; // rax

  v3 = a2;
  if ( dword_140C1AE0C && !a1 )
  {
    sub_140A88948(byte_140C0D98C, "DMA adapters aren't supposed to be NULL anymore", 25LL, 0LL);
    sub_1405FFA20(0xE6u, (unsigned int)(a1 + 25), 0LL, 0LL, 0LL, byte_140C0D98C);
  }
  v4 = sub_140A88430(a1, 1);
  if ( v4 )
    Flink = v4[3].Flink;
  else
    Flink = *(struct _LIST_ENTRY **)(a1 + 8);
  return *(__int64 *)((char *)&Flink->Flink + v3);
}
