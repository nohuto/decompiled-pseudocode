/*
 * XREFs of ??1CDWMDXGIAdapter@@EEAA@XZ @ 0x18003CA80
 * Callers:
 *     ??_ECDWMDXGIAdapter@@EEAAPEAXI@Z @ 0x18003CA30 (--_ECDWMDXGIAdapter@@EEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18001FB8C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180063740 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CDWMDXGIAdapter::~CDWMDXGIAdapter(CDWMDXGIAdapter *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  unsigned int i; // edi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx

  *(_QWORD *)this = &CDWMDXGIAdapter::`vftable';
  v2 = *((_QWORD *)this + 3);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 4);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  for ( i = 0; i < *((_DWORD *)this + 94); ++i )
  {
    v5 = 304LL * i;
    v6 = *((_QWORD *)this + 44);
    v7 = *(_QWORD *)(v5 + v6);
    if ( v7 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*(_QWORD *)(v5 + v6));
      v6 = *((_QWORD *)this + 44);
    }
    v8 = *(_QWORD *)(v5 + v6 + 8);
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 44);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
