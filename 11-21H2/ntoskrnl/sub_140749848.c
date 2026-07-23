/*
 * XREFs of sub_140749848 @ 0x140749848
 * Callers:
 *     sub_14076E9B8 @ 0x14076E9B8 (sub_14076E9B8.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140749814 @ 0x140749814 (sub_140749814.c)
 *     sub_1407498EC @ 0x1407498EC (sub_1407498EC.c)
 *     sub_14084C604 @ 0x14084C604 (sub_14084C604.c)
 */

__int64 __fastcall sub_140749848(ULONG_PTR MaxDataSize)
{
  unsigned int v2; // ebx
  __int64 v4; // rdx
  __int64 v5; // rax
  _QWORD v6[12]; // [rsp+30h] [rbp-68h] BYREF

  memset(v6, 0, 0x58uLL);
  sub_140749814(MaxDataSize);
  if ( (int)sub_1407498EC(*(_QWORD *)(MaxDataSize + 32)) >= 0 )
  {
    if ( *(_QWORD *)(MaxDataSize + 720) )
    {
      sub_1403D99B4(MaxDataSize, (PVOID)0x310);
      if ( *(_WORD *)(MaxDataSize + 40) )
      {
        sub_1403D99B4(MaxDataSize + 40, (PVOID)2);
        sub_1403D99B4(*(_QWORD *)(MaxDataSize + 48), (PVOID)*(unsigned __int16 *)(MaxDataSize + 40));
      }
      if ( *(_WORD *)(MaxDataSize + 56) )
      {
        sub_1403D99B4(MaxDataSize + 56, (PVOID)2);
        sub_1403D99B4(*(_QWORD *)(MaxDataSize + 64), (PVOID)*(unsigned __int16 *)(MaxDataSize + 56));
      }
      v5 = *(_QWORD *)(MaxDataSize + 16);
      if ( v5 && *(_WORD *)(v5 + 56) )
      {
        sub_1403D99B4(v5 + 56, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
      }
      KeBugCheckEx(0xCAu, 0x11uLL, MaxDataSize, *(_QWORD *)(MaxDataSize + 720), *(unsigned int *)(MaxDataSize + 704));
    }
    v2 = sub_14084C604(MaxDataSize, v6, MaxDataSize + 720);
    if ( v6[3] )
      sub_14042A5E0(v6[1], v4);
  }
  else
  {
    return 0;
  }
  return v2;
}
