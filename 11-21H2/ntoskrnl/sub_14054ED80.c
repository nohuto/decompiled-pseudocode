/*
 * XREFs of sub_14054ED80 @ 0x14054ED80
 * Callers:
 *     sub_140971848 @ 0x140971848 (sub_140971848.c)
 * Callees:
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054ED80(__int64 a1)
{
  __int64 result; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v4[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v4, 0, 0x68uLL);
  _InterlockedIncrement(&dword_140C487D8);
  v4[1] = a1;
  result = sub_140358A20(2u, 74, 0, (__int64)v4);
  v3 = (volatile signed __int32 *)&unk_140C487DC;
  if ( (int)result < 0 )
    v3 = (volatile signed __int32 *)&unk_140C487E0;
  _InterlockedIncrement(v3);
  return result;
}
