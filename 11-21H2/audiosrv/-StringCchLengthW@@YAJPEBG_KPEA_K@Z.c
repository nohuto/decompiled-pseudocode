/*
 * XREFs of ?StringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1800F085C
 * Callers:
 *     AudioServerGetAudioHistoryProducerInfo @ 0x1800F13A0 (AudioServerGetAudioHistoryProducerInfo.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z @ 0x1801514DC (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@PEBG@Z.c)
 *     ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x180153DB0 (-GetAppServiceName@@YAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StringCchLengthW(const unsigned __int16 *a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r9
  __int64 result; // rax

  if ( !a1 )
  {
    result = 2147942487LL;
LABEL_12:
    if ( a3 )
      *a3 = 0LL;
    return result;
  }
  v3 = a2;
  do
  {
    if ( !*a1 )
      break;
    ++a1;
    --v3;
  }
  while ( v3 );
  result = v3 == 0 ? 0x80070057 : 0;
  if ( a3 )
  {
    if ( v3 )
      *a3 = a2 - v3;
    else
      *a3 = 0LL;
  }
  if ( !v3 )
    goto LABEL_12;
  return result;
}
