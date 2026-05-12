/*
 * XREFs of ?UpdateControl@SC_DISK@@QEAAJXZ @ 0x1C0007024
 * Callers:
 *     PmCreateSpacesMetadata @ 0x1C001EEA8 (PmCreateSpacesMetadata.c)
 *     PmDeleteSpacesMetadata @ 0x1C001F13C (PmDeleteSpacesMetadata.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SC_DISK::UpdateControl(SC_DISK *this)
{
  return (*(__int64 (__fastcall **)(SC_DISK *, __int64, _QWORD, _QWORD, _QWORD, _DWORD))(*(_QWORD *)this + 16LL))(
           this,
           459072LL,
           0LL,
           0LL,
           0LL,
           0);
}
