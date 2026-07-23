/*
 * XREFs of sub_140522930 @ 0x140522930
 * Callers:
 *     sub_140522AA0 @ 0x140522AA0 (sub_140522AA0.c)
 *     sub_140522BA0 @ 0x140522BA0 (sub_140522BA0.c)
 *     sub_140522D70 @ 0x140522D70 (sub_140522D70.c)
 *     sub_1405230C0 @ 0x1405230C0 (sub_1405230C0.c)
 *     sub_140523100 @ 0x140523100 (sub_140523100.c)
 *     sub_14052314C @ 0x14052314C (sub_14052314C.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_140522930(__int64 a1, int a2, int a3)
{
  ULONG_PTR *v4; // rax
  ULONG_PTR *v5; // r8

  if ( a1 )
  {
    v4 = (ULONG_PTR *)qword_140C4E4E0;
    while ( v4 != &qword_140C4E4E0 )
    {
      v5 = v4;
      v4 = (ULONG_PTR *)*v4;
      if ( v5[9] == a1 )
      {
        *((_DWORD *)v5 + 69) = a2;
        *((_DWORD *)v5 + 70) = a3;
        return;
      }
    }
  }
}
