/*
 * XREFs of sub_140847F98 @ 0x140847F98
 * Callers:
 *     sub_140847F40 @ 0x140847F40 (sub_140847F40.c)
 * Callees:
 *     sub_1402AD030 @ 0x1402AD030 (sub_1402AD030.c)
 *     sub_14035F5AC @ 0x14035F5AC (sub_14035F5AC.c)
 *     sub_14035F5E8 @ 0x14035F5E8 (sub_14035F5E8.c)
 *     sub_1409D55B0 @ 0x1409D55B0 (sub_1409D55B0.c)
 *     sub_1409D56C0 @ 0x1409D56C0 (sub_1409D56C0.c)
 */

void __fastcall sub_140847F98(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  ULONG_PTR v5; // rax
  ULONG_PTR v6; // rdi
  struct _EX_RUNDOWN_REF *v7; // rax

  for ( i = 0; i < 0x400; ++i )
  {
    v5 = sub_14035F5AC(a2, i);
    v6 = v5;
    if ( v5 )
    {
      sub_1409D56C0(a1, v5);
      sub_1409D55B0(a1, v6, qword_140037968);
      v7 = (struct _EX_RUNDOWN_REF *)sub_14035F5E8(a2, i & 0x3FF);
      sub_1402AD030(v7 + 1);
    }
  }
}
