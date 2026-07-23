/*
 * XREFs of sub_1405BB8B4 @ 0x1405BB8B4
 * Callers:
 *     sub_1405B99AC @ 0x1405B99AC (sub_1405B99AC.c)
 *     sub_1409806C8 @ 0x1409806C8 (sub_1409806C8.c)
 * Callees:
 *     sub_14025247C @ 0x14025247C (sub_14025247C.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 */

char __fastcall sub_1405BB8B4(__int64 a1, _QWORD *a2, int a3)
{
  bool v3; // bl
  _QWORD *v6; // rdx
  _QWORD *v7; // rax

  v3 = 0;
  if ( a3 )
    sub_14025247C(a1, 1);
  v6 = *(_QWORD **)(a1 + 1264);
  if ( v6 )
  {
    while ( 1 )
    {
      if ( a2[3] > v6[4] || a2[4] >= v6[3] )
      {
        v7 = (_QWORD *)v6[1];
        if ( !v7 )
        {
          v3 = 1;
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v6, v3, a2);
        }
      }
      else
      {
        v7 = (_QWORD *)*v6;
        if ( !*v6 )
          return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v6, v3, a2);
      }
      v6 = v7;
    }
  }
  return RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 1264), (unsigned __int64)v6, v3, a2);
}
