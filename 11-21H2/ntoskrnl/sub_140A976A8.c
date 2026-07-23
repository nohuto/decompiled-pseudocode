/*
 * XREFs of sub_140A976A8 @ 0x140A976A8
 * Callers:
 *     sub_140A97160 @ 0x140A97160 (sub_140A97160.c)
 *     sub_140A976F4 @ 0x140A976F4 (sub_140A976F4.c)
 * Callees:
 *     sub_14063A59C @ 0x14063A59C (sub_14063A59C.c)
 */

__int64 __fastcall sub_140A976A8(int a1)
{
  PVOID *v1; // r8
  PVOID *v2; // r11
  int v3; // r10d
  unsigned int v4; // r9d
  PVOID **v5; // r8

  v1 = (PVOID *)qword_140C1ACE0;
  v2 = &qword_140C1ACE0;
  v3 = a1;
  v4 = 0;
  while ( v1 != v2 )
  {
    if ( (unsigned int)sub_14063A59C(v3, *((_DWORD *)v1 + 4)) )
      return 1;
    v1 = *v5;
  }
  return v4;
}
