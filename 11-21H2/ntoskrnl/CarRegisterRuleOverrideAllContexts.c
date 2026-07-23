/*
 * XREFs of CarRegisterRuleOverrideAllContexts @ 0x140603ED0
 * Callers:
 *     CarRegisterRuleOverridesAllContexts @ 0x140603FA0 (CarRegisterRuleOverridesAllContexts.c)
 * Callees:
 *     sub_1406035C4 @ 0x1406035C4 (sub_1406035C4.c)
 *     CarDeregisterRuleOverride @ 0x140603890 (CarDeregisterRuleOverride.c)
 *     sub_1406038FC @ 0x1406038FC (sub_1406038FC.c)
 */

__int64 __fastcall CarRegisterRuleOverrideAllContexts(__int64 a1, __int64 a2)
{
  int v3; // ebx
  int v4; // edx
  __int64 v5; // rcx
  __int64 *v6; // rsi
  _OWORD *v7; // rcx
  __int64 *v8; // rcx
  __int64 **v9; // r8
  _OWORD *v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = 0LL;
  v3 = a1;
  if ( a2 )
  {
    CarDeregisterRuleOverride(a1);
    v6 = sub_1406038FC(v5, v3);
    if ( v6 )
    {
      v4 = sub_1406035C4(&v11);
      if ( v4 >= 0 )
      {
        v7 = v11;
        *v11 = *(_OWORD *)a2;
        v7[1] = *(_OWORD *)(a2 + 16);
        v7[2] = *(_OWORD *)(a2 + 32);
        *((_QWORD *)v7 + 6) = *(_QWORD *)(a2 + 48);
        *((_DWORD *)v7 + 14) = *(_DWORD *)(a2 + 56);
        *((_DWORD *)v7 + 15) = *(_DWORD *)a2 | ((v3 << 16) + 0x10000);
        v8 = (__int64 *)(v7 + 4);
        v9 = (__int64 **)v6[10];
        if ( *v9 != v6 + 9 )
          __fastfail(3u);
        *v8 = (__int64)(v6 + 9);
        v8[1] = (__int64)v9;
        *v9 = v8;
        v6[10] = (__int64)v8;
      }
    }
    else
    {
      return (unsigned int)-1073741772;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
