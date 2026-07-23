/*
 * XREFs of CarDeregisterRuleOverride @ 0x140603890
 * Callers:
 *     CarRegisterRuleOverrideAllContexts @ 0x140603ED0 (CarRegisterRuleOverrideAllContexts.c)
 * Callees:
 *     sub_140603744 @ 0x140603744 (sub_140603744.c)
 *     sub_1406038FC @ 0x1406038FC (sub_1406038FC.c)
 *     sub_140603950 @ 0x140603950 (sub_140603950.c)
 */

void __fastcall CarDeregisterRuleOverride(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v2; // r9d
  _QWORD *v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  void *v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v1 = sub_1406038FC(a1, (unsigned int)a1);
  if ( v1 )
  {
    v3 = (_QWORD *)sub_140603950(v1 + 72, v2);
    v7 = v3;
    if ( v3 )
    {
      v4 = v3 + 8;
      v5 = *v4;
      if ( *(_QWORD **)(*v4 + 8LL) != v4 || (v6 = (_QWORD *)v4[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
    }
  }
  sub_140603744(&v7);
}
