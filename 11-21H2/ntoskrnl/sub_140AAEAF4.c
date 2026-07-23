/*
 * XREFs of sub_140AAEAF4 @ 0x140AAEAF4
 * Callers:
 *     sub_140AAE79C @ 0x140AAE79C (sub_140AAE79C.c)
 *     unknown_libname_5 @ 0x140AAE9C8 (unknown_libname_5.c)
 *     sub_140AAE9F4 @ 0x140AAE9F4 (sub_140AAE9F4.c)
 * Callees:
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_140AABB44 @ 0x140AABB44 (sub_140AABB44.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 */

void __fastcall sub_140AAEAF4(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  _UNKNOWN **v4; // rbx
  __int64 v5; // rax

  if ( a1 && (*(_DWORD *)(a1 + 72) & 1) != 0 )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      sub_140AAD3E0(v2);
    v3 = *(_QWORD *)(a1 + 32);
    if ( v3 )
      sub_140AAD3E0(v3);
    if ( (*(_DWORD *)(a1 + 60) & 1) != 0 )
    {
      v4 = (_UNKNOWN **)off_140C04450;
      v5 = *(_QWORD *)off_140C04450;
      if ( *((_UNKNOWN ***)off_140C04450 + 1) != &off_140C04450 )
FatalListEntryError_130:
        __fastfail(3u);
      while ( 1 )
      {
        if ( *(_UNKNOWN ***)(v5 + 8) != v4 )
          goto FatalListEntryError_130;
        off_140C04450 = (_UNKNOWN *)v5;
        *(_QWORD *)(v5 + 8) = &off_140C04450;
        if ( v4 == &off_140C04450 )
          break;
        sub_140AAD3E0((__int64)v4[6]);
        sub_1403A8CB4((__int64)v4);
        v4 = (_UNKNOWN **)off_140C04450;
        if ( *((_UNKNOWN ***)off_140C04450 + 1) != &off_140C04450 )
          goto FatalListEntryError_130;
        v5 = *(_QWORD *)off_140C04450;
      }
      dword_140C04460 = 0;
      if ( byte_140C0DE54 )
        sub_140AABB44();
    }
    sub_1403A8CB4(a1);
  }
}
