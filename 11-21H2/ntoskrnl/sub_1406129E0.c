/*
 * XREFs of sub_1406129E0 @ 0x1406129E0
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x1402B90A0 (KeDelayExecutionThread.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140604844 @ 0x140604844 (sub_140604844.c)
 *     sub_140628C98 @ 0x140628C98 (sub_140628C98.c)
 */

NTSTATUS __fastcall sub_1406129E0(KPROCESSOR_MODE a1, BOOLEAN a2, LARGE_INTEGER *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 *v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // eax
  __int64 v12; // rax
  __int64 *i; // rbx
  NTSTATUS result; // eax
  __int64 v15; // rdx
  _QWORD **v16; // rdi
  _QWORD *v17; // rbx
  __int128 v18; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  __int64 retaddr; // [rsp+58h] [rbp+18h]

  v19 = 0LL;
  v18 = 0LL;
  v8 = sub_140604844(245);
  if ( !v8 )
    goto LABEL_18;
  if ( dword_140C1B2A0
    && ((qword_140D01450 & 0xFFA9F6E6) != 0 || (v7 = HIDWORD(qword_140D01450), (qword_140D01450 & 0x200000000LL) != 0))
    || (qword_140D01450 & 0x800000000LL) == 0 )
  {
    if ( (*((_DWORD *)v8 + 3) & 0x20) != 0 )
      goto LABEL_13;
    goto LABEL_11;
  }
  v11 = *((_DWORD *)v8 + 3);
  if ( (v11 & 0x18) == 0 )
  {
    if ( (v11 & 4) == 0 )
      goto LABEL_13;
LABEL_11:
    v12 = sub_140628C98(v7, v6, v9, v10);
    goto LABEL_12;
  }
  v12 = retaddr;
LABEL_12:
  *(_QWORD *)&v18 = v12;
LABEL_13:
  BYTE1(v19) = a1;
  LOBYTE(v19) = a2;
  *((_QWORD *)&v18 + 1) = a3;
  for ( i = (__int64 *)v8[4]; i != v8 + 4; i = (__int64 *)*i )
  {
    if ( i != (__int64 *)16 )
      sub_14042A5E0(&v18, v6);
  }
LABEL_18:
  result = KeDelayExecutionThread(a1, a2, a3);
  HIDWORD(v19) = result;
  if ( v8 )
  {
    v16 = (_QWORD **)(v8 + 6);
    v17 = *v16;
    if ( *v16 != v16 )
    {
      do
      {
        if ( v17 != (_QWORD *)16 )
          sub_14042A5E0(&v18, v15);
        v17 = (_QWORD *)*v17;
      }
      while ( v17 != v16 );
      return HIDWORD(v19);
    }
  }
  return result;
}
