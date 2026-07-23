/*
 * XREFs of sub_1402DBFAC @ 0x1402DBFAC
 * Callers:
 *     sub_140296110 @ 0x140296110 (sub_140296110.c)
 * Callees:
 *     sub_140287F30 @ 0x140287F30 (sub_140287F30.c)
 *     sub_1402DBF3C @ 0x1402DBF3C (sub_1402DBF3C.c)
 *     sub_1402DC05C @ 0x1402DC05C (sub_1402DC05C.c)
 *     sub_1402DC098 @ 0x1402DC098 (sub_1402DC098.c)
 */

__int64 __fastcall sub_1402DBFAC(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v5; // ebp
  unsigned int v6; // edi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  _QWORD *v9; // rbx
  char v11; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0;
  v5 = sub_140287F30(a2);
  if ( v5 == -1 )
    return 0LL;
  v6 = 1;
  if ( *(_BYTE *)(a1 + 586) == 1 && v5 != (unsigned int)sub_140287F30(*(_QWORD *)(a1 + 544)) )
    return 0LL;
  if ( (*(_DWORD *)(a1 + 116) & 0x800) != 0
    || *(char *)(a1 + 1385) < 0
    || *(_NT_TIB **)(a1 + 40) != KeGetPcr()[1].NtTib.Self )
  {
    return 0LL;
  }
  if ( a3 )
  {
    sub_1402DC098(&v11);
    v7 = sub_1402DBF3C(a3);
    LOBYTE(v8) = v11;
    v9 = v7;
    sub_1402DC05C(v8);
    return v9 != 0LL;
  }
  return v6;
}
