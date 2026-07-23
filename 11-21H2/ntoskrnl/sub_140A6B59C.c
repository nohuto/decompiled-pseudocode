/*
 * XREFs of sub_140A6B59C @ 0x140A6B59C
 * Callers:
 *     sub_140A4B9E0 @ 0x140A4B9E0 (sub_140A4B9E0.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     DbgPrint @ 0x140369BD0 (DbgPrint.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_1404294D0 @ 0x1404294D0 (sub_1404294D0.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A4DC74 @ 0x140A4DC74 (sub_140A4DC74.c)
 */

__int64 __fastcall sub_140A6B59C(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rsi
  __int64 v6; // rdx
  unsigned __int64 v8; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  _OWORD *v14; // rax
  __int64 *v15; // rcx
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 result; // rax

  BugCheckParameter4 = a3;
  v6 = *(unsigned int *)(a2 + 80);
  if ( (_DWORD)v6 != a3 )
  {
    DbgPrint("MemImage->WakeCheck %lx doesn't make PoWakeCheck %lx\n", v6, a3);
    KeBugCheckEx(0xA0u, 0x109uLL, 0xAuLL, *(unsigned int *)(a2 + 80), BugCheckParameter4);
  }
  v8 = __rdtsc();
  qword_140C22D30 = (((unsigned __int64)HIDWORD(v8) << 32) | (unsigned int)v8) - a4;
  dword_140C22EF4 = ((unsigned int)dword_140C22BE0 >> 4) - 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v10 = 0;
  for ( qword_140C22D60 = PerformanceCounter.QuadPart;
        v10 < *(_DWORD *)(a1 + 256);
        qword_140C22D40 += *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 80) )
  {
    v11 = v10++;
    v11 <<= 7;
    qword_140C22EC0 += *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 56);
    qword_140C22D38 += *(_QWORD *)(v11 + *(_QWORD *)(a1 + 264) + 40);
  }
  qword_140C22ED0 = qword_140C22EE8;
  qword_140C22EE0 = (unsigned int)dword_140C22EF0;
  qword_140C22EE8 += qword_140C22EC8;
  v12 = qword_140C22EB8;
  dword_140C22EF0 += qword_140C22ED8;
  *(_QWORD *)(a2 + 88) = qword_140C22EB8;
  if ( byte_140C22C01 )
    *(_QWORD *)(a2 + 88) = qword_140C22EC0 + v12;
  v13 = 4LL;
  v14 = (_OWORD *)(a2 + 136);
  v15 = &qword_140C22D18;
  do
  {
    *v14 = *(_OWORD *)v15;
    v14[1] = *((_OWORD *)v15 + 1);
    v14[2] = *((_OWORD *)v15 + 2);
    v14[3] = *((_OWORD *)v15 + 3);
    v14[4] = *((_OWORD *)v15 + 4);
    v14[5] = *((_OWORD *)v15 + 5);
    v14[6] = *((_OWORD *)v15 + 6);
    v14 += 8;
    v16 = *((_OWORD *)v15 + 7);
    v15 += 16;
    *(v14 - 1) = v16;
    --v13;
  }
  while ( v13 );
  *v14 = *(_OWORD *)v15;
  v14[1] = *((_OWORD *)v15 + 1);
  v14[2] = *((_OWORD *)v15 + 2);
  v14[3] = *((_OWORD *)v15 + 3);
  v14[4] = *((_OWORD *)v15 + 4);
  v17 = *((_OWORD *)v15 + 5);
  *(_DWORD *)a2 = 1380075848;
  v14[5] = v17;
  *(_DWORD *)(a2 + 8) = sub_1404294D0(0, (const char *)a2, 0x448u);
  sub_140A4DC74(a1, a2, 1uLL, 0LL);
  result = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 72LL);
  if ( result )
    return sub_14042A5E0(v19, v18);
  return result;
}
