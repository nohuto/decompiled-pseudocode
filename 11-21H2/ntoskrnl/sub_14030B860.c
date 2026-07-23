/*
 * XREFs of sub_14030B860 @ 0x14030B860
 * Callers:
 *     sub_140205FD4 @ 0x140205FD4 (sub_140205FD4.c)
 *     sub_140215E54 @ 0x140215E54 (sub_140215E54.c)
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 *     sub_1403D3CA0 @ 0x1403D3CA0 (sub_1403D3CA0.c)
 *     sub_1403D3EE0 @ 0x1403D3EE0 (sub_1403D3EE0.c)
 *     sub_1403D4120 @ 0x1403D4120 (sub_1403D4120.c)
 *     sub_1403D4314 @ 0x1403D4314 (sub_1403D4314.c)
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 *     sub_1403D9FA8 @ 0x1403D9FA8 (sub_1403D9FA8.c)
 *     sub_1405B06E0 @ 0x1405B06E0 (sub_1405B06E0.c)
 *     sub_1406F2C30 @ 0x1406F2C30 (sub_1406F2C30.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1406FC590 @ 0x1406FC590 (sub_1406FC590.c)
 *     sub_1407B8B60 @ 0x1407B8B60 (sub_1407B8B60.c)
 *     sub_1407B9190 @ 0x1407B9190 (sub_1407B9190.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 *     sub_140A59E20 @ 0x140A59E20 (sub_140A59E20.c)
 *     sub_140AF47DC @ 0x140AF47DC (sub_140AF47DC.c)
 * Callees:
 *     sub_140349710 @ 0x140349710 (sub_140349710.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 */

PVOID __fastcall sub_14030B860(__int64 a1, SIZE_T a2, ULONG a3, unsigned int a4)
{
  char v4; // r11
  char v5; // bl
  int v9; // r9d
  __int64 v10; // rax
  int v11; // edx
  POOL_TYPE v12; // r10d
  int v14; // edx
  int v15; // r8d
  int v16; // edx

  v4 = 0;
  v5 = 0;
  if ( (a1 & 0xFFFFF800) != 0 )
    return 0LL;
  v9 = 0;
  v10 = a1 & 0x1C0;
  if ( v10 != 64 )
  {
    if ( v10 == 128 )
    {
      v11 = 0;
      goto LABEL_4;
    }
    if ( v10 == 256 )
    {
      v11 = 1;
      if ( (a1 & 0x10) != 0 )
        v11 = -2147483647;
      goto LABEL_4;
    }
    return 0LL;
  }
  v11 = 512;
LABEL_4:
  if ( (a1 & 4) != 0 )
    v11 |= 0x20u;
  v12 = v11 | 0x400;
  if ( (a1 & 2) != 0 )
    v12 = v11;
  if ( (a1 & 0x100000629LL) != 0 )
  {
    v14 = v12 | 4;
    if ( (a1 & 8) == 0 )
      v14 = v12;
    v15 = v14 | 0x80;
    if ( (a1 & 0x200) == 0 )
      v15 = v14;
    v16 = v15 | 0x40;
    if ( (a1 & 0x400) == 0 )
      v16 = v15;
    v12 = v16;
    if ( (a1 & 1) != 0 )
    {
      v12 = v16 | 8;
      v4 = 1;
      if ( (a1 & 0x20) != 0 )
        v12 = v16;
    }
    else if ( (a1 & 0x20) != 0 )
    {
      v12 = v16 | 0x10;
    }
    if ( (a1 & 0x100000000LL) != 0 )
      v5 = 1;
  }
  if ( v5 )
    v9 = 1;
  if ( v4 )
    return ExAllocatePoolWithQuotaTag(v12, a2, a3);
  else
    return (PVOID)sub_140349710((unsigned int)v12, a2, a3, a4, v9);
}
