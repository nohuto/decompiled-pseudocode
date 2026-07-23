/*
 * XREFs of sub_140563158 @ 0x140563158
 * Callers:
 *     sub_14056322C @ 0x14056322C (sub_14056322C.c)
 * Callees:
 *     sub_14033AC10 @ 0x14033AC10 (sub_14033AC10.c)
 *     sub_140563100 @ 0x140563100 (sub_140563100.c)
 *     sub_140A68338 @ 0x140A68338 (sub_140A68338.c)
 */

__int64 __fastcall sub_140563158(__int64 *a1)
{
  unsigned __int64 v1; // rsi
  int v3; // ebx
  unsigned __int64 v4; // rax
  __int64 v5; // r8
  int v6; // edx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax

  v1 = 0LL;
  v3 = 0;
  while ( 1 )
  {
    v4 = sub_14033AC10((((a1[1] + (unsigned __int64)(unsigned int)(v3 << 12)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    if ( v4 != v1 )
    {
      v1 = v4;
      LOBYTE(v5) = 1;
      v6 = sub_140A68338(v4 << 12, 4096LL, v5);
      if ( v6 < 0 )
        break;
    }
    if ( (unsigned int)++v3 >= 0x10 )
    {
      sub_140563100(*a1, 0x30u);
      return 0LL;
    }
  }
  v8 = qword_140C448A8;
  v9 = *(_DWORD *)(qword_140C448A8 + 33272);
  if ( !v9 )
    v9 = 5727;
  *(_DWORD *)(qword_140C448A8 + 33272) = v9;
  v10 = *(_DWORD *)(v8 + 33276);
  if ( !v10 )
    v10 = 1;
  *(_DWORD *)(v8 + 33276) = v10;
  return (unsigned int)v6;
}
