/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x1800AF814
 * Callers:
 *     ?NormalizedString@Internal@TargetedContent@Services@Windows@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W00@Z @ 0x1800A5E7C (-NormalizedString@Internal@TargetedContent@Services@Windows@@YA-AV-$basic_string@_WU-$char_trait.c)
 *     ?GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@XZ @ 0x1800D6A60 (-GetToastContentXML@ToastHelpers@NotificationManager@CreativeFramework@@QEAA-AV-$basic_string@_W.c)
 * Callees:
 *     memcpy_0 @ 0x180022314 (memcpy_0.c)
 *     memmove_0 @ 0x180022320 (memmove_0.c)
 *     ?_Xlen@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAXXZ @ 0x1800484B8 (-_Xlen@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAXXZ.c)
 *     ?_Xran@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAXXZ @ 0x1800484D0 (-_Xran@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAXXZ.c)
 *     ?_Grow@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_N_K_N@Z @ 0x1800A3D30 (-_Grow@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_N_K_N@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x1800AF4AC (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00.c)
 */

char *__fastcall std::wstring::replace(
        char *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        char *a4,
        unsigned __int64 a5)
{
  unsigned __int64 v6; // rdi
  char *v8; // rbx
  char *v9; // rax
  char *v10; // rax
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  char *v14; // rcx
  char *v15; // rdx
  char *v16; // rcx
  unsigned __int64 v17; // r12
  char *v18; // rcx
  char *v19; // rdx
  char *v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rcx
  char *v23; // rax

  v6 = a3;
  v8 = a1;
  if ( !a4 )
    goto LABEL_13;
  v9 = *((_QWORD *)a1 + 3) < 8uLL ? a1 : *(char **)a1;
  if ( a4 < v9 )
    goto LABEL_13;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    a1 = *(char **)a1;
  if ( &a1[2 * *((_QWORD *)v8 + 2)] > a4 )
  {
    if ( *((_QWORD *)v8 + 3) < 8uLL )
      v10 = v8;
    else
      v10 = *(char **)v8;
    return (char *)std::wstring::replace(v8, a2, a3, v8, (a4 - v10) >> 1, a5);
  }
  else
  {
LABEL_13:
    v12 = *((_QWORD *)v8 + 2);
    if ( v12 < a2 )
      std::wstring::_Xran();
    if ( v12 - a2 < a3 )
      v6 = v12 - a2;
    if ( ~a5 <= v12 - v6 )
      std::wstring::_Xlen();
    v13 = v12 - a2 - v6;
    if ( a5 < v6 )
    {
      v14 = *((_QWORD *)v8 + 3) < 8uLL ? v8 : *(char **)v8;
      v15 = &v14[2 * a2 + 2 * v6];
      v16 = *((_QWORD *)v8 + 3) < 8uLL ? v8 : *(char **)v8;
      if ( v13 )
        memmove_0(&v16[2 * a2 + 2 * a5], v15, 2 * v13);
    }
    if ( a5 || v6 )
    {
      v17 = *((_QWORD *)v8 + 2) + a5 - v6;
      if ( std::wstring::_Grow((__int64)v8, v17, 0) )
      {
        if ( v6 < a5 )
        {
          v18 = *((_QWORD *)v8 + 3) < 8uLL ? v8 : *(char **)v8;
          v19 = &v18[2 * a2 + 2 * v6];
          v20 = *((_QWORD *)v8 + 3) < 8uLL ? v8 : *(char **)v8;
          if ( v13 )
            memmove_0(&v20[2 * a2 + 2 * a5], v19, 2 * v13);
        }
        v21 = *((_QWORD *)v8 + 3);
        if ( v21 < 8 )
          v22 = v8;
        else
          v22 = *(_QWORD **)v8;
        if ( a5 )
        {
          memcpy_0((char *)v22 + 2 * a2, a4, 2 * a5);
          v21 = *((_QWORD *)v8 + 3);
        }
        if ( v21 < 8 )
          v23 = v8;
        else
          v23 = *(char **)v8;
        *((_QWORD *)v8 + 2) = v17;
        *(_WORD *)&v23[2 * v17] = 0;
      }
    }
    return v8;
  }
}
