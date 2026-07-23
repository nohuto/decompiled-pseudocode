/*
 * XREFs of sub_1403072A0 @ 0x1403072A0
 * Callers:
 *     sub_14023B798 @ 0x14023B798 (sub_14023B798.c)
 *     sub_140293988 @ 0x140293988 (sub_140293988.c)
 *     sub_1403051E0 @ 0x1403051E0 (sub_1403051E0.c)
 *     sub_140306100 @ 0x140306100 (sub_140306100.c)
 * Callees:
 *     sub_140211E70 @ 0x140211E70 (sub_140211E70.c)
 *     sub_14039AEA4 @ 0x14039AEA4 (sub_14039AEA4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14045A310 @ 0x14045A310 (sub_14045A310.c)
 *     sub_14056E8CC @ 0x14056E8CC (sub_14056E8CC.c)
 */

char __fastcall sub_1403072A0(__int64 a1, unsigned __int8 a2, char a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // r14d
  __int64 v8; // rcx
  __int64 v9; // rdx
  char v10; // r11
  char v12; // si
  __int64 v13; // r12
  volatile signed __int32 *v14; // rbx
  char v15; // r8
  __int64 v16; // rcx
  unsigned int i; // eax
  unsigned int v18; // ebp
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 v20; // rcx
  __int64 v21; // r15
  _QWORD *v22; // rsi
  unsigned __int8 v23; // bp
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // r10
  unsigned int v27; // eax
  __int64 v28; // rcx
  char v29; // bp
  int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // r8d
  struct _KPRCB *v33; // rcx
  __int64 v34; // rdx
  __int64 *v35; // rbx
  __int64 v37; // r10
  int v38; // eax
  __int64 v39; // rcx
  int v40; // eax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-60h]
  __int64 v45; // [rsp+50h] [rbp-58h] BYREF
  __int64 v46; // [rsp+58h] [rbp-50h] BYREF
  __int64 v47[8]; // [rsp+60h] [rbp-48h] BYREF
  unsigned int v48; // [rsp+A0h] [rbp-8h]
  void *retaddr; // [rsp+A8h] [rbp+0h]
  unsigned int v50; // [rsp+B0h] [rbp+8h] BYREF
  unsigned __int8 v51; // [rsp+B8h] [rbp+10h]

  v51 = a2;
  v5 = 0;
  v50 = 0;
  v8 = 0LL;
  v45 = 0LL;
  v9 = 0LL;
  v43 = 0LL;
  v10 = a4;
  v44 = 0LL;
  if ( *(_DWORD *)(a1 + 33824) == 3 )
  {
    v12 = 1;
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 34512) + 8LL * DWORD2(xmmword_140CF7090)) >> 1;
  }
  else
  {
    v12 = 0;
    v13 = 0LL;
  }
  v14 = (volatile signed __int32 *)(a1 + 33680);
  if ( a2
    || (*(_QWORD *)(a1 + 33736)
     || *(_QWORD *)(a1 + 33760)
     && (*(_DWORD *)(a1 + 33096) != *(_DWORD *)(a1 + 33776) || *(_DWORD *)(a1 + 33092) != *(_DWORD *)(a1 + 33780))
     || a3 && v13 != *(_QWORD *)(a1 + 33784))
    && (!(_BYTE)a4 || !*(_BYTE *)(a1 + 33818)) )
  {
    v15 = 0;
    v16 = a1 + 33704;
    a4 = 2LL;
    for ( i = 0; i < 2; ++i )
    {
      if ( *(_QWORD *)v16 )
      {
        if ( *(_BYTE *)(*(_QWORD *)v16 + 32LL) )
        {
          if ( a3 )
            return 0;
          v15 = 1;
        }
        if ( (_DWORD)a4 == 2 )
          a4 = i;
      }
      v16 += 8LL;
    }
    if ( v15 || a2 || !v10 )
    {
      v18 = v48;
      _disable();
      v18 >>= 9;
      LOBYTE(v18) = v18 & 1;
      v48 = v18;
      if ( (BYTE6(xmmword_140D06900) & 0x21) != 0 )
      {
        sub_14045A310(a1 + 33680);
      }
      else
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v20 = *((_QWORD *)CurrentPrcb + 4375);
        if ( v20 )
        {
          if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
          {
            v38 = *(_DWORD *)(v20 + 24);
            *(_DWORD *)(v20 + 24) = v38 + 1;
            if ( v38 == -1 )
              sub_140418E4C(CurrentPrcb);
          }
        }
        if ( _interlockedbittestandset64(v14, 0LL) )
        {
          v39 = *((_QWORD *)CurrentPrcb + 4375);
          if ( v39 )
          {
            if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
            {
              v40 = *(_DWORD *)(v39 + 24) - 1;
              *(_DWORD *)(v39 + 24) = v40;
              if ( !v40 )
                sub_140418E4C(CurrentPrcb);
            }
          }
          sub_140211E70((volatile signed __int32 *)(a1 + 33680));
        }
      }
      v21 = _InterlockedExchange64((volatile __int64 *)(a1 + 33736), 0LL);
      if ( v12 )
      {
        v46 = 0LL;
        v43 = sub_14039AEA4(a1, &v46, &v45, a4);
        v44 = v46;
        v21 = v43 - v46 - *(_QWORD *)(a1 + 33792);
        *(_QWORD *)(a1 + 33792) = v43 - v46;
      }
      *(_QWORD *)(a1 + 33728) += v21;
      v22 = (_QWORD *)(a1 + 33744);
      v23 = v51;
      do
      {
        v24 = *(v22 - 5);
        if ( v24 )
        {
          v25 = *(_QWORD *)(v24 + 40);
          if ( *(_BYTE *)(v24 + 33) )
          {
            sub_14042A5E0(v25, v23);
            v26 = *(_QWORD *)(v24 + 16);
            if ( v26 )
            {
              *(_DWORD *)(v24 + 24) = -*(_QWORD *)(v24 + 8) * (unsigned __int64)*(unsigned __int8 *)(v24 + 35) / -v26;
              *(_QWORD *)(v24 + 16) = 0LL;
              *(_QWORD *)(v24 + 8) = 0LL;
            }
            v27 = *(_DWORD *)(v24 + 24);
            v50 = v27;
          }
          else
          {
            sub_14042A5E0(v25, &v50);
            v27 = v50;
          }
          v28 = v21 * v27;
          *v22 += v28;
          if ( v5 == *(unsigned __int8 *)(a1 + 33816) )
            *(_QWORD *)(a1 + 33760) += v28;
        }
        ++v5;
        ++v22;
      }
      while ( v5 < 2 );
      v29 = v48;
      if ( *(_BYTE *)(a1 + 33816) == 2 )
        *(_QWORD *)(a1 + 33760) += 100 * v21;
      v30 = *(_DWORD *)(a1 + 33096);
      a4 = *(unsigned int *)(a1 + 33092);
      v31 = *(_DWORD *)(a1 + 33092) - *(_DWORD *)(a1 + 33780);
      v32 = v31 + v30 - *(_DWORD *)(a1 + 33776);
      if ( v32 )
      {
        v37 = *(_QWORD *)(a1 + 33760);
        *(_QWORD *)(a1 + 33760) = 0LL;
        *(_DWORD *)(a1 + 33776) = v30;
        *(_DWORD *)(a1 + 33780) = a4;
        if ( v31 )
        {
          if ( v32 != 1 )
            v31 /= v32;
          v50 = v31;
          *(_QWORD *)(a1 + 33768) += v37 * v31;
        }
      }
      *(_QWORD *)(a1 + 33784) = v13;
      if ( (BYTE6(xmmword_140D06900) & 1) != 0 )
        sub_14056E8CC(a1 + 33680, retaddr);
      else
        _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
      v33 = KeGetCurrentPrcb();
      v34 = *((_QWORD *)v33 + 4375);
      if ( v34 )
      {
        if ( *((_BYTE *)v33 + 32) <= 1u )
        {
          v41 = *(_DWORD *)(v34 + 24) - 1;
          *(_DWORD *)(v34 + 24) = v41;
          if ( !v41 )
            sub_140418E4C(v33);
        }
      }
      if ( v29 )
        _enable();
      v8 = v43;
      v9 = v44;
    }
    else
    {
      v8 = 0LL;
      v9 = 0LL;
    }
  }
  v35 = a5;
  if ( a5 )
  {
    if ( !v8 )
    {
      v47[0] = 0LL;
      v42 = sub_14039AEA4(a1, v47, &v45, a4);
      v9 = v47[0];
      v8 = v42;
    }
    v35[2] = v45;
    *v35 = v8;
    v35[1] = v9;
  }
  return 1;
}
