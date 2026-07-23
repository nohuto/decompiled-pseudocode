/*
 * XREFs of RtlInitializeExtendedContext2 @ 0x14030D6A0
 * Callers:
 *     RtlDispatchException @ 0x1402A3CA0 (RtlDispatchException.c)
 *     RtlpWalkFrameChain @ 0x1402A4180 (RtlpWalkFrameChain.c)
 *     RtlUnwindEx @ 0x1402A4C20 (RtlUnwindEx.c)
 *     KiDispatchException @ 0x14030CAC0 (KiDispatchException.c)
 *     RtlInitializeExtendedContext @ 0x14030D1D0 (RtlInitializeExtendedContext.c)
 *     RtlRaiseException @ 0x14030D3B0 (RtlRaiseException.c)
 *     RtlUnwind @ 0x1403C4090 (RtlUnwind.c)
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     NtCreateThreadEx @ 0x14076F910 (NtCreateThreadEx.c)
 *     PspInitializeThunkContext @ 0x14077070C (PspInitializeThunkContext.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14030D860 (RtlpValidateContextFlags.c)
 *     RtlpGetEntireXStateAreaLength @ 0x1403D6F40 (RtlpGetEntireXStateAreaLength.c)
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1403D74CC (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     memset @ 0x140435400 (memset.c)
 */

NTSTATUS __cdecl RtlInitializeExtendedContext2(
        PCONTEXT Context,
        ULONG ContextFlags,
        PCONTEXT_EX *ContextEx,
        ULONG64 EnabledExtendedFeatures)
{
  size_t v6; // rbp
  _CONTEXT_EX *v9; // rbx
  NTSTATUS result; // eax
  unsigned __int64 v11; // rcx
  ULONG Length; // ecx
  char v13; // si
  _CONTEXT_EX *v14; // r8
  int v15; // ecx
  _DWORD *v16; // rcx
  unsigned __int64 v17; // r13
  _CONTEXT_EX *v18; // rcx
  _DWORD *v19; // rcx
  unsigned __int64 v20; // rax
  _DWORD v21[14]; // [rsp+20h] [rbp-38h] BYREF
  ULONG64 v22; // [rsp+78h] [rbp+20h] BYREF

  LODWORD(v6) = 0;
  v21[0] = 0;
  v9 = 0LL;
  result = RtlpValidateContextFlags(ContextFlags, v21);
  if ( result >= 0 )
  {
    if ( (ContextFlags & 0x10000) != 0 )
    {
      v16 = (_DWORD *)(((unsigned __int64)&Context->P1Home + 3) & 0xFFFFFFFFFFFFFFFCuLL);
      v9 = (_CONTEXT_EX *)(v16 + 179);
      *v16 = ContextFlags;
      v16[182] = 716;
    }
    else if ( (ContextFlags & 0x100000) != 0 )
    {
      v11 = ((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL;
      v9 = (_CONTEXT_EX *)(v11 + 1232);
      *(_DWORD *)(v11 + 48) = ContextFlags;
      *(_DWORD *)(v11 + 1244) = 1232;
    }
    else if ( (ContextFlags & 0x200000) != 0 )
    {
      v18 = (_CONTEXT_EX *)(((unsigned __int64)&Context->P1Home + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v9 = v18 + 13;
      v18->All.Offset = ContextFlags;
      v18[13].Legacy.Length = 416;
    }
    else if ( (ContextFlags & 0x400000) != 0 )
    {
      v19 = (_DWORD *)(((unsigned __int64)&Context->P2Home + 7) & 0xFFFFFFFFFFFFFFF0uLL);
      v9 = (_CONTEXT_EX *)(v19 + 228);
      *v19 = ContextFlags;
      v19[231] = 912;
    }
    Length = v9->Legacy.Length;
    v9->Legacy.Offset = -Length;
    v9->All.Offset = -Length;
    v9->All.Length = Length + 32;
    if ( (ContextFlags & 0x10020) != 65568 && (ContextFlags & 0x10000) != 0 )
      v9->Legacy.Length = 204;
    v13 = v21[0];
    v14 = v9 + 1;
    if ( (v21[0] & 2) != 0 )
    {
      v17 = ((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL;
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      {
        v22 = (MEMORY[0xFFFFF780000003D8] | MEMORY[0xFFFFF78000000708] | 0x8000000000000000uLL) & EnabledExtendedFeatures;
        RtlpRemoveArchDisallowedXStateFeatures(ContextFlags, &v22);
        EnabledExtendedFeatures = v22;
      }
      v6 = (unsigned int)RtlpGetEntireXStateAreaLength(EnabledExtendedFeatures) - 512;
      memset((void *)(((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL), 0, v6);
      if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
        *(_QWORD *)((((unsigned __int64)&v9[2].KernelCet.Length + 3) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = EnabledExtendedFeatures | 0x8000000000000000uLL;
      v15 = v17 - (_DWORD)v9;
      v14 = (_CONTEXT_EX *)(v17 + v6);
      v9->All.Length = v6 + v17 - (_DWORD)v9 - v9->All.Offset;
    }
    else
    {
      v15 = 33;
    }
    v9->XState.Offset = v15;
    v9->XState.Length = v6;
    if ( (v13 & 4) != 0 )
    {
      v20 = ((unsigned __int64)&v14->All.Length + 3) & 0xFFFFFFFFFFFFFFF8uLL;
      *(_OWORD *)v20 = 0LL;
      *(_QWORD *)(v20 + 16) = 0LL;
      LODWORD(v20) = v20 - (_DWORD)v9;
      v9->KernelCet.Offset = v20;
      LODWORD(v20) = v20 - v9->All.Offset;
      v9->KernelCet.Length = 24;
      v9->All.Length = v20 + 24;
    }
    *ContextEx = v9;
    return 0;
  }
  return result;
}
