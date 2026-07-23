/*
 * XREFs of LdrpApplyPatchImage @ 0x1800DFC84
 * Callers:
 *     LdrpLoadDllInternal @ 0x180028E74 (LdrpLoadDllInternal.c)
 *     LdrpInitializeNode @ 0x18006D4F4 (LdrpInitializeNode.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x1800226FC (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x180022DE0 (LdrpGetProcedureAddress.c)
 *     LdrpFindLoadedDllByHandle @ 0x18002C1CC (LdrpFindLoadedDllByHandle.c)
 *     __security_check_cookie @ 0x18008E790 (__security_check_cookie.c)
 *     ZwManageHotPatch @ 0x1800A10E0 (ZwManageHotPatch.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A2AD0 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DBBA4 (LdrpLogEtwHotPatchStatus.c)
 */

__int64 __fastcall LdrpApplyPatchImage(__int64 a1)
{
  char *v2; // r15
  unsigned __int64 v3; // rcx
  bool v4; // al
  int v5; // r8d
  _QWORD *v6; // r14
  int ProcedureAddress; // edi
  int v8; // edx
  int v10; // eax
  int v11; // eax
  PVOID BaseAddress; // [rsp+38h] [rbp-48h] BYREF
  char *v13; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+48h] [rbp-38h]
  __int64 v15; // [rsp+50h] [rbp-30h]
  __int64 v16; // [rsp+58h] [rbp-28h]
  __int64 v17; // [rsp+60h] [rbp-20h]
  int v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+6Ch] [rbp-14h]

  BaseAddress = 0LL;
  v2 = 0LL;
  v3 = *(_QWORD *)(a1 + 184);
  v13 = 0LL;
  LdrpFindLoadedDllByHandle(v3, (__int64 *)&BaseAddress, 0LL);
  v4 = LdrInitState < 3 || *(_DWORD *)(a1 + 276) == 1;
  v5 = *(_DWORD *)(a1 + 304);
  v6 = BaseAddress;
  if ( v5 != 2 && !v4 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(a1 + 48), "__PatchMainCallout__", 0, &v13);
    if ( ProcedureAddress == -1073741267 )
      goto LABEL_14;
    v19 = 0LL;
    v2 = v13;
    v5 = *(_DWORD *)(a1 + 304);
    v18 = 1;
  }
  v14 = 1LL;
  v15 = -1LL;
  v8 = 0;
  v16 = v6[6];
  v17 = *(_QWORD *)(a1 + 48);
  if ( !v2 )
  {
    HIDWORD(v14) = (v5 == 1) | 2;
    ProcedureAddress = ZwManageHotPatch();
    if ( ProcedureAddress < 0 )
    {
      if ( *(_DWORD *)(a1 + 304) != 1 )
        goto LABEL_14;
      goto LABEL_11;
    }
    *(_DWORD *)(a1 + 304) = 2;
    goto LABEL_13;
  }
  if ( v5 == 1 )
  {
    HIDWORD(v14) = 1;
    ProcedureAddress = ZwManageHotPatch();
    if ( ProcedureAddress < 0 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 304) = 4;
      goto LABEL_14;
    }
    *(_DWORD *)(a1 + 304) = 2;
    LODWORD(v19) = 0;
    ProcedureAddress = ((__int64 (__fastcall *)(int *, __int64))v2)(&v18, 12LL);
    if ( ProcedureAddress < 0 )
      goto LABEL_14;
    v8 = HIDWORD(v14);
  }
  HIDWORD(v14) = v8 & 0xFFFFFFFC | 2;
  if ( (int)ZwManageHotPatch() >= 0 )
  {
    LODWORD(v19) = 1;
    v11 = ((__int64 (__fastcall *)(int *, __int64))v2)(&v18, 12LL);
    ProcedureAddress = v11;
    if ( v11 < 0 )
    {
      LdrpLogEtwHotPatchStatus(
        (unsigned __int16 *)(LdrpImageEntry + 88),
        (__int64)v6,
        (unsigned __int16 *)(a1 + 72),
        v11,
        6);
      __fastfail(0x44u);
    }
LABEL_13:
    *((_DWORD *)v6 + 76) = 3;
    v6[37] = *(_QWORD *)(a1 + 48);
    goto LABEL_14;
  }
  LODWORD(v19) = 2;
  v10 = ((__int64 (__fastcall *)(int *, __int64))v2)(&v18, 12LL);
  ProcedureAddress = v10;
  if ( v10 < 0 )
  {
    LdrpLogEtwHotPatchStatus(
      (unsigned __int16 *)(LdrpImageEntry + 88),
      (__int64)v6,
      (unsigned __int16 *)(a1 + 72),
      v10,
      7);
    __fastfail(0x44u);
  }
  *((_DWORD *)v6 + 76) = 4;
LABEL_14:
  LdrpLogEtwHotPatchStatus(
    (unsigned __int16 *)(LdrpImageEntry + 88),
    (__int64)v6,
    (unsigned __int16 *)(a1 + 72),
    ProcedureAddress,
    4);
  if ( v6 )
    LdrpDereferenceModule((char *)v6);
  return (unsigned int)ProcedureAddress;
}
