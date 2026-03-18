/*
 * XREFs of ?VidMmiBuildMdlForContiguousMmIo@@YAPEAU_MDL@@PEAX_KT_LARGE_INTEGER@@@Z @ 0x1C00E1D48
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0084720 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z @ 0x1C00A169C (-CommitLocalBackingStore@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_LOCAL_ALLOC@@PEAEPEAX@Z.c)
 *     ?LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z @ 0x1C00D7DE0 (-LockAllocInCpuVisibleSegment@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@@Z.c)
 *     ?SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z @ 0x1C00D9C30 (-SetupAllocationForCPUAccess@VIDMM_GLOBAL@@IEAAJPEAUVIDMM_ALLOC@@IEE@Z.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VidMmiBuildMdlForContiguousMmIo(unsigned __int64 Base, SIZE_T Length, union _LARGE_INTEGER a3)
{
  __int16 v3; // bp
  ULONG v5; // r14d
  SIZE_T v7; // rdi
  PMDL result; // rax
  SIZE_T v9; // rdx
  LONGLONG v10; // rbx

  v3 = Base;
  v5 = Length;
  v7 = ((Base & 0xFFF) + Length + 4095) >> 12;
  result = MmCreateMdl(0LL, (PVOID)Base, Length);
  v9 = 0LL;
  if ( result )
  {
    result->Next = 0LL;
    result->Size = 8 * (v7 + 6);
    result->StartVa = (PVOID)(Base & 0xFFFFFFFFFFFFF000uLL);
    result->MdlFlags = 1;
    result->ByteOffset = v3 & 0xFFF;
    result->ByteCount = v5;
    if ( v7 )
    {
      v10 = a3.QuadPart >> 12;
      do
      {
        *((_QWORD *)&result[1].Next + v9) = v10 + v9;
        ++v9;
      }
      while ( v9 < v7 );
    }
  }
  return result;
}
