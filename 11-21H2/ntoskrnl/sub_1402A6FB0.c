/*
 * XREFs of sub_1402A6FB0 @ 0x1402A6FB0
 * Callers:
 *     sub_14072B630 @ 0x14072B630 (sub_14072B630.c)
 *     IoVerifyVolume @ 0x1409367E0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140282BA0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     sub_140311C70 @ 0x140311C70 (sub_140311C70.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045A10C @ 0x14045A10C (sub_14045A10C.c)
 */

__int64 __fastcall sub_1402A6FB0(__int64 a1, char a2)
{
  unsigned __int8 CurrentIrql; // bp
  char *v4; // rbx
  volatile __int64 *v5; // rsi
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v10; // r9
  int v11; // eax
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf

  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    v4 = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 144;
    v5 = (volatile __int64 *)*((_QWORD *)v4 + 1);
    CurrentPrcb = KeGetCurrentPrcb();
    v7 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v7 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v11 = *(_DWORD *)(v7 + 24);
        *(_DWORD *)(v7 + 24) = v11 + 1;
        if ( v11 == -1 )
          sub_140418E4C(CurrentPrcb);
      }
    }
    if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
    {
      sub_14045A10C(v4, v5);
    }
    else if ( _InterlockedExchange64(v5, (__int64)v4) )
    {
      sub_140311C70(v4);
    }
    v8 = --*(_DWORD *)(a1 + 28);
    KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)KeGetPcr()->NtTib.ArbitraryUserPointer + 6);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v12 = KeGetCurrentIrql();
        if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
        {
          v13 = KeGetCurrentPrcb();
          v14 = *((_QWORD *)v13 + 4375);
          v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
          *(_DWORD *)(v14 + 20) &= v15;
          if ( v16 )
            sub_140418E4C(v13);
        }
      }
    }
    __writecr8(CurrentIrql);
    return v8;
  }
  else
  {
    return (unsigned int)--*(_DWORD *)(a1 + 28);
  }
}
