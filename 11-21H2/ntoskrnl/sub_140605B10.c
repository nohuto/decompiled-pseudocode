/*
 * XREFs of sub_140605B10 @ 0x140605B10
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

void __fastcall sub_140605B10(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rax
  __int64 *i; // rbx
  __int64 v18; // rdx
  _QWORD **v19; // rdi
  _QWORD *j; // rbx
  __int128 v21; // [rsp+30h] [rbp-30h] BYREF
  __int128 v22; // [rsp+40h] [rbp-20h]
  __int128 v23; // [rsp+50h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+28h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v12 = sub_140604844(2);
  if ( !v12 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v11 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v12 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v15 = *((_DWORD *)v12 + 3);
  if ( (v15 & 0x18) == 0 )
  {
    if ( (v15 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v16 = sub_140628C98(v11, v10, v13, v14);
    goto LABEL_12;
  }
  v16 = retaddr;
LABEL_12:
  *(_QWORD *)&v21 = v16;
LABEL_13:
  HIDWORD(v21) = BytesToWrite;
  BYTE8(v21) = Retrying;
  *((_QWORD *)&v23 + 1) = FileObject;
  *(_QWORD *)&v23 = PostRoutine;
  *((_QWORD *)&v22 + 1) = Context1;
  *(_QWORD *)&v22 = Context2;
  for ( i = (__int64 *)v12[4]; i != v12 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v21, v10);
  }
LABEL_18:
  CcDeferWrite(FileObject, PostRoutine, Context1, Context2, BytesToWrite, Retrying);
  if ( v12 )
  {
    v19 = (_QWORD **)(v12 + 6);
    for ( j = *v19; j != v19; j = (_QWORD *)*j )
    {
      if ( j != (_QWORD *)16 )
        sub_14042A5E0(&v21, v18);
    }
  }
}
