/*
 * XREFs of sub_14060D7A0 @ 0x14060D7A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     IoConnectInterrupt @ 0x140859030 (IoConnectInterrupt.c)
 */

NTSTATUS __fastcall sub_14060D7A0(
        PKINTERRUPT *InterruptObject,
        PKSERVICE_ROUTINE ServiceRoutine,
        PVOID ServiceContext,
        PKSPIN_LOCK SpinLock,
        ULONG Vector,
        KIRQL Irql,
        KIRQL SynchronizeIrql,
        KINTERRUPT_MODE InterruptMode,
        BOOLEAN ShareVector,
        KAFFINITY ProcessorEnableMask,
        BOOLEAN FloatingSave)
{
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rdi
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v24; // rdx
  _QWORD **v25; // rdi
  _QWORD *v26; // rbx
  _QWORD v27[10]; // [rsp+68h] [rbp-49h] BYREF
  __int64 retaddr; // [rsp+E0h] [rbp+2Fh]

  memset(v27, 0, sizeof(v27));
  v17 = sub_140604844(143);
  if ( !v17 )
    goto LABEL_18;
  if ( dword_140C1B2A0 && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (qword_140D01450 & 0x200000000LL) != 0)
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v17 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v20 = *((_DWORD *)v17 + 3);
  if ( (v20 & 0x18) == 0 )
  {
    if ( (v20 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v21 = sub_140628C98(v16, v15, v18, v19);
    goto LABEL_12;
  }
  v21 = retaddr;
LABEL_12:
  v27[0] = v21;
LABEL_13:
  HIDWORD(v27[4]) = Vector;
  BYTE1(v27[4]) = Irql;
  LOBYTE(v27[4]) = SynchronizeIrql;
  HIDWORD(v27[3]) = InterruptMode;
  LOBYTE(v27[3]) = ShareVector;
  v27[2] = ProcessorEnableMask;
  LOBYTE(v27[1]) = FloatingSave;
  v27[8] = InterruptObject;
  v27[7] = ServiceRoutine;
  v27[6] = ServiceContext;
  v27[5] = SpinLock;
  for ( i = (__int64 *)v17[4]; i != v17 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(v27, v15);
  }
LABEL_18:
  result = IoConnectInterrupt(
             InterruptObject,
             ServiceRoutine,
             ServiceContext,
             SpinLock,
             Vector,
             Irql,
             SynchronizeIrql,
             InterruptMode,
             ShareVector,
             ProcessorEnableMask,
             FloatingSave);
  LODWORD(v27[9]) = result;
  if ( v17 )
  {
    v25 = (_QWORD **)(v17 + 6);
    v26 = *v25;
    if ( *v25 != v25 )
    {
      do
      {
        if ( v26 != (_QWORD *)16 )
          sub_14042A5E0(v27, v24);
        v26 = (_QWORD *)*v26;
      }
      while ( v26 != v25 );
      return v27[9];
    }
  }
  return result;
}
