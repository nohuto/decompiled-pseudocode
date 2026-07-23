/*
 * XREFs of sub_140AF8974 @ 0x140AF8974
 * Callers:
 *     sub_140A54E70 @ 0x140A54E70 (sub_140A54E70.c)
 * Callees:
 *     KeSetTimer2 @ 0x140353C40 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140B4D124 @ 0x140B4D124 (sub_140B4D124.c)
 *     sub_140B4D9C8 @ 0x140B4D9C8 (sub_140B4D9C8.c)
 */

void __fastcall sub_140AF8974(int a1)
{
  int v1; // eax
  _QWORD v2[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( a1 == 12 )
  {
    qword_140C02058 = (__int64)sub_1403DF6C0;
    qword_140C02060 = (__int64)sub_14052CF90;
    qword_140C02068 = (__int64)sub_1403DE340;
    qword_140C02070 = (__int64)sub_14052CF60;
    qword_140C02078 = (__int64)sub_14052D3A0;
    if ( dword_140C4ADAC && byte_140C4AD7C )
    {
      v1 = sub_140B4D124();
      if ( v1 < 0 )
        KeBugCheckEx(0x1DAu, 1uLL, v1, 0LL, 0LL);
      sub_140B4D9C8();
    }
  }
  else if ( dword_140C4ADAC && a1 == 21 )
  {
    if ( byte_140C4AD7C )
    {
      v2[0] = 0LL;
      v2[1] = -1LL;
      KeSetTimer2((__int64)&unk_140C49DC0, -30000000LL, 30000000LL, (__int64)v2);
    }
  }
}
