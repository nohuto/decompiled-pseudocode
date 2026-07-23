/*
 * XREFs of sub_140611170 @ 0x140611170
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 *     IoSetShareAccess @ 0x14074B8F0 (IoSetShareAccess.c)
 */

void __fastcall sub_140611170(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rax
  __int64 *i; // rbx
  __int64 v16; // rdx
  _QWORD **v17; // rdi
  _QWORD *j; // rbx
  __int128 v19; // [rsp+20h] [rbp-38h] BYREF
  __int128 v20; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v19 = 0LL;
  v20 = 0LL;
  v10 = sub_140604844(213);
  if ( !v10 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v9 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v10 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v13 = *((_DWORD *)v10 + 3);
  if ( (v13 & 0x18) == 0 )
  {
    if ( (v13 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v14 = sub_140628C98(v9, v8, v11, v12);
    goto LABEL_12;
  }
  v14 = retaddr;
LABEL_12:
  *(_QWORD *)&v19 = v14;
LABEL_13:
  *((_QWORD *)&v20 + 1) = __PAIR64__(DesiredAccess, DesiredShareAccess);
  *(_QWORD *)&v20 = FileObject;
  *((_QWORD *)&v19 + 1) = ShareAccess;
  for ( i = (__int64 *)v10[4]; i != v10 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v19, v8);
  }
LABEL_18:
  IoSetShareAccess(DesiredAccess, DesiredShareAccess, FileObject, ShareAccess);
  if ( v10 )
  {
    v17 = (_QWORD **)(v10 + 6);
    for ( j = *v17; j != v17; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        sub_14042A5E0(&v19, v16);
    }
  }
}
