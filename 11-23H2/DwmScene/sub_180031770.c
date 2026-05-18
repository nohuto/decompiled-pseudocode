/*
 * XREFs of sub_180031770 @ 0x180031770
 * Callers:
 *     sub_18003194C @ 0x18003194C (sub_18003194C.c)
 *     sub_1800319DC @ 0x1800319DC (sub_1800319DC.c)
 *     sub_180031A0C @ 0x180031A0C (sub_180031A0C.c)
 *     sub_18003A2BC @ 0x18003A2BC (sub_18003A2BC.c)
 *     sub_18007BBD8 @ 0x18007BBD8 (sub_18007BBD8.c)
 *     sub_18007C07C @ 0x18007C07C (sub_18007C07C.c)
 *     sub_1800E52A3 @ 0x1800E52A3 (sub_1800E52A3.c)
 *     sub_1800E542F @ 0x1800E542F (sub_1800E542F.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_180031770(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    return sub_1800100E8(v1, 0x60uLL);
  return result;
}
