/*
 * XREFs of sub_14069F374 @ 0x14069F374
 * Callers:
 *     sub_1402260D0 @ 0x1402260D0 (sub_1402260D0.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_140921D5C @ 0x140921D5C (sub_140921D5C.c)
 */

void __fastcall sub_14069F374(__int64 a1)
{
  unsigned __int16 i; // di
  _PRIVILEGE_SET *v3; // rcx
  __int64 v4; // rbx
  _PRIVILEGE_SET *v5; // rcx
  _PRIVILEGE_SET *v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx

  for ( i = 0; i <= *(_WORD *)(a1 + 8); ++i )
  {
    v4 = sub_140921D5C(a1, i);
    v5 = *(_PRIVILEGE_SET **)(v4 + 8);
    if ( v5 )
      SeFreePrivileges(v5);
    v6 = *(_PRIVILEGE_SET **)(v4 + 16);
    if ( v6 )
    {
      v7 = 0;
      if ( *(_DWORD *)(v4 + 24) )
      {
        do
        {
          v8 = *(_QWORD *)(v4 + 16) + 8LL * v7;
          v9 = *(_QWORD *)v4;
          if ( (*(_BYTE *)(*(_QWORD *)v4 + 140LL) & 1) != 0 )
            sub_1406BF450(v9, v8);
          else
            sub_1407C97C0(v9, v8);
          ++v7;
        }
        while ( v7 < *(_DWORD *)(v4 + 24) );
        v6 = *(_PRIVILEGE_SET **)(v4 + 16);
      }
      SeFreePrivileges(v6);
    }
  }
  v3 = *(_PRIVILEGE_SET **)(a1 + 80);
  if ( v3 )
    SeFreePrivileges(v3);
}
