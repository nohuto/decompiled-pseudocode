/*
 * XREFs of sub_1403C0360 @ 0x1403C0360
 * Callers:
 *     sub_1403C0314 @ 0x1403C0314 (sub_1403C0314.c)
 *     sub_140543910 @ 0x140543910 (sub_140543910.c)
 *     sub_140930DA8 @ 0x140930DA8 (sub_140930DA8.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1403C03A0 (HviIsAnyHypervisorPresent.c)
 */

__int64 __fastcall sub_1403C0360(_DWORD *a1, __int64 a2)
{
  __int64 result; // rax

  result = HviIsAnyHypervisorPresent(a1, a2);
  if ( (_BYTE)result )
  {
    _RAX = 1073741825LL;
    __asm { cpuid }
    *a1 = result;
    a1[1] = _RBX;
    a1[2] = _RCX;
    a1[3] = _RDX;
  }
  else
  {
    *(_QWORD *)a1 = 0LL;
    *((_QWORD *)a1 + 1) = 0LL;
  }
  return result;
}
