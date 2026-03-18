/*
 * XREFs of bSetDevPreviewRect @ 0x1C0284260
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x1C01EC5FC (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C001B818 (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ?bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z @ 0x1C006EC20 (-bCleanupSpriteStateRects@@YAHPEAUHDEV__@@PEAU_SPRITESTATE@@@Z.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C007AC00 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     GreDeleteSprite @ 0x1C00C8F74 (GreDeleteSprite.c)
 *     GreCreateSprite @ 0x1C00CD35C (GreCreateSprite.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     vSpDwmGetMiniWinInfoForNonWindowSprite @ 0x1C0135688 (vSpDwmGetMiniWinInfoForNonWindowSprite.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 *     memset_0 @ 0x1C0141600 (memset_0.c)
 *     DwmAsyncSendWindowArrangingData @ 0x1C026D7B8 (DwmAsyncSendWindowArrangingData.c)
 *     bMoveDevPreviewRect @ 0x1C028407C (bMoveDevPreviewRect.c)
 */

__int64 __fastcall bSetDevPreviewRect(HDEV a1, __int64 a2, char a3, __int64 a4, __int64 a5)
{
  unsigned int v7; // esi
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  HDEV v9; // rbx
  bool v10; // r15
  __int64 v11; // rcx
  int v12; // ebp
  HWND v13; // rdx
  void *Sprite; // rax
  void *v15; // rax
  void *v16; // r8
  int v18; // [rsp+38h] [rbp-130h]
  int v19; // [rsp+40h] [rbp-128h]
  int v20; // [rsp+48h] [rbp-120h]
  __int64 v21; // [rsp+50h] [rbp-118h]
  HDEV v24; // [rsp+70h] [rbp-F8h] BYREF
  _BYTE v25[8]; // [rsp+78h] [rbp-F0h] BYREF
  __int64 v26; // [rsp+80h] [rbp-E8h] BYREF
  _BYTE v27[8]; // [rsp+88h] [rbp-E0h] BYREF
  _BYTE v28[144]; // [rsp+90h] [rbp-D8h] BYREF

  v7 = 1;
  v24 = a1;
  v8 = Gre::Base::Globals((Gre::Base *)a1);
  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)v27, *((HSEMAPHORE *)v8 + 10));
  v26 = *((_QWORD *)v8 + 15);
  GreAcquireSemaphore(v26);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)v25, (struct PDEVOBJ *)&v24);
  v9 = a1 + 297;
  v10 = *((_DWORD *)a1 + 296) && *(_DWORD *)v9;
  bCleanupSpriteStateRects(a1, (struct _SPRITESTATE *)(a1 + 20));
  v12 = a3 & 1;
  if ( a2 )
  {
    *(_DWORD *)v9 = v12;
    memset_0(v28, 0, 0x88uLL);
    vSpDwmGetMiniWinInfoForNonWindowSprite((__int64)v28, 0LL);
    Sprite = GreCreateSprite(
               (Gre::Base *)a1,
               v13,
               0LL,
               (struct tagMINIWINDOWINFO *)v28,
               0x9900u,
               a3 & 1,
               1,
               (unsigned int)v13 & v18,
               (unsigned int)v13 & v19,
               (unsigned int)v13 & v20,
               (unsigned __int16 *)((unsigned __int64)v13 & v21));
    *((_QWORD *)a1 + 155) = Sprite;
    if ( Sprite )
    {
      *((_DWORD *)a1 + 296) = 1;
      *(_DWORD *)v9 = v12;
      if ( (a3 & 4) == 0 )
        bMoveDevPreviewRect((Gre::Base *)a1, a2, 1, a4, a5);
    }
    else
    {
      v7 = 0;
    }
  }
  else if ( v10 )
  {
    v15 = (void *)UserReferenceDwmApiPort(v11);
    DwmAsyncSendWindowArrangingData(v15, 2, a4, 0LL, a5);
  }
  if ( !*((_DWORD *)a1 + 296) )
  {
    v16 = (void *)*((_QWORD *)a1 + 155);
    if ( v16 )
    {
      GreDeleteSprite((Gre::Base *)a1, 0LL, v16, *(_DWORD *)v9);
      *((_QWORD *)a1 + 155) = 0LL;
    }
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)v25);
  SEMOBJ::vUnlock((SEMOBJ *)&v26);
  SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)v27);
  return v7;
}
