/*
 * XREFs of ??1TrayNotifyCallback@SystemTray@@EEAA@XZ @ 0x180547ED8
 * Callers:
 *     ??_GTrayNotifyCallback@SystemTray@@EEAAPEAXI@Z @ 0x180547F60 (--_GTrayNotifyCallback@SystemTray@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall SystemTray::TrayNotifyCallback::~TrayNotifyCallback(SystemTray::TrayNotifyCallback *this)
{
  HICON v2; // rcx
  unsigned __int64 v3; // rdx

  v2 = (HICON)*((_QWORD *)this + 7);
  if ( v2 )
    DestroyIcon(v2);
  v3 = *((_QWORD *)this + 6);
  if ( v3 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 3), 2 * v3 + 2);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 7LL;
  *((_WORD *)this + 12) = 0;
  WindowsDeleteString(*((HSTRING *)this + 2));
  *((_QWORD *)this + 2) = 0LL;
  *((_DWORD *)this + 3) = -1073741823;
}
