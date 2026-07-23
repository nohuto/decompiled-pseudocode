/*
 * XREFs of sub_1402406C8 @ 0x1402406C8
 * Callers:
 *     sub_14034BBF0 @ 0x14034BBF0 (sub_14034BBF0.c)
 * Callees:
 *     sub_14034ED40 @ 0x14034ED40 (sub_14034ED40.c)
 *     sub_14034F9E0 @ 0x14034F9E0 (sub_14034F9E0.c)
 */

__int64 __fastcall sub_1402406C8(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  unsigned __int64 *v5; // rcx
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rax

  v4 = a1 + 32;
  v5 = (unsigned __int64 *)(a1 + 40);
  v6 = v4 ^ *v5;
  if ( (v6 ^ *(_QWORD *)v6) != v4 )
    __fastfail(3u);
  v7 = a2 ^ v4;
  *(_QWORD *)a2 = v7;
  *(_QWORD *)(a2 + 8) = a2 ^ v6;
  *(_QWORD *)v6 = a2 ^ v6;
  *v5 = v7;
  if ( (*(_DWORD *)(a1 + 176) & 1) != 0 && ((a2 + 80) & 0xFFF) != 0 )
  {
    v8 = sub_14034ED40(v5, a2, a2 + 48);
    if ( v8 )
      sub_14034F9E0(a1, a2, v8);
  }
  return sub_14034F9E0(a1, a2, a2 + 48);
}
