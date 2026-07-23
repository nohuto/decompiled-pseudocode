/*
 * XREFs of sub_1403B4A10 @ 0x1403B4A10
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

__int64 __fastcall sub_1403B4A10(__int64 a1, __int64 a2, __int64 a3, volatile signed __int32 *a4)
{
  volatile signed __int32 *v4; // rbx
  LARGE_INTEGER v6; // rax
  signed __int32 v8[8]; // [rsp+0h] [rbp-48h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-18h] BYREF
  int v10; // [rsp+68h] [rbp+20h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v4 = a4;
  v10 = 0;
  _InterlockedDecrement(a4);
  while ( *v4 )
  {
    if ( !dword_140D06A9C && (dword_140D0689C & 0x20) == 0 )
    {
      v6 = KeQueryPerformanceCounter(&PerformanceFrequency);
      _InterlockedOr(v8, 0);
      a4 = (volatile signed __int32 *)MEMORY[0xFFFFF78000000350];
      if ( v6.QuadPart > (unsigned __int64)(MEMORY[0xFFFFF78000000350] + 300 * PerformanceFrequency.QuadPart) )
      {
        _InterlockedOr(v8, 0);
        if ( *v4 )
          KeBugCheckEx(0x1DBu, PerformanceFrequency.QuadPart, v6.QuadPart, (ULONG_PTR)a4, 0LL);
      }
    }
    sub_1402F32E0(&v10, a2, a3, (__int64)a4);
  }
  return sub_14042A5E0(a3, a2);
}
