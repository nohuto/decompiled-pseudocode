/*
 * XREFs of sub_1403D452C @ 0x1403D452C
 * Callers:
 *     sub_1403D4314 @ 0x1403D4314 (sub_1403D4314.c)
 * Callees:
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_140263068 @ 0x140263068 (sub_140263068.c)
 *     sub_1402662A0 @ 0x1402662A0 (sub_1402662A0.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402BEEA0 @ 0x1402BEEA0 (sub_1402BEEA0.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CA5E0 @ 0x1402CA5E0 (sub_1402CA5E0.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

unsigned __int64 __fastcall sub_1403D452C(__int64 a1, unsigned int a2)
{
  __int64 v3; // r12
  signed __int32 v4; // eax
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // r14
  int v9; // ebx
  _QWORD *v10; // r12
  unsigned __int64 v11; // rbx
  int v12; // r13d
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  LONGLONG v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rcx
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // r8
  unsigned int v23; // edx
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r9
  unsigned __int64 v28; // rdx
  __int64 v30; // r9
  unsigned __int8 v31; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v33; // r9
  int v34; // eax
  __int64 *v35; // rax
  bool v36; // zf
  bool v37; // zf
  unsigned __int8 v38; // al
  struct _KPRCB *v39; // r10
  __int64 v40; // r9
  int v41; // eax
  signed __int32 v42[8]; // [rsp+0h] [rbp-100h] BYREF
  BOOL v43; // [rsp+50h] [rbp-B0h]
  int v44; // [rsp+54h] [rbp-ACh] BYREF
  __int128 v45; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v46; // [rsp+68h] [rbp-98h] BYREF
  __int128 v47; // [rsp+78h] [rbp-88h]
  unsigned __int64 v48; // [rsp+88h] [rbp-78h]
  unsigned __int64 v49; // [rsp+90h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER PerformanceCounter; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v52[16]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v53[16]; // [rsp+130h] [rbp+30h] BYREF

  v50 = a1;
  v3 = a1;
  v46 = 0LL;
  v47 = 0LL;
  v45 = 0LL;
  sub_140339C20(0LL, a2 + 1, (__int64)&v45);
  v4 = _InterlockedExchangeAdd((volatile signed __int32 *)v45, 1u);
  v5 = DWORD2(v45) & v4 | HIDWORD(v45);
  memset(v52, 0, sizeof(v52));
  if ( !(unsigned int)sub_14026A574((__int64)v52, v5, 2) )
    return 0LL;
  memset(v53, 0, sizeof(v53));
  v6 = 0;
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v30 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      *(_DWORD *)(v30 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    _InterlockedOr(v42, 0);
    v8 = sub_1402CA5E0(v3, 0LL, 1u, 1LL, a2, 4, 1u, 2, 0LL);
    if ( v8 )
      break;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v31 = KeGetCurrentIrql();
        if ( v31 <= 0xFu && CurrentIrql <= 0xFu && v31 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v33 = *((_QWORD *)CurrentPrcb + 4375);
          v34 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v36 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
          *(_DWORD *)(v33 + 20) &= v34;
          if ( v36 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    v35 = (__int64 *)sub_1402662A0(v3, a2, 0x200uLL, 0x200uLL, 0LL, 0, 2, 1);
    v8 = (__int64)v35;
    if ( !v35 )
      goto LABEL_14;
    sub_140263068(v35);
    --v6;
LABEL_17:
    if ( ++v6 >= 0x10 )
      goto LABEL_18;
  }
  v49 = 0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4);
  v9 = sub_14026C61C(4, v8);
  v48 = sub_1402C6260(&v52[4], 1u, 512LL, 0);
  v10 = (_QWORD *)(((v48 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v11 = sub_1402CBD10((unsigned __int64)v10, 0xAAAAAAAAAAAAAAABuLL * ((v8 + 0x220000000000LL) >> 4), v9 | 0xA4000000);
  v12 = 0;
  v43 = sub_140317A80((unsigned __int64)v10);
  if ( v43 )
  {
    if ( (unsigned int)sub_140229550() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_6;
      v36 = (v11 & 1) == 0;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) == 0 )
        goto LABEL_6;
      v36 = (v11 & 1) == 0;
    }
    if ( !v36 )
      v11 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *v10 = v11;
  if ( v12 )
    sub_1402294F0((__int64)v10, v11);
  sub_140424F50(v48, 0x200000LL);
  v14 = 0LL;
  v15 = 0LL;
  if ( !v43 )
    goto LABEL_9;
  if ( (unsigned int)sub_140229550() )
  {
    v15 = 1LL;
    if ( !HIBYTE(word_140C51864) )
    {
      v37 = (v14 & 1) == 0;
      goto LABEL_55;
    }
  }
  else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
  {
    v37 = (v14 & 1) == 0;
LABEL_55:
    if ( !v37 )
      v14 |= 0x8000000000000000uLL;
  }
LABEL_9:
  *v10 = v14;
  if ( (_DWORD)v15 )
    sub_1402294F0((__int64)v10, v14);
  v44 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v8 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v44, v14, v15, v13);
    while ( *(__int64 *)(v8 + 24) < 0 );
  }
  v46 = v49;
  v47 = 0LL;
  LOBYTE(v47) = 2;
  sub_1402BEEA0((__int64)&v46);
  v3 = v50;
LABEL_14:
  _InterlockedOr(v42, 0);
  v16 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PerformanceCounter.QuadPart;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v38 = KeGetCurrentIrql();
      if ( v38 <= 0xFu && CurrentIrql <= 0xFu && v38 >= 2u )
      {
        v39 = KeGetCurrentPrcb();
        v40 = *((_QWORD *)v39 + 4375);
        v41 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v36 = (v41 & *(_DWORD *)(v40 + 20)) == 0;
        *(_DWORD *)(v40 + 20) &= v41;
        if ( v36 )
          sub_140418E4C(v39);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v8 )
  {
    v53[v6] = v16;
    if ( v6 >= 2 )
    {
      v21 = v6 - 2;
      v22 = 0LL;
      v23 = v6 - 2;
      do
      {
        v24 = v23++;
        v22 += v53[v24];
      }
      while ( v23 <= v6 );
      v17 = v22 / 3;
      v25 = v22 / 3 / 0xA;
      v26 = v22 / 3 - v25;
      v27 = v17 + v25;
      while ( 1 )
      {
        v28 = v53[v21];
        if ( v28 < v26 )
          break;
        if ( v28 <= v27 )
        {
          v21 = (unsigned int)(v21 + 1);
          if ( (unsigned int)v21 <= v6 )
            continue;
        }
        if ( (unsigned int)v21 <= v6 )
          goto LABEL_17;
        if ( !v17 )
          goto LABEL_19;
        goto LABEL_28;
      }
    }
    goto LABEL_17;
  }
  memset(v53, 0, sizeof(v53));
LABEL_18:
  v17 = 0LL;
LABEL_19:
  v18 = 0LL;
  v19 = 0LL;
  v20 = v53;
  do
  {
    if ( !*v20 )
      break;
    v18 += *v20;
    v19 = (unsigned int)(v19 + 1);
    ++v20;
  }
  while ( (unsigned int)v19 < 0x10 );
  if ( (_DWORD)v19 )
    v17 = v18 / v19;
LABEL_28:
  sub_140268284((__int64)v52);
  return v17;
}
