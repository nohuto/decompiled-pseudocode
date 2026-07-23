/*
 * XREFs of sub_140909678 @ 0x140909678
 * Callers:
 *     HalEnableInterrupt @ 0x1403B02C0 (HalEnableInterrupt.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1404593D2 @ 0x1404593D2 (sub_1404593D2.c)
 *     sub_14051CF8C @ 0x14051CF8C (sub_14051CF8C.c)
 *     sub_14051D24C @ 0x14051D24C (sub_14051D24C.c)
 */

__int64 __fastcall sub_140909678(_DWORD *a1)
{
  int v2; // edi
  unsigned int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rdx

  if ( byte_140C54BB0 )
  {
    if ( sub_14051CF8C(a1) )
    {
      v3 = a1[16];
      v4 = sub_14051D24C(v3);
      v5 = v4;
      if ( v4 )
      {
        v6 = 2 * (v3 - *(_DWORD *)(v4 + 16) + 10LL);
        v7 = 2LL * (v3 - *(_DWORD *)(v4 + 16));
        *(_DWORD *)(v4 + 8 * v7 + 164) = a1[6];
        *(_DWORD *)(v4 + 8 * v6) = a1[5];
        *(_DWORD *)(v4 + 8 * v7 + 168) = a1[3];
        *(_BYTE *)(v4 + 8 * v7 + 172) = 1;
        v2 = sub_14042A5E0(*(_QWORD *)(v4 + 32), v3);
        if ( v2 < 0 )
        {
          *(_DWORD *)(v5 + 8 * v7 + 168) |= 0x80000000;
          *(_BYTE *)(v5 + 8 * v7 + 172) = 0;
        }
        LOBYTE(v8) = 1;
        sub_1404593D2(v5, v8);
      }
      else
      {
        return (unsigned int)-1073700575;
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v2;
}
