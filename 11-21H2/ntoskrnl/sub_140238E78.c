/*
 * XREFs of sub_140238E78 @ 0x140238E78
 * Callers:
 *     sub_140238D0C @ 0x140238D0C (sub_140238D0C.c)
 *     sub_140352EB0 @ 0x140352EB0 (sub_140352EB0.c)
 *     sub_14059219C @ 0x14059219C (sub_14059219C.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 */

char __fastcall sub_140238E78(int a1, int a2)
{
  int v3; // ebx
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF
  int v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  v3 = a1 & 1;
  while ( 1 )
  {
    _InterlockedOr(v5, 0);
    if ( (unsigned int)(dword_140D31080 - a1) > 2 || !v3 && (unsigned int)(dword_140D31080 - a1) >= 2 )
      return 0;
    if ( (dword_140D31080 & 1) == 0 )
      break;
    v6 = 0;
    _InterlockedOr(v5, 0);
    while ( _bittest(&dword_140D31080, 0) )
      sub_1402F32E0(&v6);
    if ( !v3 )
      return 0;
  }
  return 1;
}
