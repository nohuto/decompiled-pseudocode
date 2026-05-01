/*
 * XREFs of CompatCacheLookupPackage @ 0x180034070
 * Callers:
 *     SdbShouldBlockPackageLaunch @ 0x1800336CC (SdbShouldBlockPackageLaunch.c)
 * Callees:
 *     CompatCachepGetPackageAlias @ 0x1800343C0 (CompatCachepGetPackageAlias.c)
 *     RtlAllocateHeap_0 @ 0x18004A46C (RtlAllocateHeap_0.c)
 *     RtlFreeHeap_0 @ 0x18004A478 (RtlFreeHeap_0.c)
 *     RtlInitUnicodeStringEx_0 @ 0x18004A4A8 (RtlInitUnicodeStringEx_0.c)
 *     memset_0 @ 0x1800536FA (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180053740 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CompatCacheLookupPackage(_QWORD *a1, int *a2, __int64 a3, __int64 a4)
{
  PVOID ProcessHeap; // r14
  PVOID v9; // rsi
  int v10; // r15d
  int PackageAlias; // ebx
  NTSTATUS inited; // eax
  char *v13; // rdi
  unsigned __int64 v14; // r14
  unsigned int v15; // eax
  __int64 v16; // rbx
  char *v18; // rax
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  char *v25; // rbx
  PVOID Heap_0; // rax
  _OWORD *v27; // rcx
  __int64 v28; // rax
  __int128 v29; // xmm0
  PVOID v30; // rax
  size_t v31; // rax
  char *v32; // rax
  char *v33; // rax
  HANDLE Heap; // [rsp+20h] [rbp-E0h]
  char *Heapa; // [rsp+20h] [rbp-E0h]
  PCWSTR SourceString; // [rsp+28h] [rbp-D8h] BYREF
  size_t Size; // [rsp+30h] [rbp-D0h]
  __int128 v38; // [rsp+38h] [rbp-C8h]
  __int128 v39; // [rsp+48h] [rbp-B8h]
  PVOID P[2]; // [rsp+58h] [rbp-A8h]
  _DWORD v41[2]; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  __int16 v43; // [rsp+98h] [rbp-68h]
  char *v44; // [rsp+1E8h] [rbp+E8h]
  unsigned int v45; // [rsp+1F0h] [rbp+F0h]
  unsigned int v46; // [rsp+250h] [rbp+150h]

  v38 = 0LL;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  Heap = ProcessHeap;
  *(_QWORD *)&v38 = ProcessHeap;
  v39 = 0LL;
  *(_OWORD *)P = 0LL;
  memset_0(v41, 0, 0x188uLL);
  SourceString = 0LL;
  v9 = 0LL;
  v10 = 0;
  PackageAlias = CompatCachepGetPackageAlias(&SourceString, a3, a4);
  if ( PackageAlias < 0 )
  {
    v13 = (char *)P[1];
    goto LABEL_8;
  }
  v41[0] = 1;
  inited = RtlInitUnicodeStringEx_0(&DestinationString, SourceString);
  v13 = (char *)P[1];
  PackageAlias = inited;
  if ( inited < 0 )
    goto LABEL_8;
  v14 = v39;
  v43 = -31132;
  v15 = 4096;
  v41[1] = 0;
  while ( 1 )
  {
    v16 = v15;
    v46 = v15;
    if ( v15 <= v14 )
      goto LABEL_17;
    if ( (unsigned __int64)v15 + 4095 < v15 )
      goto LABEL_6;
    v14 = (v15 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
    if ( !v13 )
      break;
    v18 = (char *)RtlReAllocateHeap(Heap, 0, v13, (v15 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
LABEL_15:
    if ( !v18 )
      goto LABEL_36;
    v13 = v18;
    P[1] = v18;
    v15 = v46;
LABEL_17:
    v44 = v13;
    v45 = v15;
    v19 = ((__int64 (__fastcall *)(_QWORD, _DWORD *))g_CompatCacheServiceApi)(0LL, v41);
    PackageAlias = v19;
    if ( v19 != -1073741789 )
    {
      if ( v19 < 0 )
        goto LABEL_7;
      v20 = v45;
      if ( v45 <= v14 )
      {
        ProcessHeap = Heap;
LABEL_21:
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
          goto LABEL_30;
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
            ProcessHeap = (PVOID)v38;
            goto LABEL_8;
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
          ProcessHeap = (PVOID)v38;
          *v27 = *(_OWORD *)v25;
          v27[1] = *((_OWORD *)v25 + 1);
          v27[2] = *((_OWORD *)v25 + 2);
          v27[3] = *((_OWORD *)v25 + 3);
          *((_QWORD *)v27 + 8) = *((_QWORD *)v25 + 8);
        }
LABEL_30:
        *a1 = v9;
        PackageAlias = 0;
        *a2 = v10;
        goto LABEL_8;
      }
      if ( (unsigned __int64)v45 + 4095 < v45 )
      {
LABEL_6:
        PackageAlias = -1073741675;
        goto LABEL_7;
      }
      ProcessHeap = Heap;
      v31 = (v45 + 4095LL) & 0xFFFFFFFFFFFFF000uLL;
      Size = v31;
      if ( v13 )
      {
        v33 = (char *)RtlReAllocateHeap(Heap, 0, v13, v31);
      }
      else
      {
        v32 = (char *)RtlAllocateHeap(Heap, 0, v31);
        Heapa = v32;
        if ( !v32 )
          goto LABEL_46;
        memset_0(v32, 0, Size);
        v33 = Heapa;
      }
      if ( v33 )
      {
        v13 = v33;
        P[1] = v33;
        goto LABEL_21;
      }
LABEL_46:
      PackageAlias = -1073741801;
      goto LABEL_8;
    }
    v15 = v45;
  }
  v30 = RtlAllocateHeap(Heap, 0, (v15 + 4095LL) & 0xFFFFFFFFFFFFF000uLL);
  Size = (size_t)v30;
  if ( v30 )
  {
    memset_0(v30, 0, (v16 + 4095) & 0xFFFFFFFFFFFFF000uLL);
    v18 = (char *)Size;
    goto LABEL_15;
  }
LABEL_36:
  PackageAlias = -1073741801;
LABEL_7:
  ProcessHeap = Heap;
LABEL_8:
  if ( SourceString )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, (PVOID)SourceString);
    v13 = (char *)P[1];
    ProcessHeap = (PVOID)v38;
  }
  if ( v13 )
    RtlFreeHeap(ProcessHeap, 0, v13);
  return (unsigned int)PackageAlias;
}
