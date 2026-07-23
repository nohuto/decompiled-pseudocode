/*
 * XREFs of KeSetSelectedCpuSetsThread @ 0x140572A90
 * Callers:
 *     NtSetInformationThread @ 0x14072EC80 (NtSetInformationThread.c)
 * Callees:
 *     sub_14020F30C @ 0x14020F30C (sub_14020F30C.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_14022BA48 @ 0x14022BA48 (sub_14022BA48.c)
 *     sub_140293090 @ 0x140293090 (sub_140293090.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x1403127E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_1403D3170 @ 0x1403D3170 (sub_1403D3170.c)
 *     sub_1403D3208 @ 0x1403D3208 (sub_1403D3208.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 *     sub_14062DAE4 @ 0x14062DAE4 (sub_14062DAE4.c)
 */

__int64 __fastcall KeSetSelectedCpuSetsThread(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  __int64 v7; // r10
  unsigned __int8 CurrentIrql; // r12
  __int64 v9; // r9
  volatile LONG *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _KPRCB *CurrentPrcb; // rbx
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  unsigned int v19; // esi
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  unsigned int v23; // r14d
  __int64 v24; // rbx
  struct _KPRCB *v25; // rbx
  char v26; // si
  _QWORD *v27; // rdi
  ULONG_PTR v28; // rsi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  struct _KPRCB *v32; // rdi
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdi
  __int64 v38; // r8
  unsigned int v39; // r8d
  bool v40; // zf
  struct _KPRCB *v41; // rcx
  __int64 v42; // rdx
  struct _KPRCB *v43; // r9
  __int64 v44; // r8
  int v45; // eax
  int v46; // [rsp+20h] [rbp-30h] BYREF
  unsigned __int64 *v47; // [rsp+28h] [rbp-28h] BYREF
  _QWORD *v48; // [rsp+30h] [rbp-20h] BYREF
  int v49[6]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v50; // [rsp+98h] [rbp+48h] BYREF

  v50 = 0;
  result = sub_14020F30C(a3, a2);
  if ( (int)result >= 0 )
  {
    v48 = 0LL;
    v47 = (unsigned __int64 *)sub_140293090(a1, &v50);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v10 = (volatile LONG *)(v7 + 64);
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v7 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    v46 = 0;
    while ( 1 )
    {
      v15 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v15 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v16 = *(_DWORD *)(v15 + 24);
          *(_DWORD *)(v15 + 24) = v16 + 1;
          if ( v16 == -1 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      if ( !_interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        break;
      v17 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v17 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v18 = *(_DWORD *)(v17 + 24) - 1;
          *(_DWORD *)(v17 + 24) = v18;
          if ( !v18 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v46, v11, v12, v13);
      while ( *(_QWORD *)(a1 + 64) );
    }
    v19 = *(_DWORD *)(a1 + 588);
    sub_1403D3208(v47, v50, (__int64)a3, a2);
    v22 = sub_1403D3170(a1, (__int64)&v48, v20, v21);
    v23 = *(_DWORD *)(a1 + 588);
    v24 = v22;
    sub_140224100(a1);
    if ( (xmmword_140D06910 & 0x8000000) != 0 )
      sub_14062DAE4(a1, 1350LL, v19, v23);
    ExReleaseSpinLockSharedFromDpcLevel(v10);
    if ( v24 && HIDWORD(KeGetPcr()[1].LockArray) != *(_DWORD *)(v24 + 36) )
      sub_14022BA48();
    v25 = KeGetCurrentPrcb();
    v26 = 0;
    v27 = v48;
    if ( v48 )
    {
      v48 = (_QWORD *)*v48;
      do
      {
        sub_1403405E0((__int64)v25, (ULONG_PTR)(v27 - 27), (__int64)&v48);
        v27 = v48;
        ++v26;
        if ( v48 )
          v48 = (_QWORD *)*v48;
        if ( (v26 & 0xF) == 0 )
          sub_140340300((unsigned __int8 *)v25 + 12760);
      }
      while ( v27 );
    }
    sub_140340300((unsigned __int8 *)v25 + 12760);
    if ( CurrentIrql >= 2u )
    {
      if ( *((_QWORD *)v25 + 2) && !*((_BYTE *)v25 + 13242) )
      {
        if ( *((_BYTE *)v25 + 32) )
        {
          *((_BYTE *)v25 + 6) = 1;
        }
        else
        {
          v49[0] = 5;
          *(_OWORD *)&v49[1] = 0LL;
          sub_1402ADD00(v49, 0x2Fu);
        }
      }
    }
    else
    {
      v28 = *((_QWORD *)v25 + 1);
      if ( *((_QWORD *)v25 + 2) )
      {
        sub_1402B4EC0(*((_QWORD *)v25 + 1), 0);
        v32 = KeGetCurrentPrcb();
        LODWORD(v47) = 0;
        while ( 1 )
        {
          v33 = *((_QWORD *)v32 + 4375);
          if ( v33 )
          {
            if ( *((_BYTE *)v32 + 32) <= 1u )
            {
              v34 = *(_DWORD *)(v33 + 24);
              *(_DWORD *)(v33 + 24) = v34 + 1;
              if ( v34 == -1 )
                sub_140418E4C((__int64)v32);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)v25 + 12, 0LL) )
            break;
          v35 = *((_QWORD *)v32 + 4375);
          if ( v35 )
          {
            if ( *((_BYTE *)v32 + 32) <= 1u )
            {
              v36 = *(_DWORD *)(v35 + 24) - 1;
              *(_DWORD *)(v35 + 24) = v36;
              if ( !v36 )
                sub_140418E4C((__int64)v32);
            }
          }
          do
            sub_1402F32E0(&v47, v29, v30, v31);
          while ( *((_QWORD *)v25 + 6) );
        }
        v37 = *((_QWORD *)v25 + 2);
        *((_QWORD *)v25 + 2) = 0LL;
        _disable();
        LOBYTE(v31) = 1;
        sub_140345C80((__int64)v25, v28, 0LL, v31);
        _enable();
        *((_QWORD *)v25 + 1) = v37;
        if ( *(_BYTE *)(v37 + 388) == 1 )
        {
          v38 = (unsigned int)(*(_DWORD *)(v37 + 132) - *(_DWORD *)(v37 + 436));
          *(_DWORD *)(v37 + 132) = v38 + MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(v37 + 388) = 2;
        *(_BYTE *)(v28 + 643) = 32;
        *(_BYTE *)(v28 + 390) = CurrentIrql;
        sub_1402B9970((__int64)v25, v28, v38);
        LOBYTE(v39) = CurrentIrql;
        v40 = (unsigned __int8)sub_140428A30(v28, v37, v39) == 0;
      }
      else
      {
        v40 = (*(_DWORD *)(v28 + 116) & 0x40) == 0;
      }
      if ( !v40 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v41 = KeGetCurrentPrcb();
            v42 = *((_QWORD *)v41 + 4375);
            v40 = (*(_DWORD *)(v42 + 20) & 0xFFFF0003) == 0;
            *(_DWORD *)(v42 + 20) &= 0xFFFF0003;
            if ( v40 )
              sub_140418E4C((__int64)v41);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(v28 + 116) &= ~0x40u;
        sub_1402F1DC0(0, 0LL, 0LL);
      }
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
        {
          v43 = KeGetCurrentPrcb();
          v44 = *((_QWORD *)v43 + 4375);
          v45 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v40 = (v45 & *(_DWORD *)(v44 + 20)) == 0;
          *(_DWORD *)(v44 + 20) &= v45;
          if ( v40 )
            sub_140418E4C((__int64)v43);
        }
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
