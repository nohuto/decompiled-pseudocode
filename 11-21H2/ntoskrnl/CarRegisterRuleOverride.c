/*
 * XREFs of CarRegisterRuleOverride @ 0x140603DE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1406035C4 @ 0x1406035C4 (sub_1406035C4.c)
 *     sub_1406038FC @ 0x1406038FC (sub_1406038FC.c)
 *     sub_14060392C @ 0x14060392C (sub_14060392C.c)
 */

__int64 __fastcall CarRegisterRuleOverride(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v5; // rsi
  int v8; // ebx
  __int64 *v9; // rax
  int v10; // r10d
  __int64 *v11; // rdi
  int v12; // ebx
  _QWORD *v13; // rdx
  __int64 **v14; // rcx
  __int64 **v15; // r8
  _QWORD *v17; // [rsp+20h] [rbp-18h] BYREF

  v5 = a3;
  v8 = a1;
  if ( (unsigned int)(a3 - 1) > 5 )
    return (unsigned int)-1073741811;
  v9 = sub_1406038FC(a1, a1);
  if ( v9 )
  {
    v11 = v9 + 9;
    v12 = a2 | ((v8 << 16) + 0x10000);
    v17 = sub_14060392C((_QWORD **)v9 + 9, v12);
    v13 = v17;
    if ( !v17 )
    {
      v10 = sub_1406035C4(&v17);
      if ( v10 < 0 )
        return (unsigned int)v10;
      v13 = v17;
      *(_DWORD *)v17 = a2;
      v14 = (__int64 **)(v13 + 8);
      *((_DWORD *)v13 + 15) = v12;
      v15 = (__int64 **)v11[1];
      if ( *v15 != v11 )
        __fastfail(3u);
      *v14 = v11;
      v13[9] = v15;
      *v15 = (__int64 *)v14;
      v11[1] = (__int64)v14;
    }
    LODWORD(v13[v5 + 1]) = a5;
    HIDWORD(v13[v5]) = a4;
    return (unsigned int)v10;
  }
  return (unsigned int)-1073741772;
}
