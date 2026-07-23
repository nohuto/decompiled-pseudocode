/*
 * XREFs of sub_14053A100 @ 0x14053A100
 * Callers:
 *     sub_1402590D8 @ 0x1402590D8 (sub_1402590D8.c)
 *     sub_140275670 @ 0x140275670 (sub_140275670.c)
 *     sub_140283030 @ 0x140283030 (sub_140283030.c)
 *     CcCanIWrite @ 0x140283F40 (CcCanIWrite.c)
 *     CcDeductDirtyPagesFromExternalCache @ 0x14039EA50 (CcDeductDirtyPagesFromExternalCache.c)
 *     sub_140538E4C @ 0x140538E4C (sub_140538E4C.c)
 *     CcDeferWrite @ 0x140539E20 (CcDeferWrite.c)
 *     CcUnpinRepinnedBcb @ 0x14053A6C0 (CcUnpinRepinnedBcb.c)
 *     sub_14053D3E0 @ 0x14053D3E0 (sub_14053D3E0.c)
 *     sub_14053D880 @ 0x14053D880 (sub_14053D880.c)
 *     sub_14053E098 @ 0x14053E098 (sub_14053E098.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     sub_1402844A0 @ 0x1402844A0 (sub_1402844A0.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeSetEvent @ 0x1402AFD30 (KeSetEvent.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14053A100(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  KSPIN_LOCK *v3; // r13
  __int64 v4; // r12
  _QWORD *v7; // r12
  _QWORD *v8; // rdi
  KIRQL v9; // al
  _QWORD *v10; // rsi
  unsigned __int64 v11; // r14
  unsigned int v12; // r9d
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v17; // r9
  bool v18; // zf
  struct _KEVENT *v19; // rcx
  signed __int64 v20; // rax
  bool v21; // cc
  signed __int64 v22; // rax
  unsigned int v23; // [rsp+70h] [rbp+8h]

  v2 = 0;
  v3 = (KSPIN_LOCK *)(a1 + 1152);
  v4 = a1;
  v23 = 0;
  if ( byte_140C54C58 == 1 )
    v4 = a2;
  v7 = (_QWORD *)(v4 + 1104);
  while ( 1 )
  {
    v8 = 0LL;
    v9 = KeAcquireSpinLockRaiseToDpc(v3);
    v10 = (_QWORD *)*v7;
    v11 = v9;
    while ( v10 != v7 )
    {
      v8 = v10 - 3;
      if ( *(_BYTE *)(a1 + 1230) > 1u )
        goto LABEL_12;
      v12 = *((_DWORD *)v8 + 4);
      v2 += v12;
      if ( sub_1402844A0(a1, a2, v8[1], v12, v23, 2, 0LL)
        && (!*((_BYTE *)v8 + 88)
         || MEMORY[0xFFFFF78000000320] >= (__int64)((unsigned int)(10000 * dword_140C54C74)
                                                  / (unsigned __int64)DesiredTime
                                                  + v8[12])) )
      {
        v23 = v2;
LABEL_12:
        v13 = *v10;
        v14 = (_QWORD *)v8[4];
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (_QWORD *)*v14 != v10 )
          __fastfail(3u);
        *v14 = v13;
        *(_QWORD *)(v13 + 8) = v14;
        break;
      }
      v10 = (_QWORD *)*v10;
      v8 = 0LL;
      v2 = v23;
    }
    KeReleaseSpinLockFromDpcLevel(v3);
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v11 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v17 = *((_QWORD *)CurrentPrcb + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
          v18 = ((unsigned int)result & *(_DWORD *)(v17 + 20)) == 0;
          *(_DWORD *)(v17 + 20) &= result;
          if ( v18 )
            result = sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v11);
    if ( !v8 )
      return result;
    v19 = (struct _KEVENT *)v8[5];
    if ( v19 )
      goto LABEL_24;
    sub_14042A5E0(v8[7], v8[8]);
    ExFreePoolWithTag(v8, 0x77446343u);
    sub_140276728(a1);
    if ( a2 )
    {
      v20 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 8), 0xFFFFFFFFFFFFFFFFuLL);
      v21 = v20 <= 1;
      v22 = v20 - 1;
      if ( v21 )
      {
        if ( v22 )
          __fastfail(0xEu);
        v19 = (struct _KEVENT *)(a2 + 1200);
LABEL_24:
        KeSetEvent(v19, 0, 0);
        continue;
      }
    }
  }
}
