/*
 * XREFs of HviGetHypervisorVersion @ 0x1406159AC
 * Callers:
 *     HvlpHvIdentityInfoCallback @ 0x140540550 (HvlpHvIdentityInfoCallback.c)
 *     KiIsHyperVCr3RspErrataPresent @ 0x140579778 (KiIsHyperVCr3RspErrataPresent.c)
 *     HvlPhase0Initialize @ 0x140820198 (HvlPhase0Initialize.c)
 *     HvlQueryDetailInfo @ 0x140941058 (HvlQueryDetailInfo.c)
 * Callees:
 *     HviIsHypervisorMicrosoftCompatible @ 0x14038296C (HviIsHypervisorMicrosoftCompatible.c)
 */

char __fastcall HviGetHypervisorVersion(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsHypervisorMicrosoftCompatible();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741826LL;
    __asm { cpuid }
    *a1 = _RAX;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return _RAX;
}
