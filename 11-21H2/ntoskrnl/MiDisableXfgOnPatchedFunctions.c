/*
 * XREFs of MiDisableXfgOnPatchedFunctions @ 0x1405A36D0
 * Callers:
 *     <none>
 * Callees:
 *     MiValidateXfgUserCallTarget @ 0x14059A6AC (MiValidateXfgUserCallTarget.c)
 *     RtlDisableXfgOnTarget @ 0x1405EEA98 (RtlDisableXfgOnTarget.c)
 *     MiIsProcessXfgEnabled @ 0x14096EBDC (MiIsProcessXfgEnabled.c)
 */

char __fastcall MiDisableXfgOnPatchedFunctions(__int64 a1, unsigned int *a2, int a3, unsigned __int8 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx

  if ( a4 == *(_DWORD *)(a1 + 8) && a3 == 114688 )
  {
    v4 = *(_QWORD *)a1 + *a2;
    if ( (unsigned int)MiIsProcessXfgEnabled(KeGetCurrentThread()->ApcState.Process) )
    {
      if ( MiValidateXfgUserCallTarget(v4, (const signed __int64 **)(*(_QWORD *)(v5 + 1680) + 424LL)) )
        RtlDisableXfgOnTarget(v4);
    }
  }
  return 0;
}
