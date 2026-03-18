/*
 * XREFs of TrackLayeredZorder @ 0x1C001F3C8
 * Callers:
 *     LinkWindow @ 0x1C006F9A0 (LinkWindow.c)
 *     xxxSetLayeredWindow @ 0x1C0082DD4 (xxxSetLayeredWindow.c)
 * Callees:
 *     ?ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z @ 0x1C001F45C (-ReorderChildrenSpriteList@@YAXPEAUtagWND@@0@Z.c)
 *     ?GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00203AC (-GetNextLayeredWindow@@YAPEAUtagWND@@PEAU1@@Z.c)
 *     IsDesktopWindow @ 0x1C00205C0 (IsDesktopWindow.c)
 *     GreZorderSprite @ 0x1C0021834 (GreZorderSprite.c)
 */

void __fastcall TrackLayeredZorder(struct tagWND *a1)
{
  __int64 v2; // rcx
  HWND v3; // rdi
  struct tagWND *NextLayeredWindow; // rsi

  v3 = 0LL;
  if ( (unsigned int)IsDesktopWindow() && (unsigned int)IsWindowDesktopComposed(v2) )
    NextLayeredWindow = (struct tagWND *)*((_QWORD *)a1 + 14);
  else
    NextLayeredWindow = GetNextLayeredWindow(a1);
  IsWindowDesktopComposed(a1);
  if ( NextLayeredWindow )
    v3 = *(HWND *)NextLayeredWindow;
  GreZorderSprite(*(HDEV *)(gpDispInfo + 40LL), *(HWND *)a1, v3);
  ReorderChildrenSpriteList(a1, a1);
}
