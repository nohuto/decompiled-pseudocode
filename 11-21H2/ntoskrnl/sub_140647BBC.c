/*
 * XREFs of sub_140647BBC @ 0x140647BBC
 * Callers:
 *     sub_14041900C @ 0x14041900C (sub_14041900C.c)
 *     sub_140543910 @ 0x140543910 (sub_140543910.c)
 *     sub_140824AA0 @ 0x140824AA0 (sub_140824AA0.c)
 *     sub_140930DA8 @ 0x140930DA8 (sub_140930DA8.c)
 * Callees:
 *     sub_1403C0314 @ 0x1403C0314 (sub_1403C0314.c)
 */

char __fastcall sub_140647BBC(_DWORD *a1)
{
  LOBYTE(_RAX) = sub_1403C0314();
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
