/*
 * XREFs of SeShouldCheckForAccessRightsFromParent @ 0x1407B3CD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140232910 @ 0x140232910 (sub_140232910.c)
 *     sub_1402F8A20 @ 0x1402F8A20 (sub_1402F8A20.c)
 *     sub_1402FBC90 @ 0x1402FBC90 (sub_1402FBC90.c)
 *     sub_1402FBE30 @ 0x1402FBE30 (sub_1402FBE30.c)
 */

bool __fastcall SeShouldCheckForAccessRightsFromParent(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // si
  char v6; // bl
  __int64 v7; // rax
  _DWORD *v8; // r8
  __int64 v10; // r14
  __int64 v11; // rax
  char v12; // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v4 = 1;
  v13 = 0LL;
  v6 = 0;
  v7 = sub_1402FBE30(a2);
  if ( v7 )
  {
    v10 = v7 + 8;
    if ( v7 != -8 )
    {
      v12 = 0;
      v11 = sub_140232910((__int64 *)(a3 + 32));
      sub_1402F8A20(v11, v10, &v12);
      v4 = v12;
    }
  }
  v8 = *(_DWORD **)(a3 + 32);
  if ( !v8 )
    v8 = *(_DWORD **)(a3 + 48);
  sub_1402FBC90(a2, 0LL, v8, 1, (int *)&v13);
  if ( (*(_DWORD *)(a3 + 16) & (unsigned int)v13) == *(_DWORD *)(a3 + 16) )
    v6 = 1;
  return v4 && v6;
}
