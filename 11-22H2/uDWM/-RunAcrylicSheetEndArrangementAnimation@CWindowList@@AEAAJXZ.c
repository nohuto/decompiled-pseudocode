/*
 * XREFs of ?RunAcrylicSheetEndArrangementAnimation@CWindowList@@AEAAJXZ @ 0x180065ED0
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180024190 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnWindowArrangementEnd@CWindowList@@AEAAJXZ @ 0x180065B74 (-OnWindowArrangementEnd@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     ?CheckAnyPreference@CDesktopManager@@SA_NK@Z @ 0x18004911C (-CheckAnyPreference@CDesktopManager@@SA_NK@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18006610C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z @ 0x1800A2EA4 (-AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MKUInterpolationParameters@@M@Z.c)
 */

__int64 __fastcall CWindowList::RunAcrylicSheetEndArrangementAnimation(CWindowList *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r9d
  int v7; // eax
  unsigned int v8; // edi
  _OWORD v10[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v11; // [rsp+50h] [rbp-18h]

  if ( *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 22) )
    CDesktopManager::CheckAnyPreference(0x10u);
  v4 = *((_QWORD *)this + 88);
  v5 = *((_QWORD *)this + 68);
  v10[0] = xmmword_180121328;
  v6 = ~*(_BYTE *)(v4 + 677) & 0x10;
  v11 = 0x3FF0000000000000LL;
  v10[1] = xmmword_180121338;
  v7 = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _OWORD *, _DWORD))CAcrylicSheet::AnimateRect)(
         v5,
         v4,
         a3,
         (2 * v6) | 1u,
         v10,
         0);
  v8 = v7;
  if ( v7 >= 0 )
  {
    *(_BYTE *)(*((_QWORD *)this + 88) + 677LL) &= ~0x40u;
    *(_BYTE *)(*((_QWORD *)this + 88) + 677LL) &= ~0x80u;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x205Bu, 0LL);
  }
  return v8;
}
