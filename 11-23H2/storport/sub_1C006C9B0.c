/*
 * XREFs of sub_1C006C9B0 @ 0x1C006C9B0
 * Callers:
 *     sub_1C00ABE7C @ 0x1C00ABE7C (sub_1C00ABE7C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     memset_0 @ 0x1C0024D40 (memset_0.c)
 *     sub_1C00739F0 @ 0x1C00739F0 (sub_1C00739F0.c)
 */

__int64 sub_1C006C9B0()
{
  __int64 v0; // rdi
  ULONG v1; // ebx
  ULONG v2; // ebx
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdx
  ULONG v13; // ebx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  memset_0(&qword_1C00934E0, 0, 0xB8uLL);
  qword_1C00934E0 = 917506LL;
  unk_1C0093508 = 28LL;
  *(_OWORD *)&xmmword_1C0093530 = 0LL;
  *(&xmmword_1C0093530 + 1) = (PVOID)0x1C0000000ALL;
  xmmword_1C0093540 = 0LL;
  qword_1C0093570 = 0xFC00000026LL;
  v0 = 2LL;
  *(_QWORD *)&xmmword_1C0093540 = 0xE00090002LL;
  xmmword_1C0093510 = 0LL;
  *(_QWORD *)&xmmword_1C0093510 = 327682LL;
  *(_OWORD *)&xmmword_1C0093560 = 0LL;
  *(_OWORD *)&xmmword_1C00934E8 = 0LL;
  *(&xmmword_1C0093560 + 1) = (PVOID)252;
  *(_OWORD *)&xmmword_1C00934F8 = 0LL;
  *(_OWORD *)&xmmword_1C0093520 = 0LL;
  *(_OWORD *)&xmmword_1C0093550 = 0LL;
  v1 = KeGetRecommendedSharedDataAlignment() + 911;
  LODWORD(dword_1C0093578) = v1 & ~(KeGetRecommendedSharedDataAlignment() - 1);
  v2 = KeGetRecommendedSharedDataAlignment() + 16 * HIDWORD(qword_1C0093570) - 1;
  LODWORD(dword_1C009357C) = v2 & ~(KeGetRecommendedSharedDataAlignment() - 1);
  dword_1C0093BF0 = KeQueryActiveProcessorCountEx(0xFFFFu);
  LODWORD(Size) = dword_1C0093578 * dword_1C0093BF0;
  LODWORD(dword_1C0093584) = dword_1C009357C * dword_1C0093BF0;
  if ( byte_1C0093BA0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  qword_1C0093588 = PerformanceCounter.QuadPart;
  if ( (_WORD)qword_1C00934E0 )
  {
    xmmword_1C00934E8 = (PVOID)sub_1C0007CF4(72LL, 8LL * (unsigned __int16)qword_1C00934E0, 1700028754LL, 0LL);
    if ( !xmmword_1C00934E8 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C00934E8 = 0LL;
  }
  if ( WORD1(qword_1C00934E0) )
  {
    *(&xmmword_1C00934E8 + 1) = (PVOID)sub_1C0007CF4(72LL, 8LL * WORD1(qword_1C00934E0), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C00934E8 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C00934E8 + 1) = 0LL;
  }
  if ( WORD2(qword_1C00934E0) )
  {
    xmmword_1C00934F8 = (PVOID)sub_1C0007CF4(72LL, 8LL * WORD2(qword_1C00934E0), 1700028754LL, 0LL);
    if ( !xmmword_1C00934F8 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C00934F8 = 0LL;
  }
  if ( HIWORD(qword_1C00934E0) )
  {
    *(&xmmword_1C00934F8 + 1) = (PVOID)sub_1C0007CF4(72LL, 8LL * HIWORD(qword_1C00934E0), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C00934F8 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C00934F8 + 1) = 0LL;
  }
  if ( (_WORD)xmmword_1C0093510 )
  {
    *((_QWORD *)&xmmword_1C0093510 + 1) = sub_1C0007CF4(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_1C0093510,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_1C0093510 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_1C0093510 + 1) = 0LL;
  }
  if ( WORD1(xmmword_1C0093510) )
  {
    xmmword_1C0093520 = (PVOID)sub_1C0007CF4(72LL, 8LL * WORD1(xmmword_1C0093510), 1700028754LL, 0LL);
    if ( !xmmword_1C0093520 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C0093520 = 0LL;
  }
  if ( WORD2(xmmword_1C0093510) )
  {
    *(&xmmword_1C0093520 + 1) = (PVOID)sub_1C0007CF4(72LL, 8LL * WORD2(xmmword_1C0093510), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C0093520 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C0093520 + 1) = 0LL;
  }
  if ( WORD3(xmmword_1C0093510) )
  {
    xmmword_1C0093530 = (PVOID)sub_1C0007CF4(72LL, 8LL * WORD3(xmmword_1C0093510), 1700028754LL, 0LL);
    if ( !xmmword_1C0093530 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C0093530 = 0LL;
  }
  if ( (_WORD)xmmword_1C0093540 )
  {
    *((_QWORD *)&xmmword_1C0093540 + 1) = sub_1C0007CF4(
                                            72LL,
                                            8LL * (unsigned __int16)xmmword_1C0093540,
                                            1700028754LL,
                                            0LL);
    if ( !*((_QWORD *)&xmmword_1C0093540 + 1) )
      goto LABEL_50;
  }
  else
  {
    *((_QWORD *)&xmmword_1C0093540 + 1) = 0LL;
  }
  if ( WORD1(xmmword_1C0093540) )
  {
    xmmword_1C0093550 = (PVOID)sub_1C0007CF4(72LL, 8LL * WORD1(xmmword_1C0093540), 1700028754LL, 0LL);
    if ( !xmmword_1C0093550 )
      goto LABEL_50;
  }
  else
  {
    xmmword_1C0093550 = 0LL;
  }
  if ( WORD2(xmmword_1C0093540) )
  {
    *(&xmmword_1C0093550 + 1) = (PVOID)sub_1C0007CF4(72LL, 8LL * WORD2(xmmword_1C0093540), 1700028754LL, 0LL);
    if ( !*(&xmmword_1C0093550 + 1) )
      goto LABEL_50;
  }
  else
  {
    *(&xmmword_1C0093550 + 1) = 0LL;
  }
  if ( WORD3(xmmword_1C0093540) )
  {
    xmmword_1C0093560 = (PVOID)sub_1C0007CF4(72LL, 8LL * WORD3(xmmword_1C0093540), 1700028754LL, 0LL);
    if ( !xmmword_1C0093560 )
    {
LABEL_50:
      v4 = -1073741801;
      sub_1C00739F0();
      dword_1C0093400 = 0;
      return v4;
    }
  }
  else
  {
    xmmword_1C0093560 = 0LL;
  }
  v5 = 0LL;
  v6 = 0LL;
  v7 = 2LL;
  do
  {
    *(_QWORD *)((char *)xmmword_1C00934E8 + v5) = v6++;
    v5 += 8LL;
    --v7;
  }
  while ( v7 );
  v8 = 0LL;
  v9 = 0LL;
  v10 = 2LL;
  do
  {
    *(_QWORD *)(*((_QWORD *)&xmmword_1C0093510 + 1) + v8) = v9++;
    v8 += 8LL;
    --v10;
  }
  while ( v10 );
  v11 = 0LL;
  v12 = 0LL;
  do
  {
    *(_QWORD *)(*((_QWORD *)&xmmword_1C0093540 + 1) + v11) = v12++;
    v11 += 8LL;
    --v0;
  }
  while ( v0 );
  if ( byte_1C0093BA0 && dword_1C0093404 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    *(_QWORD *)*(&xmmword_1C00934E8 + 1) = (PerformanceFrequency.QuadPart << 7) / 1000000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 3) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_1C0093520 = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)xmmword_1C0093520 + 1) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)xmmword_1C0093520 + 2) = (PerformanceFrequency.QuadPart << 10) / 1000;
    *((_QWORD *)xmmword_1C0093520 + 3) = 5120 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)xmmword_1C0093520 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_1C0093550 + 1) = (PerformanceFrequency.QuadPart << 7) / 1000000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 1) = (PerformanceFrequency.QuadPart << 8) / 1000000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 2) = (PerformanceFrequency.QuadPart << 9) / 1000000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 3) = PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 4) = 4 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 5) = 16 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 6) = (PerformanceFrequency.QuadPart << 6) / 1000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 7) = (PerformanceFrequency.QuadPart << 7) / 1000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 8) = (PerformanceFrequency.QuadPart << 8) / 1000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 9) = (PerformanceFrequency.QuadPart << 9) / 1000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 10) = 1000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 11) = 2000 * PerformanceFrequency.QuadPart / 1000;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 12) = 10000 * PerformanceFrequency.QuadPart / 1000;
  }
  else
  {
    *(_QWORD *)*(&xmmword_1C00934E8 + 1) = 1280LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 1) = 2560LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 2) = 5120LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 3) = 10000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 4) = 40000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 5) = 160000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 6) = 640000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 7) = 1280000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 8) = 2560000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 9) = 5120000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 10) = 10000000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 11) = 20000000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 12) = 100000000LL;
    *((_QWORD *)*(&xmmword_1C00934E8 + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)xmmword_1C0093520 = 640000LL;
    *((_QWORD *)xmmword_1C0093520 + 1) = 2560000LL;
    *((_QWORD *)xmmword_1C0093520 + 2) = 10240000LL;
    *((_QWORD *)xmmword_1C0093520 + 3) = 51200000LL;
    *((_QWORD *)xmmword_1C0093520 + 4) = 0x7FFFFFFFFFFFFFFFLL;
    *(_QWORD *)*(&xmmword_1C0093550 + 1) = 1280LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 1) = 2560LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 2) = 5120LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 3) = 10000LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 4) = 40000LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 5) = 160000LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 6) = 640000LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 7) = 1280000LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 8) = 2560000LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 9) = 5120000LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 10) = 10000000LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 11) = 20000000LL;
    *((_QWORD *)*(&xmmword_1C0093550 + 1) + 12) = 100000000LL;
  }
  *((_QWORD *)*(&xmmword_1C0093550 + 1) + 13) = 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)xmmword_1C0093550 = 4096LL;
  *((_QWORD *)xmmword_1C0093550 + 1) = 0x2000LL;
  *((_QWORD *)xmmword_1C0093550 + 2) = 0x4000LL;
  *((_QWORD *)xmmword_1C0093550 + 3) = 0x8000LL;
  *((_QWORD *)xmmword_1C0093550 + 4) = 0x10000LL;
  *((_QWORD *)xmmword_1C0093550 + 5) = 0x20000LL;
  *((_QWORD *)xmmword_1C0093550 + 6) = 0x40000LL;
  *((_QWORD *)xmmword_1C0093550 + 7) = 0x100000LL;
  *((_QWORD *)xmmword_1C0093550 + 8) = 0x7FFFFFFFFFFFFFFFLL;
  v13 = ~(KeGetRecommendedSharedDataAlignment() - 1);
  dword_1C0093590 = v13 & (KeGetRecommendedSharedDataAlignment() + 23);
  v4 = 0;
  word_1C0093BEC = KeQueryHighestNodeNumber();
  LODWORD(dword_1C0093594) = dword_1C0093590 * ((unsigned __int16)word_1C0093BEC + 1);
  return v4;
}
