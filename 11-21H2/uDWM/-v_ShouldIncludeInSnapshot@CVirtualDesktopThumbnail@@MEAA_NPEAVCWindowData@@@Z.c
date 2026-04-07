/*
 * XREFs of ?v_ShouldIncludeInSnapshot@CVirtualDesktopThumbnail@@MEAA_NPEAVCWindowData@@@Z @ 0x1800B3D00
 * Callers:
 *     <none>
 * Callees:
 *     ?GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z @ 0x1800239B8 (-GetSyncedWindowData@CWindowList@@QEAAJPEAUIDwmWindow@@_NPEAPEAVCWindowData@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Find@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800693F8 (-Find@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 */

char __fastcall CVirtualDesktopThumbnail::v_ShouldIncludeInSnapshot(
        CVirtualDesktopThumbnail *this,
        struct CWindowData *a2)
{
  char v5; // bl
  struct CWindowData *v6; // rdi
  struct CWindowData *v7; // rax
  __int64 v8; // rcx
  struct IDwmWindow *v9; // rax
  __int64 v10; // rdi
  char v11; // r11
  struct CWindowData *v12; // [rsp+48h] [rbp+10h] BYREF
  struct CWindowData *v13; // [rsp+50h] [rbp+18h] BYREF

  if ( (*((_BYTE *)a2 + 666) & 0x40) != 0 )
    return 0;
  v5 = 0;
  v12 = a2;
  v6 = a2;
  while ( (*((_DWORD *)a2 + 30) & 0x40000) == 0 )
  {
    v7 = (struct CWindowData *)*((_QWORD *)v6 + 75);
    if ( v7 && (*((_DWORD *)v7 + 29) & 0x10000000) != 0 )
    {
      v6 = (struct CWindowData *)*((_QWORD *)v6 + 75);
      v12 = v7;
    }
    else
    {
      v8 = *((_QWORD *)v6 + 3);
      if ( !v8 )
        break;
      if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8) )
        break;
      v9 = (struct IDwmWindow *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)v6 + 3) + 360LL))(*((_QWORD *)v6 + 3));
      v13 = 0LL;
      if ( (int)CWindowList::GetSyncedWindowData(
                  *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 52),
                  v9,
                  0,
                  &v13) < 0 )
        break;
      v6 = v13;
      v12 = v13;
    }
  }
  v10 = *((_QWORD *)this + 36);
  if ( (unsigned int)DynArray<CWindowData *,0>::Find(v10 + 128, &v12)
    || !(unsigned int)DynArray<CWindowData *,0>::Find(v10 + 160, &v12) && v11 )
  {
    return 1;
  }
  return v5;
}
