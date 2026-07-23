/*
 * XREFs of sub_14076BB84 @ 0x14076BB84
 * Callers:
 *     sub_14076BB10 @ 0x14076BB10 (sub_14076BB10.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_14055F84C @ 0x14055F84C (sub_14055F84C.c)
 *     sub_14076BBF4 @ 0x14076BBF4 (sub_14076BBF4.c)
 *     sub_140775110 @ 0x140775110 (sub_140775110.c)
 *     sub_140775698 @ 0x140775698 (sub_140775698.c)
 *     sub_1407756F4 @ 0x1407756F4 (sub_1407756F4.c)
 *     sub_140942D5C @ 0x140942D5C (sub_140942D5C.c)
 */

__int64 __fastcall sub_14076BB84(__int64 a1, int a2)
{
  __int64 v2; // rbx
  _QWORD **v4; // rax
  _QWORD *v5; // rbx
  _QWORD *v6; // rdi
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v2 = *(_QWORD *)(a1 + 32);
  sub_1407756F4(0LL);
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_5;
    v4 = (_QWORD **)sub_14076BBF4(v2);
  }
  else
  {
    v4 = (_QWORD **)sub_140775110(v2);
  }
  v5 = *v4;
  v6 = v4;
  while ( v5 != v6 )
  {
    v8 = sub_14055F84C((__int64)v5, a2);
    v5 = (_QWORD *)*v5;
    if ( a2 )
    {
      v10 = *(_QWORD *)(v8 + 40);
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(v8 + 32);
      v10 = 0LL;
    }
    sub_140942D5C(v10, v9);
  }
LABEL_5:
  ExReleaseResourceLite(&stru_140C46AC0);
  return sub_140775698(0LL);
}
