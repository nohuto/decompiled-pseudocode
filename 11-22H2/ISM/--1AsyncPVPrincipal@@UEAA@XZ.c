/*
 * XREFs of ??1AsyncPVPrincipal@@UEAA@XZ @ 0x18019BADC
 * Callers:
 *     ??_EAsyncPVPrincipal@@UEAAPEAXI@Z @ 0x18019BBB0 (--_EAsyncPVPrincipal@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ @ 0x18000F950 (-Release@BamoImplObject@BamoImpl@Microsoft@@UEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
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
