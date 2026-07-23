/*
 * XREFs of sub_140AF82A8 @ 0x140AF82A8
 * Callers:
 *     sub_140AF819C @ 0x140AF819C (sub_140AF819C.c)
 * Callees:
 *     HalQueryMaximumProcessorCount @ 0x14036FA30 (HalQueryMaximumProcessorCount.c)
 *     sub_1403AE924 @ 0x1403AE924 (sub_1403AE924.c)
 *     sub_1403AEF08 @ 0x1403AEF08 (sub_1403AEF08.c)
 *     sub_1403B85D0 @ 0x1403B85D0 (sub_1403B85D0.c)
 *     sub_1403B8D0C @ 0x1403B8D0C (sub_1403B8D0C.c)
 *     sub_1403B8DA0 @ 0x1403B8DA0 (sub_1403B8DA0.c)
 *     sub_1403BD04C @ 0x1403BD04C (sub_1403BD04C.c)
 *     sub_1403BD3FC @ 0x1403BD3FC (sub_1403BD3FC.c)
 *     sub_1403BF104 @ 0x1403BF104 (sub_1403BF104.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14051E038 @ 0x14051E038 (sub_14051E038.c)
 */

__int64 __fastcall sub_140AF82A8(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // ebx
  void *v4; // rax
  unsigned int v5; // ebx
  void *v6; // rax
  void *v7; // rax
  unsigned int v8; // ebx
  void *v9; // rax
  __int64 v10; // r9
  __int64 v11; // r9
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v18; // rdx
  ULONG_PTR *i; // rdi
  ULONG_PTR v20; // rcx
  int v21; // eax
  _DWORD *v23; // rax
  unsigned int v24; // ecx
  int v25; // eax
  ULONG_PTR v26; // [rsp+60h] [rbp+18h] BYREF

  v26 = 0LL;
  qword_140C4AD90 = 0LL;
  qword_140C4AB88 = 0LL;
  qword_140C4AD88 = (__int64)&qword_140C4AD80;
  qword_140C4AD80 = (__int64)&qword_140C4AD80;
  dword_140C4DD60 = 2097153;
  memset(&unk_140C4DD64, 0, 0x104uLL);
  v2 = sub_1403B85D0(a1, 0);
  if ( v2 < 0 )
    goto LABEL_25;
  dword_140C54A94 = HalQueryMaximumProcessorCount();
  v3 = 24 * dword_140C54A94;
  v4 = (void *)sub_1403BF104(24 * dword_140C54A94, 1u);
  qword_140C54A80 = (__int64)v4;
  if ( !v4 )
    goto LABEL_24;
  memset(v4, 0, v3);
  v5 = dword_140C54A94 << 6;
  v6 = (void *)sub_1403BF104(dword_140C54A94 << 6, 1u);
  qword_140C4E210 = (ULONG_PTR)v6;
  if ( !v6
    || (memset(v6, 0, v5), v7 = (void *)sub_1403BF104(v5, 1u), (qword_140C4E200 = (__int64)v7) == 0)
    || (memset(v7, 0, v5),
        v8 = 8 * dword_140C54A94,
        v9 = (void *)sub_1403BF104(8 * dword_140C54A94, 1u),
        (qword_140C4BEE0 = (__int64)v9) == 0) )
  {
LABEL_24:
    v2 = -1073741801;
    goto LABEL_25;
  }
  memset(v9, 0, v8);
  *(_QWORD *)qword_140C4BEE0 = KeGetPcr();
  v2 = sub_1403BD04C();
  if ( v2 >= 0 )
    v2 = sub_1403BD3FC();
  if ( v2 < 0 )
  {
    sub_14051E038(0LL, 3, v2, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 0x248u);
    goto LABEL_25;
  }
  sub_1403AEF08(0x35u, (int)sub_14051F570, 5, v10, -1LL);
  sub_1403AEF08(0xE3u, (int)sub_14051F590, 14, v11, -1LL);
  sub_1403AEF08(0x36u, (int)sub_14051F570, 5, v12, -1LL);
  sub_1403AEF08(0xDFu, (int)sub_14051F600, 15, v13, -2LL);
  sub_1403AEF08(0xD8u, (int)sub_14051F630, 15, v14, -1LL);
  sub_1403AEF08(0xE2u, (int)sub_1403B5BB0, 15, v15, -1LL);
  sub_1403AEF08(0xD7u, (int)sub_14051F5B0, 15, v16, -1LL);
  sub_1403AEF08(0xFEu, (int)sub_140456A70, 15, v17, -3LL);
  byte_140D688E2 = 17;
  byte_140D68AEA = 15;
  dword_140D68AEB = 2;
  byte_140D689BF = 17;
  byte_140D68F3B = 15;
  dword_140D68F3C = 223;
  v2 = sub_1403B8DA0(&v26);
  if ( v2 < 0 )
    goto LABEL_25;
  for ( i = (ULONG_PTR *)qword_140C4DE70; i != &qword_140C4DE70; i = (ULONG_PTR *)*i )
  {
    v2 = sub_1403AE924((ULONG_PTR)i, v18);
    if ( v2 < 0 )
      goto LABEL_25;
  }
  v2 = sub_1403B85D0(a1, 1u);
  if ( v2 < 0 )
    goto LABEL_25;
  v20 = v26;
  xmmword_140C4AD30 = (__int128)_mm_load_si128((const __m128i *)&xmmword_14001C760);
  LOWORD(xmmword_140C4AD30) = 256;
  v21 = *(_DWORD *)(v26 + 228);
  *(_WORD *)((char *)&xmmword_140C4AD30 + 13) = 3597;
  BYTE12(xmmword_140C4AD30) = 12;
  HIBYTE(xmmword_140C4AD30) = 15;
  BYTE2(xmmword_140C4AD30) = 2;
  if ( (v21 & 1) == 0 )
  {
    v23 = (_DWORD *)qword_140C54A80;
    LODWORD(dword_140C54A90) = 1;
    *(_DWORD *)(qword_140C54A80 + 8) = 0;
    *v23 = 4;
    v21 = *(_DWORD *)(v20 + 228);
  }
  if ( !(_DWORD)dword_140C54A90 )
    LODWORD(dword_140C54A90) = 1;
  if ( (v21 & 4) == 0 )
    dword_140C0C694 = 0;
  qword_140C54A88 = v20;
  v2 = sub_1403B8D0C();
  if ( v2 < 0 )
LABEL_25:
    KeBugCheckEx(0x5Cu, 0x200uLL, 0x5250631uLL, dword_140C4ADB0, v2);
  if ( (*(_DWORD *)(qword_140C54A88 + 228) & 0x100) != 0 )
  {
    if ( *((_BYTE *)KeGetCurrentPrcb() + 141) == 1 )
    {
      v25 = 0x200000;
    }
    else
    {
      v24 = 240 * HalQueryMaximumProcessorCount();
      v25 = 0x10000;
      if ( v24 <= 0x10000 )
      {
        _BitScanReverse(&v24, 2 * v24 - 1);
        v25 = 1 << v24;
      }
    }
    dword_140C4B058 = v25;
  }
  return (unsigned int)v2;
}
