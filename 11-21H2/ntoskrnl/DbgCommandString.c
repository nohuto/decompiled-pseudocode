/*
 * XREFs of DbgCommandString @ 0x1405E4080
 * Callers:
 *     <none>
 * Callees:
 *     sub_140429850 @ 0x140429850 (sub_140429850.c)
 */

__int64 __fastcall DbgCommandString(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v6[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = -1LL;
  v6[0] = 0LL;
  v6[1] = a1;
  v3 = -1LL;
  v5 = 0LL;
  do
    ++v3;
  while ( *(_BYTE *)(a1 + v3) );
  LOWORD(v6[0]) = v3;
  *((_QWORD *)&v5 + 1) = a2;
  do
    ++v2;
  while ( *(_BYTE *)(a2 + v2) );
  LOWORD(v5) = v2;
  return sub_140429850((__int64)v6, (__int64)&v5, 5u);
}
