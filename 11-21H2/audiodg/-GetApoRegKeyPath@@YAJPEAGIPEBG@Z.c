/*
 * XREFs of ?GetApoRegKeyPath@@YAJPEAGIPEBG@Z @ 0x14006E060
 * Callers:
 *     ?GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z @ 0x14006DF74 (-GetAPOPropertiesInternal@@YAJPEAUHKEY__@@AEBU_GUID@@PEAUAPO_REG_PROPERTIES@@@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014AC8 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x14006E230 (-StringCchLengthW@@YAJPEBG_KPEA_K@Z.c)
 */

__int64 __fastcall GetApoRegKeyPath(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3)
{
  __int64 result; // rax
  __int64 v5; // r11
  unsigned __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  result = StringCchLengthW(a3, 0x27uLL, &v6);
  if ( (int)result >= 0 )
  {
    if ( v6 == 38 )
      return StringCchPrintfW(a1, 75LL, L"%s\\%s", L"AudioEngine\\AudioProcessingObjects", v5);
    else
      return 2147549183LL;
  }
  return result;
}
