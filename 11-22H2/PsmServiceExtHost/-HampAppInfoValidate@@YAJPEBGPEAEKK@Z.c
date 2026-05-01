/*
 * XREFs of ?HampAppInfoValidate@@YAJPEBGPEAEKK@Z @ 0x18007F70C
 * Callers:
 *     ?HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18007F670 (-HampAppInfoInitialize@@YAXPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 *     ?HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z @ 0x18007F768 (-HampAppInfoValidateAndCapture@@YAJPEBGPEAEKKPEAU_HAM_APPLICATION_INFO@@@Z.c)
 * Callees:
 *     CempUtilValidateSid @ 0x180035A40 (CempUtilValidateSid.c)
 */

__int64 __fastcall HampAppInfoValidate(const unsigned __int16 *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned int v5; // ebx

  v5 = 0;
  if ( (unsigned __int8)PsmIsValidKey(a1) )
  {
    if ( (int)CempUtilValidateSid(a2, a3) < 0 )
      return (unsigned int)-1073741584;
  }
  else
  {
    return (unsigned int)-1073741585;
  }
  return v5;
}
