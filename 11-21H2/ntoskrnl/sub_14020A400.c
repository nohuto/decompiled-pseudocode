/*
 * XREFs of sub_14020A400 @ 0x14020A400
 * Callers:
 *     PsGetEffectiveServerSilo @ 0x14020A3D0 (PsGetEffectiveServerSilo.c)
 *     PsGetCurrentServerSilo @ 0x1402F61B0 (PsGetCurrentServerSilo.c)
 *     sub_140347DB0 @ 0x140347DB0 (sub_140347DB0.c)
 *     sub_1405E00B8 @ 0x1405E00B8 (sub_1405E00B8.c)
 *     sub_140687E80 @ 0x140687E80 (sub_140687E80.c)
 *     sub_14068A6A0 @ 0x14068A6A0 (sub_14068A6A0.c)
 *     sub_1406CA8B0 @ 0x1406CA8B0 (sub_1406CA8B0.c)
 *     sub_14071CAFC @ 0x14071CAFC (sub_14071CAFC.c)
 *     sub_14072B8B0 @ 0x14072B8B0 (sub_14072B8B0.c)
 *     sub_1407F8C6C @ 0x1407F8C6C (sub_1407F8C6C.c)
 *     PsIsProcessInAppSilo @ 0x1409AB7B0 (PsIsProcessInAppSilo.c)
 *     PsTerminateServerSilo @ 0x1409AB9B0 (PsTerminateServerSilo.c)
 *     sub_1409ABCF4 @ 0x1409ABCF4 (sub_1409ABCF4.c)
 *     sub_1409B08E8 @ 0x1409B08E8 (sub_1409B08E8.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_14020A400(__int64 a1)
{
  return !a1 || *(_QWORD *)(a1 + 1464) != 0LL;
}
