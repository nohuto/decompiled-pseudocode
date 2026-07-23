/*
 * XREFs of sub_1403DCA14 @ 0x1403DCA14
 * Callers:
 *     sub_1403DC9D4 @ 0x1403DC9D4 (sub_1403DC9D4.c)
 *     sub_140B026CC @ 0x140B026CC (sub_140B026CC.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     MmAllocatePagesForMdlEx @ 0x1402630A0 (MmAllocatePagesForMdlEx.c)
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 sub_1403DCA14()
{
  unsigned __int8 v10; // di
  unsigned __int8 v11; // r14^1
  int v12; // r15d
  unsigned int v13; // ebx
  int v15; // ebp
  PMDL PagesForMdl; // rax
  struct _MDL *v17; // rsi
  PVOID MappedSystemVa; // r8
  int v19; // ecx
  unsigned int i; // edi
  unsigned __int64 v21; // [rsp+40h] [rbp-48h]

  _RAX = 0LL;
  __asm { cpuid }
  if ( (unsigned int)_RAX < 6 )
    return (unsigned int)-1073741637;
  _RAX = 6LL;
  __asm { cpuid }
  v10 = _RDX;
  v11 = BYTE1(_RCX);
  v12 = _RAX;
  if ( (_RAX & 0x80000) == 0 )
    return (unsigned int)-1073741637;
  v15 = _RDX & 1;
  if ( (_RDX & 1) != 0 && (_RDX & 2) != 0 )
  {
    v13 = 0;
    PagesForMdl = MmAllocatePagesForMdlEx(
                    0LL,
                    (PHYSICAL_ADDRESS)-1LL,
                    0LL,
                    ((((unsigned int)_RDX >> 8) & 0xF) + 1) << 12,
                    MmCached,
                    0x24u);
    v17 = PagesForMdl;
    if ( PagesForMdl )
    {
      if ( (PagesForMdl->MdlFlags & 5) != 0 )
        MappedSystemVa = PagesForMdl->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000000u);
      if ( MappedSystemVa )
      {
        __writemsr(0x17D0u, ((__int64)v17[1].Next << 12) | 1);
        qword_140D073B8 = (__int64)sub_1405D90D0;
        stru_140D072C0.WorkerRoutine = (PWORKER_THREAD_ROUTINE)sub_1405D90F0;
        v19 = 0;
        LODWORD(dword_140D073A0) = 787;
        qword_140D073C0 = 0LL;
        qword_140D073D8 = 0LL;
        qword_140D073B0 = 0LL;
        stru_140D072C0.Parameter = 0LL;
        stru_140D072C0.List.Flink = 0LL;
        for ( i = v10 >> 2; i; i >>= 1 )
          v19 += i & 1;
        if ( !dword_140D06B44 && (v12 & 0x800000) != 0 )
        {
          dword_140C0C64C = v11;
          if ( v11 > 0x20u )
          {
            dword_140C0C64C = 1;
            dword_140D06B44 = 1;
          }
        }
        dword_140D048D8 = v19 + v15 + 1;
        qword_140D07210 = (__int64)MappedSystemVa;
        v21 = 1LL;
        qword_140D06FD8 = (__int64)MappedSystemVa;
        qword_140D06FD0 = (__int64)v17;
        byte_140D068E2 = 1;
        sub_1402D6B0C((__int64)&unk_140D01180, 0x1C4276Cu, 0, 0, (__int64)&qword_14003C1C8, 1);
        if ( !dword_140D06B44 && (v12 & 0x800000) != 0 )
        {
          LODWORD(v21) = 3;
          byte_140D068E3 = 1;
        }
        __writemsr(0x17D1u, v21);
        if ( byte_140D068E3 )
          byte_140D068F8 = 1;
      }
      else
      {
        v13 = -1073741670;
        MmFreePagesFromMdl(v17);
        ExFreePoolWithTag(v17, 0);
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v13;
}
