/*
 * XREFs of sub_1403D3CA0 @ 0x1403D3CA0
 * Callers:
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 * Callees:
 *     sub_14025BFE0 @ 0x14025BFE0 (sub_14025BFE0.c)
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     sub_14030B860 @ 0x14030B860 (sub_14030B860.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

PVOID __fastcall sub_1403D3CA0(__int64 a1)
{
  unsigned int v1; // ebx
  _DWORD *v3; // rax
  PVOID v4; // rdi

  v1 = *(_DWORD *)(a1 + 80);
  v3 = sub_14030B860(64LL, 0x130uLL, 0x745A694Du, v1 | 0x80000000);
  v4 = v3;
  if ( v3 )
  {
    sub_14025BFE0(v3 + 62, v1);
    if ( (unsigned int)sub_14026A574((__int64)v4 + 88, *((_DWORD *)v4 + 65), 14) )
    {
      *((_QWORD *)v4 + 29) = a1;
      return v4;
    }
    ExFreePoolWithTag(v4, 0);
  }
  return 0LL;
}
