/*
 * XREFs of sub_140A48020 @ 0x140A48020
 * Callers:
 *     sub_1403C1454 @ 0x1403C1454 (sub_1403C1454.c)
 *     sub_1407A34A0 @ 0x1407A34A0 (sub_1407A34A0.c)
 * Callees:
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     sub_1402C1900 @ 0x1402C1900 (sub_1402C1900.c)
 *     sub_1402F444C @ 0x1402F444C (sub_1402F444C.c)
 *     sub_1402F476C @ 0x1402F476C (sub_1402F476C.c)
 *     KeInitializeApc @ 0x1402F47B0 (KeInitializeApc.c)
 *     KeInitializeTimerEx @ 0x1402F4820 (KeInitializeTimerEx.c)
 *     sub_1402F4B70 @ 0x1402F4B70 (sub_1402F4B70.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14056FA60 @ 0x14056FA60 (sub_14056FA60.c)
 *     sub_140961464 @ 0x140961464 (sub_140961464.c)
 *     sub_140961490 @ 0x140961490 (sub_140961490.c)
 */

__int64 __fastcall sub_140A48020(unsigned __int64 a1, __int64 *a2)
{
  unsigned int v4; // r15d
  unsigned __int64 v5; // r12
  unsigned __int64 *v6; // rax
  __int64 v7; // rcx
  unsigned int v8; // edx
  _QWORD *v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int16 v13; // r8
  char v14; // r13
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // ebx
  char v21; // r14
  unsigned int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rax
  size_t v26; // r8
  void *v27; // rcx
  unsigned int v28; // [rsp+40h] [rbp-58h]
  __int64 v29; // [rsp+48h] [rbp-50h] BYREF
  __int64 v30; // [rsp+50h] [rbp-48h] BYREF
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]
  char v32; // [rsp+A8h] [rbp+10h]
  char v33; // [rsp+B0h] [rbp+18h]

  v29 = 0LL;
  v30 = 0LL;
  v33 = 0;
  v4 = 5;
  v5 = 0LL;
  v31 = 0LL;
  v32 = 0;
  *(_QWORD *)(a1 + 16) = a1 + 8;
  *(_QWORD *)(a1 + 8) = a1 + 8;
  *(_QWORD *)(a1 + 784) = a1 + 776;
  *(_QWORD *)(a1 + 776) = a1 + 776;
  v6 = (unsigned __int64 *)(a1 + 344);
  v7 = 4LL;
  do
  {
    *v6 = a1;
    v6 += 6;
    --v7;
  }
  while ( v7 );
  *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 120) & 0xFFFFFFFB | (4 * (*(_DWORD *)(a2[6] + 632) & 1 | 0x8010));
  *(_DWORD *)(a1 + 84) = 16 * dword_140D06B94;
  *(_QWORD *)(a1 + 160) = a1 + 152;
  *(_QWORD *)(a1 + 152) = a1 + 152;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *(_QWORD *)(a1 + 184) = a2[6];
  *(_QWORD *)(a1 + 544) = a2[6];
  v8 = *(_DWORD *)(a1 + 116) & 0xFFFFBFFF;
  if ( (*((_DWORD *)a2 + 15) & 2) == 0 )
    v8 = *(_DWORD *)(a1 + 116) | 0x4000;
  *(_DWORD *)(a1 + 116) = v8;
  *(_BYTE *)(a1 + 390) = ((*((_DWORD *)a2 + 15) & 2) != 0) + 1;
  if ( !a2[4] )
    *(_DWORD *)(a1 + 116) = v8 | 0x400;
  KeInitializeApc(
    a1 + 648,
    a1,
    0,
    (__int64)_misaligned_access,
    (__int64)_misaligned_access,
    (__int64)sub_1402EFA40,
    0,
    a1);
  KeInitializeEvent((PRKEVENT)(a1 + 736), NotificationEvent, 1u);
  KeInitializeTimerEx((PKTIMER)(a1 + 256), NotificationTimer);
  *(_QWORD *)(a1 + 304) = qword_140D06CC8 ^ __ROR8__((a1 + 256) ^ _byteswap_uint64(qword_140D06E28), qword_140D06CC8);
  v9 = (_QWORD *)(a1 + 464);
  *(_DWORD *)(a1 + 480) = 16909313;
  v10 = a1 + 264;
  v11 = *(_QWORD *)(a1 + 264);
  if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 )
    __fastfail(3u);
  *v9 = v11;
  *(_QWORD *)(a1 + 472) = v10;
  *(_QWORD *)(v11 + 8) = v9;
  *(_QWORD *)v10 = v9;
  *(_QWORD *)(a1 + 240) = a2[5];
  *(_BYTE *)a1 = 6;
  v12 = *((unsigned __int16 *)KeGetCurrentThread() + 292);
  if ( *((_DWORD *)a2 + 14) )
    v13 = *((_WORD *)a2 + 28) - 1;
  else
    v13 = *(_WORD *)(a2[6] + 2 * v12 + 772);
  v14 = 0;
  v15 = *a2;
  v16 = v13;
  v28 = v13;
  if ( *a2 )
  {
LABEL_13:
    *(_QWORD *)(a1 + 40) = v15;
    *(_QWORD *)(a1 + 56) = v15;
    *(_QWORD *)(a1 + 48) = v15 - (unsigned int)dword_140D05050;
    if ( (_BYTE)byte_140E01841 )
    {
      v23 = *(_DWORD *)(a1 + 116) | 0x400000;
      *(_DWORD *)(a1 + 116) = v23;
      if ( (*((_DWORD *)a2 + 15) & 1) == 0 )
      {
        v4 = (v23 >> 10) & 1;
        v20 = sub_140961464(a1, v4, 0LL, v16, &v30, &v29);
        if ( v20 < 0 )
        {
          v21 = 0;
          goto LABEL_18;
        }
        v33 = 1;
        v24 = v29;
        *(_QWORD *)(a1 + 1032) = v29;
        *(_QWORD *)(a1 + 1040) = v24 + 8;
        v25 = v30;
        *(_QWORD *)(a1 + 1048) = v30;
        *(_QWORD *)(a1 + 1056) = v4 | *(_DWORD *)(a1 + 1056) & 0xFF8 | (v25 - 12288) & 0xFFFFFFFFFFFFF000uLL;
      }
    }
    *(_BYTE *)(a1 + 126) = *(_BYTE *)(a1 + 126) & 0x80 | 8;
    if ( dword_140D068FC )
      *(_BYTE *)(a1 + 125) = dword_140D0509C;
    sub_1402F476C(a1);
    *(_QWORD *)(a1 + 880) = 1LL;
    *(_QWORD *)(a1 + 1008) = 1LL;
    if ( _bittest64(&qword_140D068D8, 0x37u) )
    {
      *(_QWORD *)(a1 + 1064) = MEMORY[0xFFFFF780000003D8] & ~(unsigned int)a2[8] & 0x40000;
      if ( (*(_DWORD *)(a1 + 116) & 0x400) == 0 )
        sub_14056FA60((_QWORD *)a1, v17, v18, v19);
      if ( a2[8] )
      {
        v5 = sub_1402F4B70(0x20u, v28, a1);
        v31 = v5;
        if ( !v5 )
        {
          v20 = -1073741670;
          v21 = 0;
          goto LABEL_23;
        }
        v26 = (unsigned int)dword_140D06A0C;
        v27 = (void *)(v5 - (unsigned int)dword_140D06A0C);
        *(_QWORD *)(a1 + 96) = v27;
        *(_DWORD *)(a1 + 116) |= 0x800000u;
        memset(v27, 0, v26);
        v32 = 1;
      }
    }
    sub_1402F444C(a1, a2);
    v20 = 0;
    v21 = v32;
LABEL_18:
    if ( v20 >= 0 )
      return (unsigned int)v20;
    goto LABEL_23;
  }
  v15 = sub_1402F4B70(8u, v13, a1);
  if ( v15 )
  {
    v14 = 1;
    goto LABEL_13;
  }
  v20 = -1073741670;
  v21 = 0;
LABEL_23:
  if ( v14 )
  {
    sub_1402C1900(*(_QWORD *)(a1 + 56), 2u, a1);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  if ( v21 )
  {
    sub_1402C1900(v5, 8u, a1);
    *(_QWORD *)(a1 + 96) = 0LL;
  }
  if ( v33 )
  {
    sub_140961490(*(_QWORD *)(a1 + 1048), v4, 0);
    *(_QWORD *)(a1 + 1032) = 0LL;
  }
  return (unsigned int)v20;
}
