/*
 * XREFs of sub_140231910 @ 0x140231910
 * Callers:
 *     sub_14031E900 @ 0x14031E900 (sub_14031E900.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_140231910(unsigned __int64 *a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  unsigned __int64 v4; // r8
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  unsigned __int64 *v7; // r8
  unsigned __int64 v8; // r10

  v1 = a1[2];
  if ( (v1 & 1) == 0 )
    return 1LL;
  v2 = v1 & 0xFFFFFFFFFFFFFFFEuLL;
  if ( *(_BYTE *)v2 != 2 )
    return 1LL;
  v4 = *(_QWORD *)(v2 + 24);
  v5 = 1LL;
  if ( v4 < *(_QWORD *)(v2 + 16) )
  {
    v6 = *a1;
    v7 = (unsigned __int64 *)(*(_QWORD *)(v2 + 8) + 16 * v4);
    if ( *a1 >= *v7 )
    {
      v8 = v7[1];
      if ( v6 < v8 + *v7 )
        return (((*v7 & 0xFFF) + v8 + 4095) >> 12)
             - (((v6 & 0xFFFFFFFFFFFFF000uLL) - (*v7 & 0xFFFFFFFFFFFFF000uLL)) >> 12);
    }
  }
  return v5;
}
