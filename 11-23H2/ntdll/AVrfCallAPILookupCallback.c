/*
 * XREFs of AVrfCallAPILookupCallback @ 0x1800E4F50
 * Callers:
 *     LdrGetProcedureAddressForCaller @ 0x180021FB0 (LdrGetProcedureAddressForCaller.c)
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 *     LdrpResolveDelayloadAddress @ 0x1800DA738 (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     LdrpFindLoadedDllByAddress @ 0x180008AE0 (LdrpFindLoadedDllByAddress.c)
 *     LdrpDereferenceModule @ 0x18002251C (LdrpDereferenceModule.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     RtlGuardGrantSuppressedCallAccess @ 0x18010B820 (RtlGuardGrantSuppressedCallAccess.c)
 */

__int64 __fastcall AVrfCallAPILookupCallback(unsigned __int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  unsigned __int64 v12[3]; // [rsp+30h] [rbp-18h] BYREF

  v9 = 0LL;
  if ( (int)LdrpFindLoadedDllByAddress(a1, v12, 0LL) < 0 )
  {
    v9 = a1;
  }
  else
  {
    if ( v12[0] != LdrpNtDllDataTableEntry && (*(_DWORD *)(v12[0] + 104) & 0x400) == 0 )
      v9 = *(_QWORD *)(v12[0] + 48);
    LdrpDereferenceModule(v12[0]);
  }
  if ( v9 )
  {
    v10 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64, _QWORD))(__ROR8__(
                                                                                  AvrfpAPILookupCallbackRoutine,
                                                                                  64 - (MEMORY[0x7FFE0330] & 0x3Fu)) ^ MEMORY[0x7FFE0330]))(
            v9,
            a2,
            a3,
            a4);
    if ( v10 != a3 )
      RtlGuardGrantSuppressedCallAccess(a3, 1LL, v12);
  }
  else
  {
    v10 = a3;
  }
  *a5 = v10;
  return 0LL;
}
