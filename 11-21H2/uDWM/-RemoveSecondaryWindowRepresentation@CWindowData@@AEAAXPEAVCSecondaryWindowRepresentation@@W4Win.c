/*
 * XREFs of ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x180048924
 * Callers:
 *     ?ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVCWindowRepresentation@@@Z @ 0x180020E74 (-ChangeSecondaryWindowRepresentation@CWindowData@@QEAAJPEAVCSecondaryWindowRepresentation@@PEAVC.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x1800488C8 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?IsImmersiveWindow@CWindowData@@QEBA_NXZ @ 0x18001DA74 (-IsImmersiveWindow@CWindowData@@QEBA_NXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180028A00 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800485B8 (-OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?Remove@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowRepresentation@@@Z @ 0x180048A2C (-Remove@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAHAEBQEAVCSecondaryWindowReprese.c)
 *     ?TrackOwnedWindows@CWindowData@@AEAAX_N@Z @ 0x180048A78 (-TrackOwnedWindows@CWindowData@@AEAAX_N@Z.c)
 *     McTemplateU0ppd_EtwEventWriteTransfer @ 0x180048AD8 (McTemplateU0ppd_EtwEventWriteTransfer.c)
 *     ?IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z @ 0x18004BE50 (-IconicRepresentationDestroyed@CIconicBitmapRegistry@@QEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowData::RemoveSecondaryWindowRepresentation(
        __int64 a1,
        CSecondaryWindowRepresentation *a2,
        int a3,
        char a4)
{
  int v7; // edi
  CBaseObject *v8; // rcx
  __int64 v9; // rdi
  int v10; // eax
  struct CWindowData *v11; // rdx
  CSecondaryWindowRepresentation *v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  if ( a4 )
  {
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0ppd_EtwEventWriteTransfer(a1, (_DWORD)a2, (_DWORD)a2, *(_QWORD *)(a1 + 40), a3);
    DynArray<CSecondaryWindowRepresentation *,0>::Remove(a1 + 496, &v12);
  }
  v7 = a3 - 1;
  if ( v7 )
  {
    if ( v7 == 2 && !CWindowData::IsImmersiveWindow((CWindowData *)a1) )
    {
      v8 = *(CBaseObject **)(a1 + 488);
      if ( v8 )
      {
        if ( !(unsigned int)CBaseObject::Release(v8) )
        {
          CIconicBitmapRegistry::IconicRepresentationDestroyed(
            *((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance + 28),
            (struct CWindowData *)a1);
          *(_QWORD *)(a1 + 488) = 0LL;
        }
      }
    }
  }
  else
  {
    --*(_DWORD *)(a1 + 528);
    LODWORD(v9) = *(_DWORD *)(a1 + 632);
    v10 = *(_DWORD *)(a1 + 528);
    if ( (_DWORD)v9 )
    {
      do
      {
        v9 = (unsigned int)(v9 - 1);
        v11 = *(struct CWindowData **)(*(_QWORD *)(a1 + 608) + 8 * v9);
        if ( (*((_BYTE *)v11 + 666) & 1) != 0 )
          CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(a2, v11, 0);
      }
      while ( (_DWORD)v9 );
      v10 = *(_DWORD *)(a1 + 528);
    }
    if ( !v10 )
      CWindowData::TrackOwnedWindows((CWindowData *)a1, 0);
  }
}
