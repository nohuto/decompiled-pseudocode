/*
 * XREFs of sub_14071B6EC @ 0x14071B6EC
 * Callers:
 *     sub_14053EBD8 @ 0x14053EBD8 (sub_14053EBD8.c)
 *     sub_14053EE38 @ 0x14053EE38 (sub_14053EE38.c)
 *     sub_14053F5E8 @ 0x14053F5E8 (sub_14053F5E8.c)
 *     sub_14065CE0C @ 0x14065CE0C (sub_14065CE0C.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067E1BC @ 0x14067E1BC (sub_14067E1BC.c)
 *     sub_140689388 @ 0x140689388 (sub_140689388.c)
 *     sub_1406E26C4 @ 0x1406E26C4 (sub_1406E26C4.c)
 *     sub_1406E5950 @ 0x1406E5950 (sub_1406E5950.c)
 *     sub_14071BC94 @ 0x14071BC94 (sub_14071BC94.c)
 *     sub_1407362A0 @ 0x1407362A0 (sub_1407362A0.c)
 *     sub_140742300 @ 0x140742300 (sub_140742300.c)
 *     sub_1407C16A0 @ 0x1407C16A0 (sub_1407C16A0.c)
 *     sub_14082830C @ 0x14082830C (sub_14082830C.c)
 *     sub_14083200C @ 0x14083200C (sub_14083200C.c)
 *     sub_140833B80 @ 0x140833B80 (sub_140833B80.c)
 *     sub_140837E20 @ 0x140837E20 (sub_140837E20.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090D4E8 @ 0x14090D4E8 (sub_14090D4E8.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_14090E310 @ 0x14090E310 (sub_14090E310.c)
 *     sub_14090E5E0 @ 0x14090E5E0 (sub_14090E5E0.c)
 *     sub_14090E9C0 @ 0x14090E9C0 (sub_14090E9C0.c)
 *     sub_14090EC00 @ 0x14090EC00 (sub_14090EC00.c)
 *     sub_1409103FC @ 0x1409103FC (sub_1409103FC.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 *     sub_140914324 @ 0x140914324 (sub_140914324.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_140918C40 @ 0x140918C40 (sub_140918C40.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     sub_140B12C84 @ 0x140B12C84 (sub_140B12C84.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_1402ACA70 @ 0x1402ACA70 (sub_1402ACA70.c)
 *     sub_1402ACD60 @ 0x1402ACD60 (sub_1402ACD60.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN sub_14071B6EC()
{
  struct _KTHREAD *CurrentThread; // rax

  sub_1402ACD60((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  sub_1402ACA70();
  return ExAcquireResourceExclusiveLite((PERESOURCE)&stru_140D31980, 1u);
}
