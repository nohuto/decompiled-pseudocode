/*
 * XREFs of sub_1407E2434 @ 0x1407E2434
 * Callers:
 *     sub_1407E3260 @ 0x1407E3260 (sub_1407E3260.c)
 * Callees:
 *     sub_140256F38 @ 0x140256F38 (sub_140256F38.c)
 *     IoAllocateMdl @ 0x14029C7F0 (IoAllocateMdl.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     IoFreeMdl @ 0x140349550 (IoFreeMdl.c)
 *     ZwFlushInstructionCache @ 0x14041D520 (ZwFlushInstructionCache.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_140649758 @ 0x140649758 (sub_140649758.c)
 *     sub_1407E2020 @ 0x1407E2020 (sub_1407E2020.c)
 *     sub_1407E3010 @ 0x1407E3010 (sub_1407E3010.c)
 *     sub_1407E3B7C @ 0x1407E3B7C (sub_1407E3B7C.c)
 *     sub_1407E4008 @ 0x1407E4008 (sub_1407E4008.c)
 *     sub_1407E4280 @ 0x1407E4280 (sub_1407E4280.c)
 *     sub_1407E43F0 @ 0x1407E43F0 (sub_1407E43F0.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1407E2434(__int64 a1, __int64 a2, void **a3)
{
  int v4; // ebx
  _DWORD *v5; // rbx
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  const void *v14; // rax
  __int64 v15; // rdx
  void *v16; // r15
  _QWORD *v17; // rbx
  _QWORD *v18; // r10
  _QWORD *v19; // rdx
  PVOID *v20; // r9
  __int64 v21; // rax
  PVOID *v22; // r15
  _QWORD *v23; // rbx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int16 v26; // ax
  void *Src; // [rsp+58h] [rbp-90h] BYREF
  void *v29; // [rsp+60h] [rbp-88h] BYREF
  int v30; // [rsp+68h] [rbp-80h]
  PMDL MemoryDescriptorList; // [rsp+70h] [rbp-78h]
  int v32; // [rsp+78h] [rbp-70h]
  int v33; // [rsp+7Ch] [rbp-6Ch]
  PMDL Mdl; // [rsp+80h] [rbp-68h]
  PMDL v35; // [rsp+88h] [rbp-60h]
  __int64 v36; // [rsp+90h] [rbp-58h] BYREF
  void *v37; // [rsp+98h] [rbp-50h] BYREF
  __int64 v38; // [rsp+A0h] [rbp-48h]

  v29 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  Src = 0LL;
  MemoryDescriptorList = 0LL;
  Mdl = 0LL;
  v35 = 0LL;
  v30 = 0;
  v32 = 0;
  v33 = 0;
  v38 = (unsigned int)dword_140C5A700;
  v4 = sub_1407E3010(88LL, &v29);
  if ( v4 < 0 )
    goto LABEL_60;
  v5 = v29;
  memset(v29, 0, 0x58uLL);
  v5[4] &= ~1u;
  v6 = 1;
  *((_QWORD *)v5 + 10) = 1LL;
  if ( *(_DWORD *)(a2 + 8) == 1 )
  {
    v4 = sub_1407E2020((char *)(a2 + 16), 0xF8u);
    if ( v4 < 0 )
      goto LABEL_60;
    MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF8u, 0, 0, 0LL);
    if ( !MemoryDescriptorList )
    {
      v4 = -1073741801;
      goto LABEL_60;
    }
    sub_140256F38((__int64)MemoryDescriptorList, v7);
    v30 = 1;
    v4 = sub_1407E4008(*(PVOID *)(a2 + 328));
    if ( v4 < 0 )
      goto LABEL_60;
    goto LABEL_13;
  }
  sub_140649758((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, (__int64)&qword_14000FFC8, 0);
  if ( *(_DWORD *)(a2 + 8) )
  {
    v4 = -1073741811;
    goto LABEL_60;
  }
  v4 = sub_1407E2020((char *)(a2 + 16), 0xF0u);
  if ( v4 < 0 )
    goto LABEL_60;
  MemoryDescriptorList = IoAllocateMdl(*(PVOID *)(a2 + 328), 0xF0u, 0, 0, 0LL);
  if ( !MemoryDescriptorList )
  {
    v4 = -1073741801;
    goto LABEL_60;
  }
  sub_140256F38((__int64)MemoryDescriptorList, v8);
  v30 = 1;
  v4 = sub_1407E4008(*(PVOID *)(a2 + 328));
  if ( v4 >= 0 )
  {
LABEL_13:
    v4 = sub_1407E43F0(a1, *(unsigned int *)(a2 + 320), &v37, &v36);
    if ( v4 >= 0 )
    {
      v4 = sub_1407E3010(*(unsigned int *)(a2 + 320), &Src);
      if ( v4 >= 0 )
      {
        v9 = *(unsigned int *)(a2 + 284);
        if ( (_DWORD)v9 )
        {
          v10 = *(_QWORD *)(a2 + 272);
          if ( v10 + v9 > 0x7FFFFFFF0000LL || v10 + v9 < v10 )
          {
            MEMORY[0x7FFFFFFF0000] = 0;
            LODWORD(v9) = *(_DWORD *)(a2 + 284);
          }
        }
        memmove((char *)Src + *(unsigned int *)(a2 + 288), *(const void **)(a2 + 272), (unsigned int)v9);
        if ( *(_DWORD *)(a2 + 8) == 1 )
        {
          if ( *(_DWORD *)(a2 + 284) < 4u )
          {
            v4 = -1073741811;
            goto LABEL_60;
          }
          *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 288)) = *(_DWORD *)(a2 + 292);
        }
        else
        {
          sub_140649758((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, (__int64)&qword_14000FFC8, 0);
          if ( *(_DWORD *)(a2 + 8) )
          {
            v4 = -1073741811;
            goto LABEL_60;
          }
        }
        Mdl = IoAllocateMdl(*(PVOID *)(a2 + 272), *(_DWORD *)(a2 + 284), 0, 0, 0LL);
        if ( !Mdl )
        {
          v4 = -1073741801;
          goto LABEL_60;
        }
        sub_140256F38((__int64)Mdl, v11);
        v32 = 1;
        v4 = sub_1407E4280(
               0,
               (int)Src + *(_DWORD *)(a2 + 288),
               (int)Src + *(_DWORD *)(a2 + 288),
               *(_DWORD *)(a2 + 284),
               a2 + 88,
               *(_DWORD *)(a2 + 280),
               a2 + 96);
        if ( v4 >= 0 )
        {
          v4 = sub_1407E4008(*(PVOID *)(a2 + 272));
          if ( v4 >= 0 )
          {
            v12 = *(_QWORD *)(a2 + 296);
            if ( !v12 )
              goto LABEL_44;
            v13 = *(unsigned int *)(a2 + 308);
            v14 = *(const void **)(a2 + 296);
            if ( (_DWORD)v13 && (v12 + v13 > 0x7FFFFFFF0000LL || v12 + v13 < v12) )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              LODWORD(v13) = *(_DWORD *)(a2 + 308);
              v14 = *(const void **)(a2 + 296);
            }
            memmove((char *)Src + *(unsigned int *)(a2 + 312), v14, (unsigned int)v13);
            if ( *(_DWORD *)(a2 + 8) == 1 )
            {
              if ( *(_DWORD *)(a2 + 308) < 4u )
              {
                v4 = -1073741811;
                goto LABEL_60;
              }
              *(_DWORD *)((char *)Src + *(unsigned int *)(a2 + 312)) = *(_DWORD *)(a2 + 316);
            }
            else
            {
              sub_140649758((__int64)&unk_140CE21C8, 0xE67B5Au, 0, 0, (__int64)&qword_14000FFC8, 0);
              if ( *(_DWORD *)(a2 + 8) )
              {
                v4 = -1073741811;
                goto LABEL_60;
              }
            }
            v35 = IoAllocateMdl(*(PVOID *)(a2 + 296), *(_DWORD *)(a2 + 308), 0, 0, 0LL);
            if ( !v35 )
            {
              v4 = -1073741801;
              goto LABEL_60;
            }
            sub_140256F38((__int64)v35, v15);
            v33 = 1;
            v4 = sub_1407E4280(
                   0,
                   (int)Src + *(_DWORD *)(a2 + 312),
                   (int)Src + *(_DWORD *)(a2 + 312),
                   *(_DWORD *)(a2 + 308),
                   a2 + 88,
                   *(_DWORD *)(a2 + 304),
                   a2 + 96);
            if ( v4 >= 0 )
            {
              v4 = sub_1407E4008(*(PVOID *)(a2 + 296));
              if ( v4 >= 0 )
              {
LABEL_44:
                v16 = v37;
                memmove(v37, Src, *(unsigned int *)(a2 + 320));
                v17 = v29;
                v18 = (char *)v29 + 64;
                *((_QWORD *)v29 + 8) = *(_QWORD *)a2;
                v19 = v17 + 5;
                v17[5] = v16;
                v20 = (PVOID *)(v17 + 3);
                v17[3] = v36 + *(unsigned int *)(a2 + 288);
                v21 = *(unsigned int *)(a2 + 312);
                if ( (_DWORD)v21 )
                {
                  v22 = (PVOID *)(v17 + 4);
                  v17[4] = v36 + v21;
                }
                else
                {
                  v22 = (PVOID *)((char *)v29 + 32);
                  *((_QWORD *)v29 + 4) = 0LL;
                }
                v23 = v29;
                *((_DWORD *)v29 + 18) = *(_DWORD *)(a2 + 320);
                v23[6] = *(_QWORD *)(a2 + 272);
                v24 = *(_QWORD *)(a2 + 272) - (_QWORD)*v20;
                v23[7] = v24;
                v25 = *((_QWORD *)KeGetCurrentThread() + 23);
                if ( !*(_QWORD *)(v25 + 1408) )
                  goto LABEL_53;
                v26 = *(_WORD *)(v25 + 2412);
                if ( v26 != 332 && v26 != 452 )
                  v6 = 0;
                if ( v6 )
                  *(_QWORD *)*v19 = *v18;
                else
LABEL_53:
                  *(_QWORD *)*v19 = v24;
                *(_QWORD *)(*v19 + 8LL) = v38;
                v4 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v20, *(unsigned int *)(a2 + 284));
                if ( v4 >= 0 )
                {
                  if ( !*(_QWORD *)(a2 + 296)
                    || (v4 = ZwFlushInstructionCache((HANDLE)0xFFFFFFFFFFFFFFFFLL, *v22, *(unsigned int *)(a2 + 308)),
                        v4 >= 0) )
                  {
                    if ( a3 )
                    {
                      *a3 = v29;
                      v29 = 0LL;
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
LABEL_60:
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
  sub_1407E3B7C(a1, v29);
  if ( Src )
    ExFreePoolWithTag(Src, 0);
  return (unsigned int)v4;
}
