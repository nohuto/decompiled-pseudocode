/*
 * XREFs of ?GdiAdjustSpriteDirtyAccum@@YAHPEAUHDEV__@@PEAUHWND__@@PEAU_RECTL@@2PEAU_POINTL@@3@Z @ 0x1C0158BD0
 * Callers:
 *     GreAdjustSpriteDirtyAccum @ 0x1C008EBE0 (GreAdjustSpriteDirtyAccum.c)
 * Callees:
 *     ?pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z @ 0x1C00B628C (-pSpGetSprite@@YAPEAVSPRITE@@PEAU_SPRITESTATE@@PEAUHWND__@@PEAX@Z.c)
 *     ?vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z @ 0x1C0158CF0 (-vSpAdjustSpriteDirtyAccum@@YAXPEAVSPRITE@@PEAU_RECTL@@1PEAU_POINTL@@2@Z.c)
 *     ?pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z @ 0x1C027F8E8 (-pSpGetMetaSprite@@YAPEAU_METASPRITE@@PEBU_SPRITESTATE@@PEAUHWND__@@PEAX_N@Z.c)
 */

__int64 __fastcall GdiAdjustSpriteDirtyAccum(
        HDEV a1,
        HWND a2,
        struct _RECTL *a3,
        struct _RECTL *a4,
        struct _POINTL *a5,
        struct _POINTL *a6)
{
  HDEV v8; // rdi
  unsigned int v9; // ebx
  const struct _SPRITESTATE *v10; // rcx
  struct _RECTL *v11; // rdx
  struct SPRITE *Sprite; // rcx
  struct _METASPRITE *MetaSprite; // rsi
  int v15; // r10d
  struct _POINTL *v16; // r14
  __int64 v17; // rax
  struct SPRITE *v18; // rcx
  LONG v19; // r8d
  struct _RECTL *v20; // rdx
  _BYTE v21[40]; // [rsp+30h] [rbp-28h] BYREF
  struct _POINTL v22; // [rsp+60h] [rbp+8h] BYREF
  HDEV v23; // [rsp+78h] [rbp+20h] BYREF

  v23 = a1;
  GreAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v21, (struct PDEVOBJ *)&v23);
  v8 = v23;
  v9 = 0;
  v10 = (const struct _SPRITESTATE *)(v23 + 20);
  if ( *((_DWORD *)v23 + 35) )
  {
    MetaSprite = pSpGetMetaSprite(v10, a2, 0LL, 0);
    if ( MetaSprite && v15 )
    {
      v16 = a6;
      do
      {
        v17 = *(_QWORD *)(*((_QWORD *)v8 + 18) + 8LL * v9);
        v18 = (struct SPRITE *)*((_QWORD *)MetaSprite + v9 + 3);
        v19 = v16->x - *(_DWORD *)(v17 + 2560);
        v20 = (struct _RECTL *)*(unsigned int *)(v17 + 2564);
        LODWORD(v17) = v16->y - (_DWORD)v20;
        v22.x = v19;
        v22.y = v17;
        vSpAdjustSpriteDirtyAccum(v18, v20, a3, a5, &v22);
        ++v9;
      }
      while ( v9 < *((_DWORD *)v8 + 35) );
    }
  }
  else
  {
    Sprite = pSpGetSprite(v10, a2, 0LL);
    if ( Sprite )
      vSpAdjustSpriteDirtyAccum(Sprite, v11, a3, a5, a6);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v21);
  EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
  GreReleaseSemaphoreInternal(ghsemGreLock);
  return 1LL;
}
