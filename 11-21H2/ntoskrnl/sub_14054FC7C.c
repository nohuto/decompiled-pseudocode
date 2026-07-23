/*
 * XREFs of sub_14054FC7C @ 0x14054FC7C
 * Callers:
 *     sub_14054F814 @ 0x14054F814 (sub_14054F814.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14027B670 (MmGetPhysicalAddress.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_14054FC7C(char *BaseAddress, int a2)
{
  __int64 result; // rax
  __int64 v5; // rbx
  _QWORD v6[14]; // [rsp+20h] [rbp-88h] BYREF

  memset(v6, 0, 0x68uLL);
  result = 0LL;
  do
  {
    if ( !a2 )
      break;
    v5 = 0LL;
    do
    {
      --a2;
      v6[v5 + 2] = (unsigned __int64)MmGetPhysicalAddress(BaseAddress).QuadPart >> 12;
      BaseAddress += 4096;
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < 0xB && a2 );
    LODWORD(v6[1]) = v5;
    result = sub_140358A20(2u, 57, 0, (__int64)v6);
  }
  while ( (int)result >= 0 );
  return result;
}
