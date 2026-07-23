/*
 * XREFs of sub_1403D2D98 @ 0x1403D2D98
 * Callers:
 *     sub_14070BD10 @ 0x14070BD10 (sub_14070BD10.c)
 *     NtSetInformationProcess @ 0x1407E7850 (NtSetInformationProcess.c)
 * Callees:
 *     sub_14020F30C @ 0x14020F30C (sub_14020F30C.c)
 *     sub_1402ADD00 @ 0x1402ADD00 (sub_1402ADD00.c)
 *     sub_1402B4EC0 @ 0x1402B4EC0 (sub_1402B4EC0.c)
 *     sub_1402B9970 @ 0x1402B9970 (sub_1402B9970.c)
 *     sub_1402F1DC0 @ 0x1402F1DC0 (sub_1402F1DC0.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140340300 @ 0x140340300 (sub_140340300.c)
 *     sub_1403405E0 @ 0x1403405E0 (sub_1403405E0.c)
 *     sub_140345C80 @ 0x140345C80 (sub_140345C80.c)
 *     sub_1403D3080 @ 0x1403D3080 (sub_1403D3080.c)
 *     sub_1403D3208 @ 0x1403D3208 (sub_1403D3208.c)
 *     sub_1403D3254 @ 0x1403D3254 (sub_1403D3254.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140428A30 @ 0x140428A30 (sub_140428A30.c)
 */

__int64 __fastcall sub_1403D2D98(__int64 a1, unsigned int a2, char *a3)
{
  __int64 result; // rax
  unsigned int v7; // r10d
  __int64 v8; // r12
  unsigned __int8 CurrentIrql; // r14
  struct _KPRCB *CurrentPrcb; // rbx
  _QWORD *v11; // rdi
  char v12; // si
  ULONG_PTR v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KPRCB *v17; // rdi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r8
  bool v22; // zf
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rcx
  int v26; // eax
  struct _KPRCB *v27; // rcx
  __int64 v28; // rdx
  struct _KPRCB *v29; // r9
  __int64 v30; // r8
  int v31; // eax
  unsigned int v32; // [rsp+20h] [rbp-30h] BYREF
  int v33; // [rsp+24h] [rbp-2Ch] BYREF
  _QWORD *v34; // [rsp+28h] [rbp-28h] BYREF
  int v35[8]; // [rsp+30h] [rbp-20h] BYREF

  v32 = 0;
  v34 = 0LL;
  result = sub_14020F30C(a3, a2);
  if ( (int)result >= 0 )
  {
    v8 = sub_1403D3254(a1, v7, &v32);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v23 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v23 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    sub_1403D3208(v8, v32, a3, a2);
    sub_1403D3080(a1, &v34);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
    CurrentPrcb = KeGetCurrentPrcb();
    v11 = v34;
    v12 = 0;
    if ( v34 )
    {
      v34 = (_QWORD *)*v34;
      do
      {
        sub_1403405E0((__int64)CurrentPrcb, (ULONG_PTR)(v11 - 27), (__int64)&v34);
        v11 = v34;
        ++v12;
        if ( v34 )
          v34 = (_QWORD *)*v34;
        if ( (v12 & 0xF) == 0 )
          sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
      }
      while ( v11 );
    }
    sub_140340300((unsigned __int8 *)CurrentPrcb + 12760);
    if ( CurrentIrql >= 2u )
    {
      if ( *((_QWORD *)CurrentPrcb + 2) && !*((_BYTE *)CurrentPrcb + 13242) )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) )
        {
          *((_BYTE *)CurrentPrcb + 6) = 1;
        }
        else
        {
          v35[0] = 5;
          *(_OWORD *)&v35[1] = 0LL;
          sub_1402ADD00(v35, 0x2Fu);
        }
      }
    }
    else
    {
      v13 = *((_QWORD *)CurrentPrcb + 1);
      if ( *((_QWORD *)CurrentPrcb + 2) )
      {
        sub_1402B4EC0(*((_QWORD *)CurrentPrcb + 1), 0);
        v17 = KeGetCurrentPrcb();
        v33 = 0;
        while ( 1 )
        {
          v18 = *((_QWORD *)v17 + 4375);
          if ( v18 )
          {
            if ( *((_BYTE *)v17 + 32) <= 1u )
            {
              v24 = *(_DWORD *)(v18 + 24);
              *(_DWORD *)(v18 + 24) = v24 + 1;
              if ( v24 == -1 )
                sub_140418E4C(v17);
            }
          }
          if ( !_interlockedbittestandset64((volatile signed __int32 *)CurrentPrcb + 12, 0LL) )
            break;
          v25 = *((_QWORD *)v17 + 4375);
          if ( v25 )
          {
            if ( *((_BYTE *)v17 + 32) <= 1u )
            {
              v26 = *(_DWORD *)(v25 + 24) - 1;
              *(_DWORD *)(v25 + 24) = v26;
              if ( !v26 )
                sub_140418E4C(v17);
            }
          }
          do
            sub_1402F32E0(&v33, v14, v15, v16);
          while ( *((_QWORD *)CurrentPrcb + 6) );
        }
        v19 = *((_QWORD *)CurrentPrcb + 2);
        *((_QWORD *)CurrentPrcb + 2) = 0LL;
        _disable();
        LOBYTE(v16) = 1;
        sub_140345C80((__int64)CurrentPrcb, v13, 0LL, v16);
        _enable();
        *((_QWORD *)CurrentPrcb + 1) = v19;
        if ( *(_BYTE *)(v19 + 388) == 1 )
        {
          v20 = (unsigned int)(*(_DWORD *)(v19 + 132) - *(_DWORD *)(v19 + 436));
          *(_DWORD *)(v19 + 132) = v20 + MEMORY[0xFFFFF78000000320];
        }
        *(_BYTE *)(v19 + 388) = 2;
        *(_BYTE *)(v13 + 643) = 32;
        *(_BYTE *)(v13 + 390) = CurrentIrql;
        sub_1402B9970((__int64)CurrentPrcb, v13, v20);
        LOBYTE(v21) = CurrentIrql;
        v22 = (unsigned __int8)sub_140428A30(v13, v19, v21) == 0;
      }
      else
      {
        v22 = (*(_DWORD *)(v13 + 116) & 0x40) == 0;
      }
      if ( !v22 )
      {
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
          {
            v27 = KeGetCurrentPrcb();
            v28 = *((_QWORD *)v27 + 4375);
            v22 = (*(_DWORD *)(v28 + 20) & 0xFFFF0003) == 0;
            *(_DWORD *)(v28 + 20) &= 0xFFFF0003;
            if ( v22 )
              sub_140418E4C(v27);
          }
        }
        __writecr8(1uLL);
        *(_DWORD *)(v13 + 116) &= ~0x40u;
        sub_1402F1DC0(0, 0LL, 0LL);
      }
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
      {
        v29 = KeGetCurrentPrcb();
        v30 = *((_QWORD *)v29 + 4375);
        v31 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v22 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
        *(_DWORD *)(v30 + 20) &= v31;
        if ( v22 )
          sub_140418E4C(v29);
      }
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  return result;
}
