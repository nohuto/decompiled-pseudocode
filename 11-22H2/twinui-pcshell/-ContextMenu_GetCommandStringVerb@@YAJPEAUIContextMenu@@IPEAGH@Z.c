/*
 * XREFs of ?ContextMenu_GetCommandStringVerb@@YAJPEAUIContextMenu@@IPEAGH@Z @ 0x180749A24
 * Callers:
 *     ?GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z @ 0x180749BDC (-GetVerbFromInvokeCommandInfo@@YAJPEAUIContextMenu@@PEAU_CMINVOKECOMMANDINFO@@PEAGK@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEA_W_KPEB_W@Z @ 0x1800ECFC4 (-StringCchCopyW@@YAJPEA_W_KPEB_W@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall ContextMenu_GetCommandStringVerb(struct IContextMenu *a1, unsigned int a2, char *a3, int a4)
{
  __int64 v4; // r15
  __int64 v5; // r10
  __int64 v8; // rdx
  char *v9; // rcx
  __int16 v10; // ax
  char *v11; // rax
  struct IContextMenuVtbl *lpVtbl; // rax
  __int64 v13; // rbp
  int v14; // ebx
  int v15; // eax
  struct IContextMenuVtbl *v16; // rax
  CHAR pszSrc[272]; // [rsp+40h] [rbp-368h] BYREF
  wchar_t v19[264]; // [rsp+150h] [rbp-258h] BYREF

  v4 = a4;
  v5 = a2;
  if ( a4 )
  {
    if ( (unsigned __int64)a4 <= 0x7FFFFFFF )
    {
      v8 = a4;
      v9 = a3;
      do
      {
        if ( !(2147483646LL - a4 + v8) )
          break;
        v10 = *(_WORD *)&v9[(char *)&LocaleName - a3];
        if ( !v10 )
          break;
        *(_WORD *)v9 = v10;
        v9 += 2;
        --v8;
      }
      while ( v8 );
      v11 = v9 - 2;
      if ( v8 )
        v11 = v9;
      *(_WORD *)v11 = 0;
    }
    else
    {
      *(_WORD *)a3 = 0;
    }
  }
  lpVtbl = a1->lpVtbl;
  v13 = v5;
  if ( (unsigned __int64)a4 >= 0x41 )
  {
    v15 = ((__int64 (__fastcall *)(struct IContextMenu *, __int64, __int64))lpVtbl->GetCommandString)(a1, v5, 4LL);
    goto LABEL_15;
  }
  v19[0] = 0;
  v14 = ((__int64 (__fastcall *)(struct IContextMenu *, __int64, __int64))lpVtbl->GetCommandString)(a1, v5, 4LL);
  if ( v14 >= 0 )
  {
    v15 = StringCchCopyW((wchar_t *)a3, v4, v19);
LABEL_15:
    v14 = v15;
  }
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -2147024774 )
  {
    v16 = a1->lpVtbl;
    pszSrc[0] = 0;
    v14 = ((__int64 (__fastcall *)(struct IContextMenu *, __int64, _QWORD, _QWORD, CHAR *, int))v16->GetCommandString)(
            a1,
            v13,
            0LL,
            0LL,
            pszSrc,
            65);
    if ( v14 >= 0 )
      SHAnsiToUnicode(pszSrc, (PWSTR)a3, v4);
  }
  return (unsigned int)v14;
}
