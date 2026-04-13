/*
 * XREFs of ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800C8C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::TaskbarPinService::Invoke(
        CreativeFramework::Actions::TaskbarPinService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4,
        bool a5)
{
  CreativeFramework::Actions *v5; // rcx
  const WCHAR *v6; // rdx
  char *v7; // rcx

  if ( *((_QWORD *)this + 11) )
  {
    LOBYTE(a4) = *((_BYTE *)this + 104);
    v5 = (CreativeFramework::Actions::TaskbarPinService *)((char *)this + 72);
    if ( *((_QWORD *)v5 + 3) >= 8uLL )
      v5 = *(CreativeFramework::Actions **)v5;
    CreativeFramework::Actions::PinApp(v5, a2, (bool)a3, a4, a5);
  }
  else
  {
    LOBYTE(a3) = *((_BYTE *)this + 104);
    v6 = (const WCHAR *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    v7 = (char *)this + 8;
    if ( *((_QWORD *)v7 + 3) >= 8uLL )
      v7 = *(char **)v7;
    CreativeFramework::Actions::PinPackagedAppToTaskbar((PCWSTR)v7, v6, a3, (bool)a4);
  }
}
