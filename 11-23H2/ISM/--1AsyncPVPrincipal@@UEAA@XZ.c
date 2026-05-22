/*
 * XREFs of ??1AsyncPVPrincipal@@UEAA@XZ @ 0x18018DCCC
 * Callers:
 *     ??_EAsyncPVPrincipal@@UEAAPEAXI@Z @ 0x18018DDA0 (--_EAsyncPVPrincipal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x1800276A0 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall AsyncPVPrincipal::~AsyncPVPrincipal(AsyncPVPrincipal *this, __int64 a2, __int64 a3, const char *a4)
{
  char *v5; // rdi
  char *v6; // rcx
  __int64 v7; // rcx
  Microsoft::BamoImpl::BamoImplObject *v8; // rcx

  v5 = (char *)this + 120;
  v6 = (char *)*((_QWORD *)this + 22);
  if ( v6 )
  {
    LOBYTE(a2) = v6 != v5;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 32LL))(v6, a2);
    *((_QWORD *)v5 + 7) = 0LL;
  }
  v7 = *((_QWORD *)this + 14);
  if ( v7 )
  {
    LOBYTE(a2) = v7 != (_QWORD)this + 56;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 32LL))(v7, a2);
    *((_QWORD *)this + 14) = 0LL;
  }
  v8 = (Microsoft::BamoImpl::BamoImplObject *)*((_QWORD *)this + 4);
  if ( v8 )
    Microsoft::BamoImpl::BamoImplObject::Release(v8, a2, a3, a4);
}
