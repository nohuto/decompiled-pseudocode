/*
 * XREFs of sub_1408132F0 @ 0x1408132F0
 * Callers:
 *     sub_14064CC20 @ 0x14064CC20 (sub_14064CC20.c)
 *     sub_14064CD04 @ 0x14064CD04 (sub_14064CD04.c)
 *     sub_140800ADC @ 0x140800ADC (sub_140800ADC.c)
 *     sub_14080271C @ 0x14080271C (sub_14080271C.c)
 *     sub_140803250 @ 0x140803250 (sub_140803250.c)
 *     sub_14080422C @ 0x14080422C (sub_14080422C.c)
 *     sub_140807354 @ 0x140807354 (sub_140807354.c)
 *     sub_140811EB0 @ 0x140811EB0 (sub_140811EB0.c)
 *     sub_140811F10 @ 0x140811F10 (sub_140811F10.c)
 *     sub_14081210C @ 0x14081210C (sub_14081210C.c)
 *     sub_1408123B4 @ 0x1408123B4 (sub_1408123B4.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D00 @ 0x140812D00 (sub_140812D00.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_140813744 @ 0x140813744 (sub_140813744.c)
 *     sub_140A1CC78 @ 0x140A1CC78 (sub_140A1CC78.c)
 *     sub_140A1CF34 @ 0x140A1CF34 (sub_140A1CF34.c)
 *     sub_140A1D308 @ 0x140A1D308 (sub_140A1D308.c)
 *     sub_140A1D808 @ 0x140A1D808 (sub_140A1D808.c)
 *     sub_140A1E890 @ 0x140A1E890 (sub_140A1E890.c)
 * Callees:
 *     sub_140250FF0 @ 0x140250FF0 (sub_140250FF0.c)
 *     sub_1403A7848 @ 0x1403A7848 (sub_1403A7848.c)
 *     sub_140813344 @ 0x140813344 (sub_140813344.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall sub_1408132F0(void *a1)
{
  void *v2; // rax
  __int64 v3; // rdx
  void *v4; // rbx

  v2 = (void *)sub_140813344(393241);
  v4 = v2;
  if ( v2 )
  {
    sub_1403A7848(a1, v3, v2);
    ExFreePoolWithTag(v4, 0x4B444342u);
  }
  return sub_140250FF0(a1);
}
