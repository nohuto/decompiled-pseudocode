/*
 * XREFs of sub_14052448C @ 0x14052448C
 * Callers:
 *     sub_140A6313C @ 0x140A6313C (sub_140A6313C.c)
 * Callees:
 *     KeStallExecutionProcessor @ 0x140303560 (KeStallExecutionProcessor.c)
 *     sub_1403BF310 @ 0x1403BF310 (sub_1403BF310.c)
 *     sub_1403BF3B8 @ 0x1403BF3B8 (sub_1403BF3B8.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_14052448C(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 result; // rax
  unsigned int v6; // edi
  unsigned __int64 v7; // rbx
  _DWORD v8[16]; // [rsp+40h] [rbp-58h] BYREF

  memset(v8, 0, sizeof(v8));
  result = sub_14042A5E0(a2, a3);
  if ( (v8[1] & 2) != 0 )
  {
    result = v8[4] & 0xFFFFFFF0;
    if ( (v8[4] & 0xFFFFFFF0) != 0 )
    {
      v6 = 0;
      result = sub_1403BF3B8(v8[4] & 0xFFFFFFF0, 1LL, 1u, 0LL, 4u);
      v7 = result;
      if ( result )
      {
        if ( (*(_DWORD *)(result + 4) & 0x100) != 0 )
        {
          if ( *(_DWORD *)(result + 4) != 256 || *(_DWORD *)(result + 16) )
          {
            *(_DWORD *)(result + 20) = 64;
            *(_DWORD *)(result + 16) = -1073741824;
            *(_DWORD *)(result + 8) = 8;
            do
            {
              KeStallExecutionProcessor(0x3E8u);
              if ( (*(_DWORD *)(v7 + 4) & 0x100) == 0 )
                break;
              ++v6;
            }
            while ( v6 < 0x1F4 );
          }
          else
          {
            *(_DWORD *)(result + 4) = 0;
          }
        }
        *(_DWORD *)(v7 + 20) = 0x80000000;
        return (unsigned __int64)sub_1403BF310(v7, 1LL, 0LL);
      }
    }
  }
  return result;
}
