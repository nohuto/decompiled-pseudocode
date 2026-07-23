/*
 * XREFs of sub_1406CE6C0 @ 0x1406CE6C0
 * Callers:
 *     sub_1406CE680 @ 0x1406CE680 (sub_1406CE680.c)
 * Callees:
 *     ntoskrnl_19 @ 0x14041DE80 (ntoskrnl_19.c)
 *     memset @ 0x140435E00 (memset.c)
 */

__int64 __fastcall sub_1406CE6C0(__int128 *a1, int a2, __int64 a3, unsigned int a4, unsigned int *a5, int a6)
{
  __int128 v8; // xmm0
  int v9; // esi
  unsigned int v10; // ecx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  int v13; // [rsp+30h] [rbp-28h]
  int v14; // [rsp+34h] [rbp-24h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  unsigned int v16; // [rsp+40h] [rbp-18h]
  int v17; // [rsp+44h] [rbp-14h]

  if ( a1 && a5 && !a6 )
  {
    v8 = *a1;
    v14 = 0;
    v17 = 0;
    v15 = a3;
    v13 = a2;
    v12 = v8;
    v16 = a4;
    v9 = ntoskrnl_19(10LL, (__int64)&v12);
    if ( v9 < 0 )
    {
      if ( v9 != -1073741789 )
      {
        *a5 = 0;
        return (unsigned int)v9;
      }
    }
    else
    {
      v10 = v16;
      if ( a4 <= v16 )
      {
LABEL_6:
        *a5 = v10;
        return (unsigned int)v9;
      }
      memset((void *)(a3 + v16), 0, a4 - v16);
    }
    v10 = v16;
    goto LABEL_6;
  }
  return 3221225485LL;
}
