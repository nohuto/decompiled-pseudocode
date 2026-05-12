/*
 * XREFs of ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x1C0009410
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1C00094B0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SC_DEVICE::Initialize(SC_DEVICE *this)
{
  __int64 v2; // rax
  int v3; // ebx
  PVOID v4; // rcx
  PVOID P; // [rsp+20h] [rbp-38h] BYREF
  DEVPROPGUID fmtid; // [rsp+28h] [rbp-30h] BYREF
  DEVPROPID pid; // [rsp+38h] [rbp-20h]

  P = 0LL;
  pid = DEVPKEY_Device_ClassGuid.pid;
  v2 = *(_QWORD *)this;
  fmtid = DEVPKEY_Device_ClassGuid.fmtid;
  v3 = (*(__int64 (__fastcall **)(SC_DEVICE *, DEVPROPGUID *, PVOID *))(v2 + 24))(this, &fmtid, &P);
  if ( v3 < 0 )
  {
    return 0;
  }
  else
  {
    v4 = P;
    *(_OWORD *)((char *)this + 8) = *(_OWORD *)P;
    ExFreePoolWithTag(v4, 0);
  }
  return (unsigned int)v3;
}
