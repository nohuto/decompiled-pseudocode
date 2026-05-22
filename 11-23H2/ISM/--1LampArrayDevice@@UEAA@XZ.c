/*
 * XREFs of ??1LampArrayDevice@@UEAA@XZ @ 0x1800EB4DC
 * Callers:
 *     ??_ELampArrayDevice@@UEAAPEAXI@Z @ 0x1800EB6A0 (--_ELampArrayDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@RefCountedObject@@UEAAKXZ @ 0x18004FB20 (-Release@RefCountedObject@@UEAAKXZ.c)
 *     ?_Tidy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ @ 0x180055588 (-_Tidy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ??_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z @ 0x1800EB6F0 (--_GViewClientListEntry@LampArrayDevice@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall LampArrayDevice::~LampArrayDevice(LampArrayDevice *this)
{
  char *v2; // rsi
  char *i; // rbx
  unsigned int v4; // edx
  LampArrayDevice::ViewClientListEntry *v5; // rcx
  __int64 v6; // rax
  RefCountedObject *v7; // rcx
  RefCountedObject *v8; // rcx

  *(_QWORD *)this = &LampArrayDevice::`vftable';
  v2 = (char *)this + 32;
  for ( i = (char *)*((_QWORD *)this + 4); i != v2; i = *(char **)i )
    (*(void (__fastcall **)(__int64, __int64))(**((_QWORD **)i + 2) + 48LL))(*((_QWORD *)i + 2), *((_QWORD *)i + 4));
  std::vector<Windows::UI::Color>::_Tidy((__int64)this + 168);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 112));
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 56));
  while ( 1 )
  {
    v5 = *(LampArrayDevice::ViewClientListEntry **)v2;
    v6 = **(_QWORD **)v2;
    if ( *(char **)(*(_QWORD *)v2 + 8LL) != v2 || *(LampArrayDevice::ViewClientListEntry **)(v6 + 8) != v5 )
      __fastfail(3u);
    *(_QWORD *)v2 = v6;
    *(_QWORD *)(v6 + 8) = v2;
    if ( v5 == (LampArrayDevice::ViewClientListEntry *)v2 )
      break;
    LampArrayDevice::ViewClientListEntry::`scalar deleting destructor'(v5, v4);
    --*((_QWORD *)v2 + 2);
  }
  v7 = (RefCountedObject *)*((_QWORD *)this + 3);
  if ( v7 )
  {
    *((_QWORD *)this + 3) = 0LL;
    RefCountedObject::Release(v7);
  }
  v8 = (RefCountedObject *)*((_QWORD *)this + 2);
  if ( v8 )
  {
    *((_QWORD *)this + 2) = 0LL;
    RefCountedObject::Release(v8);
  }
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
