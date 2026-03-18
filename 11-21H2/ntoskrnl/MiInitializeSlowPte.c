/*
 * XREFs of MiInitializeSlowPte @ 0x14059508C
 * Callers:
 *     MiSlowRotateCopy @ 0x1405952D8 (MiSlowRotateCopy.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

char __fastcall MiInitializeSlowPte(unsigned __int64 *a1, unsigned __int64 a2, int a3)
{
  int ProtectionPfnCompatible; // r8d
  __int64 v5; // r10
  unsigned __int64 ValidPte; // rbx
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  bool v10; // zf

  ProtectionPfnCompatible = 4;
  v5 = a2;
  if ( a2 <= qword_140C50840 && ((*(_QWORD *)(48 * a2 - 0x21FFFFFFFFD8LL) >> 54) & 1) != 0 )
  {
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, 48 * a2 - 0x220000000000LL);
  }
  else if ( a3 )
  {
    if ( a3 == 2 )
      ProtectionPfnCompatible = 28;
  }
  else
  {
    ProtectionPfnCompatible = 12;
  }
  ValidPte = MiMakeValidPte((unsigned __int64)a1, v5, ProtectionPfnCompatible | 0xA0000000);
  v8 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v8 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_16;
      v10 = (ValidPte & 1) == 0;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_16;
      v10 = (ValidPte & 1) == 0;
    }
    if ( !v10 )
    {
      LOBYTE(CurrentThread) = 0;
      ValidPte |= 0x8000000000000000uLL;
    }
  }
LABEL_16:
  *a1 = ValidPte;
  if ( v8 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, ValidPte);
  return (char)CurrentThread;
}
