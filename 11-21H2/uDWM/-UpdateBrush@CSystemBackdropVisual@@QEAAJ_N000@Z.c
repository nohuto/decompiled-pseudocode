/*
 * XREFs of ?UpdateBrush@CSystemBackdropVisual@@QEAAJ_N000@Z @ 0x1800E1C64
 * Callers:
 *     ?UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ @ 0x180033FB4 (-UpdateSystemBackdropVisual@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800049E0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z @ 0x1800E1A40 (-SetState@CSystemBackdropVisual@@AEAAJW4BackdropState@1@_N@Z.c)
 */

__int64 __fastcall CSystemBackdropVisual::UpdateBrush(CSystemBackdropVisual *this, char a2, char a3, char a4, char a5)
{
  int v5; // edi
  int v7; // eax
  DWORD SysColor; // eax
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v5 = 1;
  if ( a4 )
  {
    v5 = 3;
  }
  else if ( !a2 || !a3 )
  {
    v5 = 2;
  }
  v7 = *((_DWORD *)this + 70);
  if ( v7 == v5 && *((_BYTE *)this + 304) == a5 && v5 != 3 )
    return 0LL;
  if ( v7 == 3 && v5 == 3 )
  {
    SysColor = GetSysColor(5);
    if ( *((_BYTE *)this + 284) == 0xFF
      && *(_WORD *)((char *)this + 285) == (_WORD)SysColor
      && *((_BYTE *)this + 287) == BYTE2(SysColor) )
    {
      return 0LL;
    }
  }
  v9 = CSystemBackdropVisual::SetState((__int64)this, v5, a5);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB6,
    (int)"clientcore\\windows\\dwm\\udwm\\systembackdropvisual.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
