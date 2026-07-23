/*
 * XREFs of MxCopyPage @ 0x140B99540
 * Callers:
 *     MiInitializeSystemPageTable @ 0x1402E4838 (MiInitializeSystemPageTable.c)
 * Callees:
 *     MiPteInShadowRange @ 0x1402715F0 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402CF540 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1402EB354 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1403574EC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14035754C (MiPteHasShadow.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140424A70 (KeCopyPage.c)
 *     MxGetPhase0Mapping @ 0x140B58DFC (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxCopyPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 ValidPte; // rbx
  int v8; // ebp
  __int64 v9; // r8
  BOOL v10; // r15d
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rdx
  __int64 v14; // r8
  bool v15; // zf

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v6, BugCheckParameter2, 2684354564LL);
  v8 = 0;
  v10 = MiPteInShadowRange((unsigned __int64)v6);
  if ( v10 )
  {
    if ( MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_11;
      v12 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_11;
      v12 = (ValidPte & 1) == 0;
    }
    if ( !v12 )
      ValidPte |= v11;
  }
LABEL_11:
  *v6 = ValidPte;
  if ( v8 )
    MiWritePteShadow((__int64)v6, ValidPte, v9);
  KeCopyPage(v5, a2);
  v13 = ZeroPte;
  v14 = 0LL;
  if ( v10 )
  {
    if ( MiPteHasShadow() )
    {
      v14 = 1LL;
      if ( HIBYTE(word_140C66CFC) )
        goto LABEL_21;
      v15 = (v13 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_21;
      v15 = (v13 & 1) == 0;
    }
    if ( !v15 )
      v13 |= 0x8000000000000000uLL;
  }
LABEL_21:
  *v6 = v13;
  if ( (_DWORD)v14 )
    MiWritePteShadow((__int64)v6, v13, v14);
  return KeFlushSingleTb(v5, 0, 1u);
}
