/*
 * XREFs of ndisBuildMonitoringLwfBindings @ 0x1C0130978
 * Callers:
 *     ?ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z @ 0x1C0130784 (-ndisBuildBindings@@YAJPEBU_GUID@@AEAUBindStack@Ndis@@@Z.c)
 * Callees:
 *     ?AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z @ 0x1C010F0B8 (-AddStaticFilterBinding@BindStack@Ndis@@QEAAJAEBU_GUID@@K@Z.c)
 *     ndisIsLwfBindable @ 0x1C0130D38 (ndisIsLwfBindable.c)
 *     ndisIsLwfBindingEnabled @ 0x1C0130D84 (ndisIsLwfBindingEnabled.c)
 *     ndisIsLwfBindingEnabled_0 @ 0x1C0130E28 (ndisIsLwfBindingEnabled_0.c)
 */

__int64 __fastcall ndisBuildMonitoringLwfBindings(__int64 a1, Ndis::BindStack *a2, __int64 a3, unsigned int a4)
{
  _QWORD *v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v9; // rsi
  __int64 v10; // r12
  const struct _GUID *v11; // rdi
  __int64 result; // rax
  _BYTE v13[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = qword_1C00EC738;
  v5 = 0LL;
  v9 = 0LL;
  v10 = *((unsigned int *)qword_1C00EC738 + 15);
  while ( v5 != v10 )
  {
    if ( v5 >= *((unsigned int *)v4 + 15) )
      __fastfail(5u);
    v11 = (const struct _GUID *)(v9 + v4[8]);
    if ( (unsigned __int8)ndisIsLwfBindable(a1, v11) )
    {
      v13[0] = 0;
      result = a3 ? ndisIsLwfBindingEnabled(a1, a3, v11, v13) : ndisIsLwfBindingEnabled_0(a1, v11, v13);
      if ( (_DWORD)result )
        return result;
      if ( v13[0] )
      {
        result = Ndis::BindStack::AddStaticFilterBinding(a2, v11, a4);
        if ( (_DWORD)result )
          return result;
      }
    }
    ++v5;
    v9 += 64LL;
  }
  return 0LL;
}
