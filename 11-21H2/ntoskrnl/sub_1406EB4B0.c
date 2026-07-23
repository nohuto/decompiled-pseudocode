/*
 * XREFs of sub_1406EB4B0 @ 0x1406EB4B0
 * Callers:
 *     sub_1402D99BC @ 0x1402D99BC (sub_1402D99BC.c)
 *     sub_1406F4FB8 @ 0x1406F4FB8 (sub_1406F4FB8.c)
 *     sub_140B07C00 @ 0x140B07C00 (sub_140B07C00.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     sub_140358A20 @ 0x140358A20 (sub_140358A20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140760B20 @ 0x140760B20 (sub_140760B20.c)
 *     sub_14080C354 @ 0x14080C354 (sub_14080C354.c)
 *     sub_14097F660 @ 0x14097F660 (sub_14097F660.c)
 *     sub_14097F690 @ 0x14097F690 (sub_14097F690.c)
 *     sub_14097F8F8 @ 0x14097F8F8 (sub_14097F8F8.c)
 */

__int64 __fastcall sub_1406EB4B0(__int64 a1, __int64 a2)
{
  int v3; // edi
  _QWORD *v5; // rax
  _QWORD *v6; // rsi
  int v7; // edx
  unsigned __int64 v8; // r8
  ULONG Size; // [rsp+38h] [rbp-49h] BYREF
  __int64 v10; // [rsp+40h] [rbp-41h] BYREF
  __int64 v11; // [rsp+48h] [rbp-39h] BYREF
  _QWORD v12[14]; // [rsp+58h] [rbp-29h] BYREF

  v11 = 0LL;
  v10 = 0LL;
  Size = 0;
  if ( a2 )
  {
    sub_14097F660();
    v3 = sub_14097F690(*(_QWORD *)(a1 + 48), *(unsigned int *)(a1 + 64), 1LL);
    sub_14097F8F8();
    if ( v3 >= 0 )
    {
      v3 = sub_14080C354(a1);
      if ( v3 >= 0 )
      {
        v5 = RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xAu, &Size);
        v6 = v5;
        if ( v5 && Size >= 0xB0 && v5[21] )
        {
          v7 = 0;
          while ( 1 )
          {
            v7 = sub_140760B20(a1, v7, 2, 0, (__int64)&v10, (__int64)&v11);
            if ( v10 )
            {
              v8 = v6[20];
              if ( v8 >= v10 << 25 >> 16 && v8 <= ((v11 << 25) | 0xFFF0000) >> 16 )
                break;
            }
            if ( !v7 )
              return (unsigned int)v3;
          }
          *(_DWORD *)(a1 + 104) |= 0x800u;
        }
        else
        {
          *(_DWORD *)(a1 + 104) |= 0x100u;
        }
      }
    }
  }
  else if ( (dword_140D06880 & 0x4000) != 0 )
  {
    memset(v12, 0, 0x68uLL);
    v12[1] = *(_QWORD *)(a1 + 48);
    return (unsigned int)sub_140358A20(2u, 217, 0, (__int64)v12);
  }
  else
  {
    return 0;
  }
  return (unsigned int)v3;
}
