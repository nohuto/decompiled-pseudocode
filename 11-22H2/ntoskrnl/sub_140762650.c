/*
 * XREFs of sub_140762650 @ 0x140762650
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x140762E28 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     IoAllocateMdl @ 0x14022E2C0 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1402ACFB0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     MmProbeAndLockPagesPrivate @ 0x1402FBEF8 (MmProbeAndLockPagesPrivate.c)
 *     ZwFlushInstructionCache @ 0x14041C480 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     sub_140762238 @ 0x140762238 (sub_140762238.c)
 *     sub_140762FB4 @ 0x140762FB4 (sub_140762FB4.c)
 *     WbAlloc @ 0x140763E98 (WbAlloc.c)
 *     sub_140764104 @ 0x140764104 (sub_140764104.c)
 *     sub_140764384 @ 0x140764384 (sub_140764384.c)
 *     WbAllocateUserMemory @ 0x140764478 (WbAllocateUserMemory.c)
 *     ExSystemExceptionFilter @ 0x140865F70 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140762650(__int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  _DWORD *v5; // rbx
  char v6; // r14
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  void *v17; // r15
  _QWORD *v18; // rbx
  _QWORD *v19; // r10
  _QWORD *v20; // rdx
  PVOID *v21; // r9
  __int64 v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  _KPROCESS *Process; // r8
  __int16 v26; // ax
  void *v28; // [rsp+58h] [rbp-90h] BYREF
  void *Src; // [rsp+60h] [rbp-88h] BYREF
  int v30; // [rsp+68h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-78h]
  int v32; // [rsp+78h] [rbp-70h]
  int v33; // [rsp+7Ch] [rbp-6Ch]
  PMDL Mdl; // [rsp+80h] [rbp-68h]
  PMDL v35; // [rsp+88h] [rbp-60h]
  __int64 v36; // [rsp+90h] [rbp-58h] BYREF
  void *v37; // [rsp+98h] [rbp-50h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-48h]

  v28 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  Src = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v35 = 0LL;
  v30 = 0;
  v32 = 0;
  v33 = 0;
  v38 = (unsigned int)dword_140C70B30;
  v4 = WbAlloc(88LL, &v28);
  if ( v4 >= 0 )
  {
    v5 = v28;
    memset(v28, 0, 0x58uLL);
    v5[4] &= ~1u;
    v6 = 1;
    *((_QWORD *)v5 + 10) = 1LL;
    v7 = *(_DWORD *)(a2 + 8);
    if ( v7 == 1 )
    {
      v4 = sub_140762238((UCHAR *)(a2 + 16), 0xF8u);
      if ( v4 < 0 )
        goto LABEL_59;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF8u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v4 = -1073741801;
        goto LABEL_59;
      }
    }
    else
    {
      if ( v7 )
      {
        v4 = -1073741811;
        goto LABEL_59;
      }
      v4 = sub_140762238((UCHAR *)(a2 + 16), 0xF0u);
      if ( v4 < 0 )
        goto LABEL_59;
      MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
      if ( !MemoryDescriptorList )
      {
        v4 = -1073741801;
        goto LABEL_59;
      }
    }
    MmProbeAndLockPagesPrivate((__int64)MemoryDescriptorList, v8);
    v30 = 1;
    v4 = sub_140764104(*(PVOID *)(a2 + 328));
    if ( v4 >= 0 )
    {
      v4 = WbAllocateUserMemory(a1, *(unsigned int *)(a2 + 320), &v37, &v36);
      if ( v4 >= 0 )
      {
        v4 = WbAlloc(*(unsigned int *)(a2 + 320), &Src);
        if ( v4 >= 0 )
        {
          v9 = *(unsigned int *)(a2 + 284);
          if ( (_DWORD)v9 )
          {
            v10 = *(_QWORD *)(a2 + 272);
            if ( v10 + v9 > 0x7FFFFFFF0000LL || v10 + v9 < v10 )
              MEMORY[0x7FFFFFFF0000] = 0;
          }
          memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), *(unsigned int *)(a2 + 284));
          v11 = *(_DWORD *)(a2 + 8);
          if ( v11 == 1 )
          {
            if ( *(_DWORD *)(a2 + 284) < 4u )
            {
              v4 = -1073741811;
              goto LABEL_59;
            }
            *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
          }
          else if ( v11 )
          {
            v4 = -1073741811;
            goto LABEL_59;
          }
          Mdl = IoAllocateMdl(*(PVOID *)(a2 + 272), *(_DWORD *)(a2 + 284), 0, 0, 0LL);
          if ( !Mdl )
          {
            v4 = -1073741801;
            goto LABEL_59;
          }
          MmProbeAndLockPagesPrivate((__int64)Mdl, v12);
          v32 = 1;
          v4 = sub_140764384(
                 0,
                 (int)Src + *(_DWORD *)(a2 + 288),
                 (int)Src + *(_DWORD *)(a2 + 288),
                 *(_DWORD *)(a2 + 284),
                 a2 + 88,
                 *(_DWORD *)(a2 + 280),
                 a2 + 96);
          if ( v4 >= 0 )
          {
            v4 = sub_140764104(*(PVOID *)(a2 + 272));
            if ( v4 >= 0 )
            {
              v13 = *(_QWORD *)(a2 + 296);
              if ( !v13 )
                goto LABEL_43;
              v14 = *(unsigned int *)(a2 + 308);
              if ( (_DWORD)v14 && (v13 + v14 > 0x7FFFFFFF0000LL || v13 + v14 < v13) )
                MEMORY[0x7FFFFFFF0000] = 0;
              memmove(
                (char *)Src + *(unsigned int *)(a2 + 312),
                *(const void **)(a2 + 296),
                *(unsigned int *)(a2 + 308));
              v15 = *(_DWORD *)(a2 + 8);
              if ( v15 == 1 )
              {
                if ( *(_DWORD *)(a2 + 308) < 4u )
                {
                  v4 = -1073741811;
                  goto LABEL_59;
                }
                *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
              }
              else if ( v15 )
              {
                v4 = -1073741811;
                goto LABEL_59;
              }
              v35 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
              if ( !v35 )
              {
                v4 = -1073741801;
                goto LABEL_59;
              }
              MmProbeAndLockPagesPrivate((__int64)v35, v16);
              v33 = 1;
              v4 = sub_140764384(
                     0,
                     (int)Src + *(_DWORD *)(a2 + 312),
                     (int)Src + *(_DWORD *)(a2 + 312),
                     *(_DWORD *)(a2 + 308),
                     a2 + 88,
                     *(_DWORD *)(a2 + 304),
                     a2 + 96);
              if ( v4 >= 0 )
              {
                v4 = sub_140764104(*(PVOID *)(a2 + 296));
                if ( v4 >= 0 )
                {
LABEL_43:
                  v17 = v37;
                  memmove(v37, Src, *(unsigned int *)(a2 + 320));
                  v18 = v28;
                  v19 = (char *)v28 + 64;
                  *((_QWORD *)v28 + 8) = *(_QWORD *)a2;
                  v20 = v18 + 5;
                  v18[5] = v17;
                  v21 = (PVOID *)(v18 + 3);
                  v18[3] = v36 + *(unsigned int *)(a2 + 288);
                  v22 = *(unsigned int *)(a2 + 312);
                  if ( (_DWORD)v22 )
                    v18[4] = v36 + v22;
                  else
                    *((_QWORD *)v28 + 4) = 0LL;
                  v23 = v28;
                  *((_DWORD *)v28 + 18) = *(_DWORD *)(a2 + 320);
                  v23[6] = *(_QWORD *)(a2 + 272);
                  v24 = *(_QWORD *)(a2 + 272) - (_QWORD)*v21;
                  v23[7] = v24;
                  Process = KeGetCurrentThread()->ApcState.Process;
                  if ( !Process[1].Affinity.StaticBitmap[30] )
                    goto LABEL_52;
                  v26 = WORD2(Process[2].Affinity.StaticBitmap[20]);
                  if ( v26 != 332 && v26 != 452 )
                    v6 = 0;
                  if ( v6 )
                    *(_QWORD *)*v20 = *v19;
                  else
LABEL_52:
                    *(_QWORD *)*v20 = v24;
                  *(_QWORD *)(*v20 + 8LL) = v38;
                  v4 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v21, *(unsigned int *)(a2 + 284));
                  if ( v4 >= 0 )
                  {
                    if ( !*(_QWORD *)(a2 + 296)
                      || (v4 = ZwFlushInstructionCache(
                                 (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                                 *((PVOID *)v28 + 4),
                                 *(unsigned int *)(a2 + 308)),
                          v4 >= 0) )
                    {
                      if ( a3 )
                      {
                        *a3 = v28;
                        v28 = 0LL;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_59:
  if ( MemoryDescriptorList )
  {
    if ( v30 )
      MmUnlockPages(MemoryDescriptorList);
    IoFreeMdl(MemoryDescriptorList);
  }
  if ( Mdl )
  {
    if ( v32 )
      MmUnlockPages(Mdl);
    IoFreeMdl(Mdl);
  }
  if ( v35 )
  {
    if ( v33 )
      MmUnlockPages(v35);
    IoFreeMdl(v35);
  }
  sub_140762FB4(a1, v28);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v4;
}
