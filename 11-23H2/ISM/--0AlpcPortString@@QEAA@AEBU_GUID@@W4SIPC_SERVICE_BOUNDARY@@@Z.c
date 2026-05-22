/*
 * XREFs of ??0AlpcPortString@@QEAA@AEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@@Z @ 0x1800348FC
 * Callers:
 *     ?CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z @ 0x180034F38 (-CreateServerPort@AlpcPort@@SAJAEBU_GUID@@W4SIPC_SERVICE_BOUNDARY@@PEAXAEAPEAVSipcPort@@@Z.c)
 * Callees:
 *     ??$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ @ 0x1800348CC (--$swprintf_s@$0FC@@@YAHAEAY0FC@GPEBGZZ.c)
 *     ?FailFast_Unexpected@in1diag0@details@wil@@YAXXZ @ 0x180119E58 (-FailFast_Unexpected@in1diag0@details@wil@@YAXXZ.c)
 */

__int64 __fastcall AlpcPortString::AlpcPortString(__int64 a1, unsigned int *a2, int a3)
{
  int v3; // eax
  int v6; // r10d
  int v7; // r11d
  int v8; // esi
  int v9; // ebp
  int v10; // r14d
  int v11; // r15d
  int v12; // r12d
  int v13; // r13d
  __int64 SessionId; // r8
  const wchar_t *v15; // rdx
  int v16; // eax
  wil::details::in1diag0 *v17; // rcx
  int v19; // [rsp+68h] [rbp-40h]
  unsigned int v20; // [rsp+B0h] [rbp+8h]

  v3 = *((unsigned __int16 *)a2 + 2);
  v6 = *((unsigned __int8 *)a2 + 14);
  v7 = *((unsigned __int8 *)a2 + 13);
  v8 = *((unsigned __int8 *)a2 + 12);
  v9 = *((unsigned __int8 *)a2 + 11);
  v10 = *((unsigned __int8 *)a2 + 10);
  v11 = *((unsigned __int8 *)a2 + 9);
  v12 = *((unsigned __int8 *)a2 + 8);
  v13 = *((unsigned __int16 *)a2 + 3);
  v20 = *a2;
  if ( a3 == 1 )
  {
    SessionId = NtCurrentPeb()->SessionId;
    v3 = *((unsigned __int16 *)a2 + 2);
  }
  else
  {
    SessionId = 0LL;
  }
  v19 = *((unsigned __int8 *)a2 + 15);
  v15 = L"\\Sessions\\%lu\\BaseNamedObjects\\SIPC_{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}";
  if ( a3 != 1 )
    v15 = L"%.0lu\\BaseNamedObjects\\SIPC_{%08lX-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}";
  v16 = swprintf_s<82>((wchar_t *)(a1 + 16), v15, SessionId, v20, v3, v13, v12, v11, v10, v9, v8, v7, v6, v19);
  if ( v16 <= 0 )
    wil::details::in1diag0::FailFast_Unexpected(v17);
  *(_QWORD *)(a1 + 8) = a1 + 16;
  *(_WORD *)a1 = 2 * v16;
  *(_WORD *)(a1 + 2) = 164;
  return a1;
}
