/*
 * XREFs of ?RequestViewHitTestSync@DWMInputRouter@@UEAAJUViewHitTestInfo@@PEAI@Z @ 0x1801BA2B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z @ 0x1801BA190 (-RequestViewHitTestHelper@DWMInputRouter@@IEAAXUViewHitTestInfo@@PEAI@Z.c)
 */

__int64 __fastcall DWMInputRouter::RequestViewHitTestSync(__int64 a1, __int128 *a2, _DWORD *a3)
{
  __int64 v3; // xmm1_8
  __int128 v5; // [rsp+20h] [rbp-28h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]

  v3 = *((_QWORD *)a2 + 2);
  v5 = *a2;
  v6 = v3;
  DWMInputRouter::RequestViewHitTestHelper(a1 - 32, &v5, a3);
  return 0LL;
}
