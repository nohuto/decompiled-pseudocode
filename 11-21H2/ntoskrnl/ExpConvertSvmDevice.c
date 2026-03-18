/*
 * XREFs of ExpConvertSvmDevice @ 0x140640DE4
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExpConvertSvmDevice(__int64 a1, _QWORD *a2)
{
  __int64 (__fastcall *v4)(_QWORD, __int64 *); // rax
  int v5; // ebx
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v7 = 0LL;
  v8 = 0;
  v4 = (__int64 (__fastcall *)(_QWORD, __int64 *))a2[9];
  if ( v4 )
  {
    v5 = v4(a2[6], &v7);
    if ( v5 >= 0 )
    {
      if ( (v7 & 7) == 7 && 1 << (BYTE4(v7) & 0x1F) >= (unsigned int)ExpSvmAgents )
      {
        _InterlockedIncrement(&ExTbFlushActive);
        v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *, _QWORD *))(HalIommuDispatch + 24))(
               a1,
               a2[22],
               &v7,
               a2 + 23);
        if ( v5 >= 0 )
          return (unsigned int)v5;
        _InterlockedDecrement(&ExTbFlushActive);
      }
      else
      {
        v5 = -1073741585;
      }
    }
  }
  else
  {
    v5 = -1073741637;
  }
  if ( a2[23] )
  {
    (*(void (__fastcall **)(__int64))(HalIommuDispatch + 56))(a1);
    _InterlockedDecrement(&ExTbFlushActive);
  }
  return (unsigned int)v5;
}
