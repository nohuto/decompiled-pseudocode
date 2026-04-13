/*
 * XREFs of ?PreUninitialize@CCachedSTAObject@@UEAAJK@Z @ 0x180039D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CCachedSTAObject::PreUninitialize(ULARGE_INTEGER *this, int a2)
{
  ULARGE_INTEGER v3; // rcx

  if ( a2 == 1 )
  {
    this[5].LowPart = 0;
    CoRevokeInitializeSpy(this[2]);
    ((void (__fastcall *)(_QWORD))IUnknown_RemoveBackReferences)((ULARGE_INTEGER)this[4].QuadPart);
    v3 = this[4];
    if ( v3.QuadPart )
    {
      (*(void (__fastcall **)(ULARGE_INTEGER))(*(_QWORD *)v3.QuadPart + 16LL))(v3);
      this[4].QuadPart = 0LL;
    }
    TlsSetValue(this[3].LowPart, 0LL);
  }
  return 0LL;
}
