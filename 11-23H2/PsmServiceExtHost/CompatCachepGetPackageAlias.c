/*
 * XREFs of CompatCachepGetPackageAlias @ 0x180034390
 * Callers:
 *     CompatCacheLookupPackage @ 0x180034040 (CompatCacheLookupPackage.c)
 * Callees:
 *     AslPackageAliasGetSize @ 0x18003452C (AslPackageAliasGetSize.c)
 *     RtlAllocateHeap_0 @ 0x18004A3DC (RtlAllocateHeap_0.c)
 *     RtlFreeHeap_0 @ 0x18004A3E8 (RtlFreeHeap_0.c)
 *     memset_0 @ 0x1800534BA (memset_0.c)
 */

__int64 __fastcall CompatCachepGetPackageAlias(_QWORD *a1, const WCHAR *a2, __int64 a3)
{
  BYTE *Heap_0; // rax
  unsigned int v5; // r15d
  BYTE *v6; // r13
  int v7; // edx
  int v8; // ecx
  PVOID v9; // rax
  void *v10; // r12
  const unsigned __int16 *v11; // rbx
  const unsigned __int16 *v12; // rdi
  const unsigned __int16 *v13; // rsi
  __int64 v14; // rbp
  unsigned int v15; // r14d
  const unsigned __int16 *v16; // rdx
  const unsigned __int16 *v17; // rcx
  const unsigned __int16 *v18; // rax
  BYTE *v20; // rax
  SIZE_T Size; // [rsp+50h] [rbp-48h]
  UINT32 bufferLength; // [rsp+B8h] [rbp+20h] BYREF

  bufferLength = 512;
  Heap_0 = (BYTE *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x200uLL);
  v5 = 0;
  v6 = Heap_0;
  if ( !Heap_0 )
    return (unsigned int)-1073741801;
  if ( PackageIdFromFullName(a2, 0, &bufferLength, Heap_0) != 122 )
    goto LABEL_3;
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
  v20 = (BYTE *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, bufferLength);
  v6 = v20;
  if ( !v20 )
    return (unsigned int)-1073741801;
  if ( !PackageIdFromFullName(a2, 0, &bufferLength, v20) )
  {
LABEL_3:
    Size = AslPackageAliasGetSize(v8, v7, *((_QWORD *)v6 + 2), *((_QWORD *)v6 + 5), *((_QWORD *)v6 + 4));
    v9 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, Size);
    v10 = v9;
    if ( v9 )
    {
      v11 = (const unsigned __int16 *)*((_QWORD *)v6 + 4);
      v12 = (const unsigned __int16 *)*((_QWORD *)v6 + 5);
      v13 = (const unsigned __int16 *)*((_QWORD *)v6 + 2);
      v14 = *((_QWORD *)v6 + 1);
      v15 = *((_DWORD *)v6 + 1);
      memset_0(v9, 0, Size);
      v16 = &word_1800B66B4;
      v17 = &word_1800B66B4;
      v18 = &word_1800B66B4;
      if ( v11 )
        v17 = v11;
      if ( v12 )
        v18 = v12;
      if ( v13 )
        v16 = v13;
      if ( swprintf_s(
             (wchar_t *const)v10,
             Size >> 1,
             L"%08I32x\t%016I64x\t%016I64x\t%04hx\t%ls\t%ls\t%ls",
             v15,
             v14,
             a3,
             34404,
             v16,
             v18,
             v17) == -1 )
      {
        v5 = -1073741595;
        RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v10);
      }
      else
      {
        *a1 = v10;
      }
    }
    else
    {
      v5 = -1073741801;
    }
    goto LABEL_12;
  }
  v5 = -1073741595;
LABEL_12:
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v6);
  return v5;
}
