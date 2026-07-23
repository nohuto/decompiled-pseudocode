/*
 * XREFs of VslPrepareDriverForPatch @ 0x14054C440
 * Callers:
 *     MiApplyHotPatchToLoadedDriver @ 0x140A35318 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14033FF80 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall VslPrepareDriverForPatch(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C5F258);
  v4[1] = a1;
  result = VslpEnterIumSecureMode(2u, 74, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140C5F25C;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140C5F260;
  _InterlockedIncrement(v3);
  return result;
}
