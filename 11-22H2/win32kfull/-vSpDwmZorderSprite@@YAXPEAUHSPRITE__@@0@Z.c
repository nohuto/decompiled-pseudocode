/*
 * XREFs of ?vSpDwmZorderSprite@@YAXPEAUHSPRITE__@@0@Z @ 0x1C00D4F20
 * Callers:
 *     GreZorderSprite @ 0x1C00D4B8C (GreZorderSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0134710 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 * Callees:
 *     ?LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z @ 0x1C00C8A3C (-LockSpriteObj@DWMSPRITEREF@@AEAAXPEAUHSPRITE__@@@Z.c)
 *     DwmAsyncZorderSprite @ 0x1C00D5098 (DwmAsyncZorderSprite.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 */

void __fastcall vSpDwmZorderSprite(HSPRITE a1, HSPRITE a2)
{
  Gre::Base *v4; // rcx
  Gre::Base *v5; // rdx
  Gre::Base **v6; // rax
  struct Gre::Base::SESSION_GLOBALS *v7; // r9
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rdx
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
    v4 = (Gre::Base *)((v16 + 24) & -(__int64)(v16 != 0));
    v5 = *(Gre::Base **)v4;
    if ( *(Gre::Base **)(*(_QWORD *)v4 + 8LL) == v4 )
    {
      v6 = *(Gre::Base ***)(((v16 + 24) & -(__int64)(v16 != 0)) + 8);
      if ( *v6 == v4 )
      {
        *v6 = v5;
        *((_QWORD *)v5 + 1) = v6;
        v7 = Gre::Base::Globals(v4);
        v8 = v16 + 24;
        if ( v18 )
        {
          v9 = (_QWORD *)(v8 & -(__int64)(v16 != 0));
          v10 = (_QWORD *)((v18 + 24) & -(__int64)(v18 != 0));
          v11 = *v10;
          if ( *(_QWORD **)(*v10 + 8LL) == v10 )
          {
            *v9 = v11;
            v9[1] = v10;
            *(_QWORD *)(v11 + 8) = v9;
            *v10 = v9;
LABEL_9:
            v14 = (void *)UserReferenceDwmApiPort(v10);
            DwmAsyncZorderSprite(v14);
            goto LABEL_10;
          }
        }
        else
        {
          v12 = *((_QWORD *)v7 + 38) + 80LL;
          v13 = (_QWORD *)(v8 & -(__int64)(v16 != 0));
          v10 = *(_QWORD **)v12;
          if ( *(_QWORD *)(*(_QWORD *)v12 + 8LL) == v12 )
          {
            *v13 = v10;
            v13[1] = v12;
            v10[1] = v13;
            *(_QWORD *)v12 = v13;
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
