/*
 * XREFs of HalpDpReplayInterrupts @ 0x140A97980
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     HalpInterruptSetProblemEx @ 0x14051AF58 (HalpInterruptSetProblemEx.c)
 */

__int64 __fastcall HalpDpReplayInterrupts(__int64 a1)
{
  __int64 (__fastcall *v1)(_QWORD, __int64); // rax
  int v2; // r8d

  v1 = *(__int64 (__fastcall **)(_QWORD, __int64))(HalpInterruptController + 160);
  if ( !v1 )
  {
    v2 = -1073741637;
LABEL_5:
    HalpInterruptSetProblemEx(
      HalpInterruptController,
      28,
      v2,
      (__int64)"minkernel\\hals\\lib\\interrupts\\common\\replace.c",
      0x362u);
    return (unsigned int)v2;
  }
  v2 = v1(*(_QWORD *)(HalpInterruptController + 16), a1);
  if ( v2 < 0 )
    goto LABEL_5;
  return (unsigned int)v2;
}
