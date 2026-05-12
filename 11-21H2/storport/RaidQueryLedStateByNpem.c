/*
 * XREFs of RaidQueryLedStateByNpem @ 0x1C004F168
 * Callers:
 *     RaidQueryLedState @ 0x1C004F070 (RaidQueryLedState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024050 (_guard_dispatch_icall_nop.c)
 *     RaidGetNpemControlInterface @ 0x1C004EA4C (RaidGetNpemControlInterface.c)
 */

__int64 __fastcall RaidQueryLedStateByNpem(__int64 a1, unsigned int *a2)
{
  int NpemControlInterface; // ebx
  unsigned int (__fastcall *v4)(_QWORD); // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  NpemControlInterface = RaidGetNpemControlInterface(a1, &v6);
  if ( NpemControlInterface >= 0 )
  {
    if ( *(_WORD *)(v6 + 2) >= 2u && (v4 = *(unsigned int (__fastcall **)(_QWORD))(v6 + 56)) != 0LL )
      *a2 = (v4(*(_QWORD *)(v6 + 8)) >> 2) & 0x3FF;
    else
      return (unsigned int)-1073741637;
  }
  return (unsigned int)NpemControlInterface;
}
