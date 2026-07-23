/*
 * XREFs of sub_14059C8C8 @ 0x14059C8C8
 * Callers:
 *     sub_14033AC90 @ 0x14033AC90 (sub_14033AC90.c)
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 * Callees:
 *     sub_14023FA50 @ 0x14023FA50 (sub_14023FA50.c)
 *     sub_140273AF0 @ 0x140273AF0 (sub_140273AF0.c)
 *     sub_14059D028 @ 0x14059D028 (sub_14059D028.c)
 */

__int64 __fastcall sub_14059C8C8(unsigned __int64 a1, _QWORD *a2, int a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx

  v6 = sub_14023FA50(a1);
  v7 = v6;
  if ( v6 )
  {
    *a2 = *v6;
    v8 = a1 & 0xFFFFFFFFFFFFF000uLL;
    a2[2] = a1 & 0xFFFFFFFFFFFFF000uLL;
    v9 = (a1 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    a2[3] = v9;
    v10 = v7[1];
    if ( (a1 & 0xFFFFFFFFFFFFF000uLL) < v10 )
      v8 = v7[1];
    a2[2] = v8;
    v11 = v10 + 8LL * (unsigned int)(*((_DWORD *)v7 + 11) - 1);
    if ( v9 > v11 )
      v9 = v11;
    a2[3] = v9;
    if ( !a3 )
    {
      a2[1] = 0LL;
      return 1LL;
    }
    v13 = sub_140273AF0(a1, (__int64)(a2 + 4));
    a2[1] = v13;
    if ( v13 )
      return 1LL;
    sub_14059D028(a2, v14);
  }
  return 0LL;
}
