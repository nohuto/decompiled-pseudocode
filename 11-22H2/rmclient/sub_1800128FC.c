/*
 * XREFs of sub_1800128FC @ 0x1800128FC
 * Callers:
 *     sub_180014410 @ 0x180014410 (sub_180014410.c)
 * Callees:
 *     sub_1800013C0 @ 0x1800013C0 (sub_1800013C0.c)
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 *     sub_180013460 @ 0x180013460 (sub_180013460.c)
 *     sub_180013AD0 @ 0x180013AD0 (sub_180013AD0.c)
 *     sub_1800142CC @ 0x1800142CC (sub_1800142CC.c)
 *     sub_180016348 @ 0x180016348 (sub_180016348.c)
 */

__int64 __fastcall sub_1800128FC(__int64 a1, unsigned int a2, void *a3, __int64 a4, __int64 *a5)
{
  PVOID v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  int v14; // edi
  int v16; // [rsp+40h] [rbp-28h] BYREF
  unsigned int v17; // [rsp+44h] [rbp-24h] BYREF
  __int64 v18; // [rsp+48h] [rbp-20h] BYREF

  v9 = sub_1800065B0(0x80uLL);
  v13 = (__int64)v9;
  if ( v9 )
  {
    sub_180013AD0(a2, a4, a1, v9);
    v14 = sub_180013460(a3);
    if ( v14 >= 0 )
    {
      v14 = sub_1800142CC(v13);
      if ( v14 >= 0 )
      {
        *a5 = v13;
        v13 = 0LL;
        v14 = 0;
      }
    }
  }
  else
  {
    v14 = -1073741801;
  }
  if ( (unsigned int)dword_180032000 > 4 && (byte_180032010 & 2) != 0 && (qword_180032018 & 2) == qword_180032018 )
  {
    v18 = *a5;
    v16 = v14;
    v17 = a2;
    sub_1800013C0(v10, byte_18002A665, v11, v12, (__int64)&v17, (__int64)&v18, (__int64)&v16);
  }
  if ( v13 )
    sub_180016348(v13);
  return (unsigned int)v14;
}
