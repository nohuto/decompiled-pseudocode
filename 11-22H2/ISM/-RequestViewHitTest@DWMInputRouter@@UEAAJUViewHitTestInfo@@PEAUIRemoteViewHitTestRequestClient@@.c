/*
 * XREFs of ?RequestViewHitTest@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAUIRemoteViewHitTestRequestClient@@@Z @ 0x1801C7840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801C78C0 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 */

__int64 __fastcall DWMInputRouter::RequestViewHitTest(__int64 a1, __int128 *a2, __int64 *a3)
{
  __int64 v5; // xmm1_8
  __int64 v6; // rax
  __int64 v7; // xmm1_8
  __int128 v9; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+30h] [rbp-18h]

  v5 = *((_QWORD *)a2 + 2);
  v9 = *a2;
  v10 = v5;
  DWMInputRouter::RequestViewHitTestHelper(a1 - 32, &v9, a2);
  if ( a3 )
  {
    v6 = *a3;
    v7 = *((_QWORD *)a2 + 2);
    v9 = *a2;
    v10 = v7;
    (*(void (__fastcall **)(__int64 *, __int128 *))(v6 + 24))(a3, &v9);
  }
  return 0LL;
}
