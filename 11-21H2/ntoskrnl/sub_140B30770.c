/*
 * XREFs of sub_140B30770 @ 0x140B30770
 * Callers:
 *     sub_140AFFEF4 @ 0x140AFFEF4 (sub_140AFFEF4.c)
 * Callees:
 *     sub_1407D6120 @ 0x1407D6120 (sub_1407D6120.c)
 */

signed int sub_140B30770()
{
  signed int result; // eax
  int v1; // [rsp+20h] [rbp-20h] BYREF
  char v2; // [rsp+24h] [rbp-1Ch]
  __int16 v3; // [rsp+25h] [rbp-1Bh]
  char v4; // [rsp+27h] [rbp-19h]
  __int64 (__fastcall *v5)(_DWORD *); // [rsp+28h] [rbp-18h]
  PDRIVER_OBJECT v6; // [rsp+30h] [rbp-10h]

  v1 = 1381190978;
  v3 = 0;
  v4 = 0;
  v2 = 1;
  v5 = sub_140213CF0;
  v6 = qword_140C46250;
  result = sub_1407D6120(0x4BuLL, (unsigned __int64)&v1, 24LL);
  if ( dword_140C15C70 == 1 )
  {
    v1 = 1179210317;
    v2 = 1;
    v5 = sub_1403D9B80;
    v6 = qword_140C46250;
    return sub_1407D6120(0x4BuLL, (unsigned __int64)&v1, 24LL);
  }
  return result;
}
