/*
 * XREFs of ?GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z @ 0x180749BDC
 * Callers:
 *     ?InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z @ 0x180758210 (-InvokeCommand@CPinnedList@@UEAAJPEAU_CMINVOKECOMMANDINFO@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     ?ContextMenu_GetCommandStringVerb@@YAJPEAUIContextMenu@@IPEAGH@Z @ 0x180749A24 (-ContextMenu_GetCommandStringVerb@@YAJPEAUIContextMenu@@IPEAGH@Z.c)
 */

__int64 __fastcall GetVerbFromInvokeCommandInfo(
        struct IContextMenu *a1,
        struct _CMINVOKECOMMANDINFO *a2,
        unsigned __int16 *a3,
        unsigned int a4)
{
  const CHAR *lpVerb; // rcx
  unsigned int v7; // ebx
  unsigned int CommandStringVerb; // eax
  const wchar_t *hwnd; // r8

  *a3 = 0;
  lpVerb = a2->lpVerb;
  v7 = -2147467259;
  if ( (unsigned __int64)lpVerb >= 0x10000 )
  {
    if ( a2->cbSize >= 0x60 && (a2->fMask & 0x4000) != 0 && (hwnd = (const wchar_t *)a2[1].hwnd) != 0LL )
      CommandStringVerb = StringCchCopyW(a3, a4, hwnd);
    else
      CommandStringVerb = SHAnsiToUnicode(lpVerb, a3, a4) == 0 ? 0x80004005 : 0;
  }
  else
  {
    CommandStringVerb = ContextMenu_GetCommandStringVerb(a1, (unsigned __int16)lpVerb, (char *)a3, a4);
  }
  if ( *a3 )
    return CommandStringVerb;
  return v7;
}
