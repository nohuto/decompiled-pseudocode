/*
 * XREFs of sub_1407A45E4 @ 0x1407A45E4
 * Callers:
 *     sub_1407AB790 @ 0x1407AB790 (sub_1407AB790.c)
 * Callees:
 *     sub_1407A4638 @ 0x1407A4638 (sub_1407A4638.c)
 */

__int64 __fastcall sub_1407A45E4(__int64 a1, __int128 *a2)
{
  __int128 v3; // [rsp+20h] [rbp-28h] BYREF
  __int128 v4; // [rsp+30h] [rbp-18h]

  v3 = 0LL;
  *(_QWORD *)&v4 = 0LL;
  DWORD2(v4) = 0;
  if ( *((_BYTE *)KeGetCurrentThread() + 562) )
  {
    v3 = *a2;
    v4 = a2[1];
    a2 = &v3;
  }
  return sub_1407A4638(a1, a2);
}
