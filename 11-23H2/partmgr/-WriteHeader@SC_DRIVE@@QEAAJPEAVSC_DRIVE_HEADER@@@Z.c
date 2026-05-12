/*
 * XREFs of ?WriteHeader@SC_DRIVE@@QEAAJPEAVSC_DRIVE_HEADER@@@Z @ 0x1C0005474
 * Callers:
 *     ?CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z @ 0x1C0005704 (-CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z.c)
 * Callees:
 *     ?Format@SC_DRIVE_HEADER@@QEAAXPEAPEAEK@Z @ 0x1C00050EC (-Format@SC_DRIVE_HEADER@@QEAAXPEAPEAEK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SC_DRIVE::WriteHeader(SC_DRIVE *this, struct SC_DRIVE_HEADER *a2)
{
  unsigned int v4; // esi
  unsigned __int8 *Pool2; // rax
  unsigned __int8 *v6; // rbp
  int v7; // esi
  unsigned __int8 *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 1 << *((_DWORD *)this + 60);
  Pool2 = (unsigned __int8 *)ExAllocatePool2(64LL, v4, 1833984851LL);
  v6 = Pool2;
  if ( Pool2 )
  {
    v9 = Pool2;
    SC_DRIVE_HEADER::Format(a2, &v9);
    v7 = (*(__int64 (__fastcall **)(SC_DRIVE *, _QWORD, _QWORD, unsigned __int8 *))(*(_QWORD *)this + 64LL))(
           this,
           *((_QWORD *)this + 56),
           v4,
           v6);
    if ( v7 >= 0 )
    {
      *((_OWORD *)this + 30) = *(_OWORD *)a2;
      *((_OWORD *)this + 31) = *((_OWORD *)a2 + 1);
      *((_OWORD *)this + 32) = *((_OWORD *)a2 + 2);
      *((_OWORD *)this + 33) = *((_OWORD *)a2 + 3);
      *((_QWORD *)this + 68) = *((_QWORD *)a2 + 8);
    }
    ExFreePoolWithTag(v6, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v7;
}
