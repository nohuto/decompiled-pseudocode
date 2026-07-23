/*
 * XREFs of WbDispatchOperation @ 0x140763608
 * Callers:
 *     ExpQuerySystemInformation @ 0x140726A50 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsGetProcessId @ 0x1402FA720 (PsGetProcessId.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     WbRemoveWarbirdProcess @ 0x1407610F4 (WbRemoveWarbirdProcess.c)
 *     sub_140762A5C @ 0x140762A5C (sub_140762A5C.c)
 *     WbHeapExecuteCall @ 0x140762E00 (WbHeapExecuteCall.c)
 *     WbGetWarbirdProcess @ 0x1407637F0 (WbGetWarbirdProcess.c)
 *     sub_140763A10 @ 0x140763A10 (sub_140763A10.c)
 *     WbAlloc @ 0x140763B78 (WbAlloc.c)
 *     WbReEncryptEncryptionSegment @ 0x1407D21B4 (WbReEncryptEncryptionSegment.c)
 *     WbDecryptEncryptionSegment @ 0x1407D2294 (WbDecryptEncryptionSegment.c)
 *     WbProcessModuleUnload @ 0x1407E078C (WbProcessModuleUnload.c)
 *     WbProcessStartup @ 0x1407E7AB0 (WbProcessStartup.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WbDispatchOperation(char *Src, size_t Size)
{
  size_t v2; // rsi
  char *v4; // rax
  int WarbirdProcess; // ebx
  int *v6; // rbx
  int v7; // eax
  BOOL v8; // ebx
  HANDLE ProcessId; // rax
  __int64 v10; // rdx
  int v11; // eax
  int v13; // [rsp+28h] [rbp-30h]
  __int64 *v14; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+70h] [rbp+18h] BYREF

  v2 = (unsigned int)Size;
  v14 = 0LL;
  P = 0LL;
  if ( Src )
  {
    if ( (unsigned int)Size < 8 )
    {
      WarbirdProcess = -1073741811;
      goto LABEL_19;
    }
    v4 = &Src[(unsigned int)Size];
    if ( (unsigned __int64)v4 > 0x7FFFFFFF0000LL || v4 < Src )
      MEMORY[0x7FFFFFFF0000] = 0;
    WarbirdProcess = WbAlloc((unsigned int)Size, &P);
    if ( WarbirdProcess < 0 )
      goto LABEL_19;
    v6 = (int *)P;
    memmove(P, Src, v2);
    v7 = *v6;
    v13 = *v6;
  }
  else
  {
    v7 = 4;
    v13 = 4;
  }
  v8 = v7 != 7;
  ProcessId = PsGetProcessId(KeGetCurrentThread()->ApcState.Process);
  WarbirdProcess = WbGetWarbirdProcess(ProcessId, v8, &v14);
  if ( WarbirdProcess < 0 )
    goto LABEL_19;
  switch ( v13 )
  {
    case 1:
      v11 = WbDecryptEncryptionSegment(v14, P, (unsigned int)v2);
      goto LABEL_18;
    case 2:
      v11 = WbReEncryptEncryptionSegment(v14, P, (unsigned int)v2);
      goto LABEL_18;
    case 3:
      v11 = WbHeapExecuteCall((__int64)v14, (__int64)P, (__int64)Src, v2);
      goto LABEL_18;
    case 4:
      if ( !P )
      {
        v11 = sub_140762A5C((__int64)v14, v10);
LABEL_18:
        WarbirdProcess = v11;
        goto LABEL_19;
      }
      break;
    case 5:
    case 6:
      WarbirdProcess = Src != 0LL ? -1073741822 : -1073741811;
      goto LABEL_19;
    case 7:
      v11 = WbRemoveWarbirdProcess(*v14);
      goto LABEL_18;
    case 8:
      v11 = WbProcessStartup(v14, P, (unsigned int)v2);
      goto LABEL_18;
    case 9:
      v11 = WbProcessModuleUnload(v14, P, (unsigned int)v2);
      goto LABEL_18;
  }
  WarbirdProcess = -1073741811;
LABEL_19:
  sub_140763A10(v14);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)WarbirdProcess;
}
