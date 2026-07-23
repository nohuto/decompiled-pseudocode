/*
 * XREFs of sub_140AF7328 @ 0x140AF7328
 * Callers:
 *     sub_140768EA8 @ 0x140768EA8 (sub_140768EA8.c)
 *     sub_140B114E8 @ 0x140B114E8 (sub_140B114E8.c)
 * Callees:
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_14081E99C @ 0x14081E99C (sub_14081E99C.c)
 *     sub_14081EA70 @ 0x14081EA70 (sub_14081EA70.c)
 *     sub_140820280 @ 0x140820280 (sub_140820280.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AF7328(__int64 a1, int a2)
{
  int v3; // r14d
  char *v4; // rdi
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  void *v8; // rbx
  _DWORD *v9; // rbx
  _DWORD *v10; // rsi
  void *v11; // [rsp+50h] [rbp+18h] BYREF

  v3 = a1;
  if ( qword_140D686A0 )
  {
    if ( qword_140D68680 )
    {
      v11 = 0LL;
      v4 = sub_14081E99C(a1, a1, a2, &v11);
      if ( v4 )
      {
        v8 = v11;
        if ( v11 )
          ExFreePoolWithTag(qword_140D68680, 0);
        qword_140D68680 = v8;
        v9 = *(_DWORD **)(qword_140D686A0 + 544);
        sub_14076FB70(qword_140D686A0, 64);
        sub_140820280(1u, *(_QWORD *)(qword_140D686A0 + 32));
        *(_QWORD *)(qword_140D686A0 + 544) = sub_14081EA70(v9, v4);
        if ( v9 )
          ExFreePoolWithTag(v9, 0);
      }
    }
  }
  v5 = 0LL;
LABEL_5:
  v6 = qword_140D68698;
  while ( v6 )
  {
    v10 = (_DWORD *)v6[2];
    if ( v10[1] == v3 && v10[2] == a2 )
    {
      sub_140820280(4u, v6[1]);
      if ( !v6[1] )
        ExFreePoolWithTag(v10, 0);
      if ( v5 )
        *v5 = *v6;
      else
        qword_140D68698 = (PVOID)*v6;
      ExFreePoolWithTag(v6, 0);
      if ( !v5 )
        goto LABEL_5;
      v6 = (_QWORD *)*v5;
    }
    else
    {
      v5 = v6;
      v6 = (_QWORD *)*v6;
    }
  }
  return 0LL;
}
