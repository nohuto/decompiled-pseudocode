/*
 * XREFs of sub_1406DC5A4 @ 0x1406DC5A4
 * Callers:
 *     NtAllocateUuids @ 0x1406DC3C0 (NtAllocateUuids.c)
 *     sub_14080EE74 @ 0x14080EE74 (sub_14080EE74.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_14085F064 @ 0x14085F064 (sub_14085F064.c)
 */

__int64 __fastcall sub_1406DC5A4(__int64 a1, unsigned int *a2, _DWORD *a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // edx
  __int64 v9; // rax
  __int64 v10; // rcx
  int v12; // ecx
  LARGE_INTEGER v13; // rax
  char v14; // r8
  int v15; // edx
  int v16; // ecx
  int v17; // edx
  int v18; // eax
  LARGE_INTEGER PerformanceFrequency; // [rsp+20h] [rbp-18h] BYREF
  int v20; // [rsp+58h] [rbp+20h] BYREF

  v20 = 0;
  if ( !byte_140D3B036 )
  {
    v20 = sub_14085F064();
    if ( v20 < 0 )
    {
      v13 = KeQueryPerformanceCounter(&PerformanceFrequency);
      v12 = (unsigned int)&v20 ^ v13.LowPart ^ (unsigned int)a3 ^ dword_140D3B05C ^ v13.HighPart;
    }
    else
    {
      v12 = dword_140D3B05C + 1;
    }
    dword_140D3B05C = v12;
    byte_140D3B036 = 1;
    byte_140D3B01C = 1;
  }
  v6 = MEMORY[0xFFFFF78000000014];
  v7 = MEMORY[0xFFFFF78000000014] - qword_140D3B1E8;
  if ( MEMORY[0xFFFFF78000000014] - qword_140D3B1E8 < 0 )
  {
    ++dword_140D3B05C;
    qword_140D3B1E8 = MEMORY[0xFFFFF78000000014] - 20000LL;
    v7 = 20000LL;
    byte_140D3B01C = 1;
  }
  if ( v7 )
  {
    if ( dword_140D3B07C )
      dword_140D3B07C = 0;
    if ( v7 > 10000000 )
      v7 = 10000000LL;
    v8 = 10000;
    if ( v7 <= 10000 )
    {
      *a2 = v7;
      v9 = 0LL;
      v8 = *a2;
    }
    else
    {
      *a2 = 10000;
      v9 = v7 - 10000;
    }
    v10 = v6 - v8 - v9;
    *(_QWORD *)a1 = v10;
    qword_140D3B1E8 = v10 + *a2;
LABEL_12:
    *a3 = dword_140D3B05C;
    return 0LL;
  }
  if ( (unsigned int)dword_140D3B07C < 0x1F )
  {
    v14 = ++dword_140D3B07C;
    *a2 = 10000;
    *(_QWORD *)a1 = v6 - 10000;
    v15 = ((v14 & 1) << 27) | 0x4000000;
    if ( (v14 & 2) == 0 )
      v15 = (v14 & 1) << 27;
    v16 = v15 | 0x2000000;
    if ( (v14 & 4) == 0 )
      v16 = v15;
    v17 = v16 | 0x1000000;
    if ( (v14 & 8) == 0 )
      v17 = v16;
    v18 = v17 | 0x800000;
    if ( (v14 & 0x10) == 0 )
      v18 = v17;
    *(_DWORD *)(a1 + 4) |= v18;
    goto LABEL_12;
  }
  return 3221226029LL;
}
