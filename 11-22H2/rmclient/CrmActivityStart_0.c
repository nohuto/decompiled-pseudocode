/*
 * XREFs of CrmActivityStart_0 @ 0x180008A20
 * Callers:
 *     CrmActivityStart @ 0x180008A10 (CrmActivityStart.c)
 * Callees:
 *     sub_1800153DC @ 0x1800153DC (sub_1800153DC.c)
 */

CLIENT_CALL_RETURN __fastcall CrmActivityStart_0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v8; // rsi
  CLIENT_CALL_RETURN result; // rax

  v8 = *(_QWORD *)(a1 + 16);
  if ( (unsigned int)sub_1800153DC(v8) )
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_1800209B0,
                       5u,
                       0LL,
                       *(_QWORD *)(a1 + 8),
                       *(_QWORD *)(v8 + 8),
                       a2,
                       a3,
                       a4).Pointer;
  else
    result.Simple = CrmpInProcActivityStart(*(_QWORD *)(a1 + 8), *(_QWORD *)(v8 + 16), a2, a3, a4);
  if ( a4 )
    return 0LL;
  return result;
}
