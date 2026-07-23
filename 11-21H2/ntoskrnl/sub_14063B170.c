/*
 * XREFs of sub_14063B170 @ 0x14063B170
 * Callers:
 *     sub_1403FABD0 @ 0x1403FABD0 (sub_1403FABD0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14063B170(unsigned __int64 a1, _DWORD *a2)
{
  int v4; // ebx
  unsigned int v5; // edx
  __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 result; // rax

  if ( !qword_140C157B8 || !qword_140C157C0 )
    return 0LL;
  v4 = 1;
  v5 = (qword_140C157C0 - 1) & ((40543 * (a1 >> 12)) ^ ((40543 * (unsigned __int64)(unsigned int)(a1 >> 12)) >> 32));
  while ( 1 )
  {
    v6 = qword_140C157B8 + 32LL * v5;
    v7 = *(_QWORD *)v6;
    if ( (*(_QWORD *)v6 & 1) == 0 && a1 >= v7 && a1 < *(_QWORD *)(v6 + 16) + v7 )
      break;
    if ( ++v5 >= (unsigned __int64)qword_140C157C0 )
    {
      if ( !v4 )
        return 0LL;
      v5 = 0;
      v4 = 0;
    }
  }
  if ( !v6 )
    return 0LL;
  result = 1LL;
  *a2 = *(_DWORD *)(v6 + 8);
  return result;
}
