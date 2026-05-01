/*
 * XREFs of ?UpdateEyeControlState@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x1800B5B68
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x1800B8C50 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall TouchKeyboardExperienceManager::UpdateEyeControlState(TouchKeyboardExperienceManager *this)
{
  bool v2; // bl
  bool v3; // di
  LSTATUS ValueW; // eax
  unsigned int v5; // edx
  bool v6; // zf
  unsigned int v7; // [rsp+60h] [rbp+8h] BYREF
  DWORD v8; // [rsp+68h] [rbp+10h] BYREF
  DWORD v9; // [rsp+70h] [rbp+18h] BYREF

  v9 = 4;
  v2 = 0;
  v8 = 0;
  v3 = 0;
  ValueW = RegGetValueW(HKEY_CURRENT_USER, L"Software\\Microsoft\\Input\\EC", L"Enabled", 0x10000012u, &v8, &v7, &v9);
  v5 = ValueW;
  if ( ValueW )
  {
    if ( ValueW == 234 )
    {
      LOWORD(v5) = 13;
    }
    else if ( ValueW <= 0 )
    {
      goto LABEL_5;
    }
    goto LABEL_4;
  }
  LOWORD(v5) = 13;
  if ( v8 != 4 )
  {
    if ( v9 == 4 && (unsigned __int16)(v7 - 48) <= 1u )
    {
      v6 = (_WORD)v7 == 49;
      goto LABEL_10;
    }
LABEL_4:
    v5 = (unsigned __int16)v5 | 0x80070000;
    goto LABEL_5;
  }
  v6 = v7 == 1;
  if ( v7 > 1 )
    goto LABEL_4;
LABEL_10:
  v5 = 0;
  v3 = v6;
LABEL_5:
  if ( !v5 )
    v2 = v3;
  *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 92) + 112LL) + 522LL) = v2;
}
