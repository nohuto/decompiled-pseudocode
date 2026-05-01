/*
 * XREFs of ??1CVirtualDesktopSoftLandingHandler@@UEAA@XZ @ 0x1800A9B9C
 * Callers:
 *     ??_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z @ 0x1800A9B60 (--_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     ??1?$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ @ 0x1800AA928 (--1-$function@$$A6AXAEAY0CA@$$CBE@Z@wistd@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x1800AA9A4 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopSoftLandingHandler::~CVirtualDesktopSoftLandingHandler(
        CVirtualDesktopSoftLandingHandler *this)
{
  _QWORD **v2; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v2 = (_QWORD **)*((_QWORD *)this + 23);
  *v2[1] = 0LL;
  v3 = *v2;
  if ( *v2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16,0>(v3, 24LL);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16,0>(*((_QWORD *)this + 23), 24LL);
  SmartCookie::Unregister((CVirtualDesktopSoftLandingHandler *)((char *)this + 56));
  wistd::function<void (unsigned char const (&)[32])>::~function<void (unsigned char const (&)[32])>((char *)this + 56);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 5);
  wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>((__int64 *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
}
