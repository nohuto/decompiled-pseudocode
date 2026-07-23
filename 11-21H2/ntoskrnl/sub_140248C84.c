/*
 * XREFs of sub_140248C84 @ 0x140248C84
 * Callers:
 *     sub_1402A9790 @ 0x1402A9790 (sub_1402A9790.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

void __fastcall sub_140248C84(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v5; // rdi
  _QWORD *v7; // rax
  _QWORD *v8; // r14
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rbx
  char *PoolWithTag; // r14
  char v14; // cl
  unsigned __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // r9
  __int64 v19; // r11
  _QWORD *v20; // r8
  __int64 v21; // rdx
  void *v22; // rdi
  __int64 v23; // [rsp+60h] [rbp+8h]
  __int64 v24; // [rsp+60h] [rbp+8h]

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a2;
  if ( *(_DWORD *)a1 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
  {
    v12 = (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5));
    if ( (unsigned int)v12 < 4 )
      v12 = 4LL;
    PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v12, 0x74687244u);
    if ( PoolWithTag )
    {
      _disable();
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)CurrentPrcb + 1642);
      if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
      {
        v14 = -1;
        do
        {
          ++v14;
          LODWORD(v12) = (unsigned int)v12 >> 1;
        }
        while ( (_DWORD)v12 );
        v12 = (unsigned int)(1 << v14);
      }
      if ( (unsigned int)v12 > 0x4000000 )
        v12 = 0x4000000LL;
      v15 = (unsigned int)v12;
      if ( PoolWithTag > &PoolWithTag[8 * v12] )
        v15 = 0LL;
      if ( v15 )
        memset64(PoolWithTag, a1 | 1, v15);
      v16 = *(_DWORD *)(a1 + 4);
      v17 = 0;
      v18 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
      if ( (v16 & 0xFFFFFFE0) != 0 )
      {
        do
        {
          v19 = *(_QWORD *)(a1 + 8);
          while ( 1 )
          {
            v20 = *(_QWORD **)(v19 + 8LL * v17);
            if ( ((unsigned __int8)v20 & 1) != 0 )
              break;
            *(_QWORD *)(v19 + 8LL * v17) = *v20;
            v24 = v18 & v20[1];
            v21 = (37
                 * (BYTE6(v24)
                  + 37
                  * (BYTE5(v24)
                   + 37
                   * (BYTE4(v24)
                    + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
                 + HIBYTE(v24)) & (unsigned int)(v12 - 1);
            *v20 = *(_QWORD *)&PoolWithTag[8 * v21];
            *(_QWORD *)&PoolWithTag[8 * v21] = v20;
          }
          v16 = *(_DWORD *)(a1 + 4);
          ++v17;
        }
        while ( v17 < v16 >> 5 );
      }
      v22 = *(void **)(a1 + 8);
      *(_QWORD *)(a1 + 8) = PoolWithTag;
      *(_DWORD *)(a1 + 4) = (32 * v12) | v16 & 0x1F;
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)CurrentPrcb + 1642);
      _enable();
      if ( v22 )
        ExFreePoolWithTag(v22, 0);
      v5 = a2;
    }
  }
  v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x74687244u);
  v8 = v7;
  if ( v7 )
  {
    v7[1] = v5;
    v7[2] = a3;
    *((_BYTE *)v7 + 24) = 1;
    _disable();
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)CurrentPrcb + 1642);
    v9 = *(_DWORD *)(a1 + 4);
    v23 = v8[1] & (-1LL << (v9 & 0x1F));
    v10 = *(_QWORD *)(a1 + 8);
    v11 = (37
         * (BYTE6(v23)
          + 37
          * (BYTE5(v23)
           + 37
           * (BYTE4(v23)
            + 37 * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
         + HIBYTE(v23)) & ((v9 >> 5) - 1);
    *v8 = *(_QWORD *)(v10 + 8 * v11);
    *(_QWORD *)(v10 + 8 * v11) = v8;
    ++*(_DWORD *)a1;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)CurrentPrcb + 1642);
    _enable();
  }
}
