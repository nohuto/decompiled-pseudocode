/*
 * XREFs of ?HampActIssueInvalidatedCallback@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@K@Z @ 0x18004D69C
 * Callers:
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x1800406C4 (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18004DC34 (-HampClientCompleteConnect@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 * Callees:
 *     ?HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD@@K@Z @ 0x180051260 (-HampSystemIssueActivityCallback@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_ACTIVITY_CALLBACK_PAYLOAD.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

void __fastcall HampActIssueInvalidatedCallback(__int64 a1, int a2, char a3)
{
  __int64 v6; // rax
  struct _HAM_CLIENT_CONTEXT *v7; // rcx
  _QWORD v8[2]; // [rsp+20h] [rbp-48h] BYREF
  int v9; // [rsp+30h] [rbp-38h]
  int v10; // [rsp+38h] [rbp-30h]

  memset_0(v8, 0, 0x40uLL);
  v6 = *(_QWORD *)(a1 + 40);
  v8[1] = 0LL;
  v7 = *(struct _HAM_CLIENT_CONTEXT **)(a1 + 64);
  v8[0] = v6;
  v9 = 2;
  v10 = a2;
  HampSystemIssueActivityCallback(v7, (struct _HAM_ACTIVITY_CALLBACK_PAYLOAD *)v8, a3 & 1);
}
