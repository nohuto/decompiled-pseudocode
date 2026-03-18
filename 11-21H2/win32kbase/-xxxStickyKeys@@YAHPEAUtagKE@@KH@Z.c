/*
 * XREFs of ?xxxStickyKeys@@YAHPEAUtagKE@@KH@Z @ 0x1C01BAA50
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00CABA0 (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E7BD0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxTurnOffStickyKeys@@YAXXZ @ 0x1C01BAF10 (-xxxTurnOffStickyKeys@@YAXXZ.c)
 *     ?xxxTwoKeysDown@@YAHH@Z @ 0x1C01BAF70 (-xxxTwoKeysDown@@YAHH@Z.c)
 *     ?xxxUpdateModifierState@@YAXHH@Z @ 0x1C01BB060 (-xxxUpdateModifierState@@YAXHH@Z.c)
 *     ApiSetEditionPostAccessibilitySettingChangedEvent @ 0x1C020A3A8 (ApiSetEditionPostAccessibilitySettingChangedEvent.c)
 *     ApiSetEditionPostAccessibilityShortcutNotification @ 0x1C020A4F4 (ApiSetEditionPostAccessibilityShortcutNotification.c)
 *     ApiSetEditionPostRitSound @ 0x1C020AA7C (ApiSetEditionPostRitSound.c)
 */

_BOOL8 __fastcall xxxStickyKeys(struct tagKE *a1, __int64 a2, unsigned int a3)
{
  int v3; // r11d
  __int64 v4; // rsi
  char v7; // r10
  char v9; // al
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  char v14; // di
  char v15; // si
  char v16; // r10
  int v17; // eax
  __int64 v18; // rdx
  bool v19; // zf

  v3 = *((_WORD *)a1 + 1) & 0x8000;
  v4 = (unsigned int)a2;
  v7 = 0;
  if ( !gCurrentModifierBit )
  {
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    if ( (dword_1C0295A44 & 1) != 0 )
    {
      if ( !gPhysModifierState || v3 )
      {
        if ( (unsigned int)AccessProceduresStream(a1, a2, a3) )
          xxxProcessKeyEvent((unsigned __int8 *)a1, v4, 0, 0, 0LL, 0LL);
        xxxUpdateModifierState((unsigned __int8)gLockBits, a3);
        v19 = gLatchBits == 0;
        gLatchBits = 0;
        if ( !v19 )
          ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
        return 0LL;
      }
      xxxTwoKeysDown(a3);
    }
    return 1LL;
  }
  if ( (*((_WORD *)a1 + 1) & 0x8000) == 0
    && ((unsigned __int8)gCurrentModifierBit & (unsigned __int8)gPrevModifierState) != 0 )
  {
    gPrevModifierState = gPhysModifierState;
    return 1LL;
  }
  gPrevModifierState = gPhysModifierState;
  if ( *((_BYTE *)a1 + 2) != 0xA0 || ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0 )
    LOBYTE(a2) = 0;
  else
    LOBYTE(a2) = gStickyKeysLeftShiftCount + 1;
  gStickyKeysLeftShiftCount = a2;
  if ( *((_BYTE *)a1 + 2) != 0xA1 || ((unsigned __int8)~gCurrentModifierBit & (unsigned __int8)gPhysModifierState) != 0 )
    v9 = 0;
  else
    v9 = gStickyKeysRightShiftCount + 1;
  gStickyKeysRightShiftCount = v9;
  if ( (_BYTE)a2 == 10 || v9 == 10 )
  {
    if ( (dword_1C0295A44 & 4) != 0 )
    {
      if ( (dword_1C0295A44 & 1) != 0 )
      {
        xxxTurnOffStickyKeys();
        if ( (dword_1C0295A44 & 0x10) != 0 )
          ApiSetEditionPostRitSound(1LL, v18, 0LL);
      }
      else
      {
        if ( (dword_1C0295A44 & 0x10) != 0 )
          ApiSetEditionPostRitSound(0LL, a2, 0LL);
        ApiSetEditionPostAccessibilityShortcutNotification(1LL);
      }
    }
    gStickyKeysLeftShiftCount = 0;
    gStickyKeysRightShiftCount = 0;
    return 1LL;
  }
  if ( (dword_1C0295A44 & 1) == 0 )
    return 1LL;
  if ( !v3 )
  {
    if ( gPhysModifierState == gCurrentModifierBit )
    {
      v13 = *((_WORD *)a1 + 1);
      if ( v13 >= 0x5Bu )
      {
        if ( v13 <= 0x5Cu )
        {
          v7 = -64;
        }
        else
        {
          a2 = 159LL;
          if ( v13 > 0x9Fu )
          {
            if ( v13 <= 0xA1u )
            {
              v7 = 3;
            }
            else
            {
              a2 = 163LL;
              if ( v13 <= 0xA3u )
              {
                v7 = 12;
              }
              else
              {
                a2 = 165LL;
                if ( v13 <= 0xA5u )
                  v7 = 48;
              }
            }
          }
        }
      }
      v14 = gLockBits;
      v15 = gLatchBits;
      if ( ((unsigned __int8)gLockBits & (unsigned __int8)v7) != 0 )
      {
        v16 = ~v7;
        v14 = v16 & gLockBits;
        v15 = v16 & gLatchBits;
        xxxUpdateModifierState(
          (unsigned __int8)gCurrentModifierBit | (unsigned __int8)(v16 & gLockBits) | (unsigned __int8)(v16 & gLatchBits),
          a3);
      }
      else
      {
        if ( ((unsigned __int8)gCurrentModifierBit & (unsigned __int8)gLockBits) == 0 )
          v15 = gCurrentModifierBit ^ gLatchBits;
        if ( (dword_1C0295A44 & 0x80u) != 0
          && ((unsigned __int8)(gLockBits | gLatchBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
        {
          v14 = gCurrentModifierBit ^ gLockBits;
        }
      }
      if ( gLatchBits != v15 || (v17 = 0, gLockBits != v14) )
        v17 = 1;
      gLatchBits = v15;
      gLockBits = v14;
      if ( v17 )
        ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
      if ( (dword_1C0295A44 & 0x40) != 0 )
      {
        if ( ((unsigned __int8)gLockBits & (unsigned __int8)gCurrentModifierBit) == 0 )
          ApiSetEditionPostRitSound(2LL, a2, 0LL);
        if ( ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) != 0 )
          ApiSetEditionPostRitSound(3LL, a2, 0LL);
      }
      if ( ((unsigned __int8)gLatchBits & (unsigned __int8)gCurrentModifierBit) == 0 )
        return 0LL;
    }
    else if ( (unsigned int)xxxTwoKeysDown(a3) )
    {
      if ( gLockBits || (v11 = 0, gLatchBits != gPhysModifierState) )
        v11 = 1;
      gLatchBits = gPhysModifierState;
      gLockBits = 0;
      if ( v11 )
        ApiSetEditionPostAccessibilitySettingChangedEvent(1LL);
      if ( (dword_1C0295A44 & 0x40) != 0 )
      {
        ApiSetEditionPostRitSound(2LL, v10, 0LL);
        ApiSetEditionPostRitSound(3LL, v12, 0LL);
      }
      return 0LL;
    }
    return 1LL;
  }
  return ((unsigned __int8)(gLatchBits | gLockBits) & (unsigned __int8)gCurrentModifierBit) == 0;
}
