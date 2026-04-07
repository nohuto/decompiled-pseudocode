/*
 * XREFs of ?ShouldBeAutoParented@CWindowData@@QEBA_NPEBU_LIST_ENTRY@@@Z @ 0x180063470
 * Callers:
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001E1F0 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18001F330 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DF10 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E9B0 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z @ 0x180030AC4 (-ReevaluateAutoParenting@CWindowList@@AEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ @ 0x18001DEC0 (-PropertiesAllowAutoParenting@CWindowData@@QEBA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CWindowData::ShouldBeAutoParented(CWindowData *this, const struct _LIST_ENTRY *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 i; // rax
  __int64 v7; // rdx

  v4 = *((_QWORD *)this + 3);
  if ( v4 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 440LL))(v4) )
    {
      if ( CWindowData::PropertiesAllowAutoParenting(this)
        && (*((_BYTE *)this + 669) & 0x10) == 0
        && !*((_QWORD *)this + 58)
        && (*((_BYTE *)this + 668) & 2) == 0 )
      {
        v5 = *((_QWORD *)this + 75);
        if ( (*(_BYTE *)(v5 + 664) & 1) != 0 && *(_QWORD *)(v5 + 440) && (*(_BYTE *)(v5 + 670) & 8) == 0 )
        {
          for ( i = *((_QWORD *)this + 1); (const struct _LIST_ENTRY *)i != a2; i = *(_QWORD *)(i + 8) )
          {
            if ( i == v5 )
              return 1;
            if ( (*(_BYTE *)(i + 664) & 1) != 0 )
            {
              v7 = *(_QWORD *)(i + 440);
              if ( v7 )
              {
                if ( *(_QWORD *)(v7 + 24) )
                  return *(_QWORD *)(i + 600) == v5 && (*(_BYTE *)(i + 670) & 8) != 0;
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
