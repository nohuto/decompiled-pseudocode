/*
 * XREFs of ?GetWindowColorizationColor@CTopLevelWindow@@AEBAKU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x1800353A4
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18002B020 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x180033080 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z @ 0x180034220 (-UpdateButtonVisuals@CTopLevelWindow@@AEAAJPEBUWindowFrame@1@@Z.c)
 * Callees:
 *     ?AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU?$TMILFlagsEnum@W4FlagsEnum@ColorizationFlags@@@@@Z @ 0x18002D380 (-AdjustWindowColorization@CGlassColorizationParameters@@QEAAXPEBTGpCC@@MU-$TMILFlagsEnum@W4Flags.c)
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     IsOpenThemeDataPresent @ 0x180061548 (IsOpenThemeDataPresent.c)
 */

__int64 __fastcall CTopLevelWindow::GetWindowColorizationColor(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // r15d
  CDesktopManager *v7; // rdi
  int v8; // esi
  char v9; // r14
  char v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  bool v13; // zf
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned __int8 v16[8]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v17[2]; // [rsp+28h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a1 + 752);
  result = *(unsigned int *)(v4 + 192);
  if ( !(_DWORD)result )
  {
    v6 = *(_DWORD *)(a1 + 608);
    v7 = CDesktopManager::s_pDesktopManagerInstance;
    v8 = v6 & 2;
    v9 = *(_BYTE *)(v4 + 667);
    IsOpenThemeDataPresent();
    v10 = v9 & 0x10;
    if ( (v6 & 0x20) != 0 )
    {
      if ( v10 || (v6 & 0x40) != 0 )
        v11 = 2LL;
      else
        v11 = 3LL;
    }
    else if ( v10 || (v6 & 0x40) != 0 )
    {
      v11 = v8 != 0 ? 4 : 0;
    }
    else
    {
      v11 = v8 != 0 ? 5LL : 1LL;
    }
    v12 = *(_QWORD *)(CTopLevelWindow::s_rgpwfWindowFrames + 8 * v11);
    if ( (a2 & 1) == 0 && (a2 & 2) == 0 )
    {
      if ( (*(_BYTE *)(a1 + 608) & 0x40) != 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 752) + 667LL) & 0x10) != 0 )
        a2 |= 1u;
      else
        a2 |= 2u;
    }
    if ( *((_BYTE *)v7 + 26) )
    {
      if ( (a2 & 1) != 0 )
        return *((unsigned int *)v7 + 124);
      else
        return *((unsigned int *)v7 + 125);
    }
    else
    {
      v13 = *((_BYTE *)v7 + 25) == 0;
      v14 = *(_OWORD *)((char *)v7 + 460);
      v15 = *(_OWORD *)((char *)v7 + 476);
      *(_DWORD *)v16 = *((_DWORD *)v7 + 106);
      v17[0] = v14;
      v17[1] = v15;
      if ( !v13 )
        a2 |= 4u;
      if ( *((_BYTE *)v7 + 492) )
        a2 |= 0x20u;
      CGlassColorizationParameters::AdjustWindowColorization((unsigned __int8 *)v17, v16, *(float *)(v12 + 1860), a2);
      return v17[0] & 0xFF00FF00 | (LOBYTE(v17[0]) << 16) | BYTE2(v17[0]);
    }
  }
  return result;
}
