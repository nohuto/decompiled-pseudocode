/*
 * XREFs of MiCopyTopLevelMappings @ 0x14036C4B0
 * Callers:
 *     MiCreateNewProcessTopLevelMappings @ 0x14036C440 (MiCreateNewProcessTopLevelMappings.c)
 *     MiUpdateSystemPdes @ 0x140581434 (MiUpdateSystemPdes.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiShadowTopLevelPxes @ 0x14036C624 (MiShadowTopLevelPxes.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

char __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rdi
  int v8; // ebp
  BOOL v9; // edi
  struct _KTHREAD *CurrentThread; // rax

  memmove(
    (void *)(a2 + 2048),
    (const void *)0xFFFFF6FB7DBED800LL,
    8 * ((((unsigned __int64)qword_140C540C0 >> 39) & 0x1FF) - 256));
  MiShadowTopLevelPxes(a1, 0xFFFFF6FB7DBED800uLL, 256LL);
  memmove(
    (void *)(a2 + 8 * ((((unsigned __int64)qword_140C51BF0 >> 39) & 0x1FF) + 1)),
    (const void *)(8 * ((((unsigned __int64)qword_140C51BF0 >> 39) & 0x1FF) + 1) - 0x90482413000LL),
    8 * (511 - (((unsigned __int64)qword_140C51BF0 >> 39) & 0x1FF)));
  v4 = (_QWORD *)(a2 + 8 * (((unsigned __int64)qword_140C50630 >> 39) & 0x1FF));
  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 2172) & 0x1000) != 0
    || (v6 = *(_QWORD *)(a1 + 1368)) == 0
    || (v5 = MI_READ_PTE_LOCK_FREE(v6 + 784), (v5 & 1) == 0) )
  {
    v9 = 0;
    LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v4);
    if ( (_DWORD)CurrentThread )
    {
      LODWORD(CurrentThread) = MiPteHasShadow();
      v9 = (_DWORD)CurrentThread != 0;
    }
    goto LABEL_9;
  }
  if ( (MI_READ_PTE_LOCK_FREE((unsigned __int64)v4) & 1) != 0 )
  {
    v7 = ZeroPte;
    v8 = 0;
    if ( !MiPteInShadowRange((unsigned __int64)v4) )
      goto LABEL_6;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_17:
        if ( (ZeroPte & 1) != 0 )
          v7 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      goto LABEL_17;
    }
LABEL_6:
    *v4 = v7;
    if ( v8 )
      MiWritePteShadow((__int64)v4, v7);
  }
  v9 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v4);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_9;
  LODWORD(CurrentThread) = MiPteHasShadow();
  if ( (_DWORD)CurrentThread )
  {
    v9 = 1;
    if ( HIBYTE(word_140C51864) )
      goto LABEL_9;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
      goto LABEL_9;
  }
  v5 |= 0x8000000000000000uLL;
LABEL_9:
  *v4 = v5;
  if ( v9 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)v4, v5);
  return (char)CurrentThread;
}
