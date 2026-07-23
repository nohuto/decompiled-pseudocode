/*
 * XREFs of LdrpRedirectDelayloadFailure @ 0x18008AB6C
 * Callers:
 *     LdrpHandleProtectedDelayload @ 0x18003BF80 (LdrpHandleProtectedDelayload.c)
 *     LdrpHandleUnprotectedDelayLoad @ 0x1800DAB70 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     RtlNtStatusToDosErrorNoTeb @ 0x18007AF90 (RtlNtStatusToDosErrorNoTeb.c)
 *     LdrpGetDelayloadAPIInfo @ 0x18008AC84 (LdrpGetDelayloadAPIInfo.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800AAAD0 (_guard_xfg_dispatch_icall_nop.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

__int64 __fastcall LdrpRedirectDelayloadFailure(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64, _QWORD *),
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
  _QWORD v18[16]; // [rsp+50h] [rbp-41h] BYREF
  unsigned int v19; // [rsp+E0h] [rbp+4Fh] BYREF
  const char *v20; // [rsp+E8h] [rbp+57h] BYREF
  __int64 v21; // [rsp+F0h] [rbp+5Fh]

  v21 = a3;
  v7 = *(_QWORD *)(a1 + 48) + *(unsigned int *)(a3 + 4);
  v10 = 0LL;
  LdrpGetDelayloadAPIInfo(a1, a3, a6, (unsigned int)&v20, (__int64)&v19);
  v12 = v20;
  v13 = "Unknown";
  v14 = (const char *)v19;
  if ( v20 )
    v13 = v20;
  LdrpLogInternal(
    (unsigned int)"minkernel\\ntdll\\ldrdload.c",
    459,
    (__int64)"LdrpRedirectDelayloadFailure",
    0,
    "Failed to find export %s!%s (Ordinal:%d) in \"%wZ\"  0x%08lx\n",
    v7,
    v13,
    v19,
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
  memset(v18, 0, 0x48uLL);
  v18[1] = v21;
  v18[2] = a6;
  LODWORD(v18[0]) = 72;
  v18[3] = v7;
  v18[6] = v15;
  LODWORD(v18[8]) = RtlNtStatusToDosErrorNoTeb(Status);
  if ( v12 )
  {
    LODWORD(v18[4]) = 1;
    v18[5] = v12;
  }
  else
  {
    LODWORD(v18[4]) = 0;
    LODWORD(v18[5]) = (_DWORD)v14;
  }
  v10 = a4(4LL, v18);
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
