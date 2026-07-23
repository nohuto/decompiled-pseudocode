/*
 * XREFs of LdrpInitializeProcessHeap @ 0x1800DFB48
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpLogInternal @ 0x180026C30 (LdrpLogInternal.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     NtOpenPartition @ 0x1800A3480 (NtOpenPartition.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

PVOID __fastcall LdrpInitializeProcessHeap(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG v6; // ebx
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  SIZE_T v13; // r8
  SIZE_T v14; // r9
  int *Parameters; // rcx
  int v17; // edi
  HANDLE PartitionHandle; // [rsp+30h] [rbp-D0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v20[6]; // [rsp+70h] [rbp-90h] BYREF
  HANDLE v21; // [rsp+88h] [rbp-78h]
  int v22; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v23[20]; // [rsp+C4h] [rbp-3Ch] BYREF
  __int64 v24; // [rsp+D8h] [rbp-28h]
  __int64 v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F0h] [rbp-10h]

  memset_thunk_772440563353939046(v23, 0, 0x5CuLL);
  v22 = 96;
  v6 = 2;
  if ( !a1 )
    goto LABEL_22;
  if ( *(_DWORD *)a1 >= 0x4Cu )
  {
    v7 = *(_DWORD *)(a1 + 72);
    if ( v7 )
    {
      v8 = v7 & 0xFFFF0FFF;
      if ( v8 )
        v6 = v8;
    }
    goto LABEL_7;
  }
  if ( *(_DWORD *)a1 >= 0x20u )
  {
LABEL_7:
    v9 = v24;
    if ( *(_QWORD *)(a1 + 24) )
      v9 = *(_QWORD *)(a1 + 24);
    v24 = v9;
  }
  if ( *(_DWORD *)a1 >= 0x28u )
  {
    v10 = v25;
    if ( *(_QWORD *)(a1 + 32) )
      v10 = *(_QWORD *)(a1 + 32);
    v25 = v10;
  }
  if ( *(_DWORD *)a1 >= 0x38u )
  {
    v11 = v26;
    if ( *(_QWORD *)(a1 + 48) )
      v11 = *(_QWORD *)(a1 + 48);
    v26 = v11;
  }
  if ( *(_DWORD *)a1 >= 0x40u )
  {
    v12 = v27;
    if ( *(_QWORD *)(a1 + 56) )
      v12 = *(_QWORD *)(a1 + 56);
    v27 = v12;
  }
LABEL_22:
  v13 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v13 = *(_QWORD *)(a2 + 112);
    v14 = *(_QWORD *)(a2 + 120);
  }
  Parameters = &v22;
  if ( qword_180187418
    || (LdrpHeapPartitionName = *(_OWORD *)(a3 + 1056), _mm_srli_si128(LdrpHeapPartitionName, 8).m128i_u64[0]) )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&LdrpHeapPartitionName;
    ObjectAttributes.Length = 48;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( NtOpenPartition(&PartitionHandle, 0x1F0003u, &ObjectAttributes) < 0 )
    {
      LdrpLogInternal(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        8493,
        (__int64)"LdrpInitializeProcessHeap",
        0,
        "Cannot open partition.");
      return 0LL;
    }
    if ( *(_DWORD *)(a3 + 1088) )
    {
      v17 = *(_DWORD *)(a3 + 1088) & 0x1C;
      if ( !v17 )
      {
        LdrpLogInternal(
          (unsigned int)"minkernel\\ntdll\\ldrinit.c",
          8508,
          (__int64)"LdrpInitializeProcessHeap",
          0,
          "Invalid partition heap page types.");
        return 0LL;
      }
    }
    else
    {
      v17 = 8;
    }
    v6 = 258;
    memset_thunk_772440563353939046(v20, 0, 0x50uLL);
    Parameters = v20;
    v20[4] = -1;
    v13 = 0LL;
    v21 = PartitionHandle;
    v14 = 0LL;
    v20[0] = 5242883;
    v20[3] = v17;
  }
  if ( UseWOW64 || *(_WORD *)(a2 + 24) == 267 )
  {
    v13 = 0LL;
    v14 = 0LL;
  }
  else if ( *(_WORD *)(a2 + 72) <= 3u && *(_WORD *)(a2 + 74) < 0x33u )
  {
    v6 |= 0x10000u;
  }
  return RtlCreateHeap(v6, 0LL, v13, v14, 0LL, Parameters);
}
