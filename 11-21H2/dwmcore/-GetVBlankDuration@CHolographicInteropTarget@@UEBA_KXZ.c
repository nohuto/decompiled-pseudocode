/*
 * XREFs of ?GetVBlankDuration@CHolographicInteropTarget@@UEBA_KXZ @ 0x180299D80
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

LONGLONG __fastcall CHolographicInteropTarget::GetVBlankDuration(CHolographicInteropTarget *this)
{
  unsigned int v1; // edx
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // rax
  __int64 v5; // rcx
  _DWORD v7[2]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v8[2]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v9; // [rsp+48h] [rbp-20h]

  v1 = 60;
  v9 = 0LL;
  v2 = *((_QWORD *)this + 2);
  memset(v8, 0, sizeof(v8));
  v3 = 1;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 40);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 32);
      if ( v5 )
      {
        (*(void (__fastcall **)(__int64, _OWORD *, _DWORD *))(*(_QWORD *)v5 + 24LL))(v5, v8, v7);
        v1 = v7[0];
        v3 = v7[1];
      }
    }
  }
  return g_qpcFrequency.QuadPart * v3 / v1;
}
