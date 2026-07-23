/*
 * XREFs of sub_14023C9A4 @ 0x14023C9A4
 * Callers:
 *     sub_14031E200 @ 0x14031E200 (sub_14031E200.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall sub_14023C9A4(_QWORD *a1)
{
  _QWORD *v1; // r8
  unsigned __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // r9

  v1 = (_QWORD *)(a1[2] & 0xFFFFFFFFFFFFFFFEuLL);
  result = v1[3];
  if ( result < v1[2] )
  {
    v3 = *a1 & 0xFFFFFFFFFFFFF000uLL;
    result = v1[1] + 16 * result;
    v4 = *(_QWORD *)result;
    if ( v3 >= *(_QWORD *)result && v3 < v4 + *(_QWORD *)(result + 8) )
      v1[4] = (v3 - (v4 & 0xFFFFFFFFFFFFF000uLL)) >> 12;
  }
  return result;
}
