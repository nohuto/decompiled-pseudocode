/*
 * XREFs of EtwQueryProcessTelemetryInfo @ 0x140754D60
 * Callers:
 *     NtQueryInformationProcess @ 0x1406FCB40 (NtQueryInformationProcess.c)
 *     PfSnLogScenarioDecision @ 0x140752F04 (PfSnLogScenarioDecision.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14022D620 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x14022D9E0 (KiUnstackDetachProcess.c)
 *     PsReferencePrimaryTokenWithTag @ 0x1402329A0 (PsReferencePrimaryTokenWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x14028B270 (ExReleaseRundownProtection_0.c)
 *     PsGetProcessSessionId @ 0x140297500 (PsGetProcessSessionId.c)
 *     ObFastDereferenceObject @ 0x140297B60 (ObFastDereferenceObject.c)
 *     PsGetProcessStartKey @ 0x1402F6CA0 (PsGetProcessStartKey.c)
 *     __security_check_cookie @ 0x1403D7680 (__security_check_cookie.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     SeQueryUserSidToken @ 0x140714EB0 (SeQueryUserSidToken.c)
 *     ProbeForWrite @ 0x1407293F0 (ProbeForWrite.c)
 *     PsAcquireProcessExitSynchronization @ 0x1407550D0 (PsAcquireProcessExitSynchronization.c)
 *     EtwpQueryProcessCommandLine @ 0x1407550F8 (EtwpQueryProcessCommandLine.c)
 *     EtwpQueryProcessOtherInfo @ 0x1407552D4 (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryTokenPackageInfo @ 0x140755314 (EtwpQueryTokenPackageInfo.c)
 *     MmGetSessionCreateTime @ 0x1407553E0 (MmGetSessionCreateTime.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwQueryProcessTelemetryInfo(
        __int64 BugCheckParameter1,
        char *Address,
        SIZE_T Length,
        char a4,
        ULONG *a5)
{
  SIZE_T v5; // r15
  int v8; // ebx
  __int64 *v9; // rcx
  void *v10; // r12
  int v11; // edi
  ULONG v12; // edi
  size_t v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rbx
  char *v16; // rdi
  unsigned __int16 *v17; // rbx
  char *v18; // rbx
  char *v19; // rbx
  char *v20; // rbx
  ULONG Size; // [rsp+24h] [rbp-2A4h] BYREF
  int Size_4; // [rsp+28h] [rbp-2A0h]
  int v25; // [rsp+2Ch] [rbp-29Ch]
  __int64 v26; // [rsp+30h] [rbp-298h] BYREF
  const void **v27; // [rsp+38h] [rbp-290h]
  PVOID P[2]; // [rsp+40h] [rbp-288h] BYREF
  void *v29; // [rsp+50h] [rbp-278h]
  __int64 v30; // [rsp+58h] [rbp-270h]
  size_t PackageSize[52]; // [rsp+60h] [rbp-268h] BYREF
  $115DCDF994C6370D29323EAB0E0C9502 v32; // [rsp+200h] [rbp-C8h] BYREF
  _BYTE Src[80]; // [rsp+230h] [rbp-98h] BYREF

  v5 = (unsigned int)Length;
  v30 = BugCheckParameter1;
  memset(&v32, 0, sizeof(v32));
  memset(PackageSize, 0, 0x198uLL);
  memset(Src, 0, 0x44uLL);
  Size = 0;
  *(_OWORD *)P = 0LL;
  v8 = 0;
  v26 = 0LL;
  v9 = &EmptyUnicodeString;
  if ( *(_QWORD *)(BugCheckParameter1 + 1472) )
    v9 = *(__int64 **)(BugCheckParameter1 + 1472);
  v27 = (const void **)v9;
  v10 = (void *)PsReferencePrimaryTokenWithTag(BugCheckParameter1, 0x746C6644u);
  v29 = v10;
  v25 = 0;
  EtwpQueryTokenPackageInfo(v10, PackageSize);
  v11 = SeQueryUserSidToken((__int64)v10, Src, 0x44u, &Size);
  if ( v11 >= 0 )
  {
    if ( (int)PsAcquireProcessExitSynchronization(BugCheckParameter1) >= 0 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)&v32);
      EtwpQueryProcessOtherInfo(BugCheckParameter1, &v26);
      EtwpQueryProcessCommandLine(BugCheckParameter1, P);
      KiUnstackDetachProcess(&v32);
      ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112));
      v8 = v26;
    }
    v12 = Size + 100 + LODWORD(PackageSize[0]) + LODWORD(PackageSize[1]) + *(unsigned __int16 *)v27 + LOWORD(P[0]);
    if ( a5 )
      *a5 = v12;
    if ( a4 )
      ProbeForWrite(Address, v5, 4u);
    v13 = (unsigned int)v5;
    if ( v12 < (unsigned int)v5 )
      v13 = v12;
    memset(Address, 0, v13);
    if ( (unsigned int)v5 < 0x60 )
    {
      v11 = -1073741820;
      Size_4 = -1073741820;
    }
    else
    {
      *(_DWORD *)Address = 96;
      *((_DWORD *)Address + 1) = *(_DWORD *)(BugCheckParameter1 + 1088);
      *((_QWORD *)Address + 1) = PsGetProcessStartKey(BugCheckParameter1);
      *((_QWORD *)Address + 2) = *(_QWORD *)(BugCheckParameter1 + 1128);
      *((_QWORD *)Address + 3) = *(_QWORD *)(BugCheckParameter1 + 2304);
      *((_QWORD *)Address + 4) = *(_QWORD *)(BugCheckParameter1 + 2312);
      *((_QWORD *)Address + 5) = *(_QWORD *)(BugCheckParameter1 + 2296);
      *((_QWORD *)Address + 6) = MmGetSessionCreateTime();
      *((_DWORD *)Address + 14) = PsGetProcessSessionId(v14);
      *((_DWORD *)Address + 15) = MEMORY[0xFFFFF780000002C4];
      *((_DWORD *)Address + 16) = v8;
      *((_DWORD *)Address + 17) = HIDWORD(v26);
      if ( (unsigned int)v5 >= v12 )
      {
        *((_DWORD *)Address + 18) = 96;
        v15 = Size;
        memmove(Address + 96, Src, Size);
        v16 = &Address[v15 + 96];
        *((_DWORD *)Address + 19) = v15 + 96;
        v17 = (unsigned __int16 *)v27;
        memmove(v16, v27[1], *(unsigned __int16 *)v27);
        v18 = &v16[*v17 + 2];
        *((_DWORD *)Address + 20) = (_DWORD)v18 - (_DWORD)Address;
        memmove(v18, &PackageSize[2], PackageSize[0]);
        v19 = &v18[PackageSize[0]];
        *((_DWORD *)Address + 21) = (_DWORD)v19 - (_DWORD)Address;
        memmove(v19, &PackageSize[34], PackageSize[1]);
        v20 = &v19[PackageSize[1]];
        *((_DWORD *)Address + 22) = (_DWORD)v20 - (_DWORD)Address;
        memmove(v20, P[1], LOWORD(P[0]));
        v11 = 0;
      }
      else
      {
        v11 = -2147483643;
        Size_4 = -2147483643;
      }
    }
  }
  if ( P[1] )
    ExFreePoolWithTag(P[1], 0);
  if ( v10 )
    ObFastDereferenceObject((signed __int64 *)(BugCheckParameter1 + 1208), (unsigned __int64)v10, 0x746C6644u);
  return (unsigned int)v11;
}
