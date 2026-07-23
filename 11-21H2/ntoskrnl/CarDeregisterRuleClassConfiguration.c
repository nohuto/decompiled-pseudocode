/*
 * XREFs of CarDeregisterRuleClassConfiguration @ 0x1406037F0
 * Callers:
 *     CarRegisterRuleClassConfiguration @ 0x140603D10 (CarRegisterRuleClassConfiguration.c)
 *     sub_1406045C8 @ 0x1406045C8 (sub_1406045C8.c)
 * Callees:
 *     sub_140603744 @ 0x140603744 (sub_140603744.c)
 *     sub_1406038FC @ 0x1406038FC (sub_1406038FC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall CarDeregisterRuleClassConfiguration(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *v2; // rdi
  _QWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rcx
  _QWORD *v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = sub_1406038FC(a1, (unsigned int)a1);
  v2 = (_QWORD *)v1;
  if ( v1 )
  {
    v3 = (_QWORD *)(v1 + 88);
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
LABEL_11:
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    v6 = v2 + 9;
    while ( (_QWORD *)*v6 != v6 )
    {
      v7 = (_QWORD *)v2[10];
      if ( (_QWORD *)*v7 != v6 )
        goto LABEL_11;
      v8 = (_QWORD *)v7[1];
      if ( (_QWORD *)*v8 != v7 )
        goto LABEL_11;
      v2[10] = v8;
      *v8 = v6;
      v9 = v7 - 8;
      sub_140603744((void **)&v9);
    }
    ExFreePoolWithTag(v2, 0x4E726143u);
  }
}
