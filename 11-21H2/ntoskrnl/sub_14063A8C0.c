/*
 * XREFs of sub_14063A8C0 @ 0x14063A8C0
 * Callers:
 *     sub_14073B5A0 @ 0x14073B5A0 (sub_14073B5A0.c)
 *     sub_1409EAB74 @ 0x1409EAB74 (sub_1409EAB74.c)
 *     sub_1409F5D80 @ 0x1409F5D80 (sub_1409F5D80.c)
 * Callees:
 *     sub_140213318 @ 0x140213318 (sub_140213318.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140364128 @ 0x140364128 (sub_140364128.c)
 *     sub_140366C48 @ 0x140366C48 (sub_140366C48.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14063A8C0(_DWORD *a1, unsigned int a2, int a3, unsigned int *a4)
{
  int v4; // r14d
  char *v5; // rdi
  unsigned __int64 v6; // r13
  int v7; // eax
  __int64 v8; // r8
  _DWORD *v9; // r12
  KIRQL v10; // al
  KIRQL v11; // si
  const void *v12; // rdx
  unsigned __int64 v13; // r14
  __int64 v14; // rax
  size_t v15; // r14
  unsigned __int8 v16; // al
  struct _KPRCB *v17; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  unsigned int v21; // edx
  __int64 v22; // r8
  __int128 *v23; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  __int64 v27; // r9
  int v28; // eax
  __int128 *v29; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v32; // r8
  int v33; // eax
  __int128 *v34; // rax
  unsigned int v35; // [rsp+30h] [rbp-58h]
  unsigned int v36; // [rsp+34h] [rbp-54h]
  char *v37; // [rsp+38h] [rbp-50h]
  _DWORD *v38; // [rsp+40h] [rbp-48h]
  _DWORD *v39; // [rsp+50h] [rbp-38h]

  v4 = a3;
  v5 = 0LL;
  v36 = 0;
  v6 = 0LL;
  v7 = 16;
  v8 = 2LL;
  if ( v4 == 1 )
    v7 = 8;
  v35 = v7;
  v9 = a1;
  if ( v4 != 1 )
  {
    v9 = a1 + 3;
    v8 = 4LL;
  }
  v39 = &a1[v8];
  if ( a2 )
    *v9 = 0;
  v10 = ExAcquireSpinLockExclusive(&dword_140C11780);
  while ( 1 )
  {
    v11 = v10;
    if ( v4 == 1 )
    {
      v12 = (const void *)qword_140C157B8;
      v13 = qword_140C157C0;
    }
    else
    {
      v14 = *(_QWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 1368LL);
      v12 = *(const void **)(v14 + 824);
      v13 = *(_QWORD *)(v14 + 832);
    }
    if ( !v12 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C11780);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v11 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v32 = *((_QWORD *)CurrentPrcb + 4375);
            v33 = ~(unsigned __int16)(-1LL << (v11 + 1));
            v20 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
            *(_DWORD *)(v32 + 20) &= v33;
            if ( v20 )
              sub_140418E4C((__int64)CurrentPrcb);
          }
        }
      }
      __writecr8(v11);
      if ( v5 )
      {
        v34 = (__int128 *)sub_140366C48((ULONG_PTR)v5);
        sub_140364128(v34, (__int64)v5, 0, 0LL);
      }
      *a4 = 0;
      return 0LL;
    }
    if ( v5 && v6 >= v13 )
      break;
    v6 = v13;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C11780);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && v11 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          v28 = ~(unsigned __int16)(-1LL << (v11 + 1));
          v20 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v20 )
            sub_140418E4C((__int64)v26);
        }
      }
    }
    __writecr8(v11);
    if ( v5 )
    {
      v29 = (__int128 *)sub_140366C48((ULONG_PTR)v5);
      sub_140364128(v29, (__int64)v5, 0, 0LL);
    }
    v5 = (char *)sub_140213318();
    if ( !v5 )
      return 3221225626LL;
    v10 = ExAcquireSpinLockExclusive(&dword_140C11780);
    v4 = a3;
  }
  v15 = 32 * v13;
  memmove(v5, v12, v15);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C11780);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v16 = KeGetCurrentIrql();
      if ( v16 <= 0xFu && v11 <= 0xFu && v16 >= 2u )
      {
        v17 = KeGetCurrentPrcb();
        v18 = *((_QWORD *)v17 + 4375);
        v19 = ~(unsigned __int16)(-1LL << (v11 + 1));
        v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
        *(_DWORD *)(v18 + 20) &= v19;
        if ( v20 )
          sub_140418E4C((__int64)v17);
      }
    }
  }
  __writecr8(v11);
  v37 = v5;
  v38 = v39;
  while ( 1 )
  {
    v21 = v35;
    if ( v37 >= &v5[v15] )
      break;
    v22 = *(_QWORD *)v37;
    if ( (*(_QWORD *)v37 & 1) == 0 )
    {
      if ( a2 )
        ++*v9;
      v35 += 24;
      if ( v21 >= 0xFFFFFFE8 )
      {
        v36 = -1073741675;
        break;
      }
      if ( v35 <= a2 )
      {
        if ( a2 )
        {
          *(_QWORD *)v38 = v22;
          if ( a3 == 1 && (*((_DWORD *)v37 + 3) & 0x100) == 0 )
            *(_QWORD *)v38 = v22 | 1;
          v38[4] = *((_DWORD *)v37 + 2);
          *((_QWORD *)v38 + 1) = *((_QWORD *)v37 + 2);
          v38 += 6;
        }
      }
      else
      {
        v36 = -1073741820;
      }
    }
    v37 += 32;
  }
  v23 = (__int128 *)sub_140366C48((ULONG_PTR)v5);
  sub_140364128(v23, (__int64)v5, 0, 0LL);
  *a4 = v35;
  return v36;
}
