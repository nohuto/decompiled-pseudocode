/*
 * XREFs of SmSetStoreInformation @ 0x1407E8044
 * Callers:
 *     NtSetSystemInformation @ 0x14075F020 (NtSetSystemInformation.c)
 * Callees:
 *     SmpGetProcessPartition @ 0x140344D10 (SmpGetProcessPartition.c)
 *     SeSinglePrivilegeCheck @ 0x140737CF0 (SeSinglePrivilegeCheck.c)
 *     SmProcessCreateRequest @ 0x1407B795C (SmProcessCreateRequest.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1407E80F4 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmProcessConfigRequest @ 0x14085BD4C (SmProcessConfigRequest.c)
 *     SmProcessDeleteRequest @ 0x1409D6F2C (SmProcessDeleteRequest.c)
 *     SmProcessResizeRequest @ 0x1409D7460 (SmProcessResizeRequest.c)
 *     SmProcessSystemStoreTrimRequest @ 0x1409D788C (SmProcessSystemStoreTrimRequest.c)
 *     SmcProcessCreateRequest @ 0x1409D809C (SmcProcessCreateRequest.c)
 *     SmcProcessDeleteRequest @ 0x1409D831C (SmcProcessDeleteRequest.c)
 *     SmcProcessResizeRequest @ 0x1409D83A4 (SmcProcessResizeRequest.c)
 *     SmcProcessStoreCreateRequest @ 0x1409D869C (SmcProcessStoreCreateRequest.c)
 *     SmcProcessStoreDeleteRequest @ 0x1409D8808 (SmcProcessStoreDeleteRequest.c)
 */

__int64 __fastcall SmSetStoreInformation(__int64 a1, __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v5; // r8
  __int64 ProcessPartition; // rax
  void *Src[2]; // [rsp+20h] [rbp-28h]
  size_t Size; // [rsp+30h] [rbp-18h]

  if ( a3 != 24 )
    return 3221225476LL;
  *(_OWORD *)Src = *(_OWORD *)a2;
  Size = *(_QWORD *)(a2 + 16);
  if ( (unsigned int)*(_OWORD *)a2 != 1 )
    return 3221225485LL;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return 3221225506LL;
  if ( SHIDWORD(Src[0]) <= 12 )
  {
    switch ( HIDWORD(Src[0]) )
    {
      case 0xC:
        LOBYTE(v5) = a4;
        return SmcProcessStoreDeleteRequest(Src[1], (unsigned int)Size, v5);
      case 3:
        ProcessPartition = SmpGetProcessPartition((__int64)KeGetCurrentThread()->ApcState.Process);
        return SmProcessCreateRequest(ProcessPartition, (unsigned __int64)Src[1], Size, a4);
      case 4:
        LOBYTE(v5) = a4;
        return SmProcessDeleteRequest(Src[1], (unsigned int)Size, v5);
      case 9:
        LOBYTE(v5) = a4;
        return SmcProcessCreateRequest(Src[1], (unsigned int)Size, v5);
      case 0xA:
        LOBYTE(v5) = a4;
        return SmcProcessDeleteRequest(Src[1], (unsigned int)Size, v5);
      case 0xB:
        LOBYTE(v5) = a4;
        return SmcProcessStoreCreateRequest(Src[1], (unsigned int)Size, v5);
    }
    return 3221225475LL;
  }
  switch ( HIDWORD(Src[0]) )
  {
    case 0x11:
      LOBYTE(v5) = a4;
      return SmProcessResizeRequest(Src[1], (unsigned int)Size, v5);
    case 0x12:
      LOBYTE(v5) = a4;
      return SmcProcessResizeRequest(Src[1], (unsigned int)Size, v5);
    case 0x13:
      LOBYTE(v5) = a4;
      return SmProcessConfigRequest(Src[1], (unsigned int)Size, v5);
    case 0x14:
      LOBYTE(v5) = a4;
      return SmProcessStoreMemoryPriorityRequest(Src[1], (unsigned int)Size, v5);
    case 0x15:
      return SmProcessSystemStoreTrimRequest(Src[1], (unsigned int)Size);
    default:
      return 3221225475LL;
  }
}
