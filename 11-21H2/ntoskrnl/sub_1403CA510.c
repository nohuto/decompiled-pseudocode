/*
 * XREFs of sub_1403CA510 @ 0x1403CA510
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     KeQueryPerformanceCounter @ 0x1403027F0 (KeQueryPerformanceCounter.c)
 *     sub_1403CAA10 @ 0x1403CAA10 (sub_1403CAA10.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_140424F50 @ 0x140424F50 (sub_140424F50.c)
 *     memset @ 0x140435E00 (memset.c)
 */

ULONG_PTR __fastcall sub_1403CA510(ULONG_PTR Argument, __int64 i, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r13
  __int64 v5; // r8
  __int64 v7; // rbp
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 CurrentIrql; // r12
  __int64 v12; // r12
  __int64 v13; // rsi
  signed __int32 v14; // eax
  unsigned int v15; // edi
  signed __int32 v16; // eax
  unsigned int v17; // edi
  unsigned int v18; // r9d
  bool v19; // cf
  unsigned int *v20; // r8
  unsigned __int64 v21; // rax
  unsigned int v22; // eax
  signed __int32 v23; // eax
  signed __int32 v24; // eax
  int v25; // ebp
  __int64 v26; // rax
  bool v27; // zf
  unsigned __int8 v28; // r12
  ULONG_PTR result; // rax
  unsigned __int32 v30; // ecx
  size_t v31; // r8
  void *v32; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v34; // rax
  __int64 v35; // rdx
  _DWORD *v36; // rcx
  __int128 v37; // xmm0
  _QWORD *v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  unsigned int v41; // r10d
  __int64 v42; // rdx
  _DWORD *v43; // rdx
  __int64 v44; // rax
  unsigned __int8 v45; // al
  struct _KPRCB *v46; // r9
  __int64 v47; // r8
  int v48; // eax
  signed __int32 v49[8]; // [rsp+0h] [rbp-88h] BYREF
  __int64 v50; // [rsp+20h] [rbp-68h]
  __int64 v51; // [rsp+28h] [rbp-60h]
  __int64 v52; // [rsp+30h] [rbp-58h]
  __int64 v53; // [rsp+38h] [rbp-50h]
  int v54; // [rsp+90h] [rbp+8h] BYREF
  int v55; // [rsp+98h] [rbp+10h] BYREF
  int v56; // [rsp+A0h] [rbp+18h] BYREF
  int j; // [rsp+A8h] [rbp+20h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = (unsigned __int16)word_140D05000;
  v7 = *(_QWORD *)(Argument + 72);
  v8 = 0;
  v50 = v7;
  if ( word_140D05000 )
  {
    a4 = *((unsigned __int8 *)CurrentPrcb + 208);
    while ( 1 )
    {
      i = 120LL * v8;
      v9 = *(_QWORD *)(i + qword_140C506E0 + 112);
      if ( (_WORD)a4 == *(_WORD *)(v9 + 8) && (*(_QWORD *)v9 & *((_QWORD *)CurrentPrcb + 25)) != 0LL )
        break;
      if ( ++v8 >= (unsigned __int16)word_140D05000 )
        goto LABEL_55;
    }
  }
  else
  {
LABEL_55:
    if ( v8 == (unsigned __int16)word_140D05000 )
      v8 = *(unsigned __int16 *)(*((_QWORD *)CurrentPrcb + 24) + 138LL);
  }
  v10 = *(_QWORD *)(v7 + 16) + 24512LL * v8;
  v52 = *(_QWORD *)(qword_140C506E0 + 120LL * v8 + 112);
  v51 = *(_QWORD *)(v10 + 22944);
  *(_DWORD *)(v10 + 22952) = *(_DWORD *)(v51 + 128);
  CurrentIrql = KeGetCurrentIrql();
  v53 = CurrentIrql;
  __writecr8(0xFuLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && (unsigned __int8)CurrentIrql <= 0xFu )
  {
    a4 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    i = (-1LL << ((unsigned __int8)CurrentIrql + 1)) & 0xFFFC;
    v5 = (unsigned int)i | *(_DWORD *)(a4 + 20);
    *(_DWORD *)(a4 + 20) = v5;
  }
  do
  {
    v12 = *((_QWORD *)CurrentPrcb + 4199);
    v13 = *(_QWORD *)(Argument + 32) + 16LL * (unsigned int)(*(_DWORD *)(Argument + 40) - 1);
    v55 = 0;
    *(_DWORD *)(v12 + 12484) = 0;
    v14 = _InterlockedDecrement((volatile signed __int32 *)Argument);
    v15 = ~v14 & 0x80000000;
    if ( (v14 & 0x7FFFFFFF) != 0 )
    {
      while ( (*(_DWORD *)Argument & 0x80000000) != v15 )
        sub_1402F32E0(&v55, i, v5, a4);
      v56 = 0;
      v16 = _InterlockedDecrement((volatile signed __int32 *)Argument);
      v17 = ~v16 & 0x80000000;
      if ( (v16 & 0x7FFFFFFF) != 0 )
      {
        while ( (*(_DWORD *)Argument & 0x80000000) != v17 )
          sub_1402F32E0(&v56, i, v5, a4);
        goto LABEL_21;
      }
    }
    else
    {
      v18 = 0;
      v19 = word_140D05000 != 0;
      *(_DWORD *)Argument = v15 | *(_DWORD *)(Argument + 4);
      if ( v19 )
      {
        v20 = (unsigned int *)(*(_QWORD *)(v7 + 16) + 22952LL);
        do
        {
          if ( *v20 )
            v21 = (*((_QWORD *)v20 - 3) / (unsigned __int64)*v20) & 0xFFFFFFFFFFFFF000uLL;
          else
            v21 = 0LL;
          *((_QWORD *)v20 - 2) = v21;
          ++v18;
          v22 = (unsigned __int16)word_140D05000;
          v20[1] = 0;
          v20 += 6128;
        }
        while ( v18 < v22 );
      }
      *(_DWORD *)(Argument + 44) = 0;
      *(LARGE_INTEGER *)(Argument + 56) = KeQueryPerformanceCounter(0LL);
      _InterlockedOr(v49, 0);
      v54 = 0;
      v23 = _InterlockedDecrement((volatile signed __int32 *)Argument);
      v17 = ~v23 & 0x80000000;
      if ( (v23 & 0x7FFFFFFF) != 0 )
      {
        while ( (*(_DWORD *)Argument & 0x80000000) != v17 )
          sub_1402F32E0(&v54, i, v5, a4);
        goto LABEL_21;
      }
    }
    *(_DWORD *)Argument = v17 | *(_DWORD *)(Argument + 4);
LABEL_21:
    if ( *((unsigned __int8 *)CurrentPrcb + 208) == *(_WORD *)(v51 + 120)
      && (*((_QWORD *)CurrentPrcb + 25) & *(_QWORD *)(v51 + 112)) != 0LL )
    {
      v30 = _InterlockedIncrement((volatile signed __int32 *)(v10 + 22956));
      if ( v30 <= *(_DWORD *)(v10 + 22952) )
      {
        v31 = *(_QWORD *)(v10 + 22936);
        v32 = (void *)(*(_QWORD *)(v10 + 22920) + v31 * (v30 - 1));
        if ( *(_DWORD *)(Argument + 48) == 1 )
          sub_140424F50(v32, *(_QWORD *)(v10 + 22936));
        else
          memset(v32, 0, v31);
        if ( _InterlockedIncrement((volatile signed __int32 *)(v10 + 22960)) == *(_DWORD *)(v10 + 22952) )
        {
          _InterlockedOr(v49, 0);
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          i = 16LL * (unsigned int)(*(_DWORD *)(v10 + 22952) - 1);
          v5 = i + *(_QWORD *)(v52 + 72);
          *(_QWORD *)(v5 + 8LL * *(int *)(Argument + 48)) = PerformanceCounter.QuadPart - *(_QWORD *)(Argument + 56);
          *(_DWORD *)(v10 + 22960) = 0;
        }
      }
    }
    v24 = _InterlockedIncrement((volatile signed __int32 *)(Argument + 44));
    if ( v24 == (_DWORD)dword_140D06884 )
    {
      _InterlockedOr(v49, 0);
      v34 = KeQueryPerformanceCounter(0LL);
      v35 = 0LL;
      *(_QWORD *)(v13 + 8LL * *(int *)(Argument + 48)) = v34.QuadPart - *(_QWORD *)(Argument + 56);
      if ( word_140D05000 )
      {
        v36 = (_DWORD *)(*(_QWORD *)(v7 + 16) + 22952LL);
        do
        {
          if ( *v36 )
          {
            --*v36;
            --*(_DWORD *)(Argument + 40);
          }
          v36 += 6128;
          v35 = (unsigned int)(v35 + 1);
        }
        while ( (unsigned int)v35 < (unsigned __int16)word_140D05000 );
      }
      v25 = 1;
      if ( !*(_DWORD *)(Argument + 40) )
      {
        if ( *(_DWORD *)(Argument + 48) )
        {
          v37 = *(_OWORD *)(Argument + 8);
          v25 = 2;
          *(_QWORD *)(Argument + 64) = qword_140C53398;
          xmmword_140C53380 = v37;
          unk_140C53390 = *(_OWORD *)(Argument + 24);
          if ( word_140D05000 )
          {
            v38 = (_QWORD *)(qword_140C506E0 + 112);
            v39 = (unsigned __int16)word_140D05000;
            do
            {
              sub_1403CAA10(*v38 + 48LL, v35);
              v38 += 15;
              --v39;
            }
            while ( v39 );
          }
          sub_1403CAA10(&xmmword_140C53380, v35);
        }
        else
        {
          v40 = v50;
          a4 = 0LL;
          v5 = qword_140C506E0;
          *(_DWORD *)(Argument + 48) = 1;
          v41 = (unsigned __int16)word_140D05000;
          *(_DWORD *)(Argument + 40) = *(_DWORD *)(v40 + 16180);
          v42 = *(_QWORD *)(v40 + 16);
          if ( (_WORD)v41 )
          {
            v43 = (_DWORD *)(v42 + 22952);
            v5 += 112LL;
            do
            {
              v44 = *(_QWORD *)v5;
              a4 = (unsigned int)(a4 + 1);
              v5 += 120LL;
              *v43 = *(_DWORD *)(v44 + 48);
              v43 += 6128;
            }
            while ( (unsigned int)a4 < v41 );
          }
        }
      }
      for ( i = 0LL;
            (unsigned int)i < (unsigned int)dword_140D06884;
            *(_DWORD *)(*(_QWORD *)(qword_140D088C0[v26] + 33592) + 12484LL) = v25 )
      {
        v26 = (unsigned int)i;
        i = (unsigned int)(i + 1);
      }
    }
    else
    {
      for ( j = 0; ; sub_1402F32E0(&j, i, v5, a4) )
      {
        v25 = *(_DWORD *)(v12 + 12484);
        if ( v25 )
          break;
      }
    }
    v27 = v25 == 1;
    v7 = v50;
  }
  while ( v27 );
  v28 = v53;
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v45 = KeGetCurrentIrql();
      if ( v45 <= 0xFu && (unsigned __int8)v53 <= 0xFu && v45 >= 2u )
      {
        v46 = KeGetCurrentPrcb();
        v47 = *((_QWORD *)v46 + 4375);
        v48 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v53 + 1));
        v27 = (v48 & *(_DWORD *)(v47 + 20)) == 0;
        *(_DWORD *)(v47 + 20) &= v48;
        if ( v27 )
          sub_140418E4C(v46);
      }
    }
  }
  result = v28;
  __writecr8(v28);
  return result;
}
