/*
 * XREFs of rimIDECheckConfidenceSupport @ 0x1C019AB98
 * Callers:
 *     RIMIDECreatePointerDeviceInfo @ 0x1C019B9FC (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     memset @ 0x1C00DE6C0 (memset.c)
 *     rimHidP_GetSpecificButtonCaps @ 0x1C018E844 (rimHidP_GetSpecificButtonCaps.c)
 */

int __fastcall rimIDECheckConfidenceSupport(__int64 a1, struct _HIDP_PREPARSED_DATA *a2)
{
  int result; // eax
  unsigned __int16 v5[8]; // [rsp+40h] [rbp-78h] BYREF
  struct _HIDP_BUTTON_CAPS v6; // [rsp+50h] [rbp-68h] BYREF

  memset(&v6, 0, sizeof(v6));
  v5[0] = 1;
  result = rimHidP_GetSpecificButtonCaps(HidP_Input, 0xDu, 0, 0x47u, &v6, v5, a2);
  if ( (int)(result + 0x80000000) < 0 || result == -1072627705 )
    *(_DWORD *)(a1 + 360) |= 4u;
  else
    *(_DWORD *)(a1 + 360) &= ~4u;
  return result;
}
