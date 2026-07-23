/*
 * XREFs of LdrpAppxGetBinaryNameKeyInformation @ 0x1800D6990
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800D6600 (LdrAppxHandleIntegrityFailure.c)
 * Callees:
 *     RtlFreeHeap @ 0x180027690 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x180028B70 (RtlAllocateHeap.c)
 *     NtQueryValueKey @ 0x1800A4350 (NtQueryValueKey.c)
 */

__int64 __fastcall LdrpAppxGetBinaryNameKeyInformation(HANDLE KeyHandle, _QWORD *a2, _QWORD *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  NTSTATUS v8; // eax
  NTSTATUS v9; // ebx
  _DWORD *Heap; // rax
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-38h] BYREF
  SIZE_T Size; // [rsp+88h] [rbp+20h] BYREF

  *(_DWORD *)&ValueName.Length = 1441812;
  ValueName.Buffer = L"BinaryName";
  v6 = 0LL;
  v7 = 0LL;
  v8 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)&Size);
  v9 = v8;
  if ( v8 < 0 )
  {
    if ( v8 == -1073741789 )
    {
      Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, (unsigned int)Size);
      v7 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      v9 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, Heap, Size, (PULONG)&Size);
      if ( v9 < 0 )
      {
LABEL_14:
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
        return (unsigned int)v9;
      }
      if ( v7[1] != 1 || v7[2] < 4u || (v6 = v7 + 3, *((_WORD *)v7 + ((unsigned __int64)(unsigned int)v7[2] >> 1) + 5)) )
      {
        v9 = -1073739509;
        goto LABEL_14;
      }
    }
    if ( v9 >= 0 )
    {
      *a2 = v6;
      *a3 = v7;
      return (unsigned int)v9;
    }
    if ( !v7 )
      return (unsigned int)v9;
    goto LABEL_14;
  }
  return (unsigned int)-1073739509;
}
