/*
 * XREFs of ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00D28E0
 * Callers:
 *     EditionCreateWindowStationEntryPoint @ 0x1C00D1B20 (EditionCreateWindowStationEntryPoint.c)
 *     ?vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z @ 0x1C00EF21C (-vCheckMMInstance@@YAXPEAGPEAUtagDESIGNVECTOR@@@Z.c)
 *     _SetWatermarkStrings @ 0x1C011E1C0 (_SetWatermarkStrings.c)
 *     ?GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z @ 0x1C01CAE8C (-GetTiltKeyName@@YAJU_UNICODE_STRING@@PEAPEAGH@Z.c)
 *     ?ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z @ 0x1C01CB0FC (-ReadLinearityData@@YAHPEAUtagHID_POINTER_DEVICE_INFO@@U_UNICODE_STRING@@PEAX@Z.c)
 *     ?FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z @ 0x1C021F844 (-FindMirrorDriver@@YAJPEBGPEAU_DISPLAY_DEVICEW@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchCopyNW(char *a1, __int64 a2, char *a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int16 v7; // ax
  unsigned __int16 *v8; // rax
  __int64 result; // rax

  v4 = a2;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    if ( !a2 )
      return result;
LABEL_13:
    *(_WORD *)a1 = 0;
    return result;
  }
  if ( a4 > 0x7FFFFFFE )
  {
    result = 3221225485LL;
    goto LABEL_13;
  }
  v5 = a4 - a2;
  v6 = a3 - a1;
  do
  {
    if ( !(v5 + v4) )
      break;
    v7 = *(_WORD *)&a1[v6];
    if ( !v7 )
      break;
    *(_WORD *)a1 = v7;
    a1 += 2;
    --v4;
  }
  while ( v4 );
  v8 = (unsigned __int16 *)(a1 - 2);
  if ( v4 )
    v8 = (unsigned __int16 *)a1;
  *v8 = 0;
  return v4 == 0 ? 0x80000005 : 0;
}
