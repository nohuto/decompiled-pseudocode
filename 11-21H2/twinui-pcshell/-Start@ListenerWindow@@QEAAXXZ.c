/*
 * XREFs of ?Start@ListenerWindow@@QEAAXXZ @ 0x1801540E8
 * Callers:
 *     ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180153E30 (-subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall ListenerWindow::Start(ListenerWindow *this)
{
  HRESULT ApartmentType; // eax
  HWND v3; // rax
  HRESULT v4; // eax
  HWND v5; // rcx
  int cEntries; // [rsp+20h] [rbp-28h]
  int cEntriesa; // [rsp+20h] [rbp-28h]
  SHChangeNotifyEntry pshcne; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  APTTYPE pAptType; // [rsp+58h] [rbp+10h] BYREF
  int pvAttribute; // [rsp+60h] [rbp+18h] BYREF
  APTTYPEQUALIFIER pAptQualifier; // [rsp+68h] [rbp+20h] BYREF

  ApartmentType = CoGetApartmentType(&pAptType, &pAptQualifier);
  if ( ApartmentType < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x18,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\listenerwindow.cpp",
      (const char *)(unsigned int)ApartmentType,
      cEntries);
  if ( pAptType == APTTYPE_MAINSTA )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x19,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\listenerwindow.cpp",
      (const char *)0x8001010ELL,
      cEntries);
  v3 = (HWND)SHCreateWorkerWindowW(ListenerWindow::WndProc, 0LL, 128LL);
  *((_QWORD *)this + 3) = v3;
  if ( !v3 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\listenerwindow.cpp",
      (const char *)0x80004005LL,
      0);
  pvAttribute = 1;
  v4 = DwmSetWindowAttribute(v3, 0xDu, &pvAttribute, 4u);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x23,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\listenerwindow.cpp",
      (const char *)(unsigned int)v4,
      0);
  ShowWindow(*((HWND *)this + 3), 8);
  v5 = (HWND)*((_QWORD *)this + 3);
  pshcne.pidl = 0LL;
  pshcne.fRecursive = 0;
  if ( !SHChangeNotifyRegister(v5, 32770, 0x8000000, 0x402u, 1, &pshcne) )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x27,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\listenerwindow.cpp",
      (const char *)0x80004005LL,
      cEntriesa);
}
