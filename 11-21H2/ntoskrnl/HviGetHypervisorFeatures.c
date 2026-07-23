/*
 * XREFs of HviGetHypervisorFeatures @ 0x1403BF8B0
 * Callers:
 *     sub_1403BF6EC @ 0x1403BF6EC (sub_1403BF6EC.c)
 *     sub_1403BFE70 @ 0x1403BFE70 (sub_1403BFE70.c)
 *     sub_14041900C @ 0x14041900C (sub_14041900C.c)
 *     sub_140548D80 @ 0x140548D80 (sub_140548D80.c)
 *     sub_14054C1A4 @ 0x14054C1A4 (sub_14054C1A4.c)
 *     sub_1405F2D28 @ 0x1405F2D28 (sub_1405F2D28.c)
 *     sub_140647C4C @ 0x140647C4C (sub_140647C4C.c)
 *     sub_140930DA8 @ 0x140930DA8 (sub_140930DA8.c)
 *     sub_140A550E0 @ 0x140A550E0 (sub_140A550E0.c)
 *     sub_140A580F0 @ 0x140A580F0 (sub_140A580F0.c)
 *     sub_140AFAD4C @ 0x140AFAD4C (sub_140AFAD4C.c)
 *     sub_140B24E48 @ 0x140B24E48 (sub_140B24E48.c)
 * Callees:
 *     sub_1403C0314 @ 0x1403C0314 (sub_1403C0314.c)
 */

__int64 __fastcall HviGetHypervisorFeatures(_DWORD *a1)
{
  __int64 result; // rax

  result = sub_1403C0314();
  if ( (_BYTE)result )
  {
    _RAX = 1073741827LL;
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
