/*
 * XREFs of sub_14093146C @ 0x14093146C
 * Callers:
 *     sub_140802068 @ 0x140802068 (sub_140802068.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14093146C(__int64 a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx

  v2 = a2 + 2;
  v3 = -1073741670;
  qword_140C48980 = (PVOID)ExAllocatePool2(64LL, (unsigned int)((a2 + 2) << 12), 541873736LL);
  if ( qword_140C48980 )
  {
    dword_140C48988 = v2;
    return 0;
  }
  return v3;
}
