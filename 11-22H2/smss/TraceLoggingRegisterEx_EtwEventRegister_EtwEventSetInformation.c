/*
 * XREFs of TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x1400010B0
 * Callers:
 *     wmain @ 0x140001BC0 (wmain.c)
 * Callees:
 *     __security_check_cookie @ 0x140010ED0 (__security_check_cookie.c)
 */

__int64 TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation()
{
  int v0; // eax
  unsigned int v1; // ebx
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF

  v3 = *((_OWORD *)off_14002A030 - 1);
  if ( qword_14002A048 )
    __fastfail(5u);
  xmmword_14002A050 = 0LL;
  v0 = ((__int64 (__fastcall *)(__int128 *, __int64 (__fastcall *)(int, int, int, int, __int64, __int64, __int64), int *, __int64 *))EtwEventRegister)(
         &v3,
         tlgEnableCallback,
         &dword_14002A028,
         &qword_14002A048);
  v1 = v0;
  if ( v0 )
  {
    if ( v0 > 0 )
      return (unsigned __int16)v0 | 0x80070000;
  }
  else
  {
    EtwEventSetInformation(
      qword_14002A048,
      2LL,
      off_14002A030,
      *(unsigned __int16 *)off_14002A030,
      v3,
      *((_QWORD *)&v3 + 1));
  }
  return v1;
}
