/*
 * XREFs of ?GetApoRegKeyPath@@YAJPEAGIPEBG@Z @ 0x140014D9C
 * Callers:
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x140014CB4 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x140014E9C (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

int __fastcall GetApoRegKeyPath(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  int result; // eax
  __int64 v5; // r11
  unsigned __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  result = StringCchLengthW(a3, 0x27uLL, &v6);
  if ( result >= 0 )
  {
    if ( v6 == 38 )
      return StringCchPrintfW(a1, 0x4BuLL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", v5);
    else
      return -2147418113;
  }
  return result;
}
