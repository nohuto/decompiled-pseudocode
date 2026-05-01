/*
 * XREFs of CompatCacheLookupPackage @ 0x18002FE90
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x180030400 (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     CompatCachepGetPackageAlias @ 0x1800301EC (CompatCachepGetPackageAlias.c)
 *     RtlAllocateHeap_0 @ 0x18004F20C (RtlAllocateHeap_0.c)
 *     RtlFreeHeap_0 @ 0x18004F218 (RtlFreeHeap_0.c)
 *     RtlInitUnicodeStringEx_0 @ 0x18004F248 (RtlInitUnicodeStringEx_0.c)
 *     memset_0 @ 0x18005023A (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180050280 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CompatCacheLookupPackage(_QWORD *a1, int *a2, __int64 a3, __int64 a4)
{
  PVOID ProcessHeap; // r13
  PVOID v9; // rsi
  int v10; // r14d
  int PackageAlias; // ebx
  NTSTATUS inited; // eax
  char *v13; // rdi
  size_t v14; // r13
  unsigned int v15; // ebx
  PVOID v17; // rax
  char *Heap; // rax
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  char *v25; // rbx
  PVOID Heap_0; // rax
  _OWORD *v27; // rcx
  __int64 v28; // rax
  __int128 v29; // xmm0
  size_t v30; // rax
  char *v31; // rax
  char *v32; // rax
  PVOID HeapHandle; // [rsp+20h] [rbp-E0h]
  char *HeapHandlea; // [rsp+20h] [rbp-E0h]
  PCWSTR SourceString; // [rsp+28h] [rbp-D8h] BYREF
  size_t Size; // [rsp+30h] [rbp-D0h]
  __int128 v37; // [rsp+38h] [rbp-C8h]
  __int128 v38; // [rsp+48h] [rbp-B8h]
  PVOID P[2]; // [rsp+58h] [rbp-A8h]
  _DWORD v40[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int16 v42; // [rsp+98h] [rbp-68h]
  char *v43; // [rsp+1E8h] [rbp+E8h]
  unsigned int v44; // [rsp+1F0h] [rbp+F0h]

  v37 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  HeapHandle = ProcessHeap;
  *(_QWORD *)&v37 = ProcessHeap;
  v38 = 0LL;
  *(_OWORD *)P = 0LL;
  memset_0(v40, 0, 0x188uLL);
  SourceString = 0LL;
  v9 = 0LL;
  v10 = 0;
  PackageAlias = CompatCachepGetPackageAlias(&SourceString, a3, a4);
  if ( PackageAlias < 0 )
  {
    v13 = (char *)P[1];
    goto LABEL_10;
  }
  v40[0] = 1;
  inited = RtlInitUnicodeStringEx_0(&DestinationString, SourceString);
  v13 = (char *)P[1];
  PackageAlias = inited;
  if ( inited < 0 )
    goto LABEL_10;
  v14 = v38;
  v42 = -31132;
  v15 = 4096;
  v40[1] = 0;
  while ( 1 )
  {
    if ( v15 <= v14 )
      goto LABEL_20;
    if ( (unsigned __int64)v15 + 4095 < v15 )
      goto LABEL_6;
    v14 = (v15 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( v13 )
    {
      Heap = (char *)RtlReAllocateHeap(HeapHandle, 0, v13, (v15 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
    }
    else
    {
      v17 = RtlAllocateHeap(HeapHandle, 0, (v15 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
      Size = (size_t)v17;
      if ( !v17 )
        break;
      memset_0(v17, 0, v14);
      Heap = (char *)Size;
    }
    if ( !Heap )
      break;
    v13 = Heap;
    P[1] = Heap;
LABEL_20:
    v43 = v13;
    v44 = v15;
    v19 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))g_CompatCacheServiceApi)(0LL, v40);
    PackageAlias = v19;
    if ( v19 != -1073741789 )
    {
      if ( v19 < 0 )
        goto LABEL_7;
      v20 = v44;
      if ( v44 <= v14 )
      {
        ProcessHeap = HeapHandle;
LABEL_24:
        v21 = 0LL;
        do
        {
          if ( v21 <= v20 )
          {
            v22 = v21 + 8;
            if ( v21 + 8 >= v21 && v22 <= v20 )
            {
              v23 = *(_QWORD *)&v13[v21];
              v24 = v22 + HIDWORD(v23);
              if ( v24 >= v22 && v24 + 3 >= v24 )
              {
                v21 = (v24 + 3) & 0xFFFFFFFFFFFFFFFCuLL;
                if ( v21 <= v20 )
                  continue;
              }
            }
          }
          goto LABEL_9;
        }
        while ( (_DWORD)v23 != 1 );
        v25 = &v13[v22];
        if ( HIDWORD(v23) == 456 )
        {
          Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, 0x1C8uLL);
          v9 = Heap_0;
          if ( !Heap_0 )
          {
            v13 = (char *)P[1];
            PackageAlias = -1073741801;
            ProcessHeap = (PVOID)v37;
            goto LABEL_10;
          }
          v27 = Heap_0;
          v28 = 3LL;
          do
          {
            v27 += 8;
            v29 = *(_OWORD *)v25;
            v25 += 128;
            *(v27 - 8) = v29;
            *(v27 - 7) = *((_OWORD *)v25 - 7);
            *(v27 - 6) = *((_OWORD *)v25 - 6);
            *(v27 - 5) = *((_OWORD *)v25 - 5);
            *(v27 - 4) = *((_OWORD *)v25 - 4);
            *(v27 - 3) = *((_OWORD *)v25 - 3);
            *(v27 - 2) = *((_OWORD *)v25 - 2);
            *(v27 - 1) = *((_OWORD *)v25 - 1);
            --v28;
          }
          while ( v28 );
          v13 = (char *)P[1];
          v10 = 456;
          ProcessHeap = (PVOID)v37;
          *v27 = *(_OWORD *)v25;
          v27[1] = *((_OWORD *)v25 + 1);
          v27[2] = *((_OWORD *)v25 + 2);
          v27[3] = *((_OWORD *)v25 + 3);
          *((_QWORD *)v27 + 8) = *((_QWORD *)v25 + 8);
        }
LABEL_9:
        *a1 = v9;
        PackageAlias = 0;
        *a2 = v10;
        goto LABEL_10;
      }
      if ( (unsigned __int64)v44 + 4095 < v44 )
      {
LABEL_6:
        PackageAlias = -1073741675;
        goto LABEL_7;
      }
      ProcessHeap = HeapHandle;
      v30 = (v44 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
      Size = v30;
      if ( v13 )
      {
        v32 = (char *)RtlReAllocateHeap(HeapHandle, 0, v13, v30);
      }
      else
      {
        v31 = (char *)RtlAllocateHeap(HeapHandle, 0, v30);
        HeapHandlea = v31;
        if ( !v31 )
          goto LABEL_47;
        memset_0(v31, 0, Size);
        v32 = HeapHandlea;
      }
      if ( v32 )
      {
        v13 = v32;
        P[1] = v32;
        goto LABEL_24;
      }
LABEL_47:
      PackageAlias = -1073741801;
      goto LABEL_10;
    }
    v15 = v44;
  }
  PackageAlias = -1073741801;
LABEL_7:
  ProcessHeap = HeapHandle;
LABEL_10:
  if ( SourceString )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)SourceString);
    v13 = (char *)P[1];
    ProcessHeap = (PVOID)v37;
  }
  if ( v13 )
    RtlFreeHeap(ProcessHeap, 0, v13);
  return (unsigned int)PackageAlias;
}
