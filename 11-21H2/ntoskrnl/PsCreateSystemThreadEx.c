/*
 * XREFs of PsCreateSystemThreadEx @ 0x1406F0360
 * Callers:
 *     sub_1403D3960 @ 0x1403D3960 (sub_1403D3960.c)
 *     sub_1403D9D88 @ 0x1403D9D88 (sub_1403D9D88.c)
 *     sub_1406A5770 @ 0x1406A5770 (sub_1406A5770.c)
 *     sub_1406BE9A0 @ 0x1406BE9A0 (sub_1406BE9A0.c)
 *     PsCreateSystemThread @ 0x1406F0310 (PsCreateSystemThread.c)
 *     sub_1406F2278 @ 0x1406F2278 (sub_1406F2278.c)
 *     IoCreateSystemThread @ 0x1407FB2B0 (IoCreateSystemThread.c)
 *     sub_140807FEC @ 0x140807FEC (sub_140807FEC.c)
 *     sub_140829870 @ 0x140829870 (sub_140829870.c)
 *     sub_1408339FC @ 0x1408339FC (sub_1408339FC.c)
 *     sub_14084A7D0 @ 0x14084A7D0 (sub_14084A7D0.c)
 *     sub_14084B418 @ 0x14084B418 (sub_14084B418.c)
 *     sub_140859AD4 @ 0x140859AD4 (sub_140859AD4.c)
 *     sub_14085B500 @ 0x14085B500 (sub_14085B500.c)
 *     sub_140935DE0 @ 0x140935DE0 (sub_140935DE0.c)
 *     sub_14096C3A8 @ 0x14096C3A8 (sub_14096C3A8.c)
 *     sub_1409884F4 @ 0x1409884F4 (sub_1409884F4.c)
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 *     sub_1409F8680 @ 0x1409F8680 (sub_1409F8680.c)
 *     sub_140A05860 @ 0x140A05860 (sub_140A05860.c)
 * Callees:
 *     KeQueryActiveGroupCount @ 0x1402622B0 (KeQueryActiveGroupCount.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     memset @ 0x140435E00 (memset.c)
 *     DnsPrint_RpcZoneInfo_0 @ 0x140701B64 (DnsPrint_RpcZoneInfo_0.c)
 *     sub_140732D40 @ 0x140732D40 (sub_140732D40.c)
 */

__int64 __fastcall PsCreateSystemThreadEx(
        int a1,
        int a2,
        __int128 *a3,
        ULONG_PTR a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int128 *a8,
        _DWORD *a9)
{
  __int128 *v10; // rsi
  char v13; // r12
  _DWORD *v14; // rbx
  _DWORD *v15; // rdi
  __int128 v16; // xmm0
  __int128 v17; // xmm0
  int v18; // edi
  unsigned int v20; // ebx
  __int128 v21; // xmm0
  int v22; // eax
  __int64 v23; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+78h] [rbp-88h]
  int v25[4]; // [rsp+80h] [rbp-80h] BYREF
  __m128i v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp-48h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int128 v31; // [rsp+C8h] [rbp-38h] BYREF
  _OWORD v32[32]; // [rsp+E0h] [rbp-20h] BYREF

  v10 = a8;
  v30 = a5;
  v29 = a6;
  v24 = a2;
  v28 = a7;
  memset(v32, 0, 0x1F5uLL);
  *(_QWORD *)&v27 = 0LL;
  v23 = 0LL;
  *(_OWORD *)v25 = 0LL;
  DWORD2(v27) = 0;
  v26 = 0LL;
  v31 = 0LL;
  if ( KeGetCurrentIrql() > 1u )
    KeBugCheckEx(0xC8u, ((unsigned __int64)KeGetCurrentIrql() << 16) | 4, 0LL, 0LL, 0LL);
  v13 = 0;
  if ( a4 )
  {
    v18 = sub_140732D40(a4, 0x72437350u, (__int64)&v23, 0LL, 0LL);
    if ( v18 < 0 )
      return (unsigned int)v18;
    v14 = (_DWORD *)v23;
    v13 = 1;
  }
  else
  {
    v14 = (_DWORD *)*((_QWORD *)qword_140D06C40 + 13);
    v23 = (__int64)v14;
  }
  v15 = v14 + 543;
  if ( (v14[543] & 0x1000) != 0 )
  {
    if ( !a8 && !a9 )
    {
      v20 = (unsigned __int16)(_InterlockedExchangeAdd(dword_140D3B288, 1u) + 1);
      v10 = &v31;
      WORD4(v31) = v20 % KeQueryActiveGroupCount();
      v14 = (_DWORD *)v23;
      *(_QWORD *)&v31 = qword_140D06E48[WORD4(v31)];
    }
    memset(v32, 0, 0x1F8uLL);
    if ( v10 )
    {
      v21 = *v10;
      v22 = 4096;
      DWORD1(v32[0]) = 4096;
      v32[20] = v21;
    }
    else
    {
      v22 = DWORD1(v32[0]);
    }
    if ( a9 )
    {
      DWORD1(v32[0]) = v22 | 0x4000;
      HIDWORD(v32[15]) = *a9;
    }
  }
  if ( a3 )
  {
    v16 = *a3;
    v26 = (__m128i)a3[1];
    *(_OWORD *)v25 = v16;
    v17 = a3[2];
    v26.m128i_i32[2] = _mm_cvtsi128_si32(_mm_srli_si128(v26, 8)) | 0x200;
    v27 = v17;
  }
  else
  {
    v25[0] = 48;
    v27 = 0LL;
    *(_QWORD *)&v25[2] = 0LL;
    v26.m128i_i32[2] = 512;
    v26.m128i_i64[0] = 0LL;
  }
  v18 = DnsPrint_RpcZoneInfo_0(
          a1,
          v24,
          (int)v25,
          0,
          v14,
          (unsigned __int64)v32 & -(__int64)((*v15 & 0x1000) != 0),
          v30,
          0LL,
          0LL,
          0,
          v29,
          v28,
          0LL);
  if ( v13 )
    ObfDereferenceObjectWithTag(v14, 0x72437350u);
  return (unsigned int)v18;
}
