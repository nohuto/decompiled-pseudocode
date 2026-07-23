/*
 * XREFs of sub_140628D00 @ 0x140628D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ZwUnlockVirtualMemory @ 0x14041F240 (ZwUnlockVirtualMemory.c)
 *     sub_14045F804 @ 0x14045F804 (sub_14045F804.c)
 *     sub_14062A6D4 @ 0x14062A6D4 (sub_14062A6D4.c)
 */

__int64 __fastcall sub_140628D00(unsigned __int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  unsigned __int64 v6; // rbx
  unsigned __int64 *v7; // r15
  unsigned __int64 v8; // r12
  __int64 v9; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 v12; // al
  struct _KPRCB *v13; // r10
  __int64 v14; // r9
  int v15; // edx
  bool v16; // zf
  _QWORD *v18; // rdx
  unsigned __int64 v19; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v22; // r9
  int v23; // eax
  ULONG_PTR v24; // r9
  __int64 v25; // rcx
  ULONG_PTR RegionSize; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 v27; // [rsp+28h] [rbp-8h]
  PVOID BaseAddress; // [rsp+78h] [rbp+48h] BYREF

  RegionSize = 0LL;
  BaseAddress = 0LL;
  v4 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2288LL);
  if ( v4 )
  {
    if ( *(_QWORD *)(v4 + 72) == a3 )
    {
      v6 = a1 >> 12;
      v7 = (unsigned __int64 *)(v4 + 8);
      v8 = 0LL;
      v27 = (a1 >> 12) + a2 - 1;
LABEL_6:
      v9 = sub_14045F804((PEX_SPIN_LOCK)v4);
      v10 = *v7;
      if ( (*(_BYTE *)(v4 + 16) & 1) != 0 && v10 )
        v10 ^= (unsigned __int64)v7;
      while ( v10 )
      {
        if ( v6 <= *(_QWORD *)(v10 + 32) )
        {
          if ( v6 >= *(_QWORD *)(v10 + 24) )
          {
            v18 = (_QWORD *)(v10 - 24);
            if ( v10 == 24 )
              break;
            BaseAddress = *(PVOID *)(v18[2] + 24LL);
            BaseAddress = (char *)BaseAddress + v6 - v18[6];
            v19 = v18[7];
            if ( v19 >= v27 )
              v19 = v27;
            RegionSize = v19 - v6 + 1;
            ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v4);
            if ( dword_140D06B08 )
            {
              if ( (dword_140D06B08 & 1) != 0 )
              {
                CurrentIrql = KeGetCurrentIrql();
                if ( CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
                {
                  CurrentPrcb = KeGetCurrentPrcb();
                  v22 = *((_QWORD *)CurrentPrcb + 4375);
                  v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
                  v16 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
                  *(_DWORD *)(v22 + 20) &= v23;
                  if ( v16 )
                    sub_140418E4C((__int64)CurrentPrcb);
                }
              }
            }
            __writecr8((unsigned __int8)v9);
            v24 = RegionSize;
            v8 += RegionSize;
            v6 += RegionSize;
            if ( qword_140C18EA0 && *(_DWORD *)qword_140C18EA0 && sub_1402A2000(qword_140C18EA0, 4LL) )
            {
              sub_14062A6D4(v25, v6, BaseAddress);
              v24 = RegionSize;
            }
            BaseAddress = (PVOID)((_QWORD)BaseAddress << 12);
            RegionSize = v24 << 12;
            ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
            if ( v8 >= a2 )
              return 0;
            goto LABEL_6;
          }
          v11 = *(_QWORD *)v10;
        }
        else
        {
          v11 = *(_QWORD *)(v10 + 8);
        }
        if ( (*(_BYTE *)(v4 + 16) & 1) != 0 && v11 )
          v10 ^= v11;
        else
          v10 = v11;
      }
      __int2c();
      v5 = -1073741688;
      if ( v9 != -1 )
      {
        ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)v4);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v12 = KeGetCurrentIrql();
            if ( v12 <= 0xFu && (unsigned __int8)v9 <= 0xFu && v12 >= 2u )
            {
              v13 = KeGetCurrentPrcb();
              v14 = *((_QWORD *)v13 + 4375);
              v15 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
              v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
              *(_DWORD *)(v14 + 20) &= v15;
              if ( v16 )
                sub_140418E4C((__int64)v13);
            }
          }
        }
        __writecr8((unsigned __int8)v9);
      }
    }
    else
    {
      __int2c();
      return (unsigned int)-1073741558;
    }
  }
  else
  {
    __int2c();
    return (unsigned int)-1073741503;
  }
  return v5;
}
