/*
 * XREFs of ?InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z @ 0x180758210
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z @ 0x180749BDC (-GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z.c)
 *     ?_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z @ 0x18075ED00 (-_TogglePinned@CPinnedList@@IEAAJW4PINNEDLISTMODIFYCALLER@@@Z.c)
 */

__int64 __fastcall CPinnedList::InvokeCommand(unsigned __int64 this, struct _CMINVOKECOMMANDINFO *a2)
{
  unsigned int v4; // ebp
  unsigned int i; // ebx
  char *v6; // rdi
  const WCHAR *v7; // rax
  WCHAR String1[128]; // [rsp+30h] [rbp-128h] BYREF

  v4 = -2147024809;
  if ( a2->lpVerb >= (LPCSTR)0x10000 )
  {
    memset_0(String1, 0, sizeof(String1));
    GetVerbFromInvokeCommandInfo((struct IContextMenu *)(this & -(__int64)(this != 8)), a2, String1, 0x80u);
    for ( i = 0; i < 2; ++i )
    {
      v6 = (char *)(this - 8);
      v7 = (const WCHAR *)(*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)(this - 8) + 160LL))(
                            this - 8,
                            i);
      if ( CompareStringOrdinal(String1, -1, v7, -1, 1) == 2 )
        break;
    }
  }
  else
  {
    i = (unsigned int)a2->lpVerb;
    v6 = (char *)(this - 8);
  }
  if ( i == *(_DWORD *)(this + 88) && (*(unsigned int (__fastcall **)(char *, _QWORD))(*(_QWORD *)v6 + 200LL))(v6, i) )
    return (unsigned int)CPinnedList::_TogglePinned(v6, 4LL);
  return v4;
}
