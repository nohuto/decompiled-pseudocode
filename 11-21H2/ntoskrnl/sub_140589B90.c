/*
 * XREFs of sub_140589B90 @ 0x140589B90
 * Callers:
 *     sub_1405C00C0 @ 0x1405C00C0 (sub_1405C00C0.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x140222100 (KeShouldYieldProcessor.c)
 *     sub_140235E10 @ 0x140235E10 (sub_140235E10.c)
 *     sub_14024A35C @ 0x14024A35C (sub_14024A35C.c)
 *     sub_1402CCC50 @ 0x1402CCC50 (sub_1402CCC50.c)
 *     sub_140589C40 @ 0x140589C40 (sub_140589C40.c)
 */

void __fastcall sub_140589B90(unsigned __int64 *a1, __int64 a2)
{
  __int64 v3; // r15
  int v5; // ebx
  _QWORD *v6; // rbp
  unsigned __int64 v7; // rax
  _QWORD *v8; // rdi
  int v9; // eax

  v3 = *(_QWORD *)(a2 + 72);
  if ( (*(_DWORD *)(a2 + 8) & 0x80000200) != 0 )
    v5 = 0;
  else
    v5 = sub_1402CCC50(128LL);
  v6 = (_QWORD *)*a1;
  if ( *a1 )
  {
    do
    {
      v7 = sub_14024A35C(v6);
      *a1 = v7;
      v8 = (_QWORD *)v7;
      v9 = sub_140235E10((__int64)v6);
      sub_140589C40((_DWORD)v6, qword_14001C780[v9], v3, v5, *(_DWORD *)(a2 + 8));
      v6 = v8;
    }
    while ( v8 && !KeShouldYieldProcessor() );
  }
}
