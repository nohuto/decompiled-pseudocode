/*
 * XREFs of sub_14094017C @ 0x14094017C
 * Callers:
 *     sub_140B28AB0 @ 0x140B28AB0 (sub_140B28AB0.c)
 * Callees:
 *     sub_1402DFBC4 @ 0x1402DFBC4 (sub_1402DFBC4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     sub_14078014C @ 0x14078014C (sub_14078014C.c)
 *     sub_14083EAEC @ 0x14083EAEC (sub_14083EAEC.c)
 *     sub_140944554 @ 0x140944554 (sub_140944554.c)
 */

__int64 __fastcall sub_14094017C(__int64 a1)
{
  HANDLE v1; // rdi
  int v2; // ebp
  int v3; // eax
  int v4; // esi
  HANDLE v5; // rbx
  int v6; // eax
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  void *v9; // [rsp+48h] [rbp-A0h] BYREF
  _WORD v10[64]; // [rsp+50h] [rbp-98h] BYREF

  v1 = 0LL;
  Handle = 0LL;
  v2 = a1;
  v9 = 0LL;
  v3 = sub_140944554(a1, &Handle);
  if ( v3 == -1073741275 )
  {
    v4 = 0;
LABEL_3:
    v5 = Handle;
    goto LABEL_10;
  }
  if ( v3 >= 0 )
  {
    v5 = Handle;
  }
  else
  {
    v6 = sub_14078014C(*(__int64 *)&qword_140D00AC0, 6, (__int64)&v9);
    v1 = v9;
    v4 = v6;
    if ( v6 < 0 )
      goto LABEL_3;
    v5 = v9;
  }
  v4 = sub_1402DFBC4(v10, 0x40uLL, 0LL, 0LL, 0x800u, L"%d", v2);
  if ( v4 >= 0 )
    v4 = sub_14083EAEC(*(__int64 *)&qword_140D00AC0, v5, (__int64)sub_140940080, (__int64)v10);
LABEL_10:
  if ( v5 && v5 != v1 )
    ZwClose(v5);
  return (unsigned int)v4;
}
