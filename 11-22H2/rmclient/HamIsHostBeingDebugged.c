/*
 * XREFs of HamIsHostBeingDebugged @ 0x18001DE10
 * Callers:
 *     <none>
 * Callees:
 *     unknown_libname_2 @ 0x180015130 (unknown_libname_2.c)
 */

CLIENT_CALL_RETURN __fastcall HamIsHostBeingDebugged(_QWORD *a1, __int64 a2, _BYTE *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  int v8; // edi
  int v9; // esi
  __int64 v10; // r14
  ULONG v11; // eax
  CLIENT_CALL_RETURN result; // rax
  __int64 v13; // rbx
  __int64 v14; // r14
  ULONG v15; // [rsp+30h] [rbp-78h]
  int v16; // [rsp+38h] [rbp-70h]
  int v17; // [rsp+40h] [rbp-68h]
  char v18; // [rsp+B0h] [rbp+8h] BYREF
  _BYTE *v19; // [rsp+C0h] [rbp+18h]
  CLIENT_CALL_RETURN v20; // [rsp+C8h] [rbp+20h]

  v19 = a3;
  v18 = 0;
  if ( unknown_libname_2((__int64)a1) )
  {
    v7 = *(_QWORD *)(v6 + 544);
    v8 = *(_DWORD *)(v6 + 536);
    v9 = *(_DWORD *)(v6 + 532);
    v10 = v6 + 464;
    v11 = RtlLengthSid((PSID)(v6 + 464));
    result.Simple = HampInProcIsHostBeingDebugged(a1[1], a2, v10, v11, v9, v8, v7, &v18);
  }
  else
  {
    v13 = *(_QWORD *)(v6 + 544);
    v14 = v6 + 464;
    v17 = *(_DWORD *)(v6 + 536);
    v16 = *(_DWORD *)(v6 + 532);
    v15 = RtlLengthSid((PSID)(v6 + 464));
    result.Pointer = NdrClientCall3(
                       (MIDL_STUBLESS_PROXY_INFO *)&stru_1800207A0,
                       0x10u,
                       0LL,
                       *a1,
                       a2,
                       v14,
                       v15,
                       v16,
                       v17,
                       v13,
                       &v18).Pointer;
    v20.Pointer = result.Pointer;
  }
  if ( SLODWORD(result.Simple) >= 0 )
    *a3 = v18;
  return result;
}
