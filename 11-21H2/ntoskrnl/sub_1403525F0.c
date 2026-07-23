/*
 * XREFs of sub_1403525F0 @ 0x1403525F0
 * Callers:
 *     sub_14035225C @ 0x14035225C (sub_14035225C.c)
 *     sub_14059A86C @ 0x14059A86C (sub_14059A86C.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140227ED0 @ 0x140227ED0 (sub_140227ED0.c)
 *     sub_14026DC5C @ 0x14026DC5C (sub_14026DC5C.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402CFF00 @ 0x1402CFF00 (sub_1402CFF00.c)
 *     sub_1403528A4 @ 0x1403528A4 (sub_1403528A4.c)
 *     sub_140352A00 @ 0x140352A00 (sub_140352A00.c)
 *     sub_140352CB4 @ 0x140352CB4 (sub_140352CB4.c)
 *     sub_140352D04 @ 0x140352D04 (sub_140352D04.c)
 *     sub_140352D90 @ 0x140352D90 (sub_140352D90.c)
 *     sub_1403531F0 @ 0x1403531F0 (sub_1403531F0.c)
 *     sub_1405852C0 @ 0x1405852C0 (sub_1405852C0.c)
 */

__int64 __fastcall sub_1403525F0(_QWORD *a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r10
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // esi
  unsigned __int64 v8; // rdx
  unsigned __int16 v9; // ax
  __int64 v11; // r9
  int v12; // r8d
  unsigned __int64 v13; // rdx
  int v14; // eax
  unsigned __int8 v15; // r10
  __int64 v16; // rcx
  unsigned __int8 v17; // r10
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r9
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdi
  unsigned int v25; // r9d

  v2 = ((*a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v11 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  v4 = a1[6];
  *((_BYTE *)a1 + 76) = CurrentIrql;
  sub_1402CF4F0(v4);
  v7 = 0;
  while ( v2 <= a1[7] )
  {
    v8 = a1[8];
    if ( v8 )
    {
      sub_14020D8D0(a1[6], v8);
      a1[8] = 0LL;
    }
    if ( *((_BYTE *)a1 + 76) < 2u && ((unsigned int)sub_1403531F0(a1[6]) || KeShouldYieldProcessor()) )
    {
      sub_140352CB4(a1);
      v17 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v17 <= 0xFu )
      {
        v20 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v20 + 20) |= (-1 << (v17 + 1)) & 4;
      }
      v18 = a1[6];
      *((_BYTE *)a1 + 76) = v17;
      sub_1402CF4F0(v18);
    }
    if ( (unsigned int)sub_1403528A4(a1, v2, v5, v6) )
    {
      sub_140352A00(a1, v2);
      v2 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    }
    else
    {
      sub_140352CB4(a1);
      v12 = 512;
      if ( (*((_BYTE *)a1 + 78) & 4) != 0 )
        v12 = 514;
      v13 = (v2 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v13 > a1[7] )
        v13 = a1[7];
      v14 = sub_14026DC5C(v2, v13, v12, *((_DWORD *)a1 + 10), *((_DWORD *)a1 + 18) + 1);
      v15 = KeGetCurrentIrql();
      if ( !v14 )
      {
        *((_WORD *)a1 + 39) |= 1u;
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v15 <= 0xFu )
        {
          v21 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v21 + 20) |= ~((unsigned __int8)(1LL << (v15 + 1)) - 1) & 4;
        }
        v22 = a1[6];
        *((_BYTE *)a1 + 76) = v15;
        sub_1402CF4F0(v22);
        break;
      }
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && v15 <= 0xFu )
      {
        v19 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v19 + 20) |= ~((unsigned __int8)(1LL << (v15 + 1)) - 1) & 4;
      }
      v16 = a1[6];
      *((_BYTE *)a1 + 76) = v15;
      sub_1402CF4F0(v16);
    }
  }
  sub_1402CFF00((__int64)a1);
  sub_140352CB4(a1);
  v9 = *((_WORD *)a1 + 39);
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) == 0 )
    {
      v23 = (*a1 >> 9) & 0x7FFFFFFFF8LL;
      if ( v2 != v23 - 0x98000000000LL )
      {
        v24 = (__int64)(v2 - v23 + 0x98000000000LL) >> 3;
        v25 = (v9 >> 2) & 1 | 2;
        if ( (v9 & 0x100) == 0 )
          v25 = (v9 >> 2) & 1;
        sub_140227ED0(*a1, v24, 0x4000u, v25);
      }
    }
    v7 = -1073741670;
  }
  else
  {
    if ( (v9 & 0x104) == 0 && (BYTE4(xmmword_140D06900) & 1) != 0 )
      sub_1405852C0(*a1, 0LL, 11LL, a1[1]);
    sub_140352D90(*((unsigned int *)a1 + 10), a1[3], 1LL);
  }
  sub_140352D04(a1);
  return v7;
}
