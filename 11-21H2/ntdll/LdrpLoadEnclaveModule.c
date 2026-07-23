/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800D8F64
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D85B0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     LdrpMapDllFullPath @ 0x18005133C (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180051844 (LdrpMapDllSearchPath.c)
 *     LdrpUnmapModule @ 0x18007A514 (LdrpUnmapModule.c)
 *     NtClose @ 0x1800A4250 (NtClose.c)
 *     NtLoadEnclaveData @ 0x1800A61E0 (NtLoadEnclaveData.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D8AAC (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D8CA4 (LdrpEnclaveAddForwarderModules.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // rbp
  void *PageInformation; // r15
  _QWORD *v4; // r14
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  int EnclaveData; // edi
  __int64 v8; // rcx
  signed __int64 v9; // rdx
  void *v10; // rsi
  ULONG PageInformationLength; // edi
  char *Heap; // rax
  __int64 v13; // rax
  __int64 v14; // rax

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
      v8 = v4[9];
      if ( !v6 )
        v6 = (v8 + v4[10]) & 0xFFFFFFFFFFFFF000uLL;
      v9 = *(unsigned int *)(v1 + 64);
      if ( (__int64)(v6 - v8) >= v9 )
      {
        v10 = (void *)((v6 - v9) & 0xFFFFFFFFFFFFF000uLL);
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
                          v10,
                          0LL,
                          0LL,
                          0,
                          PageInformation,
                          PageInformationLength,
                          0LL,
                          0LL);
          if ( EnclaveData >= 0 )
          {
            v4[11] = v10;
            v13 = *(_QWORD *)(v1 + 152);
            *(_QWORD *)(v1 + 184) = v10;
            *(_DWORD *)(v13 + 56) = 9;
            v14 = v4[14];
            if ( !v14 )
            {
              v4[14] = v1;
              v14 = v1;
            }
            if ( v1 == v14 )
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
