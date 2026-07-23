/*
 * XREFs of sub_140973F50 @ 0x140973F50
 * Callers:
 *     sub_140970E00 @ 0x140970E00 (sub_140970E00.c)
 *     sub_140971068 @ 0x140971068 (sub_140971068.c)
 *     sub_140975FF0 @ 0x140975FF0 (sub_140975FF0.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_140973F50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  int v6; // ecx
  _DWORD v7[4]; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0LL;
  v7[1] = *(_DWORD *)(a2 + 8);
  v7[2] = 0;
  v7[0] = 1;
  result = sub_14042A5E0(v7, 12LL);
  if ( (int)result >= 0 )
    return 0LL;
  v6 = *(_DWORD *)(a2 + 8);
  if ( v6 )
  {
    LOBYTE(v2) = v6 != 1;
    KeBugCheckEx(0x1Au, v2 + 4739099, *(_QWORD *)(a1 + 48), *(_QWORD *)a2, (int)result);
  }
  return result;
}
