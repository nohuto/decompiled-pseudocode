/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x1800AF4AC
 * Callers:
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x1800AF814 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z.c)
 * Callees:
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 *     memmove_0 @ 0x180022320 (memmove_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x1800484D0 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x1800A3D30 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 */

_QWORD *__fastcall std::wstring::replace(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _QWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  _QWORD *v7; // r15
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r13
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rbp
  unsigned __int64 v18; // rcx
  _QWORD *v19; // rdx
  char *v20; // r9
  _QWORD *v21; // rdx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  char *v24; // rdx
  _QWORD *v25; // rax
  _QWORD *v26; // rdx
  char *v27; // rdx
  _QWORD *v28; // rcx
  char *v29; // rcx
  size_t v30; // r8
  _QWORD *v31; // rdx
  char *v32; // r9
  _QWORD *v33; // rdx
  bool v34; // cf
  _QWORD *v35; // rax
  _QWORD *v36; // rax
  unsigned __int64 v37; // r15
  _QWORD *v38; // rax
  _QWORD *v39; // rdx
  _QWORD *v40; // rax
  char *v41; // rdx
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  _QWORD *v44; // rdx
  _QWORD *v45; // rdx
  _QWORD *v46; // rax
  _QWORD *v47; // rax
  unsigned __int64 v49; // [rsp+50h] [rbp+8h]

  v7 = a4;
  v8 = a1[2];
  v9 = a3;
  if ( v8 < a2 || (v11 = a4[2], v12 = a5, v11 < a5) )
    std::wstring::_Xran();
  v13 = a6;
  v14 = v8 - a2;
  if ( v8 - a2 < a3 )
    v9 = v8 - a2;
  v15 = v11 - a5;
  if ( v15 < a6 )
    v13 = v15;
  v16 = v8 - v9;
  if ( ~v13 <= v8 - v9 )
    std::wstring::_Xlen();
  v17 = v14 - v9;
  v49 = v16 + v13;
  if ( v8 < v16 + v13 )
    std::wstring::_Grow((__int64)a1, v16 + v13, 0);
  v18 = a1[3];
  if ( a1 != v7 )
  {
    if ( v18 < 8 )
      v19 = a1;
    else
      v19 = (_QWORD *)*a1;
    v20 = (char *)v19 + 2 * a2 + 2 * v9;
    if ( v18 < 8 )
      v21 = a1;
    else
      v21 = (_QWORD *)*a1;
    if ( v17 )
    {
      memmove_0((char *)v21 + 2 * a2 + 2 * v13, v20, 2 * v17);
      v18 = a1[3];
    }
    if ( v7[3] >= 8uLL )
      v7 = (_QWORD *)*v7;
    if ( v18 < 8 )
      v22 = a1;
    else
      v22 = (_QWORD *)*a1;
    if ( v13 )
      memcpy_0((char *)v22 + 2 * a2, (char *)v7 + 2 * a5, 2 * v13);
    goto LABEL_99;
  }
  if ( v13 > v9 )
  {
    if ( a5 > a2 )
    {
      v37 = a2 + v9;
      if ( a2 + v9 > a5 )
      {
        if ( v18 < 8 )
          v40 = a1;
        else
          v40 = (_QWORD *)*a1;
        v41 = (char *)v40 + 2 * a5;
        if ( v18 < 8 )
          v42 = a1;
        else
          v42 = (_QWORD *)*a1;
        if ( v9 )
        {
          memmove_0((char *)v42 + 2 * a2, v41, 2 * v9);
          v18 = a1[3];
        }
        if ( v18 < 8 )
          v43 = a1;
        else
          v43 = (_QWORD *)*a1;
        if ( v18 < 8 )
          v44 = a1;
        else
          v44 = (_QWORD *)*a1;
        if ( v17 )
        {
          memmove_0((char *)v44 + 2 * a2 + 2 * v13, (char *)v43 + 2 * v37, 2 * v17);
          v18 = a1[3];
        }
        if ( v18 < 8 )
          v45 = a1;
        else
          v45 = (_QWORD *)*a1;
        v27 = (char *)v45 + 2 * a5 + 2 * v13;
        if ( v18 < 8 )
          v46 = a1;
        else
          v46 = (_QWORD *)*a1;
        v13 -= v9;
        if ( !v13 )
          goto LABEL_99;
        v29 = (char *)v46 + 2 * v37;
LABEL_97:
        v30 = 2 * v13;
        goto LABEL_98;
      }
      if ( v18 < 8 )
        v38 = a1;
      else
        v38 = (_QWORD *)*a1;
      if ( v18 < 8 )
        v39 = a1;
      else
        v39 = (_QWORD *)*a1;
      if ( v17 )
      {
        memmove_0((char *)v39 + 2 * a2 + 2 * v13, (char *)v38 + 2 * v37, 2 * v17);
        v18 = a1[3];
      }
      if ( v18 < 8 )
        v35 = a1;
      else
        v35 = (_QWORD *)*a1;
      v12 = v13 + a5 - v9;
      v34 = v18 < 8;
    }
    else
    {
      if ( v18 < 8 )
        v31 = a1;
      else
        v31 = (_QWORD *)*a1;
      v32 = (char *)v31 + 2 * a2 + 2 * v9;
      if ( v18 < 8 )
        v33 = a1;
      else
        v33 = (_QWORD *)*a1;
      if ( v17 )
      {
        memmove_0((char *)v33 + 2 * a2 + 2 * v13, v32, 2 * v17);
        v18 = a1[3];
      }
      v34 = v18 < 8;
      if ( v18 < 8 )
        v35 = a1;
      else
        v35 = (_QWORD *)*a1;
    }
    v27 = (char *)v35 + 2 * v12;
    if ( v34 )
      v36 = a1;
    else
      v36 = (_QWORD *)*a1;
    if ( !v13 )
      goto LABEL_99;
    v29 = (char *)v36 + 2 * a2;
    goto LABEL_97;
  }
  if ( v18 < 8 )
    v23 = a1;
  else
    v23 = (_QWORD *)*a1;
  v24 = (char *)v23 + 2 * a5;
  if ( v18 < 8 )
    v25 = a1;
  else
    v25 = (_QWORD *)*a1;
  if ( v13 )
  {
    memmove_0((char *)v25 + 2 * a2, v24, 2 * v13);
    v18 = a1[3];
  }
  if ( v18 < 8 )
    v26 = a1;
  else
    v26 = (_QWORD *)*a1;
  v27 = (char *)v26 + 2 * a2 + 2 * v9;
  if ( v18 < 8 )
    v28 = a1;
  else
    v28 = (_QWORD *)*a1;
  if ( v17 )
  {
    v29 = (char *)v28 + 2 * a2 + 2 * v13;
    v30 = 2 * v17;
LABEL_98:
    memmove_0(v29, v27, v30);
  }
LABEL_99:
  if ( a1[3] < 8uLL )
    v47 = a1;
  else
    v47 = (_QWORD *)*a1;
  a1[2] = v49;
  *((_WORD *)v47 + v49) = 0;
  return a1;
}
