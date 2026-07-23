/*
 * XREFs of sub_1405B1D98 @ 0x1405B1D98
 * Callers:
 *     sub_1405B1A10 @ 0x1405B1A10 (sub_1405B1A10.c)
 *     sub_1405E22E8 @ 0x1405E22E8 (sub_1405E22E8.c)
 *     sub_1405E2740 @ 0x1405E2740 (sub_1405E2740.c)
 *     sub_1405E281C @ 0x1405E281C (sub_1405E281C.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     sub_140277C50 @ 0x140277C50 (sub_140277C50.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14033C300 @ 0x14033C300 (sub_14033C300.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_1405898DC @ 0x1405898DC (sub_1405898DC.c)
 */

void __fastcall sub_1405B1D98(PMDL MemoryDescriptorList, int a2)
{
  PMDL v3; // r14
  ULONG_PTR *v4; // rdi
  unsigned __int64 v5; // r12
  unsigned int v6; // ebx
  __int64 v7; // rsi
  unsigned __int64 v8; // r15
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v11; // r9
  int v12; // eax
  bool v13; // zf
  __int64 v14; // rcx
  unsigned int v15; // ebx
  _BYTE MemoryDescriptorLista[176]; // [rsp+38h] [rbp-89h] BYREF

  v3 = MemoryDescriptorList;
  memset(MemoryDescriptorLista, 0, sizeof(MemoryDescriptorLista));
  v4 = (ULONG_PTR *)&v3[1];
  v5 = (unsigned __int64)&v3[1] + 8 * ((unsigned __int64)v3->ByteCount >> 12);
  if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48
                              + 8 * ((*(_QWORD *)(48 * (__int64)v3[1].Next - 0x21FFFFFFFFD8LL) >> 43) & 0x3FFLL))
                  + 4LL) & 8) != 0 )
  {
    v6 = 0;
    if ( (unsigned __int64)v4 < v5 )
    {
      do
      {
        v7 = 48 * *v4 - 0x220000000000LL;
        if ( sub_140277C50(v7) )
        {
          if ( !a2 )
          {
            v8 = (unsigned __int8)sub_1402F2700(v7);
            sub_14033C300(v7, 0);
            _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v11 = *((_QWORD *)CurrentPrcb + 4375);
                  v12 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
                  v13 = (v12 & *(_DWORD *)(v11 + 20)) == 0;
                  *(_DWORD *)(v11 + 20) &= v12;
                  if ( v13 )
                    sub_140418E4C((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8(v8);
          }
          _InterlockedDecrement64(&qword_140C50848);
          sub_1405898DC(*v4, 0);
        }
        else
        {
          v14 = v6++;
          *(_QWORD *)&MemoryDescriptorLista[8 * v14 + 48] = *v4;
          if ( v6 == 16 )
          {
            *(_QWORD *)MemoryDescriptorLista = 0LL;
            *(_DWORD *)&MemoryDescriptorLista[8] = 131248;
            *(_QWORD *)&MemoryDescriptorLista[32] = 0LL;
            *(_QWORD *)&MemoryDescriptorLista[40] = 0x10000LL;
            MmFreePagesFromMdl((PMDL)MemoryDescriptorLista);
            v6 = 0;
          }
        }
        ++v4;
      }
      while ( (unsigned __int64)v4 < v5 );
      v3 = MemoryDescriptorList;
      if ( v6 )
      {
        v15 = v6 << 12;
        *(_QWORD *)MemoryDescriptorLista = 0LL;
        *(_QWORD *)&MemoryDescriptorLista[32] = 0LL;
        *(_WORD *)&MemoryDescriptorLista[8] = 8 * ((v15 >> 12) + 6);
        *(_WORD *)&MemoryDescriptorLista[10] = 2;
        *(_DWORD *)&MemoryDescriptorLista[44] = 0;
        *(_DWORD *)&MemoryDescriptorLista[40] = v15;
        MmFreePagesFromMdl((PMDL)MemoryDescriptorLista);
      }
    }
    v3->MdlFlags &= ~2u;
  }
  else
  {
    MmFreePagesFromMdl(v3);
  }
}
