/*
 * XREFs of sub_1406045C8 @ 0x1406045C8
 * Callers:
 *     sub_140A9CAB4 @ 0x140A9CAB4 (sub_140A9CAB4.c)
 * Callees:
 *     CarDeregisterRuleClassConfiguration @ 0x1406037F0 (CarDeregisterRuleClassConfiguration.c)
 *     sub_140604620 @ 0x140604620 (sub_140604620.c)
 */

void sub_1406045C8()
{
  unsigned int v0; // ebx
  char *v1; // rdi
  int *v2; // rbx
  __int64 v3; // rdi

  v0 = 0;
  v1 = &byte_140D04BC0;
  do
  {
    if ( *v1 )
      sub_140604620(v0);
    ++v0;
    ++v1;
  }
  while ( v0 < 0x40 );
  v2 = &dword_140C0DA00;
  v3 = 4LL;
  do
  {
    CarDeregisterRuleClassConfiguration((unsigned int)*v2);
    v2 += 4;
    --v3;
  }
  while ( v3 );
}
