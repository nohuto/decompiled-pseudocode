/*
 * XREFs of ?GetEffectiveWindowColorizationColor@CDesktopManager@@QEAAXMU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@PEAK@Z @ 0x180011EF0
 * Callers:
 *     ?GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ @ 0x180011DFC (-GetSolidColorCaptionColor@CTopLevelWindow@@AEBAKXZ.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x180028AF0 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x18005C460 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopManager::GetEffectiveWindowColorizationColor(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 result; // rax
  int v8; // edx
  int v9; // [rsp+20h] [rbp-38h] BYREF
  _OWORD v10[2]; // [rsp+28h] [rbp-30h] BYREF

  if ( *(_BYTE *)(a1 + 26) )
  {
    if ( (a3 & 1) != 0 )
      v8 = *(_DWORD *)(a1 + 512);
    else
      v8 = *(_DWORD *)(a1 + 516);
  }
  else
  {
    v5 = *(_OWORD *)(a1 + 476);
    v6 = *(_OWORD *)(a1 + 492);
    v9 = *(_DWORD *)(a1 + 440);
    v10[0] = v5;
    v10[1] = v6;
    if ( *(_BYTE *)(a1 + 25) )
      a3 = (unsigned int)a3 | 4;
    if ( *(_BYTE *)(a1 + 508) )
      a3 = (unsigned int)a3 | 0x20;
    ((void (__fastcall *)(_OWORD *, int *, __int64, _QWORD))CGlassColorizationParameters::AdjustWindowColorization)(
      v10,
      &v9,
      a3,
      (unsigned int)a3);
    result = LOBYTE(v10[0]) << 16;
    v8 = v10[0] & 0xFF00FF00 | result | BYTE2(v10[0]);
  }
  *a4 = v8;
  return result;
}
