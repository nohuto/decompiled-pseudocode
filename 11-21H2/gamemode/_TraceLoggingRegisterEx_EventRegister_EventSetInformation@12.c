/*
 * XREFs of _TraceLoggingRegisterEx_EventRegister_EventSetInformation@12 @ 0x10001FD1
 * Callers:
 *     _DllMain@12 @ 0x10004C86 (_DllMain@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x10006D50 (@__security_check_cookie@4.c)
 */

unsigned int __stdcall TraceLoggingRegisterEx_EventRegister_EventSetInformation(int a1)
{
  signed int v1; // eax
  signed int v2; // esi
  GUID ProviderId; // [esp+Ch] [ebp-18h] BYREF

  ProviderId = *(GUID *)&(*off_10008004)[-4];
  if ( qword_10008018 )
    __fastfail(5u);
  dword_10008020 = 0;
  dword_10008024 = 0;
  v1 = EventRegister(&ProviderId, (PENABLECALLBACK)_tlgEnableCallback, &dword_10008000, &qword_10008018);
  v2 = v1;
  if ( v1 )
  {
    if ( v1 > 0 )
      return (unsigned __int16)v1 | 0x80070000;
  }
  else
  {
    EventSetInformation(
      qword_10008018,
      HIDWORD(qword_10008018),
      2,
      (int *)off_10008004,
      *(unsigned __int16 *)off_10008004);
  }
  return v2;
}
