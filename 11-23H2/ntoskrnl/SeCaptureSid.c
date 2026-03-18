/*
 * XREFs of SeCaptureSid @ 0x1406BB2CC
 * Callers:
 *     SeAccessCheckByType @ 0x1402B3AC0 (SeAccessCheckByType.c)
 *     NtCreateTokenEx @ 0x1406BB530 (NtCreateTokenEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1406C1070 (SepAccessCheckAndAuditAlarm.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x14071328C (ExpWnfCaptureScopeInstanceId.c)
 *     AlpcpConnectPort @ 0x140717370 (AlpcpConnectPort.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x1407AB04C (AlpcpPortQueryConnectedSidInfo.c)
 *     NtSecureConnectPort @ 0x1407C3E30 (NtSecureConnectPort.c)
 *     NtSetInformationToken @ 0x1407EF480 (NtSetInformationToken.c)
 *     NtCreateLowBoxToken @ 0x1407F2540 (NtCreateLowBoxToken.c)
 * Callees:
 *     memmove @ 0x140435700 (memmove.c)
 *     RtlValidSid @ 0x1407373A0 (RtlValidSid.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00B60 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140AAEC80 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SeCaptureSid(char *Src, char a2, __int64 a3, __int64 a4, int a5, char a6, PSID *a7)
{
  __int64 v8; // rax
  int v9; // eax
  int v10; // edi
  unsigned int v11; // ecx
  char *v12; // rdx
  unsigned int v13; // r14d
  PVOID PoolWithTag; // rax
  PSID v15; // rbx

  if ( a2 )
  {
    v8 = (__int64)(Src + 1);
    if ( (unsigned __int64)(Src + 1) >= 0x7FFFFFFF0000LL )
      v8 = 0x7FFFFFFF0000LL;
    v9 = *(unsigned __int8 *)v8;
    LOBYTE(v10) = v9;
    v11 = 4 * v9 + 8;
    if ( 4 * v9 != -8 )
    {
      if ( ((unsigned __int8)Src & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = &Src[v11];
      if ( (unsigned __int64)v12 > 0x7FFFFFFF0000LL || v12 < Src )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    if ( !a6 )
    {
      *a7 = Src;
      return 0LL;
    }
    v10 = (unsigned __int8)Src[1];
    v11 = 4 * v10 + 8;
  }
  v13 = v11;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)1025, v11, 0x69536553u);
  *a7 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memmove(PoolWithTag, Src, v13);
  *((_BYTE *)*a7 + 1) = v10;
  v15 = *a7;
  if ( RtlValidSid(*a7) )
    return 0LL;
  ExFreePoolWithTag(v15, 0);
  *a7 = 0LL;
  return 3221225592LL;
}
