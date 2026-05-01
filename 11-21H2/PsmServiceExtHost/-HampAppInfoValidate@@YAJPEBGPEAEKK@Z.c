/*
 * XREFs of ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x180007110
 * Callers:
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x180006FA8 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18000700C (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampAppInfoValidate(const unsigned __int16 *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a1) )
  {
    if ( a3 < 0xC || !RtlValidSid(a2) || RtlLengthSid(a2) != a3 )
      return (unsigned int)-1073741584;
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v5;
}
