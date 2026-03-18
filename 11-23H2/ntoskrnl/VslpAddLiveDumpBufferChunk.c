/*
 * XREFs of VslpAddLiveDumpBufferChunk @ 0x14054CD1C
 * Callers:
 *     VslSetupLiveDumpBufferInSk @ 0x14054C8B4 (VslSetupLiveDumpBufferInSk.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x14028BEE0 (MmGetPhysicalAddress.c)
 *     VslpEnterIumSecureMode @ 0x14033FCF0 (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1403D7CE0 (__security_check_cookie.c)
 *     memset @ 0x140435A00 (memset.c)
 */

__int64 __fastcall VslpAddLiveDumpBufferChunk(char *BaseAddress, int a2)
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
    result = VslpEnterIumSecureMode(2u, 57, 0, (__int64)v6);
  }
  while ( (int)result >= 0 );
  return result;
}
