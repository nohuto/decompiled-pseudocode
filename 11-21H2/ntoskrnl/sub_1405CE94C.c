/*
 * XREFs of sub_1405CE94C @ 0x1405CE94C
 * Callers:
 *     sub_1402D2238 @ 0x1402D2238 (sub_1402D2238.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

char __fastcall sub_1405CE94C(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 v2; // r8
  char v3; // bl
  __int128 *v5; // rdi
  unsigned int v6; // esi
  __int64 v7; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h] BYREF
  __int128 v11; // [rsp+40h] [rbp-18h]

  v2 = *(_QWORD *)(BugCheckParameter3 + 96);
  v3 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 24) & 0x8000000) != 0 )
    {
      v5 = &v10;
      *(_QWORD *)&v11 = *(_QWORD *)(a2 + 32);
      v6 = 144;
      v7 = *(_QWORD *)(a2 + 16);
      *(_QWORD *)&v10 = a2 + 128;
      *((_QWORD *)&v11 + 1) = *(_QWORD *)(v7 + 32);
    }
    else
    {
      *(_QWORD *)&v9 = a2 + 128;
      v5 = &v9;
      v6 = 1;
    }
    if ( !(unsigned __int8)sub_14042A5E0(v6, v5) )
      sub_1405CAE6C(0x605uLL, v6, BugCheckParameter3, 0LL);
    return *((_BYTE *)v5 + 8);
  }
  return v3;
}
