/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800D8B60
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800D8270 (LdrLoadEnclaveModule.c)
 * Callees:
 *     LdrpMapDllSearchPath @ 0x180010E68 (LdrpMapDllSearchPath.c)
 *     LdrpMapDllFullPath @ 0x180011480 (LdrpMapDllFullPath.c)
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     LdrpUnmapModule @ 0x180073CDC (LdrpUnmapModule.c)
 *     NtClose @ 0x1800A1090 (NtClose.c)
 *     NtLoadEnclaveData @ 0x1800A3040 (NtLoadEnclaveData.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800D876C (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800D8964 (LdrpEnclaveAddForwarderModules.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // r14
  __int64 v2; // r15
  _QWORD *v4; // rbp
  __int64 result; // rax
  unsigned __int64 v6; // rsi
  int EnclaveData; // edi
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rsi
  __int64 Heap; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v1 = *((_QWORD *)a1 + 7);
  v2 = 0LL;
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
        v9 = (v6 - v8) & 0xFFFFFFFFFFFFF000uLL;
        Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, (unsigned int)*a1 + 10);
        v2 = Heap;
        if ( Heap )
        {
          *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
          *(_WORD *)(Heap + 8) = *a1;
          memmove((void *)(Heap + 10), *((const void **)a1 + 1), *a1);
          EnclaveData = NtLoadEnclaveData();
          if ( EnclaveData >= 0 )
          {
            v4[11] = v9;
            v11 = *(_QWORD *)(v1 + 152);
            *(_QWORD *)(v1 + 184) = v9;
            *(_DWORD *)(v11 + 56) = 9;
            v12 = v4[14];
            if ( !v12 )
            {
              v4[14] = v1;
              v12 = v1;
            }
            if ( v1 == v12 )
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
  if ( v2 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
  NtClose(*((HANDLE *)a1 + 3));
  NtClose(*((HANDLE *)a1 + 23));
  *((_QWORD *)a1 + 3) = 0LL;
  result = (unsigned int)EnclaveData;
  *((_QWORD *)a1 + 23) = -1LL;
  return result;
}
