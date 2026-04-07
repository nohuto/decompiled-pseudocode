/*
 * XREFs of ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C
 * Callers:
 *     ?ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180004290 (-ForceIconicRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z @ 0x18000EE60 (-CloakChange@CWindowList@@UEAAJPEAUIDwmWindow@@0_N@Z.c)
 *     ?FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800133C0 (-FreezeRepresentationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SnapshotWindow@CWindowData@@QEAAJXZ @ 0x1800206E8 (-SnapshotWindow@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180022660 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180032710 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z @ 0x180048110 (-ProcessBackChannelMessage@CWindowList@@UEAAJPEBUMIL_MESSAGE@@@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001F880 (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?ClearSnapshot@CWindowData@@QEAAX_N00@Z @ 0x18002254C (-ClearSnapshot@CWindowData@@QEAAX_N00@Z.c)
 *     ?IsShellManaged@CWindowData@@QEBA_NXZ @ 0x180022F34 (-IsShellManaged@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CWindowData::ClearSnapshot(CWindowData *this, bool a2, __int64 a3, bool a4)
{
  int v4; // eax
  CBaseObject *v8; // rcx
  char v9; // al
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 i; // rdi
  CWindowData *v13; // rcx

  v4 = *((_DWORD *)this + 33);
  if ( v4 >= 8 && v4 <= 11 || CWindowData::IsShellManaged(this) )
  {
    v9 = *((_BYTE *)this + 668);
    if ( (v9 & 1) != 0 && a4 )
    {
      v10 = 0LL;
      for ( *((_BYTE *)this + 668) = v9 | 0x10; (unsigned int)v10 < *((_DWORD *)this + 158); *(_BYTE *)(v11 + 668) |= 0x10u )
      {
        v11 = *(_QWORD *)(*((_QWORD *)this + 76) + 8 * v10);
        v10 = (unsigned int)(v10 + 1);
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
      v13 = *(CWindowData **)(*((_QWORD *)this + 76) + 8 * i);
      if ( (*((_DWORD *)v13 + 29) & 0x20000000) == 0 )
        CWindowData::ClearSnapshot(v13, a2, 0, a4);
    }
    if ( a2 )
      CWindowData::NotifyRepresentationChanged(this);
  }
}
