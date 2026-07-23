/*
 * XREFs of sub_1402E1280 @ 0x1402E1280
 * Callers:
 *     sub_1405E3B04 @ 0x1405E3B04 (sub_1405E3B04.c)
 *     sub_14064B9D8 @ 0x14064B9D8 (sub_14064B9D8.c)
 *     sub_1406BB860 @ 0x1406BB860 (sub_1406BB860.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1406C1980 (IoWMIDeviceObjectToInstanceName.c)
 *     sub_1406D0CB0 @ 0x1406D0CB0 (sub_1406D0CB0.c)
 *     sub_1406DFC4C @ 0x1406DFC4C (sub_1406DFC4C.c)
 *     sub_1406E1D34 @ 0x1406E1D34 (sub_1406E1D34.c)
 *     sub_1406F0F04 @ 0x1406F0F04 (sub_1406F0F04.c)
 *     sub_1406F0FCC @ 0x1406F0FCC (sub_1406F0FCC.c)
 *     sub_140761234 @ 0x140761234 (sub_140761234.c)
 *     sub_140766914 @ 0x140766914 (sub_140766914.c)
 *     sub_140783DB8 @ 0x140783DB8 (sub_140783DB8.c)
 *     sub_14078CB04 @ 0x14078CB04 (sub_14078CB04.c)
 *     sub_140797BD4 @ 0x140797BD4 (sub_140797BD4.c)
 *     sub_140799218 @ 0x140799218 (sub_140799218.c)
 *     sub_14079AADC @ 0x14079AADC (sub_14079AADC.c)
 *     sub_1407D8338 @ 0x1407D8338 (sub_1407D8338.c)
 *     sub_1407D84EC @ 0x1407D84EC (sub_1407D84EC.c)
 *     sub_1407DDABC @ 0x1407DDABC (sub_1407DDABC.c)
 *     sub_1407EFFBC @ 0x1407EFFBC (sub_1407EFFBC.c)
 *     sub_1407FC710 @ 0x1407FC710 (sub_1407FC710.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     sub_140822030 @ 0x140822030 (sub_140822030.c)
 *     sub_1408226C0 @ 0x1408226C0 (sub_1408226C0.c)
 *     sub_140834454 @ 0x140834454 (sub_140834454.c)
 *     sub_1408515A8 @ 0x1408515A8 (sub_1408515A8.c)
 *     sub_140853230 @ 0x140853230 (sub_140853230.c)
 *     sub_140855418 @ 0x140855418 (sub_140855418.c)
 *     sub_140856A54 @ 0x140856A54 (sub_140856A54.c)
 *     sub_1408596A4 @ 0x1408596A4 (sub_1408596A4.c)
 *     sub_14085D7FC @ 0x14085D7FC (sub_14085D7FC.c)
 *     sub_140862888 @ 0x140862888 (sub_140862888.c)
 *     sub_140946900 @ 0x140946900 (sub_140946900.c)
 *     sub_140960D50 @ 0x140960D50 (sub_140960D50.c)
 *     sub_140960E60 @ 0x140960E60 (sub_140960E60.c)
 *     sub_140987E44 @ 0x140987E44 (sub_140987E44.c)
 *     sub_14099E4C4 @ 0x14099E4C4 (sub_14099E4C4.c)
 *     sub_14099E530 @ 0x14099E530 (sub_14099E530.c)
 *     sub_1409DD3C4 @ 0x1409DD3C4 (sub_1409DD3C4.c)
 *     sub_1409DFC30 @ 0x1409DFC30 (sub_1409DFC30.c)
 *     sub_1409DFF60 @ 0x1409DFF60 (sub_1409DFF60.c)
 *     sub_1409E0DC0 @ 0x1409E0DC0 (sub_1409E0DC0.c)
 *     sub_1409E1200 @ 0x1409E1200 (sub_1409E1200.c)
 *     sub_1409E190C @ 0x1409E190C (sub_1409E190C.c)
 *     sub_140A1B7E4 @ 0x140A1B7E4 (sub_140A1B7E4.c)
 *     sub_140A1DCEC @ 0x140A1DCEC (sub_140A1DCEC.c)
 *     sub_140A21C40 @ 0x140A21C40 (sub_140A21C40.c)
 *     sub_140A22034 @ 0x140A22034 (sub_140A22034.c)
 *     sub_140A36E2C @ 0x140A36E2C (sub_140A36E2C.c)
 *     sub_140AF86C4 @ 0x140AF86C4 (sub_140AF86C4.c)
 *     sub_140B2B2EC @ 0x140B2B2EC (sub_140B2B2EC.c)
 *     sub_140B30860 @ 0x140B30860 (sub_140B30860.c)
 *     sub_140B30BB0 @ 0x140B30BB0 (sub_140B30BB0.c)
 *     sub_140B54680 @ 0x140B54680 (sub_140B54680.c)
 *     sub_140B54800 @ 0x140B54800 (sub_140B54800.c)
 *     sub_140B550AC @ 0x140B550AC (sub_140B550AC.c)
 * Callees:
 *     _vsnwprintf @ 0x1403E0440 (_vsnwprintf.c)
 */

__int64 sub_1402E1280(wchar_t *a1, unsigned __int64 a2, const wchar_t *a3, ...)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v5; // rsi
  unsigned int v6; // edi
  int v7; // eax
  va_list Args; // [rsp+78h] [rbp+20h] BYREF

  va_start(Args, a3);
  v3 = a2 >> 1;
  if ( v3 - 1 <= 0x7FFFFFFE )
  {
    v5 = v3 - 1;
    v6 = 0;
    v7 = vsnwprintf(a1, v3 - 1, a3, Args);
    if ( v7 >= 0 )
    {
      if ( v7 == v5 )
      {
LABEL_6:
        a1[v5] = 0;
        return v6;
      }
      if ( v7 <= v5 )
        return v6;
    }
    v6 = -2147483643;
    goto LABEL_6;
  }
  v6 = -1073741811;
  if ( v3 )
    *a1 = 0;
  return v6;
}
