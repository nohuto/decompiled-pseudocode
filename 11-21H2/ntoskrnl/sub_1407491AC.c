/*
 * XREFs of sub_1407491AC @ 0x1407491AC
 * Callers:
 *     sub_1407491FC @ 0x1407491FC (sub_1407491FC.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140859234 @ 0x140859234 (sub_140859234.c)
 */

void __fastcall sub_1407491AC(ULONG_PTR MaxDataSize)
{
  int v2; // eax
  ULONG_PTR v3; // rsi
  __int64 v4; // rax

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    v2 = sub_140859234();
    v3 = v2;
    if ( v2 < 0 )
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
      v4 = *(_QWORD *)(MaxDataSize + 16);
      if ( v4 )
      {
        if ( *(_WORD *)(v4 + 56) )
        {
          sub_1403D99B4(v4 + 56, (PVOID)2);
          sub_1403D99B4(
            *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
            (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
        }
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1000uLL, v3, MaxDataSize);
    }
  }
}
