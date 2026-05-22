/*
 * XREFs of ??1DWMCursorBroker@@MEAA@XZ @ 0x1801CDD94
 * Callers:
 *     ??_GDWMCursorBroker@@MEAAPEAXI@Z @ 0x1801CDFB4 (--_GDWMCursorBroker@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ @ 0x18000BC64 (-InternalRelease@-$ComPtr@VHotkeyRegistrationForwarder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18000E6AC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x1800113C4 (-InternalRelease@-$ComPtr@UIContainerInfoInputObjectProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18008069C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBKUtagPOINT@@@std@@PEAX@std@@@std@@@-$_L.c)
 */

void __fastcall DWMCursorBroker::~DWMCursorBroker(DWMCursorBroker *this)
{
  int v2; // eax
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *(_QWORD *)this = &DWMCursorBroker::`vftable'{for `ICursorBroker'};
  *((_QWORD *)this + 1) = &DWMCursorBroker::`vftable'{for `IRemoteCursorBroker'};
  *((_QWORD *)this + 2) = &DWMCursorBroker::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 3) = &DWMCursorBroker::`vftable'{for `RefCountedObject'};
  v2 = _Mtx_lock((_Mtx_t)&DWMCursorBroker::s_lock);
  if ( v2 )
  {
    std::_Throw_C_error(v2);
    __debugbreak();
  }
  v3 = (_QWORD *)((char *)this + 216);
  v4 = 10LL;
  do
  {
    if ( *v3 )
    {
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 168LL))(*((_QWORD *)this + 22));
      *v3 = 0LL;
    }
    v3 += 3;
    --v4;
  }
  while ( v4 );
  v5 = *((_QWORD *)this + 59);
  if ( v5 )
    (*(void (__fastcall **)(__int64, char *))(*(_QWORD *)v5 + 32LL))(v5, (char *)this + 16);
  _Mtx_unlock((_Mtx_t)&DWMCursorBroker::s_lock);
  v6 = (void *)*((_QWORD *)this + 60);
  if ( v6 )
  {
    std::_Deallocate<16,0>(v6, 8 * ((__int64)(*((_QWORD *)this + 62) - (_QWORD)v6) >> 3));
    *((_QWORD *)this + 60) = 0LL;
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
  }
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 59);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 25);
  Microsoft::WRL::ComPtr<IContainerInfoInputObjectProxy>::InternalRelease((__int64 *)this + 24);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 23);
  Microsoft::WRL::ComPtr<HotkeyRegistrationForwarder>::InternalRelease((__int64 *)this + 22);
  std::_Deallocate<16,0>(
    *((void **)this + 17),
    (*((_QWORD *)this + 18) - *((_QWORD *)this + 17)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v7,
    *((_QWORD ***)this + 15));
  std::_Deallocate<16,0>(*((void **)this + 15), 0x20uLL);
  std::_Deallocate<16,0>(*((void **)this + 9), (*((_QWORD *)this + 10) - *((_QWORD *)this + 9)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned long const,tagPOINT>,void *>>>(
    v8,
    *((_QWORD ***)this + 7));
  std::_Deallocate<16,0>(*((void **)this + 7), 0x20uLL);
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 5);
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
}
