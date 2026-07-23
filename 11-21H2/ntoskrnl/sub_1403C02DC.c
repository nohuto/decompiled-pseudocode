/*
 * XREFs of sub_1403C02DC @ 0x1403C02DC
 * Callers:
 *     sub_1403BFE1C @ 0x1403BFE1C (sub_1403BFE1C.c)
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 *     sub_140930DA8 @ 0x140930DA8 (sub_140930DA8.c)
 *     sub_140B24E48 @ 0x140B24E48 (sub_140B24E48.c)
 * Callees:
 *     sub_1403C0314 @ 0x1403C0314 (sub_1403C0314.c)
 */

__int64 __fastcall sub_1403C02DC(_DWORD *a1)
{
  __int64 result; // rax

  result = sub_1403C0314();
  if ( (_BYTE)result )
  {
    _RAX = 1073741828LL;
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
