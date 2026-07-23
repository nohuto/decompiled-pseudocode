/*
 * XREFs of sub_140461038 @ 0x140461038
 * Callers:
 *     sub_140300E50 @ 0x140300E50 (sub_140300E50.c)
 *     sub_1407B4D70 @ 0x1407B4D70 (sub_1407B4D70.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     __chkstk @ 0x14042A4D0 (__chkstk.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     sub_1404615A6 @ 0x1404615A6 (sub_1404615A6.c)
 *     sub_1404617FE @ 0x1404617FE (sub_1404617FE.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

char __fastcall sub_140461038(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        char a5,
        unsigned __int8 a6,
        unsigned __int8 a7,
        __int64 a8,
        char a9)
{
  __int64 v10; // r12
  void **v12; // rsi
  unsigned __int8 CurrentIrql; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 v16; // r9
  unsigned int v17; // ecx
  unsigned __int64 v18; // rdx
  unsigned int v19; // ecx
  char *v20; // r8
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdx
  void *v23; // rsp
  void *v24; // rsp
  __int64 v25; // r14
  __int64 v26; // rdx
  _BYTE *v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r8
  unsigned __int8 v30; // al
  __int64 v31; // rax
  unsigned __int8 v32; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v34; // r8
  int v35; // eax
  bool v36; // zf
  unsigned __int8 v37; // al
  struct _KPRCB *v38; // r9
  __int64 v39; // r8
  int v40; // eax
  char v42; // [rsp+20h] [rbp+0h] BYREF
  char v43; // [rsp+21h] [rbp+1h]
  unsigned __int16 v44; // [rsp+24h] [rbp+4h] BYREF
  PVOID P; // [rsp+28h] [rbp+8h]
  int v46; // [rsp+30h] [rbp+10h]
  void **v47; // [rsp+38h] [rbp+18h]
  void *Src[2]; // [rsp+40h] [rbp+20h] BYREF

  v10 = a2;
  v44 = 0;
  P = 0LL;
  *(_OWORD *)Src = 0LL;
  v12 = 0LL;
  v47 = 0LL;
  CurrentIrql = 0;
  v43 = 0;
  v42 = 1;
  if ( a5 )
  {
    v14 = 16LL * a3;
    if ( v14 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v15 = v14 + a4;
      v16 = 0x7FFFFFFF0000LL;
      if ( v15 > 0x7FFFFFFF0000LL || v15 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v16 = 0x7FFFFFFF0000LL;
    }
  }
  else
  {
    v16 = 0x7FFFFFFF0000LL;
  }
  v17 = 0;
  v46 = 0;
  while ( v17 < a3 )
  {
    v18 = a4 + 16LL * v17;
    if ( *(_BYTE *)(v18 + 12) == 1 )
    {
      if ( a6 >= 2u )
      {
        v12 = (void **)(a4 + 16LL * v17);
        v47 = v12;
        P = *(PVOID *)v18;
      }
      else
      {
        *(_OWORD *)Src = *(_OWORD *)v18;
        v12 = Src;
        v47 = Src;
        v19 = _mm_cvtsi128_si32(_mm_srli_si128(*(__m128i *)Src, 8));
        if ( v19 >= 0xFFFF )
        {
          v42 = 0;
          goto LABEL_81;
        }
        if ( a5 )
        {
          if ( v19 )
          {
            v20 = (char *)Src[0] + v19;
            if ( (unsigned __int64)v20 > 0x7FFFFFFF0000LL || v20 < Src[0] )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v19 = (unsigned int)Src[1];
            }
          }
        }
        if ( v19 <= 0x100 )
        {
          v21 = v19 + 15LL;
          if ( v21 <= v19 )
            v21 = 0xFFFFFFFFFFFFFF0LL;
          v22 = v21 & 0xFFFFFFFFFFFFFFF0uLL;
          v23 = alloca(v22);
          v24 = alloca(v22);
          P = &v42;
        }
        else
        {
          P = (PVOID)ExAllocatePool2(66LL, v19, 1953985605LL);
          if ( !P )
          {
            v42 = 1;
            goto LABEL_81;
          }
          v43 = 1;
          v19 = (unsigned int)Src[1];
        }
        memmove(P, Src[0], v19);
      }
      break;
    }
    v46 = ++v17;
  }
  if ( !v12 || !P )
    goto LABEL_67;
  if ( a6 < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v16 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v16 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
    }
  }
  v25 = *(_QWORD *)(a1 + 384);
  if ( v25 )
  {
    v26 = 104 * v10;
    LOBYTE(v16) = a9;
    v27 = a9 ? *(_BYTE **)(v25 + v26 + 56) : *(_BYTE **)(v25 + v26 + 96);
    if ( v27 )
    {
      v28 = 0LL;
      v29 = *(_QWORD *)(a1 + 384);
      if ( v29 )
      {
        if ( a9 )
        {
          v16 = 2147491840LL;
          if ( (*(_DWORD *)(v29 + 104 * v10) & 0x80002000) == 0x80002000 )
            v28 = *(_QWORD *)(v29 + v26 + 56);
        }
        else if ( (*(_DWORD *)(v29 + 104 * v10) & 0x80000400) == 0x80000400 )
        {
          v28 = *(_QWORD *)(v29 + v26 + 96);
        }
        if ( v28 )
        {
          v30 = *(_BYTE *)(v28 + 1);
          if ( (a7 <= v30 || !v30)
            && (!a8 || (a8 & *(_QWORD *)(v28 + 8)) != 0 && (a8 & *(_QWORD *)(v28 + 16)) == *(_QWORD *)(v28 + 16)) )
          {
            v31 = sub_1404617FE(P, *((unsigned int *)v47 + 2), &v44, v16);
            if ( !v31 )
            {
              if ( a6 < 2u )
              {
                if ( dword_140D06B08 )
                {
                  if ( (dword_140D06B08 & 1) != 0 )
                  {
                    v32 = KeGetCurrentIrql();
                    if ( v32 <= 0xFu && CurrentIrql <= 0xFu && v32 >= 2u )
                    {
                      CurrentPrcb = KeGetCurrentPrcb();
                      v34 = *((_QWORD *)CurrentPrcb + 4375);
                      v35 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
                      v36 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
                      *(_DWORD *)(v34 + 20) &= v35;
                      if ( v36 )
                        sub_140418E4C((__int64)CurrentPrcb);
                    }
                  }
                }
                __writecr8(CurrentIrql);
              }
LABEL_67:
              v42 = 1;
              goto LABEL_81;
            }
            if ( v44 )
              v36 = *v27 == (unsigned __int8)sub_1404615A6(v31, v44, v27);
            else
              v36 = *v27 == 0;
            v42 = v36;
          }
        }
      }
    }
  }
  if ( a6 < 2u )
  {
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v37 = KeGetCurrentIrql();
        if ( v37 <= 0xFu && CurrentIrql <= 0xFu && v37 >= 2u )
        {
          v38 = KeGetCurrentPrcb();
          v39 = *((_QWORD *)v38 + 4375);
          v40 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v36 = (v40 & *(_DWORD *)(v39 + 20)) == 0;
          *(_DWORD *)(v39 + 20) &= v40;
          if ( v36 )
            sub_140418E4C((__int64)v38);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
LABEL_81:
  if ( v43 )
    ExFreePoolWithTag(P, 0);
  return v42;
}
