/*
 * XREFs of sub_14064FB60 @ 0x14064FB60
 * Callers:
 *     sub_14064FD74 @ 0x14064FD74 (sub_14064FD74.c)
 * Callees:
 *     sub_14064FBF4 @ 0x14064FBF4 (sub_14064FBF4.c)
 *     sub_1406D9550 @ 0x1406D9550 (sub_1406D9550.c)
 *     sub_140930250 @ 0x140930250 (sub_140930250.c)
 */

__int64 __fastcall sub_14064FB60(__int64 *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  int v6; // ecx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebx

  v3 = *a1;
  v6 = *(_DWORD *)(a2 + 80) * *(_DWORD *)(a2 + 84);
  *a3 = 0LL;
  v8 = sub_140930250(-*(_DWORD *)(v3 + 236) & (unsigned int)(*(_DWORD *)(v3 + 236) + v6 - 1));
  v9 = v8;
  if ( v8 )
  {
    v10 = sub_14064FBF4(a1, a2, v8);
    if ( v10 < 0 )
      sub_1406D9550(v9);
    else
      *a3 = v9;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v10;
}
