/*
 * XREFs of sub_140767F88 @ 0x140767F88
 * Callers:
 *     sub_1407655BC @ 0x1407655BC (sub_1407655BC.c)
 * Callees:
 *     sub_140767538 @ 0x140767538 (sub_140767538.c)
 *     sub_140767600 @ 0x140767600 (sub_140767600.c)
 *     sub_140767AEC @ 0x140767AEC (sub_140767AEC.c)
 *     sub_140768080 @ 0x140768080 (sub_140768080.c)
 */

__int64 __fastcall sub_140767F88(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  __int64 v8; // r14
  _BYTE *BugCheckParameter3; // rax
  _QWORD *v10; // rbx
  int v11; // edi

  v4 = *(_QWORD *)(a1 + 312);
  *a4 = 0LL;
  v8 = *(_QWORD *)(v4 + 40);
  BugCheckParameter3 = sub_140767538(a2);
  v10 = BugCheckParameter3;
  if ( !BugCheckParameter3 )
    return 3221225626LL;
  v11 = sub_140767AEC(v8, a2, 2LL, a3, (ULONG_PTR)BugCheckParameter3);
  if ( v11 < 0 )
  {
    sub_140767600(v10);
  }
  else
  {
    *a4 = v10;
    sub_140768080(v10);
  }
  return (unsigned int)v11;
}
