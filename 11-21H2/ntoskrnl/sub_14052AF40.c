/*
 * XREFs of sub_14052AF40 @ 0x14052AF40
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
 *     sub_14052BB10 @ 0x14052BB10 (sub_14052BB10.c)
 */

__int64 __fastcall sub_14052AF40(__int64 a1, _DWORD *a2)
{
  int v3; // edx
  unsigned int v5; // r15d
  const wchar_t *v7; // rbp
  unsigned int v8; // ebx
  __int64 v9; // rcx
  wchar_t *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  void *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int v16; // eax
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v22; // r8
  int v23; // eax
  bool v24; // zf
  __int64 *v25; // rsi
  unsigned __int16 v26; // r9
  __int64 v27; // rcx
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r11
  __int64 v30; // r9
  int v31; // edx
  __int64 v32; // rcx
  __int64 *v33; // [rsp+50h] [rbp+8h] BYREF

  v3 = *(unsigned __int8 *)(a1 + 7);
  v33 = 0LL;
  v5 = -1073741823;
  if ( v3 == 1 && (dword_140C49F08 & 2) == 0 || v3 == 2 && (dword_140C49F08 & 4) == 0 || (unsigned __int8)v3 >= 3u )
    return 3221225659LL;
  v7 = (const wchar_t *)(a1 + 280);
  v8 = wcsnlen((const wchar_t *)(a1 + 280), 0xFEuLL) + 1;
  v10 = (wchar_t *)sub_1403B1F04(v9, 2 * v8);
  v11 = (__int64)v10;
  if ( !v10 )
    return 3221225495LL;
  wcsncpy_s(v10, v8, v7, v8);
  v13 = (void *)sub_1403B1F04(v12, 320LL);
  v15 = (__int64)v13;
  if ( !v13 )
  {
    sub_1403B1B5C(v14, v11);
    return 3221225495LL;
  }
  memset(v13, 0, 0x140uLL);
  v16 = 0x7FFFFFFF;
  *(_BYTE *)(v15 + 28) = 1;
  v17 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(v15 + 24) = v17;
  if ( v17 <= 0x7FFFFFFF )
  {
    v16 = v17;
    if ( v17 < 0x1000 )
      v16 = 4096;
  }
  *(_DWORD *)(v15 + 24) = v16;
  *(_BYTE *)(v15 + 29) = 0;
  *(_QWORD *)(v15 + 304) = sub_14052BB10(a1);
  *(_DWORD *)(v15 + 316) = 1;
  *(_DWORD *)(v15 + 312) = *(unsigned __int8 *)(a1 + 7);
  *(_QWORD *)(v15 + 32) = 2097153LL;
  memset((void *)(v15 + 40), 0, 0x100uLL);
  sub_140300030(v15 + 32, *(_WORD *)(v15 + 34), (unsigned __int16 *)(a1 + 16));
  *(_QWORD *)(v15 + 296) = v11;
  v18 = sub_140252344(&qword_140C4D048);
  if ( sub_14050B7C0(v15, v19, 34, &v33) )
  {
    ++dword_140C4D0A0;
    if ( a2 )
      *a2 = *(_DWORD *)v15;
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v22 = *((_QWORD *)CurrentPrcb + 4375);
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v24 = (v23 & *(_DWORD *)(v22 + 20)) == 0;
          *(_DWORD *)(v22 + 20) &= v23;
          if ( v24 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(v18);
    return 0LL;
  }
  else
  {
    v25 = v33;
    if ( v33 && v33[38] == *(_QWORD *)(v15 + 304) )
    {
      v26 = 0;
      if ( v33 != (__int64 *)-32LL )
        v26 = *((_WORD *)v33 + 17);
      sub_1402FEC10((char *)v33 + 32, (_WORD *)(v15 + 32), (_BYTE *)v33 + 32, v26);
      if ( a2 )
        *a2 = *(_DWORD *)v25;
      v5 = 0;
    }
    KeReleaseSpinLockFromDpcLevel(&qword_140C4D048);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v28 = KeGetCurrentIrql();
        if ( v28 <= 0xFu && (unsigned __int8)v18 <= 0xFu && v28 >= 2u )
        {
          v29 = KeGetCurrentPrcb();
          v27 = (unsigned int)(v18 + 1);
          v30 = *((_QWORD *)v29 + 4375);
          v31 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
          v24 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
          *(_DWORD *)(v30 + 20) &= v31;
          if ( v24 )
            sub_140418E4C((__int64)v29);
        }
      }
    }
    __writecr8(v18);
    sub_1403B1B5C(v27, *(_QWORD *)(v15 + 296));
    sub_1403B1B5C(v32, v15);
    return v5;
  }
}
