/*
 * XREFs of sub_14051D1A0 @ 0x14051D1A0
 * Callers:
 *     HalDisableInterrupt @ 0x140396C30 (HalDisableInterrupt.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1404593D2 @ 0x1404593D2 (sub_1404593D2.c)
 *     sub_14051CF8C @ 0x14051CF8C (sub_14051CF8C.c)
 *     sub_14051D24C @ 0x14051D24C (sub_14051D24C.c)
 */

__int64 __fastcall sub_14051D1A0(_DWORD *a1)
{
  int v2; // ebx
  unsigned int v3; // esi
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned int v6; // esi
  int v7; // ecx

  if ( byte_140C54BB0 )
  {
    if ( sub_14051CF8C(a1) )
    {
      v3 = a1[16];
      v4 = sub_14051D24C(v3);
      if ( v4 )
      {
        v2 = sub_14042A5E0(*(_QWORD *)(v4 + 32), v3);
        if ( v2 >= 0 )
        {
          v6 = v3 - *(_DWORD *)(v4 + 16);
          v5 = 2LL * v6;
          v7 = *(_DWORD *)(v4 + 16LL * v6 + 168);
          *(_BYTE *)(v4 + 8 * v5 + 172) = 0;
          *(_DWORD *)(v4 + 8 * v5 + 168) = v7 | 0x80000000;
        }
        LOBYTE(v5) = 1;
        sub_1404593D2(v4, v5);
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
