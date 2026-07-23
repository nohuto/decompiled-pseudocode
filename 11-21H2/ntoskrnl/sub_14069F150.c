/*
 * XREFs of sub_14069F150 @ 0x14069F150
 * Callers:
 *     sub_140226200 @ 0x140226200 (sub_140226200.c)
 *     sub_14065A44C @ 0x14065A44C (sub_14065A44C.c)
 *     sub_14065C63C @ 0x14065C63C (sub_14065C63C.c)
 *     sub_14069F024 @ 0x14069F024 (sub_14069F024.c)
 *     sub_140920CA0 @ 0x140920CA0 (sub_140920CA0.c)
 *     sub_140920F1C @ 0x140920F1C (sub_140920F1C.c)
 *     sub_140921F64 @ 0x140921F64 (sub_140921F64.c)
 *     sub_140922400 @ 0x140922400 (sub_140922400.c)
 *     sub_140922984 @ 0x140922984 (sub_140922984.c)
 *     sub_140922B20 @ 0x140922B20 (sub_140922B20.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_14069F1CC @ 0x14069F1CC (sub_14069F1CC.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 */

void __fastcall sub_14069F150(__int64 a1)
{
  __int16 i; // bx
  _QWORD *v3; // rax
  _PRIVILEGE_SET *v4; // rcx
  __int64 v5; // rcx
  _QWORD *v6; // rdx

  for ( i = 0; i <= *(__int16 *)a1; ++i )
  {
    v3 = (_QWORD *)sub_14069F1CC(a1);
    if ( v3[2] )
    {
      v5 = *v3;
      v6 = v3 + 3;
      if ( (*(_BYTE *)(*v3 + 140LL) & 1) != 0 )
        sub_1406BF450(v5, v6);
      else
        sub_1407C97C0(v5, v6);
    }
  }
  v4 = *(_PRIVILEGE_SET **)(a1 + 72);
  if ( v4 )
    SeFreePrivileges(v4);
}
