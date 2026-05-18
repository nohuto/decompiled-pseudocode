/*
 * XREFs of sub_180060990 @ 0x180060990
 * Callers:
 *     sub_180061204 @ 0x180061204 (sub_180061204.c)
 *     sub_180099DE8 @ 0x180099DE8 (sub_180099DE8.c)
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_18004FA08 @ 0x18004FA08 (sub_18004FA08.c)
 *     sub_180060D9C @ 0x180060D9C (sub_180060D9C.c)
 */

__int64 __fastcall sub_180060990(__int64 a1)
{
  __int64 *v2; // rax
  _QWORD *v3; // r9
  unsigned __int64 v4; // rbx
  __int64 v5; // rcx
  _BYTE v7[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+28h] [rbp-10h]

  v2 = (__int64 *)sub_180060D9C(a1, v7);
  v4 = (unsigned int)sub_18004FA08(*v2, v3);
  if ( v8 )
    sub_180010530(v8);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !_bittest64(&v5, v4) )
    LODWORD(v4) = -1;
  return (unsigned int)v4;
}
