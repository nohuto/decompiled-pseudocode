/*
 * XREFs of sub_1C0021EB0 @ 0x1C0021EB0
 * Callers:
 *     sub_1C0017AF4 @ 0x1C0017AF4 (sub_1C0017AF4.c)
 * Callees:
 *     sub_1C00504C4 @ 0x1C00504C4 (sub_1C00504C4.c)
 */

__int64 __fastcall sub_1C0021EB0(__int64 a1, __int64 a2)
{
  char v2; // di
  unsigned int v5; // r14d
  LARGE_INTEGER v6; // rax
  LARGE_INTEGER v7; // rbx
  unsigned int v8; // r8d
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v12; // rdx
  DWORD LowPart; // ecx
  unsigned __int64 v14; // r8
  LONGLONG v15; // r9
  union _LARGE_INTEGER v17; // [rsp+58h] [rbp+10h] BYREF

  v2 = 0;
  v17.QuadPart = 1LL;
  v5 = 0;
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( byte_1C0093BA0 )
    v6 = KeQueryPerformanceCounter(&v17);
  else
    v6.QuadPart = KeQueryUnbiasedInterruptTime();
  v7 = v6;
  *(_BYTE *)(a1 + 3) = *(_BYTE *)(a2 + 3);
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 24);
  if ( (*(_DWORD *)(a2 + 24) & 0x40) != 0 )
    *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 60);
  if ( *(_BYTE *)(a2 + 3) == 48 )
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a2 + 44);
  if ( !*(_DWORD *)(a2 + 20) )
  {
    v8 = 0;
    if ( *(_DWORD *)(a2 + 56) )
    {
      while ( 1 )
      {
        v9 = *(unsigned int *)(a2 + 4LL * v8 + 120);
        if ( (unsigned int)v9 >= 0x80 )
        {
          v10 = *(unsigned int *)(a2 + 16);
          if ( (unsigned int)v9 <= (unsigned int)v10 && *(_DWORD *)(v9 + a2) == 64 && v9 + 40 <= v10 )
            break;
        }
        if ( ++v8 >= *(_DWORD *)(a2 + 56) )
          goto LABEL_31;
      }
      *(_BYTE *)(a1 + 4) = *(_BYTE *)((unsigned int)v9 + a2 + 8);
      *(_QWORD *)(a1 + 32) = *(_QWORD *)((unsigned int)v9 + a2 + 16);
      *(_BYTE *)(a1 + 11) = *(_BYTE *)((unsigned int)v9 + a2 + 9);
    }
    else
    {
LABEL_31:
      *(_BYTE *)(a1 + 3) = 48;
      v5 = -1073741811;
      *(_DWORD *)(a1 + 64) = -1073741811;
    }
  }
  if ( byte_1C0093BA0 )
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
  else
    PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
  if ( PerformanceCounter.QuadPart > 0 && PerformanceCounter.QuadPart < v7.QuadPart )
    v14 = PerformanceCounter.QuadPart - v7.QuadPart - 1;
  else
    v14 = PerformanceCounter.QuadPart - v7.QuadPart;
  if ( byte_1C0093BA0 )
  {
    LowPart = v17.LowPart;
    if ( v17.QuadPart && v14 )
    {
      v15 = v14 / v17.QuadPart;
      v14 = 1000 * (v14 % v17.QuadPart);
      v12.QuadPart = 10000 * (v14 % v17.QuadPart) % v17.QuadPart;
      v2 = 10000 * (v14 % v17.QuadPart) / v17.QuadPart + 16 * (-24 * v15 + v14 / v17.QuadPart);
    }
  }
  else
  {
    v2 = v14;
  }
  if ( (byte_1C0093A00 & 0x40) != 0 )
    sub_1C00504C4(LowPart, v12.LowPart, v14, (unsigned int)L"Translate STORAGE_REQUEST_BLOCK result", v2);
  return v5;
}
