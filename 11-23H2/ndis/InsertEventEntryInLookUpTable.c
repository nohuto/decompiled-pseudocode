/*
 * XREFs of InsertEventEntryInLookUpTable @ 0x1C00D3FA4
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x1C00CED90 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByRef@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x1C00CF010 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByRef@$0BA@@@U-.c)
 * Callees:
 *     CompareEventEntry @ 0x1C00D3A10 (CompareEventEntry.c)
 *     ComputeEventEntryHash @ 0x1C00D3A9C (ComputeEventEntryHash.c)
 *     CreateNewEventEntry @ 0x1C00D3B2C (CreateNewEventEntry.c)
 *     EnableFlushTimer @ 0x1C00D3D94 (EnableFlushTimer.c)
 */

__int64 __fastcall InsertEventEntryInLookUpTable(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5)
{
  __int64 v5; // rbx
  signed __int64 v7; // rdi
  unsigned int v8; // r15d
  int v9; // r14d
  KIRQL v10; // al
  volatile signed __int64 *v11; // r8
  __int64 v12; // r9
  KIRQL CurrentIrql; // al
  volatile signed __int64 *i; // rsi
  unsigned int v15; // eax
  __int64 v16; // rsi
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // eax
  signed __int64 v20; // rdx
  __int64 v21; // rax
  int v22; // r11d
  signed __int64 v23; // rax
  volatile signed __int64 v24; // rtt
  volatile LONG *v25; // rcx
  KIRQL OldIrql; // [rsp+40h] [rbp-58h]
  __int64 v28; // [rsp+48h] [rbp-50h] BYREF
  __int64 v29; // [rsp+50h] [rbp-48h]
  char v30; // [rsp+A0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 + 48);
  v7 = 0LL;
  v28 = 0LL;
  v29 = v5;
  v8 = 0;
  v9 = ComputeEventEntryHash(a5, a3, a4);
  OldIrql = KeGetCurrentIrql();
  if ( OldIrql >= 2u )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      CurrentIrql = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, CurrentIrql, 1uLL, 0LL);
    }
    ExAcquireSpinLockSharedAtDpcLevel((PEX_SPIN_LOCK)(v5 + 280));
    goto LABEL_10;
  }
  if ( (unsigned int)KeIsExecutingDpc() )
  {
    if ( *(_BYTE *)(v5 + 373) )
    {
      v10 = KeGetCurrentIrql();
      KeBugCheckEx(0xD1u, v5 + 280, v10, 1uLL, 0LL);
    }
    ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v5 + 280));
LABEL_10:
    v30 = 1;
    goto LABEL_11;
  }
  ExAcquirePushLockSharedEx(v5 + 272, 0LL);
  v30 = 0;
LABEL_11:
  for ( i = (volatile signed __int64 *)(v5 + 8LL * (v9 & 0x1F));
        ;
        i = (volatile signed __int64 *)((((__int64)v18 >> 63) & 0xFFFFFFFFFFFFFFF8uLL) + v16 + 32) )
  {
    if ( !*i )
    {
      if ( *(_DWORD *)(v5 + 256) >= 0x400u )
      {
        ++*(_DWORD *)(v5 + 316);
        v8 = -1073741789;
        goto LABEL_44;
      }
      if ( !v7 )
      {
        v15 = CreateNewEventEntry(*(_BYTE *)(v5 + 373), a2, a3, a4, a5, v9, &v28);
        v7 = v28;
        v8 = v15;
        if ( !v28 )
        {
          if ( v15 == -1073741801 )
            ++*(_DWORD *)(v5 + 320);
          else
            ++*(_DWORD *)(v5 + 324);
          goto LABEL_44;
        }
      }
      if ( !_InterlockedCompareExchange64(i, v7, 0LL) )
      {
        v28 = 0LL;
        if ( _InterlockedIncrement((volatile signed __int32 *)(v5 + 256)) == 1 )
          EnableFlushTimer(*(_QWORD *)(v5 + 360), *(_DWORD *)(v5 + 368));
        v19 = *(_DWORD *)(v5 + 256);
        v7 = v28;
        if ( *(_DWORD *)(v5 + 304) < v19 )
          *(_DWORD *)(v5 + 304) = v19;
        goto LABEL_44;
      }
      v7 = v28;
    }
    v16 = *i;
    v17 = *(_DWORD *)(v16 + 40);
    v18 = v9 == v17 ? CompareEventEntry(a3, a4, v16) : v9 - v17;
    if ( !v18 )
      break;
  }
  if ( v16 )
  {
    LOBYTE(v12) = 2;
    if ( a5 )
    {
      do
      {
        v20 = **(_QWORD **)(a4 + 16LL * (unsigned __int8)v12);
        v21 = *(_QWORD *)(v16 + 16);
        v22 = *(unsigned __int8 *)(v21 + 16LL * (unsigned __int8)v12 + 13);
        v11 = *(volatile signed __int64 **)(v21 + 16LL * (unsigned __int8)v12);
        if ( v22 == 113 )
        {
          _InterlockedExchangeAdd64(v11, v20);
        }
        else if ( (unsigned int)*(unsigned __int8 *)(v21 + 16LL * (unsigned __int8)v12 + 13) - 114 <= 1 )
        {
          do
          {
            v23 = *v11;
            if ( v22 == 114 )
            {
              if ( v20 >= v23 )
                break;
            }
            else if ( v20 <= v23 )
            {
              break;
            }
            v24 = *v11;
          }
          while ( v24 != _InterlockedCompareExchange64(v11, v20, v23) );
        }
        LOBYTE(v12) = v12 + 1;
      }
      while ( (unsigned __int8)v12 < (unsigned int)a5 + 2 );
      v7 = v28;
      v5 = v29;
    }
  }
LABEL_44:
  if ( v30 )
  {
    v25 = (volatile LONG *)(v5 + 280);
    if ( OldIrql >= 2u )
      ExReleaseSpinLockSharedFromDpcLevel(v25);
    else
      ExReleaseSpinLockShared(v25, OldIrql);
  }
  else
  {
    ExReleasePushLockSharedEx(v5 + 272, 0LL, v11, v12);
  }
  if ( v7 )
    ExFreePoolWithTag(*(PVOID *)(v7 + 16), 0);
  return v8;
}
