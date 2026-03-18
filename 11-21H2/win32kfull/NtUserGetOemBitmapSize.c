/*
 * XREFs of NtUserGetOemBitmapSize @ 0x1C014ECB0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 */

__int64 __fastcall NtUserGetOemBitmapSize(unsigned int a1, _QWORD *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  int DpiForSystem; // eax
  char *OemBitmapInfoForDpi; // rax
  int v9; // r8d
  int v10; // edx
  ULONG64 v11; // rcx
  __int64 v13; // [rsp+60h] [rbp+18h]

  EnterCrit(0LL, 0LL);
  v6 = 0;
  if ( a1 >= 0x5D )
  {
    UserSetLastError(87LL, v4);
  }
  else
  {
    DpiForSystem = GetDpiForSystem(v5, v4);
    OemBitmapInfoForDpi = GetOemBitmapInfoForDpi(a1, DpiForSystem);
    v9 = *((__int16 *)OemBitmapInfoForDpi + 2);
    v10 = *((__int16 *)OemBitmapInfoForDpi + 3);
    v11 = MmUserProbeAddress;
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (_QWORD *)MmUserProbeAddress;
    HIDWORD(v13) = *((__int16 *)OemBitmapInfoForDpi + 3);
    LODWORD(v13) = *((__int16 *)OemBitmapInfoForDpi + 2);
    *a2 = v13;
    if ( v9 && v10 )
      v6 = 1;
  }
  UserSessionSwitchLeaveCrit(v11);
  return v6;
}
