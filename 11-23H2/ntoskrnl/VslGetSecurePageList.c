/*
 * XREFs of VslGetSecurePageList @ 0x14054B228
 * Callers:
 *     HvlDiscardSecurePagesFromHibernation @ 0x140546708 (HvlDiscardSecurePagesFromHibernation.c)
 *     HvlIterateSecurePagesForHibernation @ 0x140546834 (HvlIterateSecurePagesForHibernation.c)
 *     HvlAddSecurePagesCallbackRoutine @ 0x140547498 (HvlAddSecurePagesCallbackRoutine.c)
 *     HvlpGetEncryptedDataFromSecureKernel @ 0x140547EC0 (HvlpGetEncryptedDataFromSecureKernel.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall VslGetSecurePageList(unsigned __int8 a1, __int64 a2, _DWORD *a3, _BYTE *a4)
{
  __int64 v5; // rbx
  __int64 result; // rax
  _QWORD v9[14]; // [rsp+20h] [rbp-98h] BYREF

  v5 = a1;
  memset(v9, 0, 0x68uLL);
  v9[1] = v5;
  v9[2] = a2;
  result = VslpEnterIumSecureMode(2u, 2050, 0, (__int64)v9);
  if ( (int)result >= 0 )
  {
    *a4 = v9[2];
    if ( a3 )
      *a3 = v9[3];
  }
  return result;
}
