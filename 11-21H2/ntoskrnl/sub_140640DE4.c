/*
 * XREFs of sub_140640DE4 @ 0x140640DE4
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14063F7C0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140640DE4(__int64 a1, _QWORD *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]

  v7 = 0LL;
  v8 = 0;
  if ( a2[9] )
  {
    v4 = sub_14042A5E0(a2[6], &v7);
    if ( v4 >= 0 )
    {
      if ( (v7 & 7) == 7 && 1 << (BYTE4(v7) & 0x1F) >= (unsigned int)dword_140C11480 )
      {
        _InterlockedIncrement(&dword_140D01470);
        v4 = sub_14042A5E0(a1, a2[22]);
        if ( v4 >= 0 )
          return (unsigned int)v4;
        _InterlockedDecrement(&dword_140D01470);
      }
      else
      {
        v4 = -1073741585;
      }
    }
  }
  else
  {
    v4 = -1073741637;
  }
  v5 = a2[23];
  if ( v5 )
  {
    sub_14042A5E0(a1, v5);
    _InterlockedDecrement(&dword_140D01470);
  }
  return (unsigned int)v4;
}
