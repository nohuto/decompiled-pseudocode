/*
 * XREFs of sub_1407669D4 @ 0x1407669D4
 * Callers:
 *     sub_1402DDAE4 @ 0x1402DDAE4 (sub_1402DDAE4.c)
 *     sub_14081059C @ 0x14081059C (sub_14081059C.c)
 * Callees:
 *     sub_1403D99B4 @ 0x1403D99B4 (sub_1403D99B4.c)
 *     sub_1403DED30 @ 0x1403DED30 (sub_1403DED30.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140564DE8 @ 0x140564DE8 (sub_140564DE8.c)
 *     sub_140749814 @ 0x140749814 (sub_140749814.c)
 *     sub_140864878 @ 0x140864878 (sub_140864878.c)
 *     sub_140956BBC @ 0x140956BBC (sub_140956BBC.c)
 *     sub_14095EB98 @ 0x14095EB98 (sub_14095EB98.c)
 */

void __fastcall sub_1407669D4(ULONG_PTR MaxDataSize, int a2, char a3)
{
  int v6; // eax
  ULONG_PTR v7; // rbp
  __int64 v8; // rax
  void *v9; // rcx

  if ( *(_QWORD *)(MaxDataSize + 720) )
  {
    sub_1403DED30(MaxDataSize);
    v6 = sub_140864878(*(_QWORD *)(MaxDataSize + 720));
    v7 = v6;
    if ( v6 < 0 )
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
      v8 = *(_QWORD *)(MaxDataSize + 16);
      if ( v8 && *(_WORD *)(v8 + 56) )
      {
        sub_1403D99B4(v8 + 56, (PVOID)2);
        sub_1403D99B4(
          *(_QWORD *)(*(_QWORD *)(MaxDataSize + 16) + 64LL),
          (PVOID)*(unsigned __int16 *)(*(_QWORD *)(MaxDataSize + 16) + 56LL));
      }
      KeBugCheckEx(0xCAu, 0x13uLL, 0x1001uLL, v7, MaxDataSize);
    }
    sub_140749814(MaxDataSize);
  }
  if ( a3 && dword_140C44634 )
  {
    v9 = *(void **)(MaxDataSize + 32);
    if ( a2 == 55 )
    {
      sub_14095EB98(v9);
      sub_140956BBC();
    }
    else
    {
      sub_140564DE8((__int64)v9);
    }
  }
}
