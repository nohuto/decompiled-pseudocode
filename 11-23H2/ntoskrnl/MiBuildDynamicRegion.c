/*
 * XREFs of MiBuildDynamicRegion @ 0x1403763AC
 * Callers:
 *     MiBuildPagedPool @ 0x140B43794 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B4420C (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 *     MiInitializeKernelStacks @ 0x140B463B4 (MiInitializeKernelStacks.c)
 *     MiInitializeNonPagedPool @ 0x140B5E52C (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140B6E7AC (MiInitializeDynamicRegion.c)
 * Callees:
 *     MiReservePtes @ 0x14027D420 (MiReservePtes.c)
 *     ExGenRandom @ 0x140317860 (ExGenRandom.c)
 *     MiInitializeDynamicBitmap @ 0x14081CA74 (MiInitializeDynamicBitmap.c)
 */

ULONG_PTR __fastcall MiBuildDynamicRegion(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  ULONG_PTR result; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rax
  unsigned __int64 v11; // rdx

  if ( a1 == &qword_140C66EC0 )
    qword_140C66D08 = a3;
  a1[8] = 0LL;
  a1[4] = a2;
  v4 = a3 >> 21;
  v5 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v5;
  if ( a1 == &qword_140C66DA0 )
    a1[3] = v5 & 0xFFF;
  a1[2] = v4;
  if ( a1 == &qword_140C66DA0 && (v11 = a1[1]) != 0 )
  {
    v9 = 0LL;
    v8 = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  }
  else
  {
    v6 = 8 * ((v4 >> 6) + ((v4 & 0x3F) != 0));
    result = MiReservePtes((__int64)&qword_140C69940, (unsigned int)(v6 >> 12) + ((v6 & 0xFFF) != 0));
    v8 = result;
    if ( !result )
      return result;
    v9 = 1LL;
  }
  MiInitializeDynamicBitmap(a1, v8 << 25 >> 16, v4, v9);
  *a1 = 0LL;
  v10 = ExGenRandom(1) & 0x7FFF;
  a1[3] = v10;
  if ( a1 == &qword_140C66DA0 )
    a1[3] = v10 & 0xFFF;
  return 1LL;
}
