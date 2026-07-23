/*
 * XREFs of sub_140965070 @ 0x140965070
 * Callers:
 *     KseQueryDeviceData @ 0x1407EC640 (KseQueryDeviceData.c)
 *     sub_1407ED450 @ 0x1407ED450 (sub_1407ED450.c)
 *     KseQueryDeviceDataList @ 0x140963440 (KseQueryDeviceDataList.c)
 * Callees:
 *     sub_1402D8494 @ 0x1402D8494 (sub_1402D8494.c)
 *     sub_14075CDC4 @ 0x14075CDC4 (sub_14075CDC4.c)
 */

void __fastcall sub_140965070(void **a1)
{
  void **v1; // r14
  void **v3; // rsi
  void **v4; // rbx

  if ( a1 )
  {
    v1 = a1 + 7;
    v3 = (void **)a1[7];
    while ( v3 != v1 )
    {
      v4 = v3;
      v3 = (void **)*v3;
      sub_14075CDC4((__int64)(v4 + 2));
      sub_1402D8494(v4[5]);
      sub_1402D8494(v4);
    }
    sub_14075CDC4((__int64)(a1 + 5));
    sub_1402D8494(a1);
  }
}
