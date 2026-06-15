/*
 * XREFs of ??1CAudioSessionPropertyStore@@EEAA@XZ @ 0x1800331B8
 * Callers:
 *     ??_ECAudioSessionPropertyStore@@EEAAPEAXI@Z @ 0x180033950 (--_ECAudioSessionPropertyStore@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180002AC8 (--3@YAXPEAX_K@Z.c)
 *     ?Commit@CAudioSessionPropertyStore@@UEAAJXZ @ 0x180033B30 (-Commit@CAudioSessionPropertyStore@@UEAAJXZ.c)
 */

void __fastcall CAudioSessionPropertyStore::~CAudioSessionPropertyStore(CAudioSessionPropertyStore *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rsi
  _QWORD *v3; // rcx
  HKEY v4; // rcx
  void *v5; // rcx

  *(_QWORD *)this = &CAudioSessionPropertyStore::`vftable';
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IInspectable,IPropertyStore>::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 2) = &CAudioSessionPropertyStore::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IPropertyStore>'};
  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  CAudioSessionPropertyStore::Commit((CAudioSessionPropertyStore *)((char *)this + 16));
  while ( *((_QWORD *)this + 6) )
  {
    PropVariantClear((PROPVARIANT *)(*((_QWORD *)this + 6) + 24LL));
    v3 = (_QWORD *)*((_QWORD *)this + 6);
    *((_QWORD *)this + 6) = v3[6];
    operator delete(v3);
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  DeleteCriticalSection(v2);
  v4 = (HKEY)*((_QWORD *)this + 7);
  if ( v4 )
    RegCloseKey(v4);
  v5 = (void *)*((_QWORD *)this + 5);
  if ( v5 )
    CoTaskMemFree(v5);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IInspectable,IPropertyStore>((__int64)this);
}
