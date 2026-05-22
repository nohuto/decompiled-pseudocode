/*
 * XREFs of ?SnapAnimationReadBackTime@CDevice@DirectComposition@@UEAAJXZ @ 0x18007D960
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CDevice::SnapAnimationReadBackTime(DirectComposition::CDevice *this)
{
  int v2; // r8d
  _BYTE v4[8]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v5; // [rsp+28h] [rbp-30h]
  unsigned int v6; // [rsp+2Ch] [rbp-2Ch]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v2 = (*(__int64 (__fastcall **)(char *, _BYTE *))(*((_QWORD *)this - 2) + 40LL))((char *)this - 16, v4);
  if ( v2 >= 0 )
  {
    *((_QWORD *)this + 79) = v7;
    if ( v5 )
      *((_QWORD *)this + 79) = v9 - 2 * (v8 * (unsigned __int64)v6 / v5);
  }
  return (unsigned int)v2;
}
