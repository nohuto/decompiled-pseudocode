/*
 * XREFs of sub_1C00A4654 @ 0x1C00A4654
 * Callers:
 *     sub_1C002212C @ 0x1C002212C (sub_1C002212C.c)
 * Callees:
 *     sub_1C0007CF4 @ 0x1C0007CF4 (sub_1C0007CF4.c)
 *     sub_1C0022AA4 @ 0x1C0022AA4 (sub_1C0022AA4.c)
 *     sub_1C006AEE4 @ 0x1C006AEE4 (sub_1C006AEE4.c)
 *     sub_1C00ABDB0 @ 0x1C00ABDB0 (sub_1C00ABDB0.c)
 */

__int64 __fastcall sub_1C00A4654(__int64 a1)
{
  unsigned int v1; // edi
  __int64 v3; // rax
  __int64 v4; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v6; // r9
  bool v7; // zf
  int v9; // ecx
  __int64 v10; // [rsp+78h] [rbp-50h]

  v1 = 0;
  *(_QWORD *)(a1 + 2296) = 0LL;
  *(_QWORD *)(a1 + 2320) = 0LL;
  *(_QWORD *)(a1 + 2304) = 0LL;
  *(_QWORD *)(a1 + 2328) = 0LL;
  *(_QWORD *)(a1 + 2336) = 0LL;
  *(_QWORD *)(a1 + 2368) = 0LL;
  *(_QWORD *)(a1 + 2376) = 0LL;
  *(_QWORD *)(a1 + 3248) = 0LL;
  *(_QWORD *)(a1 + 3256) = 0LL;
  *(_QWORD *)(a1 + 2216) = 0LL;
  *(_QWORD *)(a1 + 2224) = 0LL;
  *(_QWORD *)(a1 + 2232) = 0LL;
  *(_QWORD *)(a1 + 2240) = 0LL;
  *(_QWORD *)(a1 + 2248) = 0LL;
  *(_QWORD *)(a1 + 2256) = 0LL;
  *(_QWORD *)(a1 + 2264) = 0LL;
  *(_QWORD *)(a1 + 2272) = 0LL;
  *(_QWORD *)(a1 + 2280) = 0LL;
  *(_DWORD *)(a1 + 2288) = 0;
  if ( (_DWORD)Size && dword_1C0093BF0 )
  {
    v3 = sub_1C0007CF4(72LL, (unsigned int)Size, 1700028754LL, *(_QWORD *)(a1 + 8));
    *(_QWORD *)(a1 + 2296) = v3;
    if ( v3
      && (v4 = sub_1C0007CF4(72LL, (unsigned int)dword_1C0093578, 1700028754LL, *(_QWORD *)(a1 + 8)),
          (*(_QWORD *)(a1 + 2320) = v4) != 0LL) )
    {
      if ( byte_1C0093BA0 )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v6 = *(_QWORD *)(a1 + 8);
      *(LARGE_INTEGER *)(a1 + 2312) = PerformanceCounter;
      *(_QWORD *)(a1 + 2336) = sub_1C0007CF4(72LL, (unsigned int)dword_1C0093594, 1700028754LL, v6);
      v7 = dword_1C0093B14 == 0;
      *(_OWORD *)(a1 + 2344) = 0LL;
      *(_QWORD *)(a1 + 2360) = 0LL;
      if ( !v7 )
      {
        v9 = sub_1C00ABDB0(a1);
        if ( v9 )
        {
          if ( (byte_1C0093A06 & 4) != 0 )
            sub_1C006AEE4(
              a1 + 186,
              a1 + 169,
              a1 + 160,
              *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL),
              *(_BYTE *)(a1 + 96),
              *(_BYTE *)(a1 + 97),
              *(_BYTE *)(a1 + 98),
              a1 + 2024,
              *(_QWORD *)(a1 + 24) + 5000LL,
              *(const wchar_t **)(*(_QWORD *)(a1 + 24) + 4656LL),
              (const char *)(a1 + 160),
              (const char *)(a1 + 169),
              (const char *)(a1 + 186),
              *(_BYTE *)(a1 + 450) & 1,
              L"Initializing IO size distribution telemetry failed.",
              v10,
              v9);
        }
        else
        {
          return 0;
        }
      }
    }
    else
    {
      v1 = -1073741801;
      sub_1C0022AA4((_QWORD *)a1);
    }
  }
  return v1;
}
