/*
 * XREFs of sub_14026BE94 @ 0x14026BE94
 * Callers:
 *     MmCopyMemory @ 0x14026BBB0 (MmCopyMemory.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_14026C720 @ 0x14026C720 (sub_14026C720.c)
 *     sub_1402BEDD0 @ 0x1402BEDD0 (sub_1402BEDD0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402CC7C0 @ 0x1402CC7C0 (sub_1402CC7C0.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memmove @ 0x140435B40 (memmove.c)
 */

__int64 __fastcall sub_14026BE94(void *a1, unsigned __int64 a2, __int64 a3, size_t a4, __int64 a5, char a6)
{
  __int64 v8; // rbx
  __int64 v9; // rsi
  unsigned __int8 v10; // di
  int v11; // r12d
  int v12; // eax
  __int64 v13; // rbx
  int v14; // ebp
  __int64 v15; // rbx
  const void *v16; // rbx
  __int64 v17; // rdx
  int v18; // ebp
  bool v20; // zf
  unsigned __int8 v21; // al
  struct _KPRCB *v22; // r10
  __int64 v23; // r8
  int v24; // eax
  unsigned __int8 v25; // al
  struct _KPRCB *v26; // r10
  __int64 v27; // r8
  int v28; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v31; // r8
  int v32; // eax

  if ( a2 > qword_140C50840 )
    return 3221225793LL;
  v8 = 6 * a2;
  if ( !_bittest64((const signed __int64 *)(48 * a2 - 0x21FFFFFFFFD8LL), 0x36u) )
    return 3221225793LL;
  v9 = 48 * a2 - 0x220000000000LL;
  if ( (a6 & 1) != 0 )
    v10 = sub_1402F2700(48 * a2 - 0x220000000000LL);
  else
    v10 = 17;
  if ( a2 > qword_140C50840 || !_bittest64((const signed __int64 *)(8 * v8 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    if ( v10 != 17 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v10 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v31 = *((_QWORD *)CurrentPrcb + 4375);
            v32 = ~(unsigned __int16)(-1LL << (v10 + 1));
            v20 = (v32 & *(_DWORD *)(v31 + 20)) == 0;
            *(_DWORD *)(v31 + 20) &= v32;
            if ( v20 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v10);
    }
    return 3221225793LL;
  }
  if ( *(char *)(v9 + 35) >= 0 && !(unsigned int)sub_14026C720(8 * v8 - 0x220000000000LL) )
  {
    v11 = *(unsigned __int8 *)(v9 + 34) >> 6;
    if ( v11 == 3 )
      sub_140267E78(8 * v8 - 0x220000000000LL, 1u, 1);
    v12 = sub_14026C61C(1LL, 8 * v8 - 0x220000000000LL);
    if ( !a5 )
    {
      v15 = sub_1402CC7C0(a2, 0LL, 2684354560LL);
LABEL_16:
      v16 = (const void *)(a3 + v15);
      memmove(a1, v16, a4);
      if ( a5 )
      {
        v18 = 0;
        if ( (unsigned int)sub_140317A80(a5) && (unsigned int)sub_140229550() )
          v18 = 1;
        *(_QWORD *)a5 = 0LL;
        if ( v18 )
          sub_1402294F0(a5, 0LL);
      }
      else
      {
        LOBYTE(v17) = 17;
        sub_1402BEDD0(v16, v17, 0x80000000LL);
      }
      if ( v11 == 3 )
        sub_140267E78(v9, 3u, 3);
      if ( v10 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v21 = KeGetCurrentIrql();
            if ( v21 <= 0xFu && v10 <= 0xFu && v21 >= 2u )
            {
              v22 = KeGetCurrentPrcb();
              v23 = *((_QWORD *)v22 + 4375);
              v24 = ~(unsigned __int16)(-1LL << (v10 + 1));
              v20 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
              *(_DWORD *)(v23 + 20) &= v24;
              if ( v20 )
                sub_140418E4C(v22);
            }
          }
        }
        __writecr8(v10);
      }
      return 0LL;
    }
    v13 = sub_1402CBD10(a5, a2, v12 | 0x20000000u);
    v14 = 0;
    if ( !(unsigned int)sub_140317A80(a5) )
    {
LABEL_13:
      *(_QWORD *)a5 = v13;
      if ( v14 )
        sub_1402294F0(a5, v13);
      v15 = a5 << 25 >> 16;
      goto LABEL_16;
    }
    if ( (unsigned int)sub_140229550() )
    {
      v14 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_13;
      v20 = (v13 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_13;
      v20 = (v13 & 1) == 0;
    }
    if ( !v20 )
      v13 |= 0x8000000000000000uLL;
    goto LABEL_13;
  }
  if ( v10 != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v25 = KeGetCurrentIrql();
        if ( v25 <= 0xFu && v10 <= 0xFu && v25 >= 2u )
        {
          v26 = KeGetCurrentPrcb();
          v27 = *((_QWORD *)v26 + 4375);
          v28 = ~(unsigned __int16)(-1LL << (v10 + 1));
          v20 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
          *(_DWORD *)(v27 + 20) &= v28;
          if ( v20 )
            sub_140418E4C(v26);
        }
      }
    }
    __writecr8(v10);
  }
  return 3221227273LL;
}
