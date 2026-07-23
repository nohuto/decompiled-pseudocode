/*
 * XREFs of sub_14025BDC8 @ 0x14025BDC8
 * Callers:
 *     sub_140205FD4 @ 0x140205FD4 (sub_140205FD4.c)
 * Callees:
 *     sub_140226844 @ 0x140226844 (sub_140226844.c)
 *     sub_1402294F0 @ 0x1402294F0 (sub_1402294F0.c)
 *     sub_140229550 @ 0x140229550 (sub_140229550.c)
 *     sub_14025BFE0 @ 0x14025BFE0 (sub_14025BFE0.c)
 *     sub_140268284 @ 0x140268284 (sub_140268284.c)
 *     sub_14026A574 @ 0x14026A574 (sub_14026A574.c)
 *     sub_14026C61C @ 0x14026C61C (sub_14026C61C.c)
 *     sub_1402C6260 @ 0x1402C6260 (sub_1402C6260.c)
 *     sub_1402CBD10 @ 0x1402CBD10 (sub_1402CBD10.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140317A80 @ 0x140317A80 (sub_140317A80.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14025BDC8(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v6; // r14
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r12
  KIRQL v9; // bp
  volatile LONG *v10; // r14
  unsigned __int64 v11; // rax
  __int64 *v12; // rdx
  __int64 v13; // rcx
  __int64 **v14; // r8
  __int64 *v15; // r15
  int v16; // eax
  __int64 v17; // rbx
  int v18; // r12d
  int v19; // eax
  int v20; // r11d
  __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v26; // r8
  int v27; // eax
  unsigned __int8 v28; // al
  struct _KPRCB *v29; // r11
  __int64 v30; // r9
  int v31; // edx
  bool v32; // zf
  unsigned __int8 v33; // al
  struct _KPRCB *v34; // r9
  __int64 v35; // r8
  int v36; // eax
  int v37; // [rsp+20h] [rbp-58h]
  int v38; // [rsp+24h] [rbp-54h] BYREF
  __int128 v39; // [rsp+28h] [rbp-50h] BYREF

  v2 = *(_QWORD *)(a1 + 232);
  v3 = *(_QWORD *)(a2 + 176);
  v39 = 0LL;
  v6 = *(_QWORD *)(*(_QWORD *)(v2 + 72) + 16LL) + 24512LL * *(unsigned int *)(a2 + 320);
  if ( *(_BYTE *)(a2 + 68) )
  {
    v23 = v3 & 0x3FFFFF;
    v7 = 0LL;
    v8 = qword_140C52968 + 8 * v23;
    v3 = v23 << 18;
  }
  else
  {
    v7 = 48 * v3 - 0x220000000000LL;
    v8 = 0LL;
  }
  *(_DWORD *)(a2 + 96) = 512;
  *(_QWORD *)(a2 + 104) = a2 + 112;
  *(_DWORD *)(a2 + 324) = 1;
  *(_DWORD *)(a2 + 112) |= 1u;
  sub_14025BFE0(&v39, *(unsigned int *)(a2 + 320));
  v37 = sub_14026A574(a2 + 184, (unsigned int)v39, 1LL);
  if ( v7 )
  {
    v38 = 0;
    v9 = 17;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        sub_1402F32E0(&v38);
      while ( *(__int64 *)(v7 + 24) < 0 );
    }
    v10 = (volatile LONG *)(v6 + 22848);
  }
  else
  {
    v10 = (volatile LONG *)(v6 + 22848);
    v9 = ExAcquireSpinLockExclusive(v10);
  }
  if ( *(_BYTE *)(a2 + 70) )
  {
    if ( v7 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v9 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v26 = *((_QWORD *)CurrentPrcb + 4375);
            v27 = ~(unsigned __int16)(-1LL << (v9 + 1));
            v32 = (v27 & *(_DWORD *)(v26 + 20)) == 0;
            *(_DWORD *)(v26 + 20) &= v27;
            if ( v32 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v9);
    }
    if ( v37 )
      sub_140268284(a2 + 184);
    return 1LL;
  }
  else
  {
    if ( v37 )
    {
      v11 = sub_1402C6260(a2 + 184, 0LL, 0x40000LL, 1LL);
      v12 = (__int64 *)(a2 + 80);
      v13 = *(_QWORD *)(a1 + 232) + 56LL;
      v14 = *(__int64 ***)(*(_QWORD *)(a1 + 232) + 64LL);
      if ( *v14 != (__int64 *)v13 )
        __fastfail(3u);
      *v12 = v13;
      *(_QWORD *)(a2 + 88) = v14;
      *v14 = v12;
      *(_QWORD *)(v13 + 8) = v12;
      *(_QWORD *)(a2 + 312) = v11;
      *(_QWORD *)(a2 + 40) = v11;
      v15 = (__int64 *)(((v11 >> 27) & 0x1FFFF8) - 0x90482600000LL);
      if ( v7 )
        v16 = sub_14026C61C(4LL, v7);
      else
        v16 = 4;
      v17 = sub_1402CBD10(v15, v3, v16 | 0xA4000000);
      v18 = 0;
      v19 = sub_140317A80(v15);
      v20 = 0;
      if ( !v19 )
        goto LABEL_13;
      if ( (unsigned int)sub_140229550() )
      {
        v18 = 1;
        if ( HIBYTE(word_140C51864) == (_BYTE)v20 )
        {
          v32 = (v17 & 1) == 0;
          goto LABEL_53;
        }
      }
      else if ( (*(_DWORD *)(*((_QWORD *)KeGetCurrentThread() + 23) + 2172LL) & 0x1000) != 0 )
      {
        v32 = (v17 & 1) == 0;
LABEL_53:
        if ( !v32 )
          v17 |= 0x8000000000000000uLL;
      }
LABEL_13:
      *v15 = v17;
      if ( v18 )
        sub_1402294F0((__int64)v15, v17);
      v21 = *(_QWORD *)(a2 + 40) + 0x3FFFFFFFLL;
      *(_DWORD *)(a2 + 64) = v20;
      *(_QWORD *)(a2 + 48) = v21;
      *(_QWORD *)(a2 + 32) = v15;
      if ( v7 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        ExReleaseSpinLockExclusiveFromDpcLevel(v10);
        v20 = 0;
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v33 = KeGetCurrentIrql();
            if ( v33 <= 0xFu && v9 <= 0xFu && v33 >= 2u )
            {
              v34 = KeGetCurrentPrcb();
              v35 = *((_QWORD *)v34 + 4375);
              v36 = ~(unsigned __int16)(-1LL << (v9 + 1));
              v32 = (v36 & *(_DWORD *)(v35 + 20)) == 0;
              *(_DWORD *)(v35 + 20) &= v36;
              if ( v32 )
              {
                sub_140418E4C(v34);
                v20 = 0;
              }
            }
          }
        }
        __writecr8(v9);
      }
      *(_DWORD *)(a1 + 64) = v20;
      result = 0LL;
      *(_QWORD *)(a1 + 224) = a2;
      *(_WORD *)(a1 + 216) = v20;
      return result;
    }
    if ( v7 )
    {
      sub_140226844(v7, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      sub_140226844(v8, 1uLL);
      ExReleaseSpinLockExclusiveFromDpcLevel(v10);
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v28 = KeGetCurrentIrql();
          if ( v28 <= 0xFu && v9 <= 0xFu && v28 >= 2u )
          {
            v29 = KeGetCurrentPrcb();
            v30 = *((_QWORD *)v29 + 4375);
            v31 = ~(unsigned __int16)(-1LL << (v9 + 1));
            v32 = (v31 & *(_DWORD *)(v30 + 20)) == 0;
            *(_DWORD *)(v30 + 20) &= v31;
            if ( v32 )
              sub_140418E4C(v29);
          }
        }
      }
      __writecr8(v9);
    }
    sub_140268284(a2 + 184);
    return 2LL;
  }
}
