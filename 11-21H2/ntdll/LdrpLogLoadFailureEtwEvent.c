/*
 * XREFs of LdrpLogLoadFailureEtwEvent @ 0x180053DF8
 * Callers:
 *     LdrpSnapModule @ 0x18003C8C0 (LdrpSnapModule.c)
 *     LdrpProcessWork @ 0x180051120 (LdrpProcessWork.c)
 * Callees:
 *     EtwEventWriteNoRegistration @ 0x18008AEB0 (EtwEventWriteNoRegistration.c)
 *     RtlGetThreadErrorMode @ 0x18008C730 (RtlGetThreadErrorMode.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtQueryInformationProcess @ 0x1800A4390 (NtQueryInformationProcess.c)
 */

void __fastcall LdrpLogLoadFailureEtwEvent(unsigned __int16 *a1, unsigned __int16 *a2, int a3, __int64 a4, char a5)
{
  NTSTATUS v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // eax
  int ProcessInformation; // [rsp+30h] [rbp-40h] BYREF
  int *v14; // [rsp+38h] [rbp-38h] BYREF
  int v15; // [rsp+40h] [rbp-30h]
  int v16; // [rsp+44h] [rbp-2Ch]
  __int64 v17; // [rsp+48h] [rbp-28h]
  int v18; // [rsp+50h] [rbp-20h]
  int v19; // [rsp+54h] [rbp-1Ch]
  __int64 v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+60h] [rbp-10h]
  int v22; // [rsp+64h] [rbp-Ch]
  int v23; // [rsp+A0h] [rbp+30h] BYREF

  v23 = a3;
  ProcessInformation = 0;
  if ( (LdrpPolicyBits & 0x20) != 0 )
  {
    if ( a5 )
      goto LABEL_8;
    if ( (RtlGetThreadErrorMode() & 0x10) == 0 )
    {
      v8 = NtQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PROCESSINFOCLASS)12, &ProcessInformation, 4u, 0LL);
      v9 = ProcessInformation;
      if ( v8 < 0 )
        v9 = 5;
      ProcessInformation = v9;
      if ( (v9 & 5) != 0 )
      {
LABEL_8:
        v10 = *((_QWORD *)a1 + 1);
        v16 = 0;
        v19 = 0;
        v17 = v10;
        LODWORD(v10) = *a1 + 2;
        v14 = &v23;
        v15 = 4;
        v18 = v10;
        if ( a2 )
        {
          v11 = 3LL;
          v20 = *((_QWORD *)a2 + 1);
          v12 = *a2 + 2;
          v22 = 0;
          v21 = v12;
        }
        else
        {
          v11 = 2LL;
        }
        EtwEventWriteNoRegistration(&UserLoaderGuid, a4, v11, &v14);
      }
    }
  }
}
