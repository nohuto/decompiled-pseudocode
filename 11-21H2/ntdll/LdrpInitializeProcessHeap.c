/*
 * XREFs of LdrpInitializeProcessHeap @ 0x1800DFF28
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     LdrpLogInternal @ 0x18003F290 (LdrpLogInternal.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     NtOpenPartition @ 0x1800A6600 (NtOpenPartition.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

PVOID __fastcall LdrpInitializeProcessHeap(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG v6; // edi
  int v7; // eax
  unsigned int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  SIZE_T v13; // r8
  SIZE_T v14; // r9
  _QWORD *Parameters; // rcx
  HANDLE PartitionHandle; // [rsp+30h] [rbp-D0h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v19[10]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v20[12]; // [rsp+C0h] [rbp-40h] BYREF

  memset((char *)v20 + 4, 0, 0x5CuLL);
  LODWORD(v20[0]) = 96;
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
    v9 = v20[3];
    if ( *(_QWORD *)(a1 + 24) )
      v9 = *(_QWORD *)(a1 + 24);
    v20[3] = v9;
  }
  if ( *(_DWORD *)a1 >= 0x28u )
  {
    v10 = v20[4];
    if ( *(_QWORD *)(a1 + 32) )
      v10 = *(_QWORD *)(a1 + 32);
    v20[4] = v10;
  }
  if ( *(_DWORD *)a1 >= 0x38u )
  {
    v11 = v20[5];
    if ( *(_QWORD *)(a1 + 48) )
      v11 = *(_QWORD *)(a1 + 48);
    v20[5] = v11;
  }
  if ( *(_DWORD *)a1 >= 0x40u )
  {
    v12 = v20[6];
    if ( *(_QWORD *)(a1 + 56) )
      v12 = *(_QWORD *)(a1 + 56);
    v20[6] = v12;
  }
LABEL_22:
  v13 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    v13 = *(_QWORD *)(a2 + 112);
    v14 = *(_QWORD *)(a2 + 120);
  }
  Parameters = v20;
  if ( qword_18017A118
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
        8380,
        (__int64)"LdrpInitializeProcessHeap",
        0,
        "Cannot open partition.");
      return 0LL;
    }
    v6 = 258;
    memset(v19, 0, sizeof(v19));
    Parameters = v19;
    LODWORD(v19[2]) = -1;
    v13 = 0LL;
    v19[3] = PartitionHandle;
    v14 = 0LL;
    LODWORD(v19[0]) = 5242883;
    HIDWORD(v19[1]) = 8;
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
