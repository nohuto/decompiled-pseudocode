/*
 * XREFs of ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001F1A0
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001EFD0 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Add@?$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z @ 0x180011F40 (-Add@-$CGenericSet@PEAVCWindowData@@@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180012D9C (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?IsEmpty@?$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ @ 0x18001F250 (-IsEmpty@-$CGenericSet@PEAVCWindowData@@@@QEAA_NXZ.c)
 *     ?OnColorizationUpdated@CWindowData@@QEAAXXZ @ 0x180035D2C (-OnColorizationUpdated@CWindowData@@QEAAXXZ.c)
 */

void __fastcall CWindowList::CheckForMaximizedChange(CWindowList *this, struct CWindowData *a2)
{
  char v3; // di
  bool v5; // si
  char v6; // r15
  char v7; // di
  unsigned __int8 v8; // si
  struct _LIST_ENTRY *WindowListForDesktop; // rdi
  struct _LIST_ENTRY *i; // rbx
  struct CWindowData *Buffer; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_BYTE *)a2 + 665);
  v5 = (*((_DWORD *)a2 + 29) & 0x11000000) == 0x11000000 && *((_QWORD *)a2 + 4);
  v6 = (unsigned __int8)CGenericSet<CWindowData *>::IsEmpty((char *)this + 424) == 0;
  *((_BYTE *)a2 + 665) &= ~2u;
  *((_BYTE *)a2 + 665) |= 2 * v5;
  if ( v5 )
  {
    v7 = v3 & 2;
    if ( !v7 )
    {
      CGenericSet<CWindowData *>::Add((struct _RTL_GENERIC_TABLE *)((char *)this + 424), (__int64)a2);
      goto LABEL_6;
    }
  }
  else
  {
    v7 = v3 & 2;
  }
  if ( v7 && !v5 )
  {
    Buffer = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 424), &Buffer);
  }
LABEL_6:
  v8 = (unsigned __int8)CGenericSet<CWindowData *>::IsEmpty((char *)this + 424) == 0;
  if ( v6 != v8 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(this);
    *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 21) = v8;
    for ( i = WindowListForDesktop->Flink; i != WindowListForDesktop; i = i->Flink )
    {
      if ( (BYTE1(i[41].Blink) & 8) != 0 )
      {
        CWindowData::OnColorizationUpdated((CWindowData *)i);
        PostMessageW((HWND)i[2].Blink, 0x321u, v8, 0LL);
      }
    }
  }
}
