/*
 * XREFs of sub_1408083DC @ 0x1408083DC
 * Callers:
 *     sub_14074F950 @ 0x14074F950 (sub_14074F950.c)
 *     sub_140A494E8 @ 0x140A494E8 (sub_140A494E8.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224C34 @ 0x140224C34 (sub_140224C34.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402D5F7C @ 0x1402D5F7C (sub_1402D5F7C.c)
 *     sub_1402D6004 @ 0x1402D6004 (sub_1402D6004.c)
 *     sub_140369AB0 @ 0x140369AB0 (sub_140369AB0.c)
 *     sub_14056A8A8 @ 0x14056A8A8 (sub_14056A8A8.c)
 *     sub_1405CFC70 @ 0x1405CFC70 (sub_1405CFC70.c)
 */

void __fastcall sub_1408083DC(int *a1)
{
  char v2; // r8
  int v3; // r9d
  int v4; // ecx

  _InterlockedCompareExchange64(&qword_140C1FB88, qword_140D05110, 0LL);
  if ( sub_140369AB0() && byte_140C22451 )
    v2 = 1;
  if ( !v3 )
  {
    if ( !v2 )
      goto LABEL_6;
    goto LABEL_12;
  }
  if ( v2 )
  {
LABEL_12:
    if ( byte_140D068F9 )
    {
      sub_14056A8A8(qword_140C1FB88);
      byte_140D068F9 = 0;
      sub_1402D5F7C(0);
      if ( !byte_140C23414 )
        sub_1402D5F7C(1u);
    }
    goto LABEL_6;
  }
  if ( !byte_140D068F9 )
  {
    sub_14056A8A8((unsigned int)(10000000 * v3));
    byte_140D068F9 = 1;
    sub_1402D6004(0);
    sub_1402D6004(1u);
  }
LABEL_6:
  sub_140224E90(&qword_140C23EE0);
  sub_140224C34();
  sub_140224C00((__int64 *)&qword_140C23EE0);
  v4 = *a1;
  if ( *a1 )
  {
    if ( !dword_140D06A80 )
    {
      byte_140C23908 |= 2u;
      byte_140D068FA = 1;
      dword_140D06C08 = v4;
LABEL_19:
      sub_1405CFC70();
    }
  }
  else if ( dword_140D06A80 && byte_140D068FA )
  {
    dword_140D06C08 = 0;
    byte_140C23908 &= ~2u;
    byte_140D068FA = 0;
    goto LABEL_19;
  }
}
