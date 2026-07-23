/*
 * XREFs of sub_140299150 @ 0x140299150
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140298A3C @ 0x140298A3C (sub_140298A3C.c)
 *     sub_140299240 @ 0x140299240 (sub_140299240.c)
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_1402D0CE0 @ 0x1402D0CE0 (sub_1402D0CE0.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

signed __int64 sub_140299150()
{
  _QWORD *v0; // rdi
  _QWORD *v1; // rbx
  __int64 *v2; // rsi
  __int64 *v3; // rsi
  void *v4; // rcx
  signed __int64 result; // rax
  KIRQL v6; // al
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 **v9; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v12; // r9
  int v13; // eax
  bool v14; // zf
  KIRQL v15; // al
  __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 **v18; // rdx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax

  do
  {
    v0 = (_QWORD *)_InterlockedExchange64(&qword_140C1BFE0, 1LL);
    do
    {
      v1 = v0 - 149;
      sub_140299240(v0 - 149);
      sub_1402D0CE0(*(v0 - 126));
      v2 = v0 - 39;
      if ( *v2 != 1 )
      {
        v6 = KeAcquireSpinLockRaiseToDpc(&qword_140C2BB58);
        v7 = *v2;
        v8 = v6;
        if ( *v2 != 1 && v1[111] )
        {
          v9 = (__int64 **)v1[111];
          if ( *(__int64 **)(v7 + 8) != v2 || *v9 != v2 )
LABEL_39:
            __fastfail(3u);
          *v9 = (__int64 *)v7;
          *(_QWORD *)(v7 + 8) = v9;
        }
        KeReleaseSpinLockFromDpcLevel(&qword_140C2BB58);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v12 = *((_QWORD *)CurrentPrcb + 4375);
              v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
              v14 = (v13 & *(_DWORD *)(v12 + 20)) == 0;
              *(_DWORD *)(v12 + 20) &= v13;
              if ( v14 )
                sub_140418E4C(CurrentPrcb);
            }
          }
        }
        __writecr8(v8);
      }
      v3 = v1 + 126;
      if ( v1[126] != 1LL )
      {
        v15 = KeAcquireSpinLockRaiseToDpc(&qword_140C2BB60);
        v16 = *v3;
        v17 = v15;
        if ( *v3 != 1 && v1[127] )
        {
          v18 = (__int64 **)v1[127];
          if ( *(__int64 **)(v16 + 8) != v3 || *v18 != v3 )
            goto LABEL_39;
          *v18 = (__int64 *)v16;
          *(_QWORD *)(v16 + 8) = v18;
        }
        KeReleaseSpinLockFromDpcLevel(&qword_140C2BB60);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v19 = KeGetCurrentIrql();
            if ( v19 <= 0xFu && (unsigned __int8)v17 <= 0xFu && v19 >= 2u )
            {
              v20 = KeGetCurrentPrcb();
              v21 = *((_QWORD *)v20 + 4375);
              v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v17 + 1));
              v14 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
              *(_DWORD *)(v21 + 20) &= v22;
              if ( v14 )
                sub_140418E4C(v20);
            }
          }
        }
        __writecr8(v17);
      }
      v4 = (void *)v1[188];
      if ( v4 )
      {
        ExFreePoolWithTag(v4, 0);
        v1[188] = 0LL;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v1 + 363, 0xFFFFFFFF) == 1 )
      {
        sub_140298A3C((__int64)(v0 - 149));
        v1[5] = 0LL;
      }
      v0 = (_QWORD *)*v0;
      ObfDereferenceObjectWithTag(v1, 0x746C6644u);
    }
    while ( v0 && v0 != (_QWORD *)1 );
    result = _InterlockedCompareExchange64(&qword_140C1BFE0, 0LL, 1LL);
  }
  while ( result != 1 );
  return result;
}
