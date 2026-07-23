/*
 * XREFs of sub_1403DCCD8 @ 0x1403DCCD8
 * Callers:
 *     sub_140B2E564 @ 0x140B2E564 (sub_140B2E564.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     PoDisableSleepStates @ 0x14098C600 (PoDisableSleepStates.c)
 *     sub_140B2E584 @ 0x140B2E584 (sub_140B2E584.c)
 */

__int64 sub_1403DCCD8()
{
  __int64 result; // rax
  _BYTE v1[16]; // [rsp+30h] [rbp-98h] BYREF
  _DWORD v2[28]; // [rsp+40h] [rbp-88h] BYREF

  memset(v2, 0, 0x68uLL);
  result = sub_140B2E584();
  if ( byte_140D06888 )
  {
    result = sub_140358A20(2u, 1, 0, (__int64)v2);
    if ( (int)result < 0 )
      KeBugCheckEx(0x6Fu, (int)result, 3uLL, 0LL, 0LL);
    if ( v2[4] < 0 )
      return PoDisableSleepStates(1LL, 8LL, v1);
  }
  return result;
}
