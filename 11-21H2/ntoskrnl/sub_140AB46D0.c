/*
 * XREFs of sub_140AB46D0 @ 0x140AB46D0
 * Callers:
 *     sub_14065A1F0 @ 0x14065A1F0 (sub_14065A1F0.c)
 *     sub_14065CD00 @ 0x14065CD00 (sub_14065CD00.c)
 *     sub_140661090 @ 0x140661090 (sub_140661090.c)
 *     sub_140677810 @ 0x140677810 (sub_140677810.c)
 *     sub_14067DE90 @ 0x14067DE90 (sub_14067DE90.c)
 *     sub_14067EFD0 @ 0x14067EFD0 (sub_14067EFD0.c)
 *     sub_14067F130 @ 0x14067F130 (sub_14067F130.c)
 *     sub_14067F8D0 @ 0x14067F8D0 (sub_14067F8D0.c)
 *     sub_14068A7FC @ 0x14068A7FC (sub_14068A7FC.c)
 *     sub_14068B1C8 @ 0x14068B1C8 (sub_14068B1C8.c)
 *     sub_14068E4E0 @ 0x14068E4E0 (sub_14068E4E0.c)
 *     sub_1406A1370 @ 0x1406A1370 (sub_1406A1370.c)
 *     sub_1406A5C00 @ 0x1406A5C00 (sub_1406A5C00.c)
 *     sub_1406E2A70 @ 0x1406E2A70 (sub_1406E2A70.c)
 *     sub_140713980 @ 0x140713980 (sub_140713980.c)
 *     sub_140714980 @ 0x140714980 (sub_140714980.c)
 *     sub_14071FAA0 @ 0x14071FAA0 (sub_14071FAA0.c)
 *     sub_140721254 @ 0x140721254 (sub_140721254.c)
 *     sub_1407333B0 @ 0x1407333B0 (sub_1407333B0.c)
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 *     sub_1407C0690 @ 0x1407C0690 (sub_1407C0690.c)
 *     sub_1407C1130 @ 0x1407C1130 (sub_1407C1130.c)
 *     sub_1407C1B70 @ 0x1407C1B70 (sub_1407C1B70.c)
 *     sub_1407C9930 @ 0x1407C9930 (sub_1407C9930.c)
 *     sub_1407CABA0 @ 0x1407CABA0 (sub_1407CABA0.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_14080F930 @ 0x14080F930 (sub_14080F930.c)
 *     sub_14083C870 @ 0x14083C870 (sub_14083C870.c)
 *     sub_14085A568 @ 0x14085A568 (sub_14085A568.c)
 *     sub_14085BE8C @ 0x14085BE8C (sub_14085BE8C.c)
 *     sub_14090BC6C @ 0x14090BC6C (sub_14090BC6C.c)
 *     sub_14090E160 @ 0x14090E160 (sub_14090E160.c)
 *     sub_14090E310 @ 0x14090E310 (sub_14090E310.c)
 *     sub_14090E5E0 @ 0x14090E5E0 (sub_14090E5E0.c)
 *     sub_14090E880 @ 0x14090E880 (sub_14090E880.c)
 *     sub_14090E9C0 @ 0x14090E9C0 (sub_14090E9C0.c)
 *     sub_14090EC00 @ 0x14090EC00 (sub_14090EC00.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 *     sub_14090F750 @ 0x14090F750 (sub_14090F750.c)
 *     sub_14090F9B0 @ 0x14090F9B0 (sub_14090F9B0.c)
 *     sub_140918C40 @ 0x140918C40 (sub_140918C40.c)
 *     sub_140918E48 @ 0x140918E48 (sub_140918E48.c)
 *     sub_1409190E8 @ 0x1409190E8 (sub_1409190E8.c)
 *     sub_14091D700 @ 0x14091D700 (sub_14091D700.c)
 *     sub_140B12C84 @ 0x140B12C84 (sub_140B12C84.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     sub_140347810 @ 0x140347810 (sub_140347810.c)
 */

BOOLEAN sub_140AB46D0()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  result = sub_140347810(&stru_140C49420);
  if ( !result )
  {
    KeLeaveCriticalRegion();
    return 0;
  }
  return result;
}
