/*
 * XREFs of sub_140753094 @ 0x140753094
 * Callers:
 *     sub_14036A5FC @ 0x14036A5FC (sub_14036A5FC.c)
 *     sub_14036A698 @ 0x14036A698 (sub_14036A698.c)
 *     sub_14036A8F0 @ 0x14036A8F0 (sub_14036A8F0.c)
 *     sub_140752ECC @ 0x140752ECC (sub_140752ECC.c)
 *     sub_1407EE7A0 @ 0x1407EE7A0 (sub_1407EE7A0.c)
 *     sub_1407EF930 @ 0x1407EF930 (sub_1407EF930.c)
 *     sub_1407EFDC8 @ 0x1407EFDC8 (sub_1407EFDC8.c)
 *     sub_140806FC0 @ 0x140806FC0 (sub_140806FC0.c)
 *     sub_14081CBF0 @ 0x14081CBF0 (sub_14081CBF0.c)
 *     sub_1408630F0 @ 0x1408630F0 (sub_1408630F0.c)
 *     sub_140863534 @ 0x140863534 (sub_140863534.c)
 *     sub_140989CF0 @ 0x140989CF0 (sub_140989CF0.c)
 *     sub_140989DA0 @ 0x140989DA0 (sub_140989DA0.c)
 *     sub_140989DD4 @ 0x140989DD4 (sub_140989DD4.c)
 *     sub_140989E98 @ 0x140989E98 (sub_140989E98.c)
 *     sub_140989EE0 @ 0x140989EE0 (sub_140989EE0.c)
 *     sub_140989F5C @ 0x140989F5C (sub_140989F5C.c)
 *     sub_140989FA4 @ 0x140989FA4 (sub_140989FA4.c)
 *     sub_14098A060 @ 0x14098A060 (sub_14098A060.c)
 *     sub_14098A13C @ 0x14098A13C (sub_14098A13C.c)
 *     sub_14098C7F4 @ 0x14098C7F4 (sub_14098C7F4.c)
 * Callees:
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 */

struct _KTHREAD *__fastcall sub_140753094(char a1)
{
  struct _KTHREAD *CurrentThread; // rax

  if ( a1 )
    return sub_1402D66A8((ULONG_PTR)&qword_140C24280);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  return (struct _KTHREAD *)ExAcquirePushLockSharedEx((ULONG_PTR)&qword_140C24280, 0LL);
}
