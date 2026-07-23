/*
 * XREFs of RtlCopyContext @ 0x1407709E0
 * Callers:
 *     PspGetSetContextInternal @ 0x140724A70 (PspGetSetContextInternal.c)
 *     PspInitializeThunkContext @ 0x14077070C (PspInitializeThunkContext.c)
 *     PspWow64GetContextThread @ 0x1407A069C (PspWow64GetContextThread.c)
 *     PspWow64SetContextThread @ 0x1407A0968 (PspWow64SetContextThread.c)
 *     PspSetContextState @ 0x1409B81E8 (PspSetContextState.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14030D860 (RtlpValidateContextFlags.c)
 *     RtlpGetContextFlagsLocation @ 0x14030D938 (RtlpGetContextFlagsLocation.c)
 *     RtlpCopyLegacyContext @ 0x14030D95C (RtlpCopyLegacyContext.c)
 *     RtlpCopyXStateChunk @ 0x1403D6FA8 (RtlpCopyXStateChunk.c)
 *     RtlpCopyKernelCetChunk @ 0x1405AAE7C (RtlpCopyKernelCetChunk.c)
 */

NTSTATUS __cdecl RtlCopyContext(PCONTEXT Context, ULONG ContextFlags, PCONTEXT Source)
{
  _M128A *v6; // rdi
  _M128A *XmmRegisters; // rsi
  NTSTATUS result; // eax
  int v9; // edx
  int *v10; // rax
  int *v11; // r8
  int v12; // r12d
  int v13; // ebp
  ULONG v14; // ebp
  __int64 v15; // rcx
  NTSTATUS v16; // ebx
  char v17; // bp
  int v18; // [rsp+30h] [rbp-38h] BYREF
  _DWORD *ContextFlagsLocation; // [rsp+38h] [rbp-30h]
  int v20; // [rsp+88h] [rbp+20h] BYREF

  v18 = 0;
  v20 = 0;
  v6 = 0LL;
  XmmRegisters = 0LL;
  result = RtlpValidateContextFlags(ContextFlags, 0LL);
  if ( result >= 0 )
  {
    ContextFlagsLocation = (_DWORD *)RtlpGetContextFlagsLocation((__int64)Context, ContextFlags);
    v10 = (int *)RtlpGetContextFlagsLocation((__int64)Source, v9);
    v12 = *v11;
    v13 = *v10;
    result = RtlpValidateContextFlags(ContextFlags | *v10 | *v11, 0LL);
    if ( result >= 0 )
    {
      v14 = ContextFlags & v13;
      result = RtlpValidateContextFlags(v14, &v18);
      if ( result >= 0 )
      {
        result = RtlpValidateContextFlags(v12, &v20);
        v16 = result;
        if ( result >= 0 )
        {
          if ( (~v20 & v18) != 0 )
          {
            return -2147483643;
          }
          else
          {
            LOBYTE(v15) = 1;
            RtlpCopyLegacyContext(v15, (__int64)Context, v14);
            *ContextFlagsLocation |= v12;
            if ( (v20 & 0xFFFFFFFE) != 0 )
            {
              if ( (v14 & 0x10000) != 0 )
              {
                XmmRegisters = (_M128A *)((char *)&Source->1 + 460);
                v6 = (_M128A *)((char *)&Context->1 + 460);
                if ( (v12 & 0x10020) != 65568 && (v14 & 0x10020) == 65568 )
                  *((_DWORD *)&Context->1 + 118) = 716;
              }
              else if ( (ContextFlags & 0x100000) != 0 )
              {
                XmmRegisters = (_M128A *)&Source[1];
                v6 = (_M128A *)&Context[1];
              }
              else if ( (ContextFlags & 0x200000) != 0 )
              {
                XmmRegisters = Source->FltSave.XmmRegisters;
                v6 = Context->FltSave.XmmRegisters;
              }
              else if ( (ContextFlags & 0x400000) != 0 )
              {
                XmmRegisters = &Source->VectorRegister[9];
                v6 = &Context->VectorRegister[9];
              }
            }
            v17 = v18;
            if ( (v18 & 2) == 0
              || (result = RtlpCopyXStateChunk(
                             1,
                             (__int64)v6,
                             (__int64)v6,
                             (__int64)XmmRegisters,
                             (__int64)XmmRegisters),
                  v16 = result,
                  result >= 0) )
            {
              if ( (v17 & 4) == 0 )
                return v16;
              result = RtlpCopyKernelCetChunk(1, (__int64)v6, (__int64)v6, (__int64)XmmRegisters, (__int64)XmmRegisters);
              v16 = result;
              if ( result >= 0 )
                return v16;
            }
          }
        }
      }
    }
  }
  return result;
}
