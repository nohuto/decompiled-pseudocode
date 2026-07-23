/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800D91B0
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D88C0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     LdrpMapDllSearchPath @ 0x180011078 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180011690 (LdrpMapDllFullPath.c)
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     LdrpUnmapModule @ 0x18007366C (LdrpUnmapModule.c)
 *     NtClose @ 0x18009EFD0 (NtClose.c)
 *     NtLoadEnclaveData @ 0x1800A0F80 (NtLoadEnclaveData.c)
 *     memmove @ 0x1800A5980 (memmove.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D8DBC (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D8FB4 (LdrpEnclaveAddForwarderModules.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // r14
  void *PageInformation; // r15
  _QWORD *v4; // rbp
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  int EnclaveData; // edi
  signed __int64 v8; // rcx
  void *v9; // rsi
  ULONG PageInformationLength; // edi
  char *Heap; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v1 = *((_QWORD *)a1 + 7);
  PageInformation = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 22);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__int64)a1);
  else
    result = LdrpMapDllSearchPath((__int64)a1);
  if ( (int)result < 0 )
    return result;
  v6 = v4[11];
  EnclaveData = LdrpEnclaveAddDelayloadModules((__int64)a1);
  if ( EnclaveData >= 0 )
  {
    EnclaveData = LdrpEnclaveAddForwarderModules(a1);
    if ( EnclaveData >= 0 )
    {
      if ( !v6 )
        v6 = (v4[9] + v4[10]) & 0xFFFFFFFFFFFFF000uLL;
      v8 = *(unsigned int *)(v1 + 64);
      if ( (__int64)(v6 - v4[9]) >= v8 )
      {
        v9 = (void *)((v6 - v8) & 0xFFFFFFFFFFFFF000uLL);
        PageInformationLength = *a1 + 10;
        Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, PageInformationLength);
        PageInformation = Heap;
        if ( Heap )
        {
          *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
          *((_WORD *)Heap + 4) = *a1;
          memmove(Heap + 10, *((const void **)a1 + 1), *a1);
          EnclaveData = NtLoadEnclaveData(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          v9,
                          0LL,
                          0LL,
                          0,
                          PageInformation,
                          PageInformationLength,
                          0LL,
                          0LL);
          if ( EnclaveData >= 0 )
          {
            v4[11] = v9;
            v12 = *(_QWORD *)(v1 + 152);
            *(_QWORD *)(v1 + 184) = v9;
            *(_DWORD *)(v12 + 56) = 9;
            v13 = v4[14];
            if ( !v13 )
            {
              v4[14] = v1;
              v13 = v1;
            }
            if ( v1 == v13 )
              goto LABEL_14;
            goto LABEL_13;
          }
        }
        else
        {
          EnclaveData = -1073741670;
        }
      }
      else
      {
        EnclaveData = -1073741800;
      }
    }
  }
  v4[14] = 0LL;
LABEL_13:
  LdrpUnmapModule(v1);
LABEL_14:
  if ( PageInformation )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, PageInformation);
  NtClose(*((HANDLE *)a1 + 3));
  NtClose(*((HANDLE *)a1 + 23));
  *((_QWORD *)a1 + 3) = 0LL;
  result = (unsigned int)EnclaveData;
  *((_QWORD *)a1 + 23) = -1LL;
  return result;
}
