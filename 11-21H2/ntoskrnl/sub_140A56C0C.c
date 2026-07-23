/*
 * XREFs of sub_140A56C0C @ 0x140A56C0C
 * Callers:
 *     HalInitSystem @ 0x140A56BD0 (HalInitSystem.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 * Callees:
 *     sub_140A56C48 @ 0x140A56C48 (sub_140A56C48.c)
 */

bool sub_140A56C0C()
{
  __int64 v0; // rcx

  if ( HIDWORD(KeGetPcr()[1].LockArray) )
    v0 = 19LL;
  else
    v0 = 17LL;
  return (int)sub_140A56C48(v0) >= 0;
}
