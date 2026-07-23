/*
 * XREFs of sub_14053D880 @ 0x14053D880
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x140369B90 (DbgPrintEx.c)
 *     sub_14053A100 @ 0x14053A100 (sub_14053A100.c)
 *     sub_14053BFB8 @ 0x14053BFB8 (sub_14053BFB8.c)
 *     sub_14053D2BC @ 0x14053D2BC (sub_14053D2BC.c)
 *     sub_14053D2E4 @ 0x14053D2E4 (sub_14053D2E4.c)
 *     sub_14053DDB8 @ 0x14053DDB8 (sub_14053DDB8.c)
 */

void __fastcall sub_14053D880(const void **StartContext)
{
  __int64 v2; // rsi

  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: Delete Processing PVCM, VCM:%p(vid:%2lx), PVCM:%p(vid:%2lx)\n",
    *((_DWORD *)KeGetCurrentThread() + 306),
    *((_DWORD *)KeGetCurrentThread() + 308),
    StartContext[5],
    *((_DWORD *)StartContext[5] + 51),
    StartContext,
    *((_DWORD *)StartContext + 6));
  v2 = (__int64)StartContext[4];
  sub_14053D2E4((__int64)StartContext, 2);
  while ( StartContext[76] != StartContext + 76 || !sub_14053D2BC((__int64)StartContext) )
  {
    sub_14053DDB8(StartContext + 80, v2);
    sub_14053DDB8(StartContext + 76, v2);
  }
  sub_14053A100(v2, (__int64)StartContext);
  DbgPrintEx(
    0x7Fu,
    2u,
    "[%04x:%04x]CcReapPrivateVolumeCachemap: PVCM:%p(vid:%2lx) - All lists processed, deleting PVCM\n",
    *((_DWORD *)KeGetCurrentThread() + 306),
    *((_DWORD *)KeGetCurrentThread() + 308),
    StartContext,
    *((_DWORD *)StartContext + 6));
  sub_14053BFB8((char *)StartContext);
}
