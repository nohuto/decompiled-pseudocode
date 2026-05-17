/*
 * XREFs of RtlQueryProcessModuleInformation @ 0x1800014C0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180001320 (RtlQueryProcessDebugInformation.c)
 * Callees:
 *     LdrQueryProcessModuleInformationEx @ 0x180001644 (LdrQueryProcessModuleInformationEx.c)
 *     RtlpCommitQueryDebugInfo @ 0x180001934 (RtlpCommitQueryDebugInfo.c)
 *     RtlpQueryDebugInfoRemainingSize @ 0x18009EB3C (RtlpQueryDebugInfoRemainingSize.c)
 *     LdrQueryProcessModuleInformationEx2 @ 0x1800D9808 (LdrQueryProcessModuleInformationEx2.c)
 *     RtlpDeCommitQueryDebugInfo @ 0x1800E4280 (RtlpDeCommitQueryDebugInfo.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryProcessModuleInformation(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // r14d
  int v5; // edi
  int v6; // r12d
  unsigned int ProcessModuleInformationEx2; // eax
  unsigned int v8; // r10d
  size_t v9; // r15
  __int64 v10; // rcx
  int v11; // r10d
  void *DebugInfo; // rax
  void *v14; // rbx
  int ProcessModuleInformation; // eax
  char v16; // [rsp+60h] [rbp+8h] BYREF
  size_t Size; // [rsp+68h] [rbp+10h] BYREF

  v4 = a1;
  v5 = (a1 == 0 ? 2 : 0) | (a2 >> 6) & 1;
  v6 = a2 & 0x100;
  if ( (a2 & 0x100) != 0 )
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx2(a1, v5, 0, 0, (__int64)&Size);
  else
    ProcessModuleInformationEx2 = LdrQueryProcessModuleInformationEx(a1, v5, 0, 0, (__int64)&Size);
  v8 = ProcessModuleInformationEx2;
  if ( ProcessModuleInformationEx2 == -1073741820 )
  {
    v9 = (unsigned int)Size;
    if ( RtlpQueryDebugInfoRemainingSize(a3) < v9 )
      return (unsigned int)(v11 + 31);
    DebugInfo = (void *)RtlpCommitQueryDebugInfo(v10, (unsigned int)Size);
    v14 = DebugInfo;
    if ( DebugInfo )
    {
      memset_thunk_772440563353939046(DebugInfo, 0, v9);
      if ( v6 )
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx2(v4, v5, (_DWORD)v14, Size, (__int64)&v16);
      else
        ProcessModuleInformation = LdrQueryProcessModuleInformationEx(v4, v5, (_DWORD)v14, Size, (__int64)&v16);
      if ( ProcessModuleInformation >= 0 )
      {
        *(_QWORD *)(a3 + 96) = v14;
        return 0LL;
      }
      RtlpDeCommitQueryDebugInfo(a3, v14, (unsigned int)Size);
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v8;
}
