/*
 * XREFs of _ChangeWindowMessageFilterEx @ 0x1C00A70D8
 * Callers:
 *     NtUserChangeWindowMessageFilterEx @ 0x1C00A6F40 (NtUserChangeWindowMessageFilterEx.c)
 * Callees:
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C00546A8 (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     FreeWindowMessageFilter @ 0x1C005FCD0 (FreeWindowMessageFilter.c)
 *     ?VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z @ 0x1C00786B0 (-VWPLRemoveBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@HPEA_K@Z.c)
 *     ?VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z @ 0x1C007A438 (-VWPLAddBase@@YAHPEAPEAUtagVWPL@@_KPEAUtagWND@@KH@Z.c)
 *     UIPISQMChangeFilter @ 0x1C00A726C (UIPISQMChangeFilter.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00A7304 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C00A767C (-GetWindowMessageFilter@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00A7790 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00FA554 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z @ 0x1C00FA678 (-IsMessageAllowedByFilterEx@@YAHPEBQEAXIPEAPEAPEAX1@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilterEx(struct tagWND *a1, unsigned int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v10; // r13
  __int64 v11; // rcx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // r9d
  void **v15; // r15
  __int64 v16; // r9
  struct tagVWPL **v18; // rcx
  void **v19[7]; // [rsp+30h] [rbp-38h] BYREF
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v4 = 0;
  v20 = 0;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  *(_DWORD *)(a4 + 4) = 0;
  v10 = CurrentProcessWin32Process;
  UIPISQMChangeFilter(CurrentProcessWin32Process);
  if ( (unsigned __int8)Enforced(v11) )
  {
    if ( !(unsigned int)ValidateChangeMessageFilter(v10, a2) )
      return 0LL;
    if ( a3 )
    {
      v19[0] = GetWindowMessageFilter(a1);
      v15 = v19[0];
      if ( a3 == 1 )
      {
        v4 = AddMessageToFilter(v19, a2, &v20);
        if ( v4 && v20 )
          *(_DWORD *)(a4 + 4) = 1;
      }
      else
      {
        if ( a3 != 2 )
          return v4;
        v4 = RemoveMessageFromFilter(v19, a2, &v20);
        if ( v4 )
        {
          if ( (unsigned int)IsMessageAllowedByFilterEx(*((void *const **)v10 + 106), a2, 0LL, 0LL)
            || (unsigned int)IsMessageAlwaysAllowedAcrossIL(a2) )
          {
            *(_DWORD *)(a4 + 4) = 3;
          }
          else if ( v20 )
          {
            *(_DWORD *)(a4 + 4) = 2;
          }
        }
      }
      if ( v15 != v19[0] )
      {
        v18 = (struct tagVWPL **)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) + 856LL);
        if ( v19[0] )
          return (unsigned int)VWPLAddBase(v18, (__int64)v19[0], a1, 5u);
        else
          VWPLRemoveBase(v18, 0LL, a1, v16, 0LL);
      }
      return v4;
    }
    FreeWindowMessageFilter(a1, v12, v13, v14);
  }
  return 1LL;
}
