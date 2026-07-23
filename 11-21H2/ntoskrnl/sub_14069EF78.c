/*
 * XREFs of sub_14069EF78 @ 0x14069EF78
 * Callers:
 *     sub_14065D5C8 @ 0x14065D5C8 (sub_14065D5C8.c)
 *     sub_14090C34C @ 0x14090C34C (sub_14090C34C.c)
 *     sub_140912608 @ 0x140912608 (sub_140912608.c)
 * Callees:
 *     SeFreePrivileges @ 0x140208AC0 (SeFreePrivileges.c)
 *     sub_140721878 @ 0x140721878 (sub_140721878.c)
 *     sub_1407C05F4 @ 0x1407C05F4 (sub_1407C05F4.c)
 */

void __fastcall sub_14069EF78(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int128 v8; // [rsp+30h] [rbp-18h]
  __int64 v9; // [rsp+40h] [rbp-8h]

  v7 = 0LL;
  v8 = 0LL;
  if ( a3 == 1 )
  {
    if ( (*(_DWORD *)(a1 + 184) & 0x40000) != 0 )
      a1 = *(_QWORD *)(a1 + 72);
    a1 = *(_QWORD *)(a1 + 72);
  }
  sub_1407C05F4(&v7, a1);
  sub_140721878(&v7, a2, a3, a4, v7, *((_QWORD *)&v7 + 1), v8, *((_QWORD *)&v8 + 1), v9);
  if ( *((_QWORD *)&v8 + 1) )
    SeFreePrivileges(*((PPRIVILEGE_SET *)&v8 + 1));
}
