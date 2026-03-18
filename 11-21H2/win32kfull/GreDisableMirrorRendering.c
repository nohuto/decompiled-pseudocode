/*
 * XREFs of GreDisableMirrorRendering @ 0x1C02821A8
 * Callers:
 *     NtUserSetMirrorRendering @ 0x1C01FDA30 (NtUserSetMirrorRendering.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00B628C (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C027F8E8 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 *     ?vSpCreateExMirror@@YAXPEAUHDEV__@@@Z @ 0x1C0280798 (-vSpCreateExMirror@@YAXPEAUHDEV__@@@Z.c)
 */

__int64 __fastcall GreDisableMirrorRendering(__int64 a1, HWND a2)
{
  unsigned int v3; // edi
  __int64 v4; // rsi
  const struct _SPRITESTATE *v5; // rcx
  struct _METASPRITE *MetaSprite; // rax
  struct _METASPRITE *v7; // r14
  __int64 v8; // rbx
  struct SPRITE *Sprite; // rbx
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  char v12; // [rsp+50h] [rbp+18h] BYREF
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v11 = a1;
  v3 = 0;
  v13 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( v11 )
  {
    SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v12, (struct PDEVOBJ *)&v11);
    v4 = v11;
    v5 = (const struct _SPRITESTATE *)(v11 + 80);
    if ( *(_DWORD *)(v11 + 140) )
    {
      MetaSprite = pSpGetMetaSprite(v5, a2, 0LL, 0);
      v7 = MetaSprite;
      if ( MetaSprite )
      {
        *((_DWORD *)MetaSprite + 4) |= 0x100u;
        if ( *(_DWORD *)(v4 + 140) )
        {
          do
          {
            v8 = v3;
            vSpCreateExMirror(*(HDEV *)(*(_QWORD *)(v4 + 144) + 8LL * v3++));
            **((_DWORD **)v7 + v8 + 3) |= 0x100u;
            *(_DWORD *)(*((_QWORD *)v7 + v8 + 3) + 224LL) |= 0x10000000u;
          }
          while ( v3 < *(_DWORD *)(v4 + 140) );
        }
        goto LABEL_9;
      }
    }
    else
    {
      Sprite = pSpGetSprite(v5, a2, 0LL);
      if ( Sprite )
      {
        vSpCreateExMirror(*(HDEV *)(v4 + 80));
        *(_DWORD *)Sprite |= 0x100u;
        *((_DWORD *)Sprite + 56) |= 0x10000000u;
LABEL_9:
        v3 = 1;
      }
    }
    SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v12);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v3;
}
