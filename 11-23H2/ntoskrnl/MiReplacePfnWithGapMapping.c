/*
 * XREFs of MiReplacePfnWithGapMapping @ 0x14038F6D8
 * Callers:
 *     MiPfnRangeIsZero @ 0x14038F364 (MiPfnRangeIsZero.c)
 * Callees:
 *     MiInsertLargeTbFlushEntry @ 0x140211C2C (MiInsertLargeTbFlushEntry.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140271580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiFlushTbList @ 0x140279B10 (MiFlushTbList.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140368338 (MiInsertRecursiveTbFlushEntries.c)
 *     MiReplicatePteChange @ 0x1403684A0 (MiReplicatePteChange.c)
 *     MiTransformValidPteInPlace @ 0x1403C335C (MiTransformValidPteInPlace.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void __fastcall MiReplacePfnWithGapMapping(unsigned __int64 *a1, int a2)
{
  unsigned __int64 ValidPte; // rbx
  char v5; // al
  unsigned __int64 v6; // rbx
  int v7; // esi
  __int64 v8; // r8
  bool v9; // zf
  _QWORD v10[24]; // [rsp+20h] [rbp-D8h] BYREF

  if ( qword_140C69758 == (PVOID)qword_140C69760 )
  {
    memset(v10, 0, 0xB8uLL);
    v5 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
    v10[3] = 0LL;
    LODWORD(v10[1]) = 20;
    if ( a2 && v5 < 0 )
      MiInsertLargeTbFlushEntry((__int64)v10, a2, (__int64)a1);
    else
      MiInsertRecursiveTbFlushEntries((__int64)v10, a2, (unsigned __int64)a1);
    v6 = ZeroPte;
    v7 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)a1) )
      goto LABEL_16;
    if ( MiPteHasShadow() )
    {
      v7 = 1;
      if ( !HIBYTE(word_140C66CFC) )
      {
        v9 = (ZeroPte & 1) == 0;
        goto LABEL_14;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v9 = (ZeroPte & 1) == 0;
LABEL_14:
      if ( !v9 )
        v6 = ZeroPte | 0x8000000000000000uLL;
    }
LABEL_16:
    *a1 = v6;
    if ( v7 )
      MiWritePteShadow((__int64)a1, v6, v8);
    goto LABEL_19;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)a1, (__int64)*(&qword_140C69758 + a2), a2 != 0 ? -1476395004 : 536870913);
  MiTransformValidPteInPlace(a1, a1, ValidPte, (unsigned int)a2);
  if ( a2 == 3 )
  {
    memset(v10, 0, 0xB8uLL);
    v10[3] = 0LL;
    LODWORD(v10[1]) = 20;
    MiReplicatePteChange((unsigned __int64)a1, ValidPte, 0);
    MiInsertRecursiveTbFlushEntries((__int64)v10, 3, (unsigned __int64)a1);
LABEL_19:
    MiFlushTbList((int *)v10);
  }
}
