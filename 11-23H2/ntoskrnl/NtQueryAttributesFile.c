/*
 * XREFs of NtQueryAttributesFile @ 0x14073E400
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentSilo @ 0x14022E310 (PsGetCurrentSilo.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObOpenObjectByNameEx @ 0x1406ED010 (ObOpenObjectByNameEx.c)
 *     FsRtlpCleanupEcps @ 0x14073E3C0 (FsRtlpCleanupEcps.c)
 *     ObCloseHandle @ 0x14076BA80 (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A00DF0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  char PreviousMode; // di
  __int64 v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS v7; // ebx
  HANDLE Handle[2]; // [rsp+40h] [rbp-268h] BYREF
  _OWORD v10[14]; // [rsp+50h] [rbp-258h] BYREF
  _OWORD v11[3]; // [rsp+130h] [rbp-178h] BYREF
  __int64 v12; // [rsp+160h] [rbp-148h]
  _BYTE v13[272]; // [rsp+170h] [rbp-138h] BYREF

  memset(v13, 0, sizeof(v13));
  Handle[0] = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v5 = (__int64)FileInformation;
    if ( ((unsigned __int8)FileInformation & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)FileInformation >= 0x7FFFFFFF0000LL )
      v5 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v5 = *(_BYTE *)v5;
    *(_BYTE *)(v5 + 39) = *(_BYTE *)(v5 + 39);
  }
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  LODWORD(v10[0]) = 14680072;
  WORD3(v10[4]) = 7;
  DWORD2(v10[5]) = 1;
  LODWORD(v10[4]) = 2113536;
  *(_QWORD *)&v10[6] = FileInformation;
  *((_QWORD *)&v10[6] + 1) = v11;
  BYTE9(v10[8]) = 1;
  *(_QWORD *)&v10[9] = v13;
  *(_QWORD *)&v10[3] = ObjectAttributes;
  DWORD2(v10[9]) = 32;
  memset(&v10[10], 0, 40);
  LOWORD(v10[10]) = 40;
  *(_QWORD *)&v10[12] = PsGetCurrentSilo();
  CurrentThread = KeGetCurrentThread();
  ++CurrentThread->OtherOperationCount;
  __incgsdword(0x2EE4u);
  v7 = ObOpenObjectByNameEx(
         (__int64)ObjectAttributes,
         (__int64)IoFileObjectType,
         PreviousMode,
         0LL,
         128,
         (int)v10,
         *(__int64 *)&v10[12],
         Handle);
  if ( *((_QWORD *)&v10[10] + 1) && FsRtlpCleanupEcps(*((struct _ECP_LIST **)&v10[10] + 1)) )
    *((_QWORD *)&v10[10] + 1) = 0LL;
  if ( LODWORD(v10[2]) == -1096154543 )
    return v10[1];
  if ( v7 >= 0 )
  {
    ObCloseHandle(Handle[0], PreviousMode);
    return -1073741788;
  }
  return v7;
}
