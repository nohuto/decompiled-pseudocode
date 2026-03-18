/*
 * XREFs of ?InternalSpritesCollision@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHRGN__@@@Z @ 0x1C026EBF0
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C026FC50 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B7D4 (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z @ 0x1C001E96C (-vSpComputeUncoveredRegion@@YAXPEAU_SPRITESTATE@@H@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00311EC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     GreDeleteSpriteOverlapPresent @ 0x1C00F72B4 (GreDeleteSpriteOverlapPresent.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011BD38 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x1C0266478 (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     ?GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z @ 0x1C027A1A0 (-GdiGetSpriteClipRgns@@YAHPEAUHDEV__@@PEAUHRGN__@@@Z.c)
 *     ?GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z @ 0x1C027AC24 (-GreAddSpriteOverlapPresent@@YAHPEAUHDEV__@@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall InternalSpritesCollision(HDEV a1, HWND a2, HRGN a3)
{
  unsigned int v4; // r12d
  HRGN RectRgn; // rsi
  HRGN v7; // rdi
  HRGN v8; // rax
  HRGN v9; // rcx
  HRGN v10; // r14
  unsigned int v11; // r13d
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // r13
  Gre::Base *v16; // rcx
  HRGN v17; // rax
  unsigned int v18; // eax
  HRGN hrgn; // [rsp+30h] [rbp-79h]
  _QWORD v22[7]; // [rsp+48h] [rbp-61h] BYREF
  _QWORD v23[7]; // [rsp+80h] [rbp-29h] BYREF
  struct tagRECT prcl; // [rsp+B8h] [rbp+Fh] BYREF

  v4 = 0;
  RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v22, a3, 0, 0);
  if ( v22[0] )
  {
    prcl = *(struct tagRECT *)(a1 + 30);
    ERECTL::bOffsetAdd((ERECTL *)&prcl, (const struct _POINTL *)a1 + 320, 0);
    if ( RGNOBJ::bInside((RGNOBJ *)v22, (struct _RECTL *)&prcl) != 2 )
    {
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v22);
      return 0LL;
    }
  }
  RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v22);
  if ( *((_DWORD *)a1 + 34) )
  {
    RectRgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
    if ( RectRgn )
    {
      hrgn = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
      v7 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
      v8 = (HRGN)EngCreateRectRgn(0, 0, 0, 0);
      v9 = hrgn;
      v10 = v8;
      if ( !hrgn )
      {
LABEL_34:
        if ( v7 )
          EngDeleteRgn(v7);
        if ( v10 )
          EngDeleteRgn(v10);
        EngDeleteRgn(RectRgn);
        return v4;
      }
      if ( v7 && v8 )
      {
        v11 = 0;
        if ( EngSetRectRgn(hrgn, *((_DWORD *)a1 + 30), *((_DWORD *)a1 + 31), *((_DWORD *)a1 + 32), *((_DWORD *)a1 + 33)) )
        {
          SPRITERANGELOCK::vLockExclusive((SPRITERANGELOCK *)(a1 + 50));
          if ( *(_DWORD *)(*(_QWORD *)(SGDGetSessionState(v12) + 32) + 8736LL) == 1 && *((_QWORD *)a1 + 140) )
            vSpComputeUncoveredRegion((struct _SPRITESTATE *)(a1 + 20), 0);
          SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)(a1 + 50));
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v23, RectRgn, 0, 0);
          RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v22, hrgn, 1, 0);
          *(_QWORD *)&prcl.left = *((_QWORD *)a1 + 97);
          if ( v23[0] && v22[0] )
            v11 = RGNOBJAPI::iCombine((RGNOBJAPI *)v23, (struct RGNOBJ *)v22, (struct RGNOBJ *)&prcl, 4);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v22);
          RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v23);
          if ( v11 > 1 )
          {
            v14 = 0;
            v15 = *(_QWORD *)(SGDGetSessionState(v13) + 32);
            if ( *(_DWORD *)(v15 + 8736) == 1 )
            {
              EngSetRectRgn(v7, 0, 0, 0, 0);
              if ( !IsDwmActive(v16) )
                GdiGetSpriteClipRgns(a1, v7);
              EngGetRgnBox(v7, &prcl);
              if ( !ERECTL::bEmpty((ERECTL *)&prcl) && (unsigned int)EngCombineRgn(v10, RectRgn, v7, 1) > 1 )
              {
                v17 = RectRgn;
                v14 = 1;
                RectRgn = v10;
                v10 = v17;
              }
            }
            v18 = EngOffsetRgn(RectRgn, *((_DWORD *)a1 + 640), *((_DWORD *)a1 + 641));
            v9 = hrgn;
            if ( v18 <= 1 )
              goto LABEL_33;
            if ( (unsigned int)EngCombineRgn(hrgn, RectRgn, a3, 1) > 1 )
              v4 = 1;
            if ( *(_DWORD *)(v15 + 8736) == 1 )
            {
              if ( v4 )
              {
                GreDeleteSpriteOverlapPresent(a1, a2);
              }
              else if ( v14 )
              {
                GreAddSpriteOverlapPresent(a1, a2);
              }
            }
            else
            {
              v4 = 1;
            }
          }
        }
        v9 = hrgn;
      }
LABEL_33:
      EngDeleteRgn(v9);
      goto LABEL_34;
    }
  }
  return v4;
}
