/*
 * XREFs of sub_140695CF8 @ 0x140695CF8
 * Callers:
 *     sub_1407BA750 @ 0x1407BA750 (sub_1407BA750.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     sub_1402F89B0 @ 0x1402F89B0 (sub_1402F89B0.c)
 *     SeTokenIsAdmin @ 0x140695DA0 (SeTokenIsAdmin.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     sub_1407B3B60 @ 0x1407B3B60 (sub_1407B3B60.c)
 */

__int64 __fastcall sub_140695CF8(__int64 a1)
{
  void *v2; // rbx
  unsigned int v3; // edi
  char v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  v6 = 0;
  v5 = 0;
  v2 = (void *)sub_1407B3B60(a1, 1953654867LL, &v6, &v5, &v7, 0LL);
  v3 = 0;
  if ( SeTokenIsAdmin(v2) || SeSinglePrivilegeCheck(stru_140D3CA90, 1) )
    v3 = 1;
  if ( v6 == 1 )
  {
    sub_1402F89B0((signed __int64 *)(*(_QWORD *)(a1 + 544) + 1208LL), (unsigned __int64)v2, 0x74726853u);
  }
  else if ( v2 )
  {
    ObfDereferenceObjectWithTag(v2, 0x74726853u);
  }
  return v3;
}
