/*
 * XREFs of ??1CVirtualDesktopSoftLandingHandler@@UEAA@XZ @ 0x180142AD8
 * Callers:
 *     ??_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z @ 0x1801BE4B0 (--_ECVirtualDesktopSoftLandingHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Unregister@SmartCookie@@QEAAJXZ @ 0x180143754 (-Unregister@SmartCookie@@QEAAJXZ.c)
 *     ??1?$function@$$A6AJK@Z@wistd@@QEAA@XZ @ 0x1801437F0 (--1-$function@$$A6AJK@Z@wistd@@QEAA@XZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180168F3C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
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
  wistd::function<long (unsigned long)>::~function<long (unsigned long)>((char *)this + 56);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 5);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)this + 4);
  *((_DWORD *)this + 7) = -1073741823;
}
