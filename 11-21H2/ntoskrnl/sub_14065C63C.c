/*
 * XREFs of sub_14065C63C @ 0x14065C63C
 * Callers:
 *     sub_14065B560 @ 0x14065B560 (sub_14065B560.c)
 *     sub_14065B6A0 @ 0x14065B6A0 (sub_14065B6A0.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14069F024 @ 0x14069F024 (sub_14069F024.c)
 *     sub_14069F150 @ 0x14069F150 (sub_14069F150.c)
 */

__int64 __fastcall sub_14065C63C(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  _PRIVILEGE_SET *v5; // rcx

  if ( *(_QWORD *)(a1 + 96) )
  {
    v2 = 0LL;
    v3 = 512LL;
    do
    {
      v4 = *(_QWORD *)(a1 + 96);
      v5 = *(_PRIVILEGE_SET **)(v2 + v4 + 48);
      if ( v5 )
        SeFreePrivileges(v5);
      sub_14069F024(v2 + v4 + 56);
      v2 += 408LL;
      --v3;
    }
    while ( v3 );
    SeFreePrivileges(*(PPRIVILEGE_SET *)(a1 + 96));
  }
  return sub_14069F150(a1 + 16);
}
