/*
 * XREFs of sub_140AAB07C @ 0x140AAB07C
 * Callers:
 *     sub_140AAB038 @ 0x140AAB038 (sub_140AAB038.c)
 * Callees:
 *     MmFreePagesFromMdl @ 0x140221A10 (MmFreePagesFromMdl.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     sub_140AAB1AC @ 0x140AAB1AC (sub_140AAB1AC.c)
 *     sub_140AAB7B4 @ 0x140AAB7B4 (sub_140AAB7B4.c)
 *     sub_140AABB44 @ 0x140AABB44 (sub_140AABB44.c)
 *     sub_140AABB9C @ 0x140AABB9C (sub_140AABB9C.c)
 *     sub_140AACA74 @ 0x140AACA74 (sub_140AACA74.c)
 *     sub_140AAD3E0 @ 0x140AAD3E0 (sub_140AAD3E0.c)
 *     sub_140AADBBC @ 0x140AADBBC (sub_140AADBBC.c)
 */

void __fastcall sub_140AAB07C(__int64 a1)
{
  _QWORD *v2; // rbx
  __int64 v3; // rax
  struct _MDL *v4; // rcx

  if ( (dword_140C0DF90 & 0x100000) != 0 )
  {
    v2 = off_140C04450;
    v3 = *(_QWORD *)off_140C04450;
    if ( *((_UNKNOWN ***)off_140C04450 + 1) != &off_140C04450 )
LABEL_15:
      __fastfail(3u);
    while ( 1 )
    {
      if ( *(_QWORD **)(v3 + 8) != v2 )
        goto LABEL_15;
      off_140C04450 = (_UNKNOWN *)v3;
      *(_QWORD *)(v3 + 8) = &off_140C04450;
      if ( v2 == &off_140C04450 )
        break;
      sub_140AAD3E0(v2[6]);
      sub_1403A8CB4((__int64)v2);
      v2 = off_140C04450;
      if ( *((_UNKNOWN ***)off_140C04450 + 1) != &off_140C04450 )
        goto LABEL_15;
      v3 = *(_QWORD *)off_140C04450;
    }
    dword_140C04460 = 0;
    if ( byte_140C0DE54 )
      sub_140AABB44();
    sub_140AAB7B4();
    sub_140AACA74();
    sub_140AABB9C();
    if ( *(_QWORD *)(a1 + 16) )
    {
      sub_140AAB1AC(1LL, 0LL, 0LL, 0LL);
      MmFreePagesFromMdl(*(PMDL *)(a1 + 8));
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
    dword_140C0DF90 &= 0xFFEFF7FD;
    qword_140C0E050 = qword_140C548C0;
    qword_140C0E058 = qword_140C548B8;
    qword_140C0DF40 = 0LL;
    xmmword_140C0DF20 = 0LL;
    xmmword_140C0DF30 = 0LL;
    sub_140AADBBC(1LL);
  }
  else
  {
    v4 = *(struct _MDL **)(a1 + 8);
    if ( v4 )
    {
      MmFreePagesFromMdl(v4);
      ExFreePoolWithTag(*(PVOID *)(a1 + 8), 0);
    }
  }
}
