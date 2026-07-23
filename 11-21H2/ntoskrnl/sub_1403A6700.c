/*
 * XREFs of sub_1403A6700 @ 0x1403A6700
 * Callers:
 *     sub_140766258 @ 0x140766258 (sub_140766258.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402AD540 (KeAcquireSpinLockRaiseToDpc.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140810904 @ 0x140810904 (sub_140810904.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

char __fastcall sub_1403A6700(_QWORD *a1)
{
  char v2; // bp
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  _QWORD **v5; // rax
  _QWORD *i; // rcx
  _QWORD *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rdi
  char result; // al
  _QWORD *v14; // rcx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
  __int64 v22; // r8
  _QWORD *v23; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v26; // r8
  int v27; // eax
  bool v28; // zf
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r10
  __int64 v31; // r8
  int v32; // eax

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C44A50);
  v4 = a1[2];
  if ( v4 )
  {
    v5 = (_QWORD **)(v4 + 8);
    for ( i = *v5; i != a1; i = (_QWORD *)*i )
      v5 = (_QWORD **)i;
    v7 = (_QWORD *)*a1;
    *v5 = (_QWORD *)*a1;
    v8 = a1[2];
    if ( *(_QWORD *)(v8 + 8) )
    {
      while ( v7 )
      {
        v5 = (_QWORD **)v7;
        v7 = (_QWORD *)*v7;
      }
    }
    else
    {
      v5 = 0LL;
    }
    *(_QWORD *)(v8 + 24) = v5;
    KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v3 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v26 = *((_QWORD *)CurrentPrcb + 4375);
          v27 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v28 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
          *(_DWORD *)(v26 + 20) &= v27;
          if ( v28 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    v9 = a1[78];
    v10 = (_QWORD *)a1[79];
    if ( *(_QWORD **)(v9 + 8) != a1 + 78 || (_QWORD *)*v10 != a1 + 78 )
LABEL_28:
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    sub_140810904(a1);
    v2 = 1;
  }
  else
  {
    KeReleaseSpinLockFromDpcLevel(&qword_140C44A50);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && (unsigned __int8)v3 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v31 = *((_QWORD *)v30 + 4375);
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v28 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
          *(_DWORD *)(v31 + 20) &= v32;
          if ( v28 )
            sub_140418E4C(v30);
        }
      }
    }
    __writecr8(v3);
  }
  v11 = (_QWORD *)a1[22];
  while ( v11 != a1 + 22 )
  {
    v14 = v11 - 3;
    v11 = (_QWORD *)*v11;
    v15 = *v14;
    v16 = (_QWORD *)v14[1];
    if ( *(_QWORD **)(*v14 + 8LL) != v14 )
      goto LABEL_28;
    if ( (_QWORD *)*v16 != v14 )
      goto LABEL_28;
    *v16 = v15;
    *(_QWORD *)(v15 + 8) = v16;
    v17 = v14[3];
    v18 = (_QWORD *)v14[4];
    if ( *(_QWORD **)(v17 + 8) != v14 + 3 || (_QWORD *)*v18 != v14 + 3 )
      goto LABEL_28;
    *v18 = v17;
    *(_QWORD *)(v17 + 8) = v18;
    ExFreePoolWithTag(v14, 0x72775044u);
  }
  v12 = (_QWORD *)a1[24];
  while ( v12 != a1 + 24 )
  {
    v19 = *v12;
    v20 = v12;
    v12 = (_QWORD *)v19;
    v21 = (_QWORD *)v20[1];
    if ( *(_QWORD **)(v19 + 8) != v20 )
      goto LABEL_28;
    if ( (_QWORD *)*v21 != v20 )
      goto LABEL_28;
    *v21 = v19;
    *(_QWORD *)(v19 + 8) = v21;
    v22 = v20[3];
    v23 = (_QWORD *)v20[4];
    if ( *(_QWORD **)(v22 + 8) != v20 + 3 || (_QWORD *)*v23 != v20 + 3 )
      goto LABEL_28;
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    ExFreePoolWithTag(v20, 0x72775044u);
  }
  a1[2] = 0LL;
  result = v2;
  a1[1] = 0LL;
  *a1 = 0LL;
  a1[3] = 0LL;
  return result;
}
