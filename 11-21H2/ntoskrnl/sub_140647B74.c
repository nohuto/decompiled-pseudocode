/*
 * XREFs of sub_140647B74 @ 0x140647B74
 * Callers:
 *     sub_140543910 @ 0x140543910 (sub_140543910.c)
 *     sub_140548D80 @ 0x140548D80 (sub_140548D80.c)
 *     HviGetHardwareFeatures @ 0x140647B00 (HviGetHardwareFeatures.c)
 *     sub_140647C4C @ 0x140647C4C (sub_140647C4C.c)
 *     sub_140930DA8 @ 0x140930DA8 (sub_140930DA8.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 */

char __fastcall sub_140647B74(_DWORD *a1)
{
  LOBYTE(_RAX) = HviIsAnyHypervisorPresent();
  if ( (_BYTE)_RAX )
  {
    _RAX = 0x40000000LL;
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
