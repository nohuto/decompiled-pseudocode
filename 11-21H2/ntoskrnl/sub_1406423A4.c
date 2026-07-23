/*
 * XREFs of sub_1406423A4 @ 0x1406423A4
 * Callers:
 *     sub_140348B40 @ 0x140348B40 (sub_140348B40.c)
 *     sub_140641F58 @ 0x140641F58 (sub_140641F58.c)
 * Callees:
 *     sub_140216928 @ 0x140216928 (sub_140216928.c)
 *     sub_140216974 @ 0x140216974 (sub_140216974.c)
 *     sub_140221790 @ 0x140221790 (sub_140221790.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140366FB0 @ 0x140366FB0 (sub_140366FB0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1405FF880 @ 0x1405FF880 (sub_1405FF880.c)
 *     sub_14062DEE4 @ 0x14062DEE4 (sub_14062DEE4.c)
 */

__int64 __fastcall sub_1406423A4(__int128 *a1, unsigned __int64 a2)
{
  int v4; // eax
  __int64 v5; // rdx
  __int16 v6; // r14
  unsigned int *v7; // rdi
  ULONG_PTR v8; // rsi
  unsigned __int8 CurrentIrql; // dl
  ULONG_PTR v10; // rdx
  unsigned __int64 v11; // rbp
  _BYTE *i; // r8
  unsigned __int64 v13; // rax
  _BYTE *v14; // r8
  __int64 v15; // rsi
  __int64 v16; // rax
  int v17; // r10d
  __int64 v18; // rbx
  unsigned int v19; // edx
  __int64 v20; // r8
  int v21; // r11d
  __int64 v22; // r11

  v4 = sub_140366FB0(a2);
  v6 = 0;
  if ( v4 != 32 )
    v6 = v4;
  v7 = (unsigned int *)(v5 & 0xFFFFFFFFFFFFF000uLL);
  v8 = 4096 - (unsigned int)(v5 & 0xFFF);
  sub_140216974(a2, *(_DWORD *)((v5 & 0xFFFFFFFFFFFFF000uLL) + 4), v8, 0, v5);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql > (unsigned __int8)(2 - ((v6 & 1) != 0)) )
    KeBugCheckEx(0xC1u, CurrentIrql, 1uLL, a2, 0x31uLL);
  v10 = *(_WORD *)v7 & 0x1FFF;
  v11 = (v10 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v11 != v8 )
    KeBugCheckEx(0xC1u, a2, *(_WORD *)v7 & 0x1FFF, v8, 0x21uLL);
  for ( i = (char *)v7 + ((*v7 & 0x4000) != 0 ? 8 : 0) + 16; (unsigned __int64)i < a2; ++i )
  {
    if ( *i != *((_BYTE *)v7 + 2) )
      KeBugCheckEx(0xC1u, a2, (ULONG_PTR)i, *v7, 0x23uLL);
  }
  v13 = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  v14 = (_BYTE *)(v10 + a2);
  if ( v10 + a2 < v13 )
  {
    do
    {
      if ( *v14 != *((_BYTE *)v7 + 2) )
        KeBugCheckEx(0xC1u, a2, (ULONG_PTR)v14, *v7, 0x24uLL);
      ++v14;
    }
    while ( (unsigned __int64)v14 < v13 );
  }
  if ( (*v7 & 0x4000) != 0 )
    sub_1405FF880(a2, v10);
  v15 = v7[1];
  if ( (_DWORD)v15 == dword_140D05128 )
    __debugbreak();
  v16 = DWORD1(xmmword_140D06900);
  if ( (BYTE4(xmmword_140D06900) & 0x41) != 0 )
    sub_14062DEE4(0xE22u, v6, v15, a2, v11);
  if ( (v6 & 0x20) != 0 )
  {
    v17 = qword_140C11760;
    v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL) + 896LL);
  }
  else
  {
    LODWORD(v16) = HIDWORD(KeGetPcr()[1].LockArray);
    v17 = qword_140C157A0;
    v18 = (__int64)*(&qword_140C117A0 + v16);
  }
  v19 = v17 & ((40543 * v15) ^ ((unsigned __int64)(40543 * v15) >> 32));
  while ( 1 )
  {
    v20 = v18 + 80LL * v19;
    if ( *(_DWORD *)v20 == (_DWORD)v15 )
      break;
    if ( *(_DWORD *)v20 || (v6 & 0x20) != 0 || (v21 = *(_DWORD *)(qword_140C157D0 + 80LL * v19)) == 0 )
    {
      v19 = v17 & (v19 + 1);
      if ( v19 == (v17 & ((40543 * (int)v15) ^ ((unsigned __int64)(40543 * v15) >> 32))) )
      {
        sub_140221790(v15, v11, v6);
        return sub_140364128(a1, (__int64)v7, 0, 0LL);
      }
    }
    else
    {
      *(_DWORD *)v20 = v21;
      v22 = *(_QWORD *)(qword_140C157D0 + 80LL * v19 + 72);
      if ( v22 )
        *(_QWORD *)(v20 + 72) = v22;
    }
  }
  sub_140216928(!(v6 & 1), v11, v20);
  return sub_140364128(a1, (__int64)v7, 0, 0LL);
}
