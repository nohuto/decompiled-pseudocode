/*
 * XREFs of sub_180014FB0 @ 0x180014FB0
 * Callers:
 *     sub_180005900 @ 0x180005900 (sub_180005900.c)
 * Callees:
 *     sub_1800065B0 @ 0x1800065B0 (sub_1800065B0.c)
 *     memset @ 0x180016A5E (memset.c)
 *     sub_18001A83C @ 0x18001A83C (sub_18001A83C.c)
 */

__int64 __fastcall sub_180014FB0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 result; // rax
  PVOID v6; // rax
  PVOID v7; // rax
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // rax
  size_t Size; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(unsigned int *)(a2 + 16);
  if ( !(_DWORD)v2 )
    return 0LL;
  result = sub_18001A83C((unsigned int)v2, 160LL, &Size);
  if ( (int)result < 0 )
    return result;
  v6 = sub_1800065B0(Size);
  *(_QWORD *)(a1 + 136) = v6;
  if ( !v6 )
    return 3221225495LL;
  memset(v6, 0, Size);
  result = sub_18001A83C(v2, 8LL, &Size);
  if ( (int)result >= 0 )
  {
    v7 = sub_1800065B0(Size);
    *(_QWORD *)(a1 + 144) = v7;
    if ( !v7 )
      return 3221225495LL;
    memset(v7, 0, Size);
    v8 = 0LL;
    *(_DWORD *)(a1 + 152) = v2;
    do
    {
      v9 = 160 * v8 + *(_QWORD *)(a1 + 136);
      v10 = *(_QWORD *)(a2 + 8) + 152LL * (unsigned int)v8;
      *(_OWORD *)v9 = *(_OWORD *)v10;
      *(_OWORD *)(v9 + 16) = *(_OWORD *)(v10 + 16);
      *(_OWORD *)(v9 + 32) = *(_OWORD *)(v10 + 32);
      *(_OWORD *)(v9 + 48) = *(_OWORD *)(v10 + 48);
      *(_OWORD *)(v9 + 64) = *(_OWORD *)(v10 + 64);
      *(_OWORD *)(v9 + 80) = *(_OWORD *)(v10 + 80);
      *(_OWORD *)(v9 + 96) = *(_OWORD *)(v10 + 96);
      *(_OWORD *)(v9 + 112) = *(_OWORD *)(v10 + 112);
      *(_OWORD *)(v9 + 128) = *(_OWORD *)(v10 + 128);
      *(_QWORD *)(v9 + 144) = *(_QWORD *)(v10 + 144);
      *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8 * v8) = 160 * v8 + *(_QWORD *)(a1 + 136);
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a1 + 152) );
    return 0LL;
  }
  return result;
}
