/*
 * XREFs of sub_140513310 @ 0x140513310
 * Callers:
 *     sub_140221330 @ 0x140221330 (sub_140221330.c)
 *     sub_140390C08 @ 0x140390C08 (sub_140390C08.c)
 *     sub_140393E40 @ 0x140393E40 (sub_140393E40.c)
 *     sub_140458C22 @ 0x140458C22 (sub_140458C22.c)
 *     sub_140458D38 @ 0x140458D38 (sub_140458D38.c)
 *     sub_140458E94 @ 0x140458E94 (sub_140458E94.c)
 *     sub_140458FD4 @ 0x140458FD4 (sub_140458FD4.c)
 *     sub_140504048 @ 0x140504048 (sub_140504048.c)
 *     sub_140504198 @ 0x140504198 (sub_140504198.c)
 *     sub_140504520 @ 0x140504520 (sub_140504520.c)
 *     sub_140504644 @ 0x140504644 (sub_140504644.c)
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 * Callees:
 *     IoBuildPartialMdl @ 0x14021A4E0 (IoBuildPartialMdl.c)
 *     KeFlushIoBuffers @ 0x140232370 (KeFlushIoBuffers.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_140513544 @ 0x140513544 (sub_140513544.c)
 */

void __fastcall sub_140513310(int a1, __int64 a2, unsigned __int64 a3, unsigned int a4, char a5, char a6)
{
  __int64 v6; // r12
  unsigned __int8 CurrentIrql; // bp
  PVOID v10; // rax
  unsigned __int64 v11; // r10
  unsigned __int8 v12; // di
  __int64 v13; // r9
  struct _MDL *v14; // r15
  __int64 v15; // r9
  unsigned __int8 v16; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf

  v6 = a4;
  CurrentIrql = KeGetCurrentIrql();
  if ( (*(_BYTE *)(a2 + 10) & 5) != 0 )
    v10 = *(PVOID *)(a2 + 24);
  else
    v10 = MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u);
  v11 = ((a3 & 0xFFF) + v6 + 4095) >> 12;
  if ( v10 && (unsigned int)v11 <= 0x200 )
  {
    v12 = CurrentIrql;
    if ( CurrentIrql < 2u )
    {
      v12 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && v12 <= 0xFu )
        {
          v13 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v13 + 20) |= (-1 << (v12 + 1)) & 4;
        }
      }
    }
    v14 = *(struct _MDL **)(qword_140C5A860 + 8LL * HIDWORD(KeGetPcr()[1].LockArray));
    v14->Next = 0LL;
    v14->MdlFlags = 0;
    v14->Size = 8 * (v11 + 6);
    v14->StartVa = (PVOID)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v14->ByteOffset = a3 & 0xFFF;
    v14->ByteCount = v6;
    IoBuildPartialMdl((PMDL)a2, v14, (PVOID)a3, v6);
    if ( !a6 )
      KeFlushIoBuffers((ULONG_PTR)v14, a5 == 0, 1, v15);
    if ( CurrentIrql < 2u )
    {
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v16 = KeGetCurrentIrql();
          if ( v16 <= 0xFu && v12 <= 0xFu && v16 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v18 = *((_QWORD *)CurrentPrcb + 4375);
            v19 = ~(unsigned __int16)(-1LL << (v12 + 1));
            v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
            *(_DWORD *)(v18 + 20) &= v19;
            if ( v20 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v12);
    }
  }
  else
  {
    if ( CurrentIrql > 2u )
      KeBugCheckEx(0xACu, 0x1000uLL, 0xEF05uLL, 0LL, 0LL);
    sub_140513544(a1, a2, a3, v6, a5, a6);
  }
}
