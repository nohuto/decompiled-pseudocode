/*
 * XREFs of sub_1403EAC70 @ 0x1403EAC70
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_14042C310 @ 0x14042C310 (sub_14042C310.c)
 *     sub_14054FBE0 @ 0x14054FBE0 (sub_14054FBE0.c)
 */

void __fastcall sub_1403EAC70(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r8
  _QWORD *v5; // r10
  __int64 v6; // r12
  char v7; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  _QWORD *v10; // r9
  const char *v11; // rax
  __int64 v12; // rdi
  unsigned int i; // r11d
  __int64 v14; // rax
  __int64 v15; // rdi
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  unsigned __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // rax
  __int64 v21; // rdi
  int v22; // edx
  unsigned __int8 *v23; // r10
  __int64 v24; // rax
  unsigned __int64 v25; // rbx
  unsigned int v26; // eax
  int v27; // r13d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v29; // rdi
  __int64 v30; // r12
  unsigned __int64 v31; // r15
  int v32; // eax
  unsigned __int64 v33; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 v35; // rbx
  _QWORD *v36; // rdx
  _BYTE v37[16]; // [rsp+40h] [rbp-38h] BYREF

  sub_14024B6F8(a1, a2, a3);
  if ( *(_DWORD *)(a2 + 172) )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a2 + 184), DelayedWorkQueue);
  }
  else
  {
    v4 = *(unsigned int *)(a2 + 144);
    v5 = *(_QWORD **)(a2 + 128);
    v6 = v4;
    v7 = *(_BYTE *)(a2 + 168);
    LOBYTE(v8) = v7;
    v9 = *(_QWORD *)(a2 + 136) + *(unsigned int *)v5;
    v10 = (_QWORD *)v9;
    v11 = (const char *)v9;
    if ( v9 < v4 + v9 )
    {
      do
      {
        _mm_prefetch(v11, 0);
        v11 += 64;
      }
      while ( (unsigned __int64)v11 < v4 + v9 );
    }
    v12 = *(_QWORD *)(a2 + 160);
    for ( i = (unsigned int)v4 >> 7; i; --i )
    {
      v14 = 8LL;
      do
      {
        v15 = v10[1] ^ __ROL8__(*v10 ^ v12, v8);
        v10 += 2;
        v12 = __ROL8__(v15, v8);
        --v14;
      }
      while ( v14 );
      v16 = __ROL8__(*(_QWORD *)(a2 + 160) ^ ((unsigned __int64)v10 - v9), 17) ^ *(_QWORD *)(a2 + 160) ^ ((unsigned __int64)v10 - v9);
      v8 = ((unsigned __int8)(((v16 * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v16) ^ (unsigned __int8)v8) & 0x3F;
      if ( !v8 )
        LOBYTE(v8) = 1;
    }
    v17 = v4 & 0x7F;
    if ( v17 >= 8 )
    {
      v18 = (unsigned __int64)v17 >> 3;
      do
      {
        v12 = __ROL8__(*v10++ ^ v12, v8);
        v17 -= 8;
        --v18;
      }
      while ( v18 );
    }
    for ( ; v17; --v17 )
    {
      v19 = *(unsigned __int8 *)v10;
      v10 = (_QWORD *)((char *)v10 + 1);
      v12 = __ROL8__(v19 ^ v12, v8);
    }
    v20 = *(const char **)(a2 + 128);
    if ( v5 < (_QWORD *)((char *)v5 + 12) )
    {
      do
      {
        _mm_prefetch(v20, 0);
        v20 += 64;
      }
      while ( v20 < (const char *)v5 + 12 );
    }
    v21 = __ROL8__(*v5 ^ v12, v7);
    v22 = 4;
    v23 = (unsigned __int8 *)(v5 + 1);
    do
    {
      v24 = *v23++;
      v21 = __ROL8__(v24 ^ v21, v7);
      --v22;
    }
    while ( v22 );
    v25 = -1200000000LL - (unsigned int)sub_140363220(1) % 0x5F5E100uLL;
    v26 = sub_140363220(1);
    KeSetCoalescableTimer((PKTIMER)(a2 + 64), (LARGE_INTEGER)v25, 0, v26 % 0x2710, (PKDPC)a2);
    if ( v21 != *(_QWORD *)(a2 + 152) )
    {
      if ( *(_DWORD *)(a2 + 176) )
      {
        v27 = *(_DWORD *)(a2 + 172);
        if ( v6 )
        {
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          v29 = v9 & 0xFFFFFFFFFFFFF000uLL;
          v30 = (v9 + v6 - 1) | 0xFFF;
          v31 = (v9 & 0xFFFFFFFFFFFFF000uLL) - 1;
          while ( 1 )
          {
            v32 = sub_14054FBE0(v29, 0LL);
            v33 = CurrentIrql;
            while ( v32 == -1073741267 )
            {
              if ( !v27 )
                goto LABEL_33;
              if ( CurrentIrql > 1u )
                goto LABEL_31;
              v33 = CurrentIrql;
              __writecr8(CurrentIrql);
              KeGetCurrentIrql();
              __writecr8(2uLL);
              v32 = sub_14054FBE0(v29, 0LL);
            }
            if ( v32 < 0 )
              break;
LABEL_31:
            v29 += 4096LL;
            v31 += 4096LL;
            if ( v31 == v30 )
            {
              __writecr8(v33);
              return;
            }
          }
LABEL_33:
          __writecr8(v33);
        }
      }
      _disable();
      CurrentPrcb = KeGetCurrentPrcb();
      v35 = *((_QWORD *)CurrentPrcb + 1652);
      v36 = (_QWORD *)*((_QWORD *)CurrentPrcb + 1);
      if ( !*((_BYTE *)CurrentPrcb + 13242) || (unsigned __int64)v37 > v35 || (unsigned __int64)v37 < v35 - 24576 )
        v35 = v36[5];
      v36[148] = 0LL;
      v36[164] = 0LL;
      ExTryAcquireSpinLockExclusiveAtDpcLevel(&dword_140D311C0);
      sub_14042C310(
        __ROL4__(536870945, 163),
        __ROR8__(0x1C8B4E8A3A03F589LL, 164),
        0,
        v9,
        (unsigned int)__ROR4__(33536, 167),
        (__int64)KeBugCheckEx,
        v35);
      JUMPOUT(0x1403EAFF4LL);
    }
  }
}
