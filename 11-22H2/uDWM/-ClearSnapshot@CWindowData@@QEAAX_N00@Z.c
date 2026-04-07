/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180006D20
 * Callers:
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180006890 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x180006B78 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180006D20 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180014570 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002BEC0 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x180030A20 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180031A20 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180043DC0 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180047CF0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x180006D20 (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001D634 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180035400 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x1800369CC (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  char v7; // al
  CBaseObject *v8; // rcx
  __int64 i; // rdi
  CWindowData *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx

  if ( CWindowData::IsImmersiveWindow(this) )
  {
    v7 = *((_BYTE *)this + 676);
    if ( (v7 & 1) != 0 && a4 )
    {
      v11 = 0LL;
      for ( *((_BYTE *)this + 676) = v7 | 0x10; (unsigned int)v11 < *((_DWORD *)this + 158); *(_BYTE *)(v12 + 676) |= 0x10u )
      {
        v12 = *(_QWORD *)(*((_QWORD *)this + 76) + 8 * v11);
        v11 = (unsigned int)(v11 + 1);
      }
    }
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 60);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 60) = 0LL;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 158); i = (unsigned int)(i + 1) )
    {
      v10 = *(CWindowData **)(*((_QWORD *)this + 76) + 8 * i);
      if ( (*((_DWORD *)v10 + 29) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v10, a2, 0, a4);
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
