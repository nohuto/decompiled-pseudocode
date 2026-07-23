/*
 * XREFs of sub_140204758 @ 0x140204758
 * Callers:
 *     sub_140204870 @ 0x140204870 (sub_140204870.c)
 * Callees:
 *     sub_1402047C4 @ 0x1402047C4 (sub_1402047C4.c)
 *     sub_1402053E4 @ 0x1402053E4 (sub_1402053E4.c)
 */

__int64 __fastcall sub_140204758(__int64 a1, __int128 *a2)
{
  __int128 v4; // xmm1
  __int64 v5; // xmm0_8
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v4 = a2[1];
  v7 = *a2;
  v5 = *((_QWORD *)a2 + 4);
  v8 = v4;
  DWORD2(v8) = 0;
  v9 = v5;
  result = sub_1402053E4(a1, &v7);
  if ( (_DWORD)result == -1073741275 )
  {
    result = 0LL;
  }
  else if ( (int)result < 0 )
  {
    return result;
  }
  if ( *((_DWORD *)a2 + 6) )
    return sub_1402047C4(a1, a2);
  return result;
}
