/*
 * XREFs of sub_140346E50 @ 0x140346E50
 * Callers:
 *     KeStackAttachProcess @ 0x140203630 (KeStackAttachProcess.c)
 *     KeAttachProcess @ 0x140252530 (KeAttachProcess.c)
 *     sub_14030D5C0 @ 0x14030D5C0 (sub_14030D5C0.c)
 * Callees:
 *     sub_14021158C @ 0x14021158C (sub_14021158C.c)
 *     sub_140224100 @ 0x140224100 (sub_140224100.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140347550 @ 0x140347550 (sub_140347550.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14054CAE0 @ 0x14054CAE0 (sub_14054CAE0.c)
 */

unsigned __int64 __fastcall sub_140346E50(__int64 a1, __int64 a2, unsigned __int8 a3, char a4, __int64 a5)
{
  __int64 v5; // rdi
  _QWORD *v6; // r10
  unsigned __int64 v9; // r13
  _QWORD *v11; // rcx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  int v14; // ebp
  struct _KPRCB *v15; // rcx
  __int64 v16; // rdx
  struct _KPRCB *v17; // rcx
  __int64 v18; // r12
  unsigned __int64 v19; // r15
  __int64 v20; // r14
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  unsigned __int8 CurrentIrql; // cl
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v29; // rcx
  _QWORD *v30; // rcx
  __int64 *v31; // rax
  int v32; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  int v37; // eax
  unsigned __int64 v38; // rcx
  struct _KPRCB *v39; // r9
  __int64 v40; // r8
  bool v41; // zf
  int v42; // [rsp+68h] [rbp+20h] BYREF

  v5 = a5;
  v6 = (_QWORD *)(a1 + 152);
  v9 = a3;
  *(_QWORD *)(a5 + 32) = *(_QWORD *)(a1 + 184);
  *(_BYTE *)(v5 + 40) = *(_BYTE *)(a1 + 192);
  *(_BYTE *)(v5 + 41) = *(_BYTE *)(a1 + 193);
  *(_BYTE *)(v5 + 42) = *(_BYTE *)(a1 + 194);
  v11 = *(_QWORD **)(a1 + 152);
  if ( v11 == v6 )
  {
    *(_QWORD *)(v5 + 8) = v5;
    *(_QWORD *)v5 = v5;
    *(_BYTE *)(v5 + 41) = 0;
  }
  else
  {
    v31 = (__int64 *)v6[1];
    *(_QWORD *)v5 = v11;
    *(_QWORD *)(v5 + 8) = v31;
    v11[1] = v5;
    *v31 = v5;
  }
  v12 = (_QWORD *)v6[2];
  v13 = (_QWORD *)(v5 + 16);
  if ( v12 == v6 + 2 )
  {
    *(_QWORD *)(v5 + 24) = v5 + 16;
    *v13 = v13;
    *(_BYTE *)(v5 + 42) = 0;
  }
  else
  {
    v30 = (_QWORD *)v6[3];
    *v13 = v12;
    *(_QWORD *)(v5 + 24) = v30;
    v12[1] = v13;
    *v30 = v13;
  }
  v6[1] = v6;
  *(_QWORD *)(a1 + 176) = a1 + 168;
  *(_QWORD *)(a1 + 168) = a1 + 168;
  *v6 = v6;
  *(_WORD *)(a1 + 192) = 0;
  *(_BYTE *)(a1 + 194) = 0;
  if ( v5 == a1 + 600 )
    *(_BYTE *)(a1 + 586) = 1;
  if ( (a4 & 1) == 0 && (_InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 840), 8u) & 7) != 0 )
  {
    sub_140224100(a1);
    sub_14021158C(a1, a2, v9);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
    {
      v26 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
      v24 = (-1LL << (CurrentIrql + 1)) & 4;
      v25 = (unsigned int)v24 | *(_DWORD *)(v26 + 20);
      *(_DWORD *)(v26 + 20) = v25;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    v42 = 0;
    v29 = *((_QWORD *)CurrentPrcb + 4375);
    if ( v29 )
    {
      if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
      {
        v32 = *(_DWORD *)(v29 + 24);
        *(_DWORD *)(v29 + 24) = v32 + 1;
        if ( v32 == -1 )
LABEL_33:
          sub_140418E4C(CurrentPrcb);
      }
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      v33 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v33 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v34 = *(_DWORD *)(v33 + 24) - 1;
          *(_DWORD *)(v33 + 24) = v34;
          if ( !v34 )
            sub_140418E4C(CurrentPrcb);
        }
      }
      do
        sub_1402F32E0(&v42, v24, v25, v26);
      while ( *(_QWORD *)(a1 + 64) );
      v35 = *((_QWORD *)CurrentPrcb + 4375);
      if ( v35 )
      {
        if ( *((_BYTE *)CurrentPrcb + 32) <= 1u )
        {
          v36 = *(_DWORD *)(v35 + 24);
          *(_DWORD *)(v35 + 24) = v36 + 1;
          if ( v36 == -1 )
            goto LABEL_33;
        }
      }
    }
  }
  *(_DWORD *)(a1 + 116) |= 0x800u;
  *(_QWORD *)(a1 + 184) = a2;
  v14 = a4 & 2;
  if ( !v14 )
  {
    *(_QWORD *)(a1 + 64) = 0LL;
    v15 = KeGetCurrentPrcb();
    v16 = *((_QWORD *)v15 + 4375);
    if ( v16 )
    {
      if ( *((_BYTE *)v15 + 32) <= 1u )
      {
        v37 = *(_DWORD *)(v16 + 24) - 1;
        *(_DWORD *)(v16 + 24) = v37;
        if ( !v37 )
          sub_140418E4C(v15);
      }
    }
  }
  v17 = KeGetCurrentPrcb();
  v18 = *(_QWORD *)(v5 + 32);
  v19 = *((unsigned __int8 *)v17 + 209);
  v20 = 8LL * *((unsigned __int8 *)v17 + 208) + 376;
  _interlockedbittestandset64((volatile signed __int32 *)(v20 + a2), v19);
  v21 = *(_QWORD *)(a2 + 40);
  if ( byte_140E01840 )
  {
    v22 = *(_QWORD *)(a2 + 40);
    if ( (v21 & 2) != 0 )
      v22 = v21 | 0x8000000000000000uLL;
    __writegsqword(0xA000u, v22);
    sub_140347550(*(unsigned __int8 *)(a2 + 912));
  }
  result = (unsigned int)dword_140D0689C;
  if ( (dword_140D0689C & 1) != 0 )
    result = sub_14054CAE0(v21);
  else
    __writecr3(v21);
  if ( !byte_140D0688A && byte_140E01840 )
  {
    v38 = __readcr4();
    if ( (v38 & 0x20080) != 0 )
    {
      result = v38 ^ 0x80;
      __writecr4(v38 ^ 0x80);
      __writecr4(v38);
    }
    else
    {
      result = __readcr3();
      __writecr3(result);
    }
  }
  _interlockedbittestandreset64((volatile signed __int32 *)(v20 + v18), v19);
  *(_DWORD *)(a1 + 116) &= ~0x800u;
  if ( !v14 )
  {
    result = (unsigned int)dword_140D06B08;
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        result = KeGetCurrentIrql();
        if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v9 <= 0xFu && (unsigned __int8)result >= 2u )
        {
          v39 = KeGetCurrentPrcb();
          v40 = *((_QWORD *)v39 + 4375);
          result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
          v41 = ((unsigned int)result & *(_DWORD *)(v40 + 20)) == 0;
          *(_DWORD *)(v40 + 20) &= result;
          if ( v41 )
            result = sub_140418E4C(v39);
        }
      }
    }
    __writecr8(v9);
  }
  return result;
}
