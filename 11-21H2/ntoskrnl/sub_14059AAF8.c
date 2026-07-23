/*
 * XREFs of sub_14059AAF8 @ 0x14059AAF8
 * Callers:
 *     sub_14059B62C @ 0x14059B62C (sub_14059B62C.c)
 * Callees:
 *     sub_1402297E4 @ 0x1402297E4 (sub_1402297E4.c)
 *     sub_14028C14C @ 0x14028C14C (sub_14028C14C.c)
 *     sub_1402F2700 @ 0x1402F2700 (sub_1402F2700.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_14059AAF8(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, _QWORD *a5, _DWORD *a6)
{
  unsigned int v6; // r12d
  __int64 v8; // rax
  __int64 v10; // r15
  __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned __int64 v13; // rbx
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r10
  __int64 v16; // r9
  int v17; // eax
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r9
  unsigned __int8 v20; // al
  struct _KPRCB *v21; // r9
  int v22; // eax
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rcx
  int *v26; // r8
  int v27; // r9d
  int *v28; // rdx
  bool v29; // zf
  bool i; // zf
  int v31; // r15d
  unsigned __int8 v32; // cl
  struct _KPRCB *v33; // r10
  __int64 v34; // r9
  int v35; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v38; // edx
  __int64 v39; // r9
  __int64 v41; // [rsp+20h] [rbp-48h]
  __int64 v42; // [rsp+28h] [rbp-40h]
  __int64 v43; // [rsp+70h] [rbp+8h]

  v6 = 0;
  v41 = *(_QWORD *)(a1 + 248);
  v8 = v41 + 88LL * (*(_WORD *)(a1 + 204) & 0xF);
  v43 = v8;
  if ( a3 )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(v8 + 3728);
      v42 = v10;
      if ( v10 == 0x3FFFFFFFFFLL )
        return v6;
      v11 = 48 * v10 - 0x220000000000LL;
      v12 = 0;
      v13 = (unsigned __int8)sub_1402F2700(v11);
      if ( v10 == *(_QWORD *)(v43 + 3728) )
      {
        v18 = *(_QWORD *)(v11 + 16);
        if ( qword_140C50780 && (v18 & 0x10) == 0 )
          v18 &= ~qword_140C50780;
        v19 = HIDWORD(v18);
        if ( (_DWORD)v19 != a4 )
        {
          v12 = v19 - a4;
          if ( !sub_1402297E4(v41, (_WORD *)(v11 + 16)) || (unsigned int)v19 < a4 || v12 > 0x1F || v12 + v6 >= a3 )
            goto LABEL_25;
        }
        if ( _bittest64(*(const signed __int64 **)(a2 + 8), v19) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( dword_140D06B08 )
          {
            if ( (dword_140D06B08 & 1) != 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
              {
                CurrentPrcb = KeGetCurrentPrcb();
                v38 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
                v39 = *((_QWORD *)CurrentPrcb + 4375);
                v29 = (v38 & *(_DWORD *)(v39 + 20)) == 0;
                *(_DWORD *)(v39 + 20) &= v38;
                if ( v29 )
                {
                  v24 = (__int64)CurrentPrcb;
LABEL_63:
                  sub_140418E4C(v24);
                }
              }
            }
          }
LABEL_64:
          __writecr8(v13);
          return v6;
        }
        if ( v12 )
        {
          if ( a4 >= *(_DWORD *)a2 )
            goto LABEL_25;
          if ( v12 > 1 )
          {
            if ( *(_DWORD *)a2 - a4 < v12 )
              goto LABEL_25;
            v25 = *(_QWORD *)(a2 + 8);
            v26 = (int *)(v25 + 4 * ((unsigned __int64)a4 >> 5));
            v27 = *v26;
            v28 = (int *)(v25 + 4 * ((unsigned __int64)(v12 + a4 - 1) >> 5));
            if ( v26 != v28 )
            {
              for ( i = (v27 & (-1 << a4)) == 0; i; i = *v26 == 0 )
              {
                if ( ++v26 == v28 )
                {
                  v29 = ((0xFFFFFFFF >> ~(v12 + a4 - 1)) & *v26) == 0;
                  goto LABEL_40;
                }
              }
LABEL_25:
              _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( dword_140D06B08 )
              {
                if ( (dword_140D06B08 & 1) != 0 )
                {
                  v20 = KeGetCurrentIrql();
                  if ( v20 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v20 >= 2u )
                  {
                    v21 = KeGetCurrentPrcb();
                    v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
                    v23 = *((_QWORD *)v21 + 4375);
                    v29 = (v22 & *(_DWORD *)(v23 + 20)) == 0;
                    *(_DWORD *)(v23 + 20) &= v22;
                    if ( v29 )
                    {
                      v24 = (__int64)v21;
                      goto LABEL_63;
                    }
                  }
                }
              }
              goto LABEL_64;
            }
            v29 = (v27 & (0xFFFFFFFF >> (32 - v12) << a4)) == 0;
LABEL_40:
            if ( !v29 )
              goto LABEL_25;
          }
          else if ( _bittest(*(const signed __int32 **)(a2 + 8), a4) )
          {
            goto LABEL_25;
          }
        }
        v31 = sub_14028C14C(48 * v10 - 0x220000000000LL, 0);
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v32 = KeGetCurrentIrql();
            if ( v32 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v32 >= 2u )
            {
              v33 = KeGetCurrentPrcb();
              v34 = *((_QWORD *)v33 + 4375);
              v35 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v29 = (v35 & *(_DWORD *)(v34 + 20)) == 0;
              *(_DWORD *)(v34 + 20) &= v35;
              if ( v29 )
                sub_140418E4C((__int64)v33);
            }
          }
        }
        __writecr8(v13);
        if ( !v31 )
          return v6;
        if ( v12 )
        {
          v6 += v12;
          a4 += v12;
          *a6 += v12;
          do
          {
            *a5++ = qword_140C53278;
            --v12;
          }
          while ( v12 );
        }
        ++v6;
        *a5 = v42;
        ++a4;
        ++a5;
        if ( v31 == 3 && v6 >= 0x10 )
          return v6;
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            v14 = KeGetCurrentIrql();
            if ( v14 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v14 >= 2u )
            {
              v15 = KeGetCurrentPrcb();
              v16 = *((_QWORD *)v15 + 4375);
              v17 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v29 = (v17 & *(_DWORD *)(v16 + 20)) == 0;
              *(_DWORD *)(v16 + 20) &= v17;
              if ( v29 )
                sub_140418E4C((__int64)v15);
            }
          }
        }
        __writecr8(v13);
      }
      if ( v6 == a3 )
        return v6;
      v8 = v43;
    }
  }
  return v6;
}
