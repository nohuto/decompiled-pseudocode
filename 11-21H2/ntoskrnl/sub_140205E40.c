/*
 * XREFs of sub_140205E40 @ 0x140205E40
 * Callers:
 *     sub_140205FD4 @ 0x140205FD4 (sub_140205FD4.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x1402054C0 (RtlFindClearBitsAndSet.c)
 *     sub_14025E544 @ 0x14025E544 (sub_14025E544.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

_RTL_BITMAP *__fastcall sub_140205E40(__int64 a1, __int64 a2, unsigned int a3)
{
  _RTL_BITMAP *v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned __int64 v7; // rsi
  __int64 v8; // rbp
  ULONG ClearBitsAndSet; // eax
  __int16 v10; // r12
  _RTL_BITMAP *result; // rax
  _RTL_BITMAP **v12; // r15
  _RTL_BITMAP *i; // r14
  ULONG v14; // eax
  unsigned __int8 v15; // cl
  struct _KPRCB *v16; // r10
  __int64 v17; // r9
  int v18; // eax
  bool v19; // zf
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r10
  __int64 v22; // r9
  int v23; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v26; // r8
  int v27; // eax
  int v28; // [rsp+60h] [rbp+8h] BYREF
  int v29; // [rsp+70h] [rbp+18h] BYREF

  v3 = *(_RTL_BITMAP **)(a2 + 224);
  v4 = 0LL;
  v5 = *(_QWORD *)(a2 + 232);
  LOBYTE(v7) = 17;
  v8 = *(_QWORD *)(a1 + 16) + 24512LL * a3;
  if ( v3 )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(v3 + 6, 1u, 0);
    v10 = ClearBitsAndSet;
    if ( ClearBitsAndSet != -1 )
    {
      if ( *((_BYTE *)&v3[4].SizeOfBitMap + 4) )
      {
        v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 22848));
        if ( !*((_BYTE *)&v3[4].SizeOfBitMap + 6) )
        {
LABEL_7:
          if ( *((_BYTE *)&v3[4].SizeOfBitMap + 4) )
          {
            ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 22848));
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v26 = *((_QWORD *)CurrentPrcb + 4375);
                  v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
                  v19 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
                  *(_DWORD *)(v26 + 20) &= v27;
                  if ( v19 )
                    sub_140418E4C(CurrentPrcb);
                }
              }
            }
            __writecr8((unsigned __int8)v7);
          }
          else
          {
            _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          *(_DWORD *)(a2 + 64) = 0;
          result = v3;
          *(_WORD *)(a2 + 216) = v10;
          return result;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 22848));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v15 = KeGetCurrentIrql();
            if ( v15 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v15 >= 2u )
            {
              v16 = KeGetCurrentPrcb();
              v17 = *((_QWORD *)v16 + 4375);
              v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v19 = (v18 & *(_DWORD *)(v17 + 20)) == 0;
              *(_DWORD *)(v17 + 20) &= v18;
              if ( v19 )
                sub_140418E4C(v16);
            }
          }
        }
        __writecr8(v7);
      }
      else
      {
        v4 = 48LL * *(_QWORD *)&v3[11].SizeOfBitMap - 0x220000000000LL;
        v29 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v29);
          while ( *(__int64 *)(v4 + 24) < 0 );
        }
        if ( !*((_BYTE *)&v3[4].SizeOfBitMap + 6) )
          goto LABEL_7;
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    sub_14025E544(v8, v3, a2);
    *(_QWORD *)(a2 + 224) = 0LL;
  }
  v12 = (_RTL_BITMAP **)(v5 + 56);
  for ( i = *v12; i != (_RTL_BITMAP *)v12; i = *(_RTL_BITMAP **)&i->SizeOfBitMap )
  {
    v3 = i - 5;
    v14 = RtlFindClearBitsAndSet(i + 1, 1u, 0);
    v10 = v14;
    if ( v14 != -1 )
    {
      if ( *((_BYTE *)&v3[4].SizeOfBitMap + 4) )
      {
        LOBYTE(v7) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 22848));
      }
      else
      {
        v4 = 48LL * *(_QWORD *)&v3[11].SizeOfBitMap - 0x220000000000LL;
        v28 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v4 + 24), 0x3FuLL) )
        {
          do
            sub_1402F32E0(&v28);
          while ( *(__int64 *)(v4 + 24) < 0 );
        }
      }
      if ( !*((_BYTE *)&v3[4].SizeOfBitMap + 6) )
      {
        ++*(&v3[20].SizeOfBitMap + 1);
        *(_QWORD *)(a2 + 224) = v3;
        goto LABEL_7;
      }
      if ( *((_BYTE *)&v3[4].SizeOfBitMap + 4) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 22848));
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v20 = KeGetCurrentIrql();
            if ( v20 <= 0xFu && (unsigned __int8)v7 <= 0xFu && v20 >= 2u )
            {
              v21 = KeGetCurrentPrcb();
              v22 = *((_QWORD *)v21 + 4375);
              v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
              v19 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
              *(_DWORD *)(v22 + 20) &= v23;
              if ( v19 )
                sub_140418E4C(v21);
            }
          }
        }
        __writecr8((unsigned __int8)v7);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
  }
  return 0LL;
}
