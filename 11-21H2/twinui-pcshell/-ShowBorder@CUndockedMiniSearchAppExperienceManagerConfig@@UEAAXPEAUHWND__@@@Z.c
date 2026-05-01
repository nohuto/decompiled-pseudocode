/*
 * XREFs of ?ShowBorder@CUndockedMiniSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x1803A3600
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

void __fastcall CUndockedMiniSearchAppExperienceManagerConfig::ShowBorder(
        CUndockedMiniSearchAppExperienceManagerConfig *this,
        HWND a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // [rsp+20h] [rbp-38h] BYREF
  _QWORD *v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+30h] [rbp-28h]
  _QWORD v7[2]; // [rsp+38h] [rbp-20h] BYREF

  v4 = 19;
  v7[0] = 0LL;
  v7[1] = 0x10000LL;
  v5 = v7;
  v6 = 16;
  SetWindowCompositionAttribute(a2, &v4, a3, a4);
}
