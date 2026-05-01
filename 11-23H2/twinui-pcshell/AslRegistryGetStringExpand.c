/*
 * XREFs of AslRegistryGetStringExpand @ 0x1800EDB74
 * Callers:
 *     AslEnvBuildBasic @ 0x1800EEA40 (AslEnvBuildBasic.c)
 * Callees:
 *     AslEnvGetProcessWowInfo @ 0x1800EDCC4 (AslEnvGetProcessWowInfo.c)
 *     AslEnvExpandStrings2 @ 0x1800EDD8C (AslEnvExpandStrings2.c)
 *     AslRegistryGetString @ 0x1800EF1D0 (AslRegistryGetString.c)
 *     AslLogCallPrintf @ 0x180738B40 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetStringExpand(wchar_t **a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rsi
  int String; // eax
  wchar_t *v8; // rdi
  int v9; // ebx
  int ProcessWowInfo; // eax
  PVOID Heap; // rax
  int v13; // r8d
  __int64 v14; // rbx
  PVOID v15; // rax
  __int64 *v16; // [rsp+20h] [rbp-40h]
  __int16 v17[2]; // [rsp+40h] [rbp-20h] BYREF
  __int16 v18; // [rsp+44h] [rbp-1Ch] BYREF
  wchar_t *Str; // [rsp+48h] [rbp-18h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h] BYREF

  v5 = 0LL;
  v17[0] = -1;
  Str = 0LL;
  v18 = -1;
  String = AslRegistryGetString(&Str, a2, a3);
  v8 = Str;
  v9 = String;
  if ( String < 0 )
    goto LABEL_8;
  if ( !wcschr(Str, 0x25u) )
  {
    *a1 = v8;
    return 0;
  }
  ProcessWowInfo = AslEnvGetProcessWowInfo(&v18, v17);
  v9 = ProcessWowInfo;
  if ( ProcessWowInfo < 0 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslRegistryGetStringExpand",
      1302,
      (unsigned int)"AslEnvGetProcessWowInfo failed [%x]",
      ProcessWowInfo);
  }
  else
  {
    v20 = 260LL;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x208uLL);
    v5 = Heap;
    if ( Heap )
    {
      v8 = Str;
      v16 = &v20;
      v9 = AslEnvExpandStrings2(a4, Str, Heap, 260LL);
      if ( v9 != -1073741789 )
        goto LABEL_6;
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
      v14 = v20;
      v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 2 * v20);
      v5 = v15;
      if ( v15 )
      {
        v8 = Str;
        v9 = AslEnvExpandStrings2(a4, Str, v15, v14);
LABEL_6:
        if ( v9 < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslRegistryGetStringExpand",
            1347,
            (unsigned int)"AslEnvExpandStrings2 failed to expand strings for %ws [%x]",
            (char)v8);
        }
        else
        {
          *a1 = (wchar_t *)v5;
          v5 = 0LL;
          v9 = 0;
        }
        goto LABEL_8;
      }
      v13 = 1332;
    }
    else
    {
      v13 = 1314;
    }
    AslLogCallPrintf(1, (unsigned int)"AslRegistryGetStringExpand", v13, (unsigned int)"Out of memory", (char)v16);
    v8 = Str;
    v9 = -1073741801;
  }
LABEL_8:
  if ( v8 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Str);
  if ( v5 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v5);
  return (unsigned int)v9;
}
