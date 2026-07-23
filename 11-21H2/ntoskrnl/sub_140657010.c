/*
 * XREFs of sub_140657010 @ 0x140657010
 * Callers:
 *     <none>
 * Callees:
 *     sub_14024B6F8 @ 0x14024B6F8 (sub_14024B6F8.c)
 *     KeSetCoalescableTimer @ 0x1402E2C60 (KeSetCoalescableTimer.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140356250 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 *     sub_14042C310 @ 0x14042C310 (sub_14042C310.c)
 *     sub_14054FBE0 @ 0x14054FBE0 (sub_14054FBE0.c)
 */

BOOLEAN __fastcall sub_140657010(PKDPC Dpc, __int64 a2, __int64 a3)
{
  __int64 ProcessorHistory_low; // r9
  _QWORD *v5; // r11
  __int64 v6; // r15
  char SystemArgument1; // r14
  unsigned __int64 DeferredContext; // r12
  int v9; // edi
  __int64 v10; // rbp
  _QWORD *v11; // r10
  const char *v12; // rax
  unsigned __int64 v13; // r8
  unsigned int i; // ebx
  __int64 v15; // rdx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // r9d
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  const char *v22; // rax
  int v23; // edx
  PKDEFERRED_ROUTINE v24; // rdi
  unsigned __int8 *v25; // r11
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  unsigned int v28; // eax
  BOOLEAN result; // al
  int SystemArgument1_high; // r12d
  unsigned __int8 CurrentIrql; // si
  unsigned __int64 v32; // rdi
  __int64 v33; // r15
  unsigned __int64 v34; // r14
  int v35; // eax
  unsigned __int64 v36; // rbx
  struct _KPRCB *CurrentPrcb; // rcx
  char *v38; // rbx
  _QWORD *v39; // rdx
  char v40; // [rsp+78h] [rbp+10h] BYREF

  sub_14024B6F8(Dpc, a2, a3);
  ProcessorHistory_low = LODWORD(Dpc[2].ProcessorHistory);
  v5 = *(_QWORD **)&Dpc[2].TargetInfoAsUlong;
  v6 = ProcessorHistory_low;
  SystemArgument1 = (char)Dpc[2].SystemArgument1;
  DeferredContext = (unsigned __int64)Dpc[2].DeferredContext;
  LOBYTE(v9) = SystemArgument1;
  v10 = (__int64)Dpc[2].DpcListEntry.Next + *(unsigned int *)v5;
  v11 = (_QWORD *)v10;
  v12 = (const char *)v10;
  if ( v10 < (unsigned __int64)(ProcessorHistory_low + v10) )
  {
    do
    {
      _mm_prefetch(v12, 0);
      v12 += 64;
    }
    while ( (unsigned __int64)v12 < ProcessorHistory_low + v10 );
  }
  v13 = (unsigned __int64)Dpc[2].DeferredContext;
  for ( i = (unsigned int)ProcessorHistory_low >> 7; i; --i )
  {
    v15 = 8LL;
    do
    {
      v16 = v13 ^ *v11;
      v17 = v11[1];
      v11 += 2;
      v13 = __ROL8__(__ROL8__(v16, v9) ^ v17, v9);
      --v15;
    }
    while ( v15 );
    v18 = __ROL8__(DeferredContext ^ ((unsigned __int64)v11 - v10), 17);
    v9 = ((unsigned __int8)((((v18 ^ DeferredContext ^ ((unsigned __int64)v11 - v10))
                            * (unsigned __int128)0x7010008004002001uLL) >> 64) ^ v18 ^ DeferredContext ^ ((_BYTE)v11 - v10)) ^ (unsigned __int8)v9) & 0x3F;
    if ( !v9 )
      LOBYTE(v9) = 1;
  }
  v19 = ProcessorHistory_low & 0x7F;
  if ( v19 >= 8 )
  {
    v20 = (unsigned __int64)v19 >> 3;
    do
    {
      v13 = __ROL8__(*v11++ ^ v13, v9);
      v19 -= 8;
      --v20;
    }
    while ( v20 );
  }
  for ( ; v19; --v19 )
  {
    v21 = *(unsigned __int8 *)v11;
    v11 = (_QWORD *)((char *)v11 + 1);
    v13 = __ROL8__(v21 ^ v13, v9);
  }
  v22 = *(const char **)&Dpc[2].TargetInfoAsUlong;
  if ( v5 < (_QWORD *)((char *)v5 + 12) )
  {
    do
    {
      _mm_prefetch(v22, 0);
      v22 += 64;
    }
    while ( v22 < (const char *)v5 + 12 );
  }
  v23 = 4;
  v24 = (PKDEFERRED_ROUTINE)__ROL8__(v13 ^ *v5, SystemArgument1);
  v25 = (unsigned __int8 *)(v5 + 1);
  do
  {
    v26 = *v25++;
    v24 = (PKDEFERRED_ROUTINE)__ROL8__(v26 ^ (unsigned __int64)v24, SystemArgument1);
    --v23;
  }
  while ( v23 );
  v27 = -1200000000LL - (unsigned int)sub_140363220(1) % 0x5F5E100uLL;
  v28 = sub_140363220(1);
  result = KeSetCoalescableTimer((PKTIMER)&Dpc[1], (LARGE_INTEGER)v27, 0, v28 % 0x2710, Dpc);
  if ( v24 != Dpc[2].DeferredRoutine )
  {
    if ( LODWORD(Dpc[2].SystemArgument2) )
    {
      SystemArgument1_high = HIDWORD(Dpc[2].SystemArgument1);
      if ( v6 )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v32 = v10 & 0xFFFFFFFFFFFFF000uLL;
        v33 = (v10 + v6 - 1) | 0xFFF;
        v34 = (v10 & 0xFFFFFFFFFFFFF000uLL) - 1;
        while ( 1 )
        {
          v35 = sub_14054FBE0(v32, 0);
          v36 = CurrentIrql;
          while ( v35 == -1073741267 )
          {
            if ( !SystemArgument1_high )
              goto LABEL_31;
            if ( CurrentIrql > 1u )
              goto LABEL_28;
            v36 = CurrentIrql;
            __writecr8(CurrentIrql);
            KeGetCurrentIrql();
            __writecr8(2uLL);
            v35 = sub_14054FBE0(v32, 0);
          }
          if ( v35 < 0 )
            break;
LABEL_28:
          result = 0;
          v32 += 4096LL;
          v34 += 4096LL;
          if ( v34 == v33 )
          {
            __writecr8(v36);
            return result;
          }
        }
LABEL_31:
        __writecr8(v36);
      }
    }
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v38 = (char *)*((_QWORD *)CurrentPrcb + 1652);
    v39 = (_QWORD *)*((_QWORD *)CurrentPrcb + 1);
    if ( !*((_BYTE *)CurrentPrcb + 13242) || &v40 > v38 || &v40 < v38 - 24576 )
      v38 = (char *)v39[5];
    v39[148] = 0LL;
    v39[164] = 0LL;
    ExTryAcquireSpinLockExclusiveAtDpcLevel(&dword_140D311C0);
    sub_14042C310(
      (unsigned int)__ROL4__(536870945, 163),
      __ROR8__(0x1C8B4E8A3A03F589LL, 164),
      0LL,
      v10,
      (unsigned int)__ROR4__(33536, 167),
      (__int64 (__fastcall *)(__int64))KeBugCheckEx,
      v38);
    JUMPOUT(0x140657369LL);
  }
  return result;
}
