/*
 * XREFs of sub_140647C04 @ 0x140647C04
 * Callers:
 *     sub_1403C2F24 @ 0x1403C2F24 (sub_1403C2F24.c)
 *     sub_140544A9C @ 0x140544A9C (sub_140544A9C.c)
 *     sub_140544EF0 @ 0x140544EF0 (sub_140544EF0.c)
 *     sub_140930DA8 @ 0x140930DA8 (sub_140930DA8.c)
 * Callees:
 *     sub_1403C0314 @ 0x1403C0314 (sub_1403C0314.c)
 */

char __fastcall sub_140647C04(_DWORD *a1)
{
  LOBYTE(_RAX) = sub_1403C0314();
  if ( (_BYTE)_RAX )
  {
    _RAX = 1073741829LL;
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
