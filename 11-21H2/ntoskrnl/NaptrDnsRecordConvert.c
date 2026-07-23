/*
 * XREFs of NaptrDnsRecordConvert @ 0x140267594
 * Callers:
 *     sub_140216DA0 @ 0x140216DA0 (sub_140216DA0.c)
 *     sub_140266644 @ 0x140266644 (sub_140266644.c)
 *     sub_140267320 @ 0x140267320 (sub_140267320.c)
 * Callees:
 *     sub_14026E05C @ 0x14026E05C (sub_14026E05C.c)
 *     sub_14026E1F4 @ 0x14026E1F4 (sub_14026E1F4.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_1405C1154 @ 0x1405C1154 (sub_1405C1154.c)
 */

__int64 __fastcall NaptrDnsRecordConvert(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 *v4; // r13
  _BYTE *v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 *v9; // rdi
  __int64 *v10; // rbx
  KIRQL v11; // r14
  _QWORD *v12; // rbx
  _BYTE *v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r14d
  _QWORD *v17; // r15
  char *v18; // r12
  unsigned int v19; // r10d
  __int64 *i; // r11
  __int64 **v21; // rax
  __int64 *v22; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v25; // r9
  int v26; // eax
  bool v27; // zf
  KIRQL v28; // [rsp+20h] [rbp-168h]
  volatile LONG *SpinLock; // [rsp+28h] [rbp-160h]
  _BYTE v30[48]; // [rsp+30h] [rbp-158h] BYREF
  char v31; // [rsp+60h] [rbp-128h] BYREF
  _BYTE v32[224]; // [rsp+70h] [rbp-118h] BYREF

  if ( !a2 || (++*(_DWORD *)(a1 + 15912), result = *(unsigned int *)(a1 + 15912), (result & 7) == 0) )
  {
    v4 = 0LL;
    v5 = v30;
    v6 = 3LL;
    do
    {
      sub_14026E1F4(v5);
      v5 = (_BYTE *)(v7 + 96);
    }
    while ( v8 != 1 );
    v28 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 15892));
    v9 = (__int64 *)(a1 + 15896);
    while ( 1 )
    {
      v10 = (__int64 *)*v9;
      if ( (__int64 *)*v9 == v9 )
        break;
      v14 = *v10;
      if ( (__int64 *)v10[1] != v9 || *(__int64 **)(v14 + 8) != v10 )
        goto LABEL_31;
      *v9 = v14;
      *(_QWORD *)(v14 + 8) = v9;
      if ( v4 )
      {
        if ( v10 == v4 )
        {
          v22 = (__int64 *)*v9;
          if ( *(__int64 **)(*v9 + 8) != v9 )
LABEL_31:
            __fastfail(3u);
          *v10 = (__int64)v22;
          v10[1] = (__int64)v9;
          v22[1] = (__int64)v10;
          *v9 = (__int64)v10;
          break;
        }
      }
      else
      {
        v4 = v10;
      }
      v15 = v10[2];
      if ( (unsigned int)(*(_DWORD *)(a1 + 15912) - *((_DWORD *)v10 + 6)) >= 8 )
      {
        SpinLock = (volatile LONG *)(v15 + 288);
        ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v15 + 288));
        v16 = 0;
        v17 = v32;
        v18 = &v31;
        do
        {
          v19 = 0;
          for ( i = &v10[2 * v16 * (unsigned __int16)word_140D05000 + 4 + v16 * (unsigned __int16)word_140D05000];
                v19 < (unsigned __int16)word_140D05000;
                ++v19 )
          {
            if ( (__int64 *)*i != i )
            {
              sub_1405C1154(v18, i);
              *v17 += i[2];
              i[2] = 0LL;
            }
            i += 3;
          }
          ++v16;
          v18 += 96;
          v17 += 12;
        }
        while ( v16 != 3 );
        ExReleaseSpinLockExclusiveFromDpcLevel(SpinLock);
      }
      v21 = *(__int64 ***)(a1 + 15904);
      if ( *v21 != v9 )
        goto LABEL_31;
      *v10 = (__int64)v9;
      v10[1] = (__int64)v21;
      *v21 = v10;
      *(_QWORD *)(a1 + 15904) = v10;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 15892));
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (CurrentIrql = KeGetCurrentIrql(), CurrentIrql <= 0xFu) )
    {
      v11 = v28;
      if ( v28 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v25 = *((_QWORD *)CurrentPrcb + 4375);
        v26 = ~(unsigned __int16)(-1LL << (v28 + 1));
        v27 = (v26 & *(_DWORD *)(v25 + 20)) == 0;
        *(_DWORD *)(v25 + 20) &= v26;
        if ( v27 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    else
    {
      v11 = v28;
    }
    result = v11;
    __writecr8(v11);
    v12 = v32;
    v13 = v30;
    do
    {
      if ( *v12 )
        result = sub_14026E05C(a1, v13, 1LL);
      v13 += 96;
      v12 += 12;
      --v6;
    }
    while ( v6 );
  }
  return result;
}
