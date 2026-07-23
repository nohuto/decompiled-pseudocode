/*
 * XREFs of sub_140224E90 @ 0x140224E90
 * Callers:
 *     sub_140224690 @ 0x140224690 (sub_140224690.c)
 *     sub_140224810 @ 0x140224810 (sub_140224810.c)
 *     PoNotifyVSyncChange @ 0x140224940 (PoNotifyVSyncChange.c)
 *     sub_140225D70 @ 0x140225D70 (sub_140225D70.c)
 *     sub_140389D50 @ 0x140389D50 (sub_140389D50.c)
 *     sub_140399068 @ 0x140399068 (sub_140399068.c)
 *     sub_140399140 @ 0x140399140 (sub_140399140.c)
 *     sub_1403DC9D4 @ 0x1403DC9D4 (sub_1403DC9D4.c)
 *     sub_1403DEC60 @ 0x1403DEC60 (sub_1403DEC60.c)
 *     sub_1405C70B4 @ 0x1405C70B4 (sub_1405C70B4.c)
 *     sub_1405C8AFC @ 0x1405C8AFC (sub_1405C8AFC.c)
 *     sub_1405CF580 @ 0x1405CF580 (sub_1405CF580.c)
 *     sub_1405CF77C @ 0x1405CF77C (sub_1405CF77C.c)
 *     sub_1405CF800 @ 0x1405CF800 (sub_1405CF800.c)
 *     sub_1405D77A0 @ 0x1405D77A0 (sub_1405D77A0.c)
 *     sub_1405D90F0 @ 0x1405D90F0 (sub_1405D90F0.c)
 *     sub_1405DD354 @ 0x1405DD354 (sub_1405DD354.c)
 *     sub_14069DD40 @ 0x14069DD40 (sub_14069DD40.c)
 *     sub_140751B78 @ 0x140751B78 (sub_140751B78.c)
 *     sub_1407EED48 @ 0x1407EED48 (sub_1407EED48.c)
 *     sub_1407F9EBC @ 0x1407F9EBC (sub_1407F9EBC.c)
 *     sub_1407FBB54 @ 0x1407FBB54 (sub_1407FBB54.c)
 *     sub_1407FC3E8 @ 0x1407FC3E8 (sub_1407FC3E8.c)
 *     sub_1407FCE7C @ 0x1407FCE7C (sub_1407FCE7C.c)
 *     sub_1408083DC @ 0x1408083DC (sub_1408083DC.c)
 *     sub_140808958 @ 0x140808958 (sub_140808958.c)
 *     sub_14080BBA0 @ 0x14080BBA0 (sub_14080BBA0.c)
 *     sub_1408310F0 @ 0x1408310F0 (sub_1408310F0.c)
 *     sub_14083113C @ 0x14083113C (sub_14083113C.c)
 *     sub_140848C18 @ 0x140848C18 (sub_140848C18.c)
 *     sub_140849690 @ 0x140849690 (sub_140849690.c)
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 *     sub_140854E78 @ 0x140854E78 (sub_140854E78.c)
 *     sub_140863A40 @ 0x140863A40 (sub_140863A40.c)
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 *     sub_140864980 @ 0x140864980 (sub_140864980.c)
 *     sub_14098CB20 @ 0x14098CB20 (sub_14098CB20.c)
 *     sub_14098E9D8 @ 0x14098E9D8 (sub_14098E9D8.c)
 *     sub_14098EB00 @ 0x14098EB00 (sub_14098EB00.c)
 *     sub_14098ED44 @ 0x14098ED44 (sub_14098ED44.c)
 *     sub_14098EE60 @ 0x14098EE60 (sub_14098EE60.c)
 *     sub_140997BA0 @ 0x140997BA0 (sub_140997BA0.c)
 *     sub_14099D500 @ 0x14099D500 (sub_14099D500.c)
 *     sub_14099D66C @ 0x14099D66C (sub_14099D66C.c)
 *     sub_14099DAA8 @ 0x14099DAA8 (sub_14099DAA8.c)
 *     sub_14099DB50 @ 0x14099DB50 (sub_14099DB50.c)
 *     sub_14099DE60 @ 0x14099DE60 (sub_14099DE60.c)
 *     sub_14099E10C @ 0x14099E10C (sub_14099E10C.c)
 *     sub_14099E20C @ 0x14099E20C (sub_14099E20C.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 *     sub_140B151EC @ 0x140B151EC (sub_140B151EC.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *__fastcall sub_140224E90(struct _KTHREAD **a1)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  KeWaitForSingleObject(a1 + 1, Executive, 0, 0, 0LL);
  result = KeGetCurrentThread();
  *a1 = result;
  return result;
}
