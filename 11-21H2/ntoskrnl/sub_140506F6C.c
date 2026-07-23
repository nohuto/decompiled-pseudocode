/*
 * XREFs of sub_140506F6C @ 0x140506F6C
 * Callers:
 *     sub_140507040 @ 0x140507040 (sub_140507040.c)
 * Callees:
 *     sub_1403AAE50 @ 0x1403AAE50 (sub_1403AAE50.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_140506F6C(__int64 a1, __int64 a2)
{
  char v4; // cl
  int v5; // eax
  __int64 result; // rax

  memset((void *)(a1 + 4), 0, 0x120uLL);
  *(_DWORD *)a1 = 3;
  v4 = sub_1403AAE50();
  if ( v4 == 2 )
  {
    *(_DWORD *)(a1 + 4) = 1;
  }
  else
  {
    v5 = 0;
    if ( v4 == 1 )
      v5 = 2;
    *(_DWORD *)(a1 + 4) = v5;
  }
  *(_QWORD *)(a1 + 8) = MEMORY[0xFFFFF78000000014];
  *(_DWORD *)(a1 + 16) = a2;
  sub_14042A5E0(a2, 1LL);
  result = 0LL;
  *(_DWORD *)(a1 + 68) = 0;
  return result;
}
