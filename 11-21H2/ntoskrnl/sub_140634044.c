/*
 * XREFs of sub_140634044 @ 0x140634044
 * Callers:
 *     sub_1406EDB48 @ 0x1406EDB48 (sub_1406EDB48.c)
 *     sub_1409E9F80 @ 0x1409E9F80 (sub_1409E9F80.c)
 * Callees:
 *     KeAcquireSpinLockAtDpcLevel @ 0x140211E00 (KeAcquireSpinLockAtDpcLevel.c)
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14046087A @ 0x14046087A (sub_14046087A.c)
 *     sub_1406341F0 @ 0x1406341F0 (sub_1406341F0.c)
 */

void __fastcall sub_140634044(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbp
  volatile signed __int32 *v7; // rbx
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // si
  __int64 v10; // r9
  volatile signed __int32 *i; // rdx
  unsigned __int8 v12; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v14; // r9
  int v15; // eax
  bool v16; // zf
  _SLIST_ENTRY **v17; // rsi
  _SLIST_ENTRY *v18; // rbx
  _OWORD v19[2]; // [rsp+20h] [rbp-68h] BYREF

  v3 = 0LL;
  memset(v19, 0, sizeof(v19));
  if ( *(_DWORD *)(a1 + 8) )
  {
    do
    {
      v7 = (volatile signed __int32 *)(a1 + 8 * (v3 + 2 * v3 + 4));
      if ( *(volatile signed __int32 **)v7 != v7 )
      {
        v8 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
        {
          v10 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
          *(_DWORD *)(v10 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
        }
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)v7 + 2);
        for ( i = *(volatile signed __int32 **)v7; i != v7; i = *(volatile signed __int32 **)i )
        {
          _InterlockedIncrement(i + 6);
          *((_QWORD *)v19 + v8) = i;
          v8 = (unsigned int)(v8 + 1);
        }
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)v7 + 2);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v12 = KeGetCurrentIrql();
            if ( v12 <= 0xFu && CurrentIrql <= 0xFu && v12 >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v14 = *((_QWORD *)CurrentPrcb + 4375);
              v15 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
              v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
              *(_DWORD *)(v14 + 20) &= v15;
              if ( v16 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(CurrentIrql);
        if ( (_DWORD)v8 )
        {
          v17 = (_SLIST_ENTRY **)v19;
          do
          {
            v18 = *v17;
            sub_1406341F0(a2, a3, 6180LL, *v17);
            sub_14046087A(v18, (unsigned int **)a1);
            ++v17;
            --v8;
          }
          while ( v8 );
        }
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)(a1 + 8) );
  }
}
