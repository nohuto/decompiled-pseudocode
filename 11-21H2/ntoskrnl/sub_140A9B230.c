/*
 * XREFs of sub_140A9B230 @ 0x140A9B230
 * Callers:
 *     sub_140A8B190 @ 0x140A8B190 (sub_140A8B190.c)
 *     sub_140A8B588 @ 0x140A8B588 (sub_140A8B588.c)
 *     sub_140A9A640 @ 0x140A9A640 (sub_140A9A640.c)
 * Callees:
 *     sub_1402D82D0 @ 0x1402D82D0 (sub_1402D82D0.c)
 *     sub_1402D8304 @ 0x1402D8304 (sub_1402D8304.c)
 *     sub_1402D8360 @ 0x1402D8360 (sub_1402D8360.c)
 *     RtlEnumerateGenericTableAvl @ 0x1402DE820 (RtlEnumerateGenericTableAvl.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140A9B230(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // ebp
  __int64 i; // rbx
  __int64 v8; // rdi
  BOOLEAN j; // dl
  PVOID v10; // rax

  sub_1402D8360(a2);
  v6 = dword_140C1B238;
  for ( i = 0LL; (unsigned int)i < v6; i = (unsigned int)(i + 1) )
  {
    v8 = 192 * i;
    sub_1402D8304(192 * i + qword_140C1B230, a2);
    for ( j = 1; ; j = 0 )
    {
      v10 = RtlEnumerateGenericTableAvl((PRTL_AVL_TABLE)(v8 + qword_140C1B230), j);
      if ( !v10 )
        break;
      if ( !(unsigned int)sub_14042A5E0(v10, a4) )
        return;
    }
    sub_1402D82D0(v8 + qword_140C1B230, a2);
  }
}
