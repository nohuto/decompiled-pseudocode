/*
 * XREFs of ?_FindWindowEx@@YAPEAUtagWND@@PEAU1@0GPEBGK@Z @ 0x1C015B434
 * Callers:
 *     NtUserFindWindowEx @ 0x1C00706A0 (NtUserFindWindowEx.c)
 * Callees:
 *     PtiCurrentShared @ 0x1C00418E4 (PtiCurrentShared.c)
 *     GetThreadDesktopWindow @ 0x1C00F26A0 (GetThreadDesktopWindow.c)
 */

struct tagWND *__fastcall _FindWindowEx(struct tagWND *a1, struct tagWND **a2, __int16 a3, const unsigned __int16 *a4)
{
  struct tagWND *ThreadDesktopWindow; // rdi
  BOOL v8; // r14d
  struct tagWND *v9; // rdi
  const wchar_t *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax

  ThreadDesktopWindow = a1;
  v8 = 0;
  if ( !a1 )
  {
    ThreadDesktopWindow = (struct tagWND *)GetThreadDesktopWindow(0LL);
    v8 = a2 == 0LL;
  }
  while ( 1 )
  {
    if ( a2 )
    {
      if ( a2[13] != ThreadDesktopWindow )
        return 0LL;
      v9 = a2[11];
    }
    else
    {
      v9 = (struct tagWND *)*((_QWORD *)ThreadDesktopWindow + 14);
    }
    while ( v9 )
    {
      if ( !a3 || a3 == *(_WORD *)(*(_QWORD *)(*((_QWORD *)v9 + 17) + 8LL) + 2LL) )
      {
        if ( !a4 )
          break;
        v11 = *(_DWORD *)(*((_QWORD *)v9 + 5) + 184LL) ? (const wchar_t *)*((_QWORD *)v9 + 23) : szNull;
        if ( !_wcsicmp(a4, v11) )
          break;
      }
      v9 = (struct tagWND *)*((_QWORD *)v9 + 11);
    }
    if ( v9 || !v8 )
      break;
    v8 = 0;
    ThreadDesktopWindow = 0LL;
    v12 = PtiCurrentShared();
    if ( v12 )
    {
      v13 = *(_QWORD *)(v12 + 456);
      if ( v13 )
        ThreadDesktopWindow = *(struct tagWND **)(v13 + 104);
    }
    a2 = 0LL;
  }
  return v9;
}
