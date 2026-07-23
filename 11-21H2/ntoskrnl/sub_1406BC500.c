/*
 * XREFs of sub_1406BC500 @ 0x1406BC500
 * Callers:
 *     <none>
 * Callees:
 *     sub_140702ABC @ 0x140702ABC (sub_140702ABC.c)
 */

__int64 __fastcall sub_1406BC500(__int64 a1, int *a2)
{
  char v2; // r9
  unsigned int v3; // r8d
  int v4; // eax

  v2 = a1;
  v3 = 0;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    a1 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      a1 = (__int64)a2;
    *(_DWORD *)a1 = *(_DWORD *)a1;
  }
  if ( v2 )
    v4 = sub_140702ABC(a1, a2, 0LL);
  else
    v4 = dword_140D3CA30;
  *a2 = v4;
  return v3;
}
