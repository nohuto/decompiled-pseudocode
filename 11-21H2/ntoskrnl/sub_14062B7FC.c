/*
 * XREFs of sub_14062B7FC @ 0x14062B7FC
 * Callers:
 *     sub_14045BCA2 @ 0x14045BCA2 (sub_14045BCA2.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F804 @ 0x14045F804 (sub_14045F804.c)
 *     sub_140629368 @ 0x140629368 (sub_140629368.c)
 *     sub_14062B464 @ 0x14062B464 (sub_14062B464.c)
 */

unsigned __int64 __fastcall sub_14062B7FC(PEX_SPIN_LOCK SpinLock, unsigned __int64 *a2, int a3, int a4)
{
  unsigned __int64 *v4; // rbx
  unsigned __int64 *v6; // r14
  __int64 v7; // rdi
  unsigned __int64 *v8; // r12
  unsigned __int8 v9; // r15
  unsigned __int64 *v10; // r12
  __int64 v11; // r12
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r8
  __int64 v14; // r10
  int v15; // eax
  bool v16; // zf
  unsigned __int8 v17; // al
  struct _KPRCB *v18; // r9
  __int64 v19; // r8
  int v20; // eax
  unsigned __int64 result; // rax
  unsigned __int64 v23; // [rsp+38h] [rbp-C8h]
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+58h] [rbp-A8h]
  __int128 v27; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+70h] [rbp-90h]
  _QWORD v29[32]; // [rsp+80h] [rbp-80h] BYREF

  v28 = 0LL;
  v4 = a2;
  v24 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = &a2[a3];
  v23 = (unsigned __int64)v8;
  v27 = 0LL;
  v9 = sub_14045F804(SpinLock);
  if ( v4 < v8 )
  {
    do
    {
      v25 = *v4 >> 12;
      v26 = 1LL;
      v10 = v6;
      sub_140629368((__int64)SpinLock, &v25, 0xFFFFFFFFFFFFFFFFuLL, (__int64 *)&v27, &v24, 0);
      if ( *((_QWORD *)&v24 + 1) )
      {
        v6 = v4;
        v29[v7] = v24;
        v7 = (unsigned int)(v7 + 1);
        if ( (_DWORD)v7 != 1 )
          v6 = v10;
        if ( v26 )
        {
          --v4;
LABEL_10:
          v11 = *((_QWORD *)SpinLock + 5);
          ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v14 = *((_QWORD *)CurrentPrcb + 4375);
                v15 = ~(unsigned __int16)(-1LL << (v9 + 1));
                v16 = (v15 & *(_DWORD *)(v14 + 20)) == 0;
                *(_DWORD *)(v14 + 20) &= v15;
                if ( v16 )
                  sub_140418E4C((__int64)CurrentPrcb);
              }
            }
          }
          __writecr8(v9);
          sub_14062B464((__int64)SpinLock, (__int64)v29, v7, v6, a4);
          v7 = 0LL;
          v9 = sub_14045F804(SpinLock);
          if ( v11 != *((_QWORD *)SpinLock + 5) )
          {
            v27 = 0LL;
            v28 = 0LL;
          }
          goto LABEL_19;
        }
        if ( (_DWORD)v7 == 32 )
          goto LABEL_10;
      }
      else
      {
        *v4 |= 6uLL;
        if ( (_DWORD)v7 )
          goto LABEL_10;
      }
LABEL_19:
      ++v4;
    }
    while ( (unsigned __int64)v4 < v23 );
  }
  ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v17 = KeGetCurrentIrql();
      if ( v17 <= 0xFu && v9 <= 0xFu && v17 >= 2u )
      {
        v18 = KeGetCurrentPrcb();
        v19 = *((_QWORD *)v18 + 4375);
        v20 = ~(unsigned __int16)(-1LL << (v9 + 1));
        v16 = (v20 & *(_DWORD *)(v19 + 20)) == 0;
        *(_DWORD *)(v19 + 20) &= v20;
        if ( v16 )
          sub_140418E4C((__int64)v18);
      }
    }
  }
  result = v9;
  __writecr8(v9);
  if ( (_DWORD)v7 )
    return sub_14062B464((__int64)SpinLock, (__int64)v29, v7, &v4[-(unsigned int)v7], a4);
  return result;
}
