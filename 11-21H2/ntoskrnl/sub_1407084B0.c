/*
 * XREFs of sub_1407084B0 @ 0x1407084B0
 * Callers:
 *     sub_140707E70 @ 0x140707E70 (sub_140707E70.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     sub_1402828F0 @ 0x1402828F0 (sub_1402828F0.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     sub_1402E57FC @ 0x1402E57FC (sub_1402E57FC.c)
 *     MmMapLockedPagesSpecifyCache @ 0x140308CD0 (MmMapLockedPagesSpecifyCache.c)
 *     sub_140705E1C @ 0x140705E1C (sub_140705E1C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

struct _MDL *__fastcall sub_1407084B0(__int64 a1, unsigned int a2, SIZE_T a3, int a4)
{
  ULONG v4; // edi
  SIZE_T v5; // rbp
  PMDL Mdl; // rax
  struct _MDL *v9; // rdi
  SIZE_T v10; // rsi
  _QWORD *p_Next; // r14
  unsigned __int64 v12; // rax
  PVOID MappedSystemVa; // rax
  PVOID v15; // rax
  void *v16; // rbx
  struct _MDL *v17; // rax

  v4 = a3;
  v5 = a3 >> 12;
  if ( a4 )
  {
    Mdl = IoAllocateMdl(0LL, a3, 0, 0, 0LL);
    v9 = Mdl;
    if ( Mdl )
    {
      v10 = 0LL;
      p_Next = &Mdl[1].Next;
      if ( v5 )
      {
        while ( 1 )
        {
          v12 = sub_1402E57FC(a1, a2);
          if ( v12 == -1LL )
            break;
          if ( !v10 )
            v9->MdlFlags |= 0x4002u;
          *p_Next = v12;
          ++v10;
          ++p_Next;
          if ( v10 >= v5 )
            goto LABEL_8;
        }
        v9->ByteCount = (_DWORD)v10 << 12;
        goto LABEL_16;
      }
LABEL_8:
      if ( (v9->MdlFlags & 5) != 0 )
        MappedSystemVa = v9->MappedSystemVa;
      else
        MappedSystemVa = MmMapLockedPagesSpecifyCache(v9, 0, MmCached, 0LL, 0, 0x40000020u);
      if ( !MappedSystemVa )
      {
LABEL_16:
        sub_140705E1C(v9, 1);
        return 0LL;
      }
      return v9;
    }
  }
  else
  {
    v15 = sub_1402828F0(64, a3, 0x78786D4Du);
    v16 = v15;
    if ( v15 )
    {
      v17 = IoAllocateMdl(v15, v4, 0, 0, 0LL);
      v9 = v17;
      if ( !v17 )
      {
        ExFreePoolWithTag(v16, 0);
        return 0LL;
      }
      MmBuildMdlForNonPagedPool(v17);
      v9->MdlFlags |= 0x4000u;
      return v9;
    }
  }
  return 0LL;
}
