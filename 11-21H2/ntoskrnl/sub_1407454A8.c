/*
 * XREFs of sub_1407454A8 @ 0x1407454A8
 * Callers:
 *     sub_1403CCE24 @ 0x1403CCE24 (sub_1403CCE24.c)
 *     sub_14057D77C @ 0x14057D77C (sub_14057D77C.c)
 *     sub_14069061C @ 0x14069061C (sub_14069061C.c)
 *     sub_1406E67F0 @ 0x1406E67F0 (sub_1406E67F0.c)
 *     sub_140742E3C @ 0x140742E3C (sub_140742E3C.c)
 *     sub_1407444A8 @ 0x1407444A8 (sub_1407444A8.c)
 *     sub_140744E30 @ 0x140744E30 (sub_140744E30.c)
 *     sub_1407452A0 @ 0x1407452A0 (sub_1407452A0.c)
 *     RtlStringFromGUID @ 0x140745490 (RtlStringFromGUID.c)
 *     sub_1407459F4 @ 0x1407459F4 (sub_1407459F4.c)
 *     sub_1407FD344 @ 0x1407FD344 (sub_1407FD344.c)
 *     sub_140803498 @ 0x140803498 (sub_140803498.c)
 *     sub_14080C884 @ 0x14080C884 (sub_14080C884.c)
 *     sub_140812B74 @ 0x140812B74 (sub_140812B74.c)
 *     sub_140812D44 @ 0x140812D44 (sub_140812D44.c)
 *     sub_14084D3DC @ 0x14084D3DC (sub_14084D3DC.c)
 *     sub_14091BA74 @ 0x14091BA74 (sub_14091BA74.c)
 *     sub_14091BDB8 @ 0x14091BDB8 (sub_14091BDB8.c)
 *     sub_14091DBC4 @ 0x14091DBC4 (sub_14091DBC4.c)
 *     IoGetDeviceDirectory @ 0x140943540 (IoGetDeviceDirectory.c)
 *     sub_14094D930 @ 0x14094D930 (sub_14094D930.c)
 *     sub_14094E390 @ 0x14094E390 (sub_14094E390.c)
 *     DoScreenSave @ 0x14094EA0C (DoScreenSave.c)
 *     sub_14094F4CC @ 0x14094F4CC (sub_14094F4CC.c)
 *     sub_1409BAE18 @ 0x1409BAE18 (sub_1409BAE18.c)
 *     sub_1409FC108 @ 0x1409FC108 (sub_1409FC108.c)
 *     sub_1409FE5F4 @ 0x1409FE5F4 (sub_1409FE5F4.c)
 *     sub_140A1CF34 @ 0x140A1CF34 (sub_140A1CF34.c)
 *     sub_140A212A0 @ 0x140A212A0 (sub_140A212A0.c)
 *     sub_140A30CA8 @ 0x140A30CA8 (sub_140A30CA8.c)
 *     sub_140B0F20C @ 0x140B0F20C (sub_140B0F20C.c)
 * Callees:
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     sub_1406BE560 @ 0x1406BE560 (sub_1406BE560.c)
 */

__int64 __fastcall sub_1407454A8(unsigned int *a1, __int64 a2, char a3)
{
  PVOID v5; // rax
  unsigned __int16 v6; // dx

  if ( a3 )
  {
    *(_WORD *)(a2 + 2) = 78;
    v5 = sub_1406BE560(0x4EuLL);
    *(_QWORD *)(a2 + 8) = v5;
    if ( v5 )
    {
      v6 = *(_WORD *)(a2 + 2);
LABEL_4:
      *(_WORD *)a2 = 76;
      swprintf_s(
        *(wchar_t **)(a2 + 8),
        (unsigned __int64)v6 >> 1,
        L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
        *a1,
        *((unsigned __int16 *)a1 + 2),
        *((unsigned __int16 *)a1 + 3),
        *((unsigned __int8 *)a1 + 8),
        *((unsigned __int8 *)a1 + 9),
        *((unsigned __int8 *)a1 + 10),
        *((unsigned __int8 *)a1 + 11),
        *((unsigned __int8 *)a1 + 12),
        *((unsigned __int8 *)a1 + 13),
        *((unsigned __int8 *)a1 + 14),
        *((unsigned __int8 *)a1 + 15));
      return 0LL;
    }
    return 3221225495LL;
  }
  else
  {
    v6 = *(_WORD *)(a2 + 2);
    if ( v6 >= 0x4Eu )
      goto LABEL_4;
    return 3221225507LL;
  }
}
