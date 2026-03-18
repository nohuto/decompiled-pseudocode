/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C0020A28
 * Callers:
 *     GreZorderSprite @ 0x1C0021834 (GreZorderSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C01541E4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     DwmAsyncZorderSprite @ 0x1C0020B80 (DwmAsyncZorderSprite.c)
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C002297C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015D684 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  void *v14; // rax
  _BYTE v15[32]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-30h]
  _BYTE v17[32]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v18; // [rsp+68h] [rbp-8h]

  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v15);
  v16 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v15, a1);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v17);
  v18 = 0LL;
  DWMSPRITEREF::LockSpriteObj((DWMSPRITEREF *)v17, a2);
  if ( v16 )
  {
    v4 = v16 + 24;
    v5 = *(_QWORD *)(v16 + 24);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) == v4 )
    {
      v6 = *(_QWORD **)(v16 + 32);
      if ( *v6 == v4 )
      {
        *v6 = v5;
        *(_QWORD *)(v5 + 8) = v6;
        v7 = v16 + 24;
        if ( v18 )
        {
          v8 = (_QWORD *)(v18 + 24);
          v9 = (_QWORD *)(v7 & -(__int64)(v16 != 0));
          v10 = *(_QWORD *)(v18 + 24);
          if ( *(_QWORD *)(v10 + 8) == v18 + 24 )
          {
            *v9 = v10;
            v9[1] = v8;
            *(_QWORD *)(v10 + 8) = v9;
            *v8 = v9;
LABEL_9:
            v14 = (void *)UserReferenceDwmApiPort();
            DwmAsyncZorderSprite(v14);
            goto LABEL_10;
          }
        }
        else
        {
          v11 = (_QWORD *)(v7 & -(__int64)(v16 != 0));
          v12 = (_QWORD *)((char *)g_pDwmState + 80);
          v13 = *((_QWORD *)g_pDwmState + 10);
          if ( *(struct DwmState **)(v13 + 8) == (struct DwmState *)((char *)g_pDwmState + 80) )
          {
            *v11 = v13;
            v11[1] = v12;
            *(_QWORD *)(v13 + 8) = v11;
            *v12 = v11;
            goto LABEL_9;
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_10:
  if ( v18 )
    _InterlockedDecrement((volatile signed __int32 *)(v18 + 12));
  v18 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v17);
  if ( v16 )
    _InterlockedDecrement((volatile signed __int32 *)(v16 + 12));
  v16 = 0LL;
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v15);
}
