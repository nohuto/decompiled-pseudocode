/*
 * XREFs of sub_1405BA864 @ 0x1405BA864
 * Callers:
 *     sub_1405B88D8 @ 0x1405B88D8 (sub_1405B88D8.c)
 *     sub_1405BB090 @ 0x1405BB090 (sub_1405BB090.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140239F04 @ 0x140239F04 (sub_140239F04.c)
 *     sub_140267E78 @ 0x140267E78 (sub_140267E78.c)
 *     sub_140273234 @ 0x140273234 (sub_140273234.c)
 *     sub_140273FD0 @ 0x140273FD0 (sub_140273FD0.c)
 *     sub_14027CCE4 @ 0x14027CCE4 (sub_14027CCE4.c)
 *     sub_140282AD0 @ 0x140282AD0 (sub_140282AD0.c)
 *     sub_1402E4D28 @ 0x1402E4D28 (sub_1402E4D28.c)
 *     sub_1402E7D14 @ 0x1402E7D14 (sub_1402E7D14.c)
 *     sub_1402E7D60 @ 0x1402E7D60 (sub_1402E7D60.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_14030FA80 @ 0x14030FA80 (sub_14030FA80.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_1403B8520 @ 0x1403B8520 (sub_1403B8520.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_1405BA864(
        unsigned __int64 a1,
        __int64 *a2,
        ULONG_PTR a3,
        unsigned __int8 a4,
        unsigned __int8 a5)
{
  unsigned __int64 v8; // r14
  ULONG_PTR v9; // rbx
  __int64 v10; // rsi
  int v11; // r15d
  unsigned __int64 v12; // rbx
  __int64 v13; // rbx
  volatile LONG *v14; // rbx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int16 v19; // r9
  __int64 v20; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v23; // r9
  int v24; // edx
  bool v25; // zf
  char v26; // si
  __int64 v27; // rbx
  unsigned __int64 v28; // r11
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rbx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 v33; // cl
  __int64 v34; // rdx
  unsigned __int8 v35; // al
  struct _KPRCB *v36; // r10
  __int64 v37; // r9
  int v38; // edx
  int v39; // [rsp+20h] [rbp-48h]
  int v40; // [rsp+24h] [rbp-44h]
  unsigned int v41; // [rsp+28h] [rbp-40h]
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-38h]
  char v43; // [rsp+30h] [rbp-38h]
  __int64 v44; // [rsp+38h] [rbp-30h] BYREF

  v8 = sub_140317A10(a1);
  v44 = v8;
  if ( (v8 & 1) != 0 )
  {
    v9 = ((unsigned __int64)sub_140317A10((unsigned __int64)&v44) >> 12) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    v11 = 1;
    v8 = *(_QWORD *)(v10 + 16);
  }
  else
  {
    v12 = v8;
    if ( qword_140C50780 )
    {
      if ( (v8 & 0x10) != 0 )
        v12 = v8 & 0xFFFFFFFFFFFFFFEFuLL;
      else
        v12 = v8 & ~qword_140C50780;
    }
    v9 = (v12 >> 12) & 0xFFFFFFFFFFLL;
    v10 = 48 * v9 - 0x220000000000LL;
    if ( (*(_BYTE *)(v10 + 34) & 0x20) != 0 )
    {
      v13 = *((_QWORD *)KeGetCurrentThread() + 23) + 1664LL;
      v44 = v13;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      sub_14030FA80(v13, a4);
      CurrentThread = KeGetCurrentThread();
      ++*((_BYTE *)CurrentThread + 1390);
      --*((_BYTE *)CurrentThread + 1390);
      v14 = (volatile LONG *)sub_140282AD0(v13);
      ExAcquireSpinLockExclusive(v14);
      *((_DWORD *)v14 + 1) = 0;
      return 0LL;
    }
    v11 = 0;
  }
  v16 = (v8 >> 5) & 0x1F;
  v40 = sub_140239F04((_QWORD *)(v10 + 16));
  v18 = v17 + 48 * a3;
  if ( v11 )
  {
    v19 = 129;
  }
  else
  {
    sub_140239060(v17 + 48 * a3);
    v19 = 132;
  }
  sub_1402E7D60(a3, v9, 0LL, v19);
  if ( !v11 )
    _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v43 = sub_140273234(v10);
  v41 = *(unsigned __int8 *)(v10 + 34) >> 6;
  if ( v11 )
  {
    v20 = sub_1402E4D28(a3, v16);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && a5 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = *((_QWORD *)CurrentPrcb + 4375);
          v24 = ~(unsigned __int16)(-1LL << (a5 + 1));
          v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
          *(_DWORD *)(v23 + 20) &= v24;
          if ( v25 )
            sub_140418E4C((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(a5);
    v20 = sub_1402E7D14(v44, a3);
  }
  v44 = v20;
  v26 = v20;
  v39 = 0;
  v27 = v20;
  if ( sub_140317A80((unsigned __int64)a2) )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v39 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_30:
        if ( (v26 & 1) != 0 )
          v27 |= 0x8000000000000000uLL;
      }
    }
    else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
    {
      goto LABEL_30;
    }
  }
  v28 = (unsigned __int64)a2;
  *a2 = v27;
  if ( v39 )
    sub_1402294F0((__int64)a2, v27);
  v29 = sub_1403B8520(v28);
  sub_14027CCE4(a3, a1, v29, 16);
  *(_QWORD *)(v18 + 16) = *(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32LL * (unsigned int)v16);
  v30 = (unsigned __int8)sub_1402F2700(v18);
  if ( v40 )
    *(_QWORD *)(v18 + 16) |= 0x4000000uLL;
  v33 = *(_BYTE *)(v18 + 34);
  v34 = v41;
  if ( v33 >> 6 != v41 )
  {
    sub_140267E78(v18, v41, 3);
    v33 = *(_BYTE *)(v18 + 34);
  }
  *(_BYTE *)(v18 + 35) ^= (v43 ^ *(_BYTE *)(v18 + 35)) & 7;
  *(_BYTE *)(v18 + 34) = v33 & 0xF8 | 6;
  sub_140273FD0(v18, v34, v31, v32);
  _InterlockedAnd64((volatile signed __int64 *)(v18 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v35 = KeGetCurrentIrql();
      if ( v35 <= 0xFu && (unsigned __int8)v30 <= 0xFu && v35 >= 2u )
      {
        v36 = KeGetCurrentPrcb();
        v37 = *((_QWORD *)v36 + 4375);
        v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v30 + 1));
        v25 = (v38 & *(_DWORD *)(v37 + 20)) == 0;
        *(_DWORD *)(v37 + 20) &= v38;
        if ( v25 )
          sub_140418E4C((__int64)v36);
      }
    }
  }
  __writecr8(v30);
  return 1LL;
}
