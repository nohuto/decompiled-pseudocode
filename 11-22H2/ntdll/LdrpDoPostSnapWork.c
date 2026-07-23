/*
 * XREFs of LdrpDoPostSnapWork @ 0x1800044CC
 * Callers:
 *     LdrpSnapModule @ 0x180023FF0 (LdrpSnapModule.c)
 * Callees:
 *     LdrpHandleTlsData @ 0x180004574 (LdrpHandleTlsData.c)
 *     LdrControlFlowGuardEnforcedWithExportSuppression @ 0x180021CB0 (LdrControlFlowGuardEnforcedWithExportSuppression.c)
 *     LdrpLogInternal @ 0x180026D80 (LdrpLogInternal.c)
 *     ZwProtectVirtualMemory @ 0x18009F7F0 (ZwProtectVirtualMemory.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800E02B4 (LdrpUnsuppressAddressTakenIat.c)
 */

NTSTATUS __fastcall LdrpDoPostSnapWork(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // ebx
  NTSTATUS result; // eax
  _QWORD *v5; // rax
  int v6; // eax
  ULONG v7; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = 0;
  if ( !*(_QWORD *)(a1 + 112)
    || (result = ZwProtectVirtualMemory(
                   (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                   (PVOID *)(a1 + 112),
                   (PSIZE_T)(a1 + 120),
                   *(_DWORD *)(a1 + 144),
                   &v7),
        v3 = result,
        result >= 0) )
  {
    v5 = *(_QWORD **)(a1 + 160);
    if ( v5 && *v5 != *(_QWORD *)(a1 + 152) )
      __fastfail(0x13u);
    if ( *(_WORD *)(v1 + 110) || (result = LdrpHandleTlsData(v1), v3 = result, result >= 0) )
    {
      if ( (unsigned int)LdrControlFlowGuardEnforcedWithExportSuppression() )
      {
        v6 = LdrpUnsuppressAddressTakenIat(*(PVOID *)(v1 + 48));
        v3 = v6;
        if ( v6 < 0 )
          LdrpLogInternal(
            (unsigned int)"minkernel\\ntdll\\ldrsnap.c",
            583,
            (unsigned int)"LdrpDoPostSnapWork",
            0,
            "LdrpDoPostSnapWork:Unable to unsuppress the export suppressed functions that are imported in the DLL based a"
            "t 0x%p.Status = 0x%x\n",
            *(const void **)(v1 + 48),
            v6);
      }
      return v3;
    }
  }
  return result;
}
