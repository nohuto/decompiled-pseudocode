/*
 * XREFs of LdrpApplyPatchImage @ 0x1800E1480
 * Callers:
 *     LdrpLoadDllInternal @ 0x18003B940 (LdrpLoadDllInternal.c)
 *     LdrpInitializeNode @ 0x1800732F4 (LdrpInitializeNode.c)
 * Callees:
 *     LdrpFindLoadedDllByHandle @ 0x180038350 (LdrpFindLoadedDllByHandle.c)
 *     LdrpDereferenceModule @ 0x180038484 (LdrpDereferenceModule.c)
 *     LdrpGetProcedureAddress @ 0x18003BD10 (LdrpGetProcedureAddress.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     ZwManageHotPatch @ 0x1800A6340 (ZwManageHotPatch.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     LdrpLogEtwHotPatchStatus @ 0x1800DB68C (LdrpLogEtwHotPatchStatus.c)
 */

__int64 __fastcall LdrpApplyPatchImage(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  char *v5; // r15
  unsigned __int64 v6; // rcx
  bool v7; // al
  __int64 v8; // r14
  int ProcedureAddress; // edi
  int v10; // edx
  int v11; // eax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  int v16; // eax
  int v17; // eax
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  char *v19; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h]
  __int64 v23; // [rsp+60h] [rbp-20h]
  int v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+6Ch] [rbp-14h]

  v18 = 0LL;
  v5 = 0LL;
  v6 = *(_QWORD *)(a1 + 184);
  v19 = 0LL;
  LdrpFindLoadedDllByHandle(v6, &v18, 0LL, a4);
  v7 = LdrInitState < 3 || *(_DWORD *)(a1 + 276) == 1;
  v8 = v18;
  if ( *(_DWORD *)(a1 + 304) != 2 && !v7 )
  {
    ProcedureAddress = LdrpGetProcedureAddress(*(_QWORD *)(a1 + 48), "__PatchMainCallout__", 0, &v19);
    if ( ProcedureAddress == -1073741267 )
      goto LABEL_14;
    v25 = 0LL;
    v5 = v19;
    v24 = 1;
  }
  v20 = 1LL;
  v21 = -1LL;
  v10 = 0;
  v22 = *(_QWORD *)(v8 + 48);
  v23 = *(_QWORD *)(a1 + 48);
  v11 = *(_DWORD *)(a1 + 304);
  if ( !v5 )
  {
    HIDWORD(v20) = (v11 == 1) | 2;
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
  if ( v11 == 1 )
  {
    HIDWORD(v20) = 1;
    ProcedureAddress = ZwManageHotPatch();
    if ( ProcedureAddress < 0 )
    {
LABEL_11:
      *(_DWORD *)(a1 + 304) = 4;
      goto LABEL_14;
    }
    *(_DWORD *)(a1 + 304) = 2;
    LODWORD(v25) = 0;
    ProcedureAddress = ((__int64 (__fastcall *)(int *, __int64))v5)(&v24, 12LL);
    if ( ProcedureAddress < 0 )
      goto LABEL_14;
    v10 = HIDWORD(v20);
  }
  HIDWORD(v20) = v10 & 0xFFFFFFFC | 2;
  if ( (int)ZwManageHotPatch() >= 0 )
  {
    LODWORD(v25) = 1;
    v17 = ((__int64 (__fastcall *)(int *, __int64))v5)(&v24, 12LL);
    ProcedureAddress = v17;
    if ( v17 < 0 )
    {
      LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), v8, (unsigned __int16 *)(a1 + 72), v17, 6);
      __fastfail(0x44u);
    }
LABEL_13:
    *(_DWORD *)(v8 + 304) = 3;
    *(_QWORD *)(v8 + 296) = *(_QWORD *)(a1 + 48);
    goto LABEL_14;
  }
  LODWORD(v25) = 2;
  v16 = ((__int64 (__fastcall *)(int *, __int64))v5)(&v24, 12LL);
  ProcedureAddress = v16;
  if ( v16 < 0 )
  {
    LdrpLogEtwHotPatchStatus((unsigned __int16 *)(LdrpImageEntry + 88), v8, (unsigned __int16 *)(a1 + 72), v16, 7);
    __fastfail(0x44u);
  }
  *(_DWORD *)(v8 + 304) = 4;
LABEL_14:
  LdrpLogEtwHotPatchStatus(
    (unsigned __int16 *)(LdrpImageEntry + 88),
    v8,
    (unsigned __int16 *)(a1 + 72),
    ProcedureAddress,
    4);
  if ( v8 )
    LdrpDereferenceModule(v8, v12, v13, v14);
  return (unsigned int)ProcedureAddress;
}
