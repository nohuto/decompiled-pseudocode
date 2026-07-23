/*
 * XREFs of sub_140AABA70 @ 0x140AABA70
 * Callers:
 *     sub_140AAC1BC @ 0x140AAC1BC (sub_140AAC1BC.c)
 *     sub_140AAD1C4 @ 0x140AAD1C4 (sub_140AAD1C4.c)
 *     sub_140AB1400 @ 0x140AB1400 (sub_140AB1400.c)
 * Callees:
 *     KeCancelTimer @ 0x140356EB0 (KeCancelTimer.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_140AABB44 @ 0x140AABB44 (sub_140AABB44.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 */

void __fastcall sub_140AABA70(_BOOL8 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax

  if ( byte_140CE1AE0 )
  {
    LOBYTE(a1) = 0;
    if ( (dword_140C0DF90 & 0x100000) != 0 )
      a1 = (dword_140C0DF90 & 0x1000) != 0;
    byte_140CE1AE0 = 0;
    if ( (dword_140C0DF90 & 0xC00) != 0xC00 && !a1 )
      KeCancelTimer(&stru_140CF7400);
    v1 = off_140C04450;
    v2 = *(_QWORD *)off_140C04450;
    if ( *((_UNKNOWN ***)off_140C04450 + 1) != &off_140C04450 )
LABEL_15:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_QWORD **)(v2 + 8) != v1 )
        goto LABEL_15;
      off_140C04450 = (_UNKNOWN *)v2;
      *(_QWORD *)(v2 + 8) = &off_140C04450;
      if ( v1 == &off_140C04450 )
        break;
      sub_140AAD3E0(v1[6]);
      sub_1403A8CB4((__int64)v1);
      v1 = off_140C04450;
      if ( *((_UNKNOWN ***)off_140C04450 + 1) != &off_140C04450 )
        goto LABEL_15;
      v2 = *(_QWORD *)off_140C04450;
    }
    dword_140C04460 = 0;
    if ( byte_140C0DE54 )
      sub_140AABB44(a1);
  }
}
