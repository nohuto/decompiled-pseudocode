/*
 * XREFs of sub_140363C8C @ 0x140363C8C
 * Callers:
 *     CcGetDirtyPages @ 0x14024AC10 (CcGetDirtyPages.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140389F20 (CcWaitForCurrentLazyWriterActivity.c)
 *     sub_14038A808 @ 0x14038A808 (sub_14038A808.c)
 *     sub_140538900 @ 0x140538900 (sub_140538900.c)
 *     CcIsThereDirtyData @ 0x14053A950 (CcIsThereDirtyData.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     sub_1406DBDA0 @ 0x1406DBDA0 (sub_1406DBDA0.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140276728 @ 0x140276728 (sub_140276728.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140363D98 @ 0x140363D98 (sub_140363D98.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14053C3E4 @ 0x14053C3E4 (sub_14053C3E4.c)
 */

LONG_PTR __fastcall sub_140363C8C(__int64 a1, __int64 a2, char a3, char a4)
{
  __int64 v4; // rbx
  char v5; // di
  void *i; // rcx
  LONG_PTR result; // rax
  _QWORD *v12; // rsi
  KIRQL v13; // al
  __int64 v14; // rcx
  unsigned __int64 v15; // rbp
  char v16; // al
  char v17; // bp
  signed __int64 v18; // rax
  unsigned __int64 j; // rcx
  signed __int64 v20; // rtt
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // eax
  bool v25; // zf

  v4 = 0LL;
  v5 = 0;
  for ( i = 0LL; ; i = v12 )
  {
    result = sub_140363D98(i);
    v12 = (_QWORD *)result;
    if ( !result )
      break;
    v13 = KeAcquireSpinLockRaiseToDpc(&qword_140C49B20);
    v14 = v12[1];
    v15 = v13;
    if ( v14 )
    {
      v4 = v12[1];
      if ( *(_BYTE *)(v14 + 1230) >= 2u )
      {
        if ( a3 )
        {
          _m_prefetchw((const void *)(v14 + 1232));
          v18 = *(_QWORD *)(v14 + 1232);
          for ( j = v18 + 1; j > 1; j = v18 + 1 )
          {
            v20 = v18;
            v18 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 1232), j, v18);
            if ( v20 == v18 )
              goto LABEL_6;
          }
          if ( j != 1 )
            __fastfail(0xEu);
          v5 = 0;
        }
      }
      else
      {
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 1232)) <= 1 )
          __fastfail(0xEu);
LABEL_6:
        v5 = 1;
      }
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C49B20);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v15 + 1));
          v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v25 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v15);
    if ( v5 )
    {
      v16 = byte_140C54C58 != 1 || a4 ? sub_14042A5E0(v4, 0LL) : sub_14053C3E4(v4, a1, a2);
      v17 = v16;
      sub_140276728(v4);
      v5 = 0;
      if ( !v17 )
        return ObfDereferenceObjectWithTag(v12, 0x6E457350u);
    }
  }
  return result;
}
