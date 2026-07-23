/*
 * XREFs of LdrpRedirectDelayloadFailure @ 0x180086B80
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x180023120 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DA610 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x180077900 (RtlNtStatusToDosErrorNoTeb.c)
 *     LdrpGetDelayloadAPIInfo @ 0x180086C98 (LdrpGetDelayloadAPIInfo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A4B90 (_guard_xfg_dispatch_icall_nop.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall LdrpRedirectDelayloadFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, int *),
        __int64 (__fastcall *a5)(__int64, const char *),
        __int64 a6,
        NTSTATUS Status)
{
  __int64 v7; // r12
  __int64 v10; // rdi
  __int64 v11; // r11
  const char *v12; // rbx
  const char *v13; // r9
  const char *v14; // r14
  __int64 v15; // rsi
  char v16; // al
  int v18; // [rsp+50h] [rbp-41h] BYREF
  __int64 v19; // [rsp+58h] [rbp-39h]
  __int64 v20; // [rsp+60h] [rbp-31h]
  __int64 v21; // [rsp+68h] [rbp-29h]
  int v22; // [rsp+70h] [rbp-21h]
  const char *v23; // [rsp+78h] [rbp-19h]
  __int64 v24; // [rsp+80h] [rbp-11h]
  ULONG v25; // [rsp+90h] [rbp-1h]
  unsigned int v26; // [rsp+E0h] [rbp+4Fh] BYREF
  const char *v27; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v28; // [rsp+F0h] [rbp+5Fh]

  v28 = a3;
  v7 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(a3 + 4);
  v10 = 0LL;
  LdrpGetDelayloadAPIInfo(a1, a3, a6, (unsigned int)&v27, (__int64)&v26);
  v12 = v27;
  v13 = "Unknown";
  v14 = (const char *)v26;
  if ( v27 )
    v13 = v27;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
    459,
    (__int64)"LdrpRedirectDelayloadFailure",
    0,
    "Failed to find export %s!%s (Ordinal:%d) in \"%wZ\"  0x%08lx\n",
    v7,
    v13,
    v26,
    v11 + 88,
    Status);
  if ( a2 )
  {
    v15 = *(_QWORD *)(a2 + 48);
    if ( (LdrpPolicyBits & 0x10) == 0 && (*(_BYTE *)(a2 + 104) & 1) == 0 )
    {
      v16 = 0;
      goto LABEL_6;
    }
  }
  else
  {
    v15 = 0LL;
  }
  v16 = 1;
LABEL_6:
  if ( !a4 || !v16 )
    goto LABEL_7;
  memset_thunk_772440563353939046(&v18, 0, 0x48uLL);
  v19 = v28;
  v20 = a6;
  v18 = 72;
  v21 = v7;
  v24 = v15;
  v25 = RtlNtStatusToDosErrorNoTeb(Status);
  if ( v12 )
  {
    v22 = 1;
    v23 = v12;
  }
  else
  {
    v22 = 0;
    LODWORD(v23) = (_DWORD)v14;
  }
  v10 = a4(4LL, &v18);
  if ( !v10 )
  {
LABEL_7:
    if ( a5 )
    {
      if ( !v12 )
        v12 = v14;
      return a5(v7, v12);
    }
  }
  return v10;
}
