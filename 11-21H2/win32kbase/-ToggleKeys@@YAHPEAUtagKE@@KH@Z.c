/*
 * XREFs of ?ToggleKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01B97E0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionKillAccessibilityTimer @ 0x1C0209254 (ApiSetEditionKillAccessibilityTimer.c)
 *     ApiSetEditionPostRitSound @ 0x1C020AA7C (ApiSetEditionPostRitSound.c)
 *     ApiSetEditionSetAccessibilityTimer @ 0x1C020B760 (ApiSetEditionSetAccessibilityTimer.c)
 */

__int64 __fastcall ToggleKeys(struct tagKE *a1, unsigned int a2, int a3)
{
  unsigned __int64 v3; // rsi
  int v4; // edi
  char v5; // bl
  char v6; // al
  char v7; // bl
  __int64 v8; // rdx
  __int64 v9; // rcx

  v3 = *((unsigned __int8 *)a1 + 2);
  v4 = *((_WORD *)a1 + 1) & 0x8000;
  v5 = *((_BYTE *)a1 + 2);
  switch ( (_DWORD)v3 )
  {
    case 0x14:
      goto LABEL_16;
    case 0x90:
      goto LABEL_8;
    case 0x91:
LABEL_16:
      if ( (dword_1C0295A0C & 1) != 0 && !v4 )
      {
        v7 = v5 & 3;
        v8 = *((unsigned __int8 *)&gafAsyncKeyState + (v3 >> 2));
        if ( !_bittest((const int *)&v8, (unsigned __int8)(2 * v7)) )
        {
          v9 = 3LL;
          if ( _bittest((const int *)&v8, (unsigned __int8)(2 * v7 + 1)) )
            v9 = 2LL;
          ApiSetEditionPostRitSound(v9, v8, 0LL);
        }
      }
      return 1LL;
  }
  if ( (_WORD)v3 != gNumLockVk )
  {
    if ( (_WORD)v3 != gOemScrollVk )
    {
      if ( gtmridToggleKeys )
        ApiSetEditionKillAccessibilityTimer(a1, gtmridToggleKeys);
      return 1LL;
    }
    goto LABEL_16;
  }
LABEL_8:
  if ( ((unsigned __int8)gLockBits | (unsigned __int8)(gLatchBits | gPhysModifierState)) != 17
    || (dword_1C0295A24 & 4) == 0 )
  {
    if ( (*((_WORD *)a1 + 1) & 0x8000) != 0 )
    {
      ApiSetEditionKillAccessibilityTimer(a1, gtmridToggleKeys);
      gtmridToggleKeys = 0LL;
      gTKExtraInformation = 0;
      gTKScanCode = 0;
    }
    else if ( !gtmridToggleKeys && (dword_1C0295A0C & 4) != 0 )
    {
      v6 = *(_BYTE *)a1;
      gTKExtraInformation = a2;
      gTKNextProcIndex = a3;
      gTKScanCode = v6;
      gtmridToggleKeys = ApiSetEditionSetAccessibilityTimer(0LL, 5000LL, xxxToggleKeysTimer);
    }
    if ( (dword_1C0295A24 & 1) == 0 )
      goto LABEL_16;
  }
  return 1LL;
}
