/*
 * XREFs of RtlGetThreadErrorMode @ 0x1800D9040
 * Callers:
 *     LdrpLogLoadFailureEtwEvent @ 0x180081FDC (LdrpLogLoadFailureEtwEvent.c)
 * Callees:
 *     <none>
 */

ULONG RtlGetThreadErrorMode(void)
{
  struct _TEB *v0; // rdx
  int WowTebOffset; // eax
  struct _TEB *v2; // r8
  __int64 v3; // rax
  struct _TEB *v4; // rcx
  __int64 v5; // rax

  v0 = NtCurrentTeb();
  WowTebOffset = v0->WowTebOffset;
  if ( WowTebOffset < 0 )
    LODWORD(v0) = WowTebOffset + (_DWORD)v0;
  v2 = NtCurrentTeb();
  v3 = v2->WowTebOffset;
  if ( (int)v3 < 0 )
    v2 = (struct _TEB *)((char *)v2 + v3);
  v4 = NtCurrentTeb();
  v5 = v4->WowTebOffset;
  if ( (_DWORD)v0 == LODWORD(v2->NtTib.SubSystemTib) )
  {
    if ( (int)v5 < 0 )
      v4 = (struct _TEB *)((char *)v4 + v5);
    return (ULONG)v4->glDispatchTable[167];
  }
  else
  {
    if ( (int)v5 < 0 )
      v4 = (struct _TEB *)((char *)v4 + v5);
    return v4->HardErrorMode;
  }
}
