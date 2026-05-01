/*
 * XREFs of ?PreCreateThumbnailDevice@VirtualDesktopDataSource@@UEAAJXZ @ 0x180073270
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall VirtualDesktopDataSource::PreCreateThumbnailDevice(VirtualDesktopDataSource *this)
{
  __int64 v1; // rcx
  const char *v2; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_QWORD *)this + 30);
  try
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL))(v1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x81,
                           (unsigned int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopdatasource.cpp",
                           v2);
  }
  return result;
}
