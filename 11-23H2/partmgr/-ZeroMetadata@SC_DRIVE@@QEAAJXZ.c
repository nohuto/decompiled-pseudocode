/*
 * XREFs of ?ZeroMetadata@SC_DRIVE@@QEAAJXZ @ 0x1C0005388
 * Callers:
 *     ?CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z @ 0x1C0005704 (-CreateMetadata@SC_DRIVE@@QEAAJPEAGPEAVSC_DRIVE_HEADER@@_KE@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C000BA40 (memset.c)
 */

__int64 __fastcall SC_DRIVE::ZeroMetadata(SC_DRIVE *this)
{
  void *Pool2; // rax
  void *v3; // rdi
  __int64 v4; // rsi
  int v5; // ebp

  Pool2 = (void *)ExAllocatePool2(64LL, 0x100000LL, 1833984851LL);
  v3 = Pool2;
  if ( Pool2 )
  {
    memset(Pool2, 0, 0x100000uLL);
    v4 = *((_QWORD *)this + 56);
    v5 = (*(__int64 (__fastcall **)(SC_DRIVE *, __int64, __int64, void *))(*(_QWORD *)this + 64LL))(
           this,
           v4,
           0x100000LL,
           v3);
    if ( v5 >= 0 && *((_QWORD *)this + 56) + *((_QWORD *)this + 57) >= (unsigned __int64)(v4 + 0x20000000) )
      v5 = (*(__int64 (__fastcall **)(SC_DRIVE *, __int64, __int64, void *))(*(_QWORD *)this + 64LL))(
             this,
             v4 + 535822336,
             0x100000LL,
             v3);
    ExFreePoolWithTag(v3, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
