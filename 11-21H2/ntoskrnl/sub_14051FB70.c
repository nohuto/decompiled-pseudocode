/*
 * XREFs of sub_14051FB70 @ 0x14051FB70
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLockFromDpcLevel @ 0x14021D070 (KeReleaseSpinLockFromDpcLevel.c)
 *     sub_140252344 @ 0x140252344 (sub_140252344.c)
 *     sub_1402FEC10 @ 0x1402FEC10 (sub_1402FEC10.c)
 *     sub_140300030 @ 0x140300030 (sub_140300030.c)
 *     sub_1403B1B5C @ 0x1403B1B5C (sub_1403B1B5C.c)
 *     sub_1403B1F04 @ 0x1403B1F04 (sub_1403B1F04.c)
 *     wcsnlen @ 0x1403E3480 (wcsnlen.c)
 *     wcsncpy_s @ 0x1403E7870 (wcsncpy_s.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 *     sub_14050B7C0 @ 0x14050B7C0 (sub_14050B7C0.c)
 */

__int64 __fastcall sub_14051FB70(unsigned __int8 *a1, _DWORD *a2)
{
  const wchar_t *v2; // rbp
  unsigned int v5; // r15d
  unsigned int v6; // ebx
  __int64 v7; // rcx
  wchar_t *v8; // rax
  __int64 v9; // rdi
  __int64 v11; // rcx
  void *v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // ecx
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v23; // r8
  int v24; // eax
  bool v25; // zf
  __int64 *v26; // rsi
  unsigned __int16 v27; // r9
  __int64 v28; // rcx
  unsigned __int8 v29; // al
  struct _KPRCB *v30; // r11
  __int64 v31; // r9
  int v32; // edx
  __int64 v33; // rcx
  __int64 *v34; // [rsp+50h] [rbp+8h] BYREF

  v2 = (const wchar_t *)(a1 + 280);
  v34 = 0LL;
  v5 = -1073741823;
  v6 = wcsnlen((const wchar_t *)a1 + 140, 0xFEuLL) + 1;
  v8 = (wchar_t *)sub_1403B1F04(v7, 2 * v6);
  v9 = (__int64)v8;
  if ( !v8 )
    return 3221225495LL;
  wcsncpy_s(v8, v6, v2, v6);
  v12 = (void *)sub_1403B1F04(v11, 320LL);
  v14 = (__int64)v12;
  if ( !v12 )
  {
    sub_1403B1B5C(v13, v9);
    return 3221225495LL;
  }
  memset(v12, 0, 0x140uLL);
  v15 = 0x7FFFFFFF;
  *(_BYTE *)(v14 + 28) = 1;
  v16 = *((_DWORD *)a1 + 2);
  *(_DWORD *)(v14 + 24) = v16;
  if ( v16 <= 0x7FFFFFFF )
  {
    v15 = v16;
    if ( v16 < 0x1000 )
      v15 = 4096;
  }
  *(_DWORD *)(v14 + 24) = v15;
  *(_BYTE *)(v14 + 29) = 0;
  v17 = *a1;
  v18 = a1[1] | ((a1[5] & 1 | (8 * (a1[4] & 1 | (4 * (a1[3] & 1 | (2 * (a1[2] & 0xF))))))) << 10) | 0x300;
  *(_DWORD *)(v14 + 312) = 37;
  *(_DWORD *)(v14 + 304) = v17 | (v18 << 8);
  *(_QWORD *)(v14 + 32) = 2097153LL;
  memset((void *)(v14 + 40), 0, 0x100uLL);
  sub_140300030(v14 + 32, *(_WORD *)(v14 + 34), (unsigned __int16 *)a1 + 8);
  *(_QWORD *)(v14 + 296) = v9;
  v19 = sub_140252344(&qword_140C4D048);
  if ( sub_14050B7C0(v14, v20, 37, &v34) )
  {
    ++dword_140C4D0A0;
    if ( a2 )
      *a2 = *(_DWORD *)v14;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
          v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v25 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v19);
    return 0LL;
  }
  else
  {
    v26 = v34;
    if ( v34 && *((_DWORD *)v34 + 76) == *(_DWORD *)(v14 + 304) )
    {
      v27 = 0;
      if ( v34 != (__int64 *)-32LL )
        v27 = *((_WORD *)v34 + 17);
      sub_1402FEC10((char *)v34 + 32, (_WORD *)(v14 + 32), (_BYTE *)v34 + 32, v27);
      if ( a2 )
        *a2 = *(_DWORD *)v26;
      v5 = 0;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      v28 = 1LL;
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v29 = KeGetCurrentIrql();
        if ( v29 <= 0xFu && (unsigned __int8)v19 <= 0xFu && v29 >= 2u )
        {
          v30 = KeGetCurrentPrcb();
          v28 = (unsigned int)(v19 + 1);
          v31 = *((_QWORD *)v30 + 4375);
          v32 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
          v25 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
          *(_DWORD *)(v31 + 20) &= v32;
          if ( v25 )
            sub_140418E4C((__int64)v30);
        }
      }
    }
    __writecr8(v19);
    sub_1403B1B5C(v28, *(_QWORD *)(v14 + 296));
    sub_1403B1B5C(v33, v14);
    return v5;
  }
}
