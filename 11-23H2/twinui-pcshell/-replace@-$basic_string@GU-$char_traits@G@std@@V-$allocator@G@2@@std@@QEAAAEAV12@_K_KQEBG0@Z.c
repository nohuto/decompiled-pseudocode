/*
 * XREFs of ?replace@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K_KQEBG0@Z @ 0x180634ADC
 * Callers:
 *     ?ModifyUnpackagedApp@@YAXV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_N1@Z @ 0x180634138 (-ModifyUnpackagedApp@@YAXV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@_N1@Z.c)
 * Callees:
 *     memcpy_0 @ 0x1801C934B (memcpy_0.c)
 *     memmove_0 @ 0x1801C9357 (memmove_0.c)
 *     ??$_Reallocate_grow_by@V_lambda_f68dc91b63048d8e897893337fb617c1_@@_K_KPEBG_K@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAAEAV01@_KV_lambda_f68dc91b63048d8e897893337fb617c1_@@_K2PEBG2@Z @ 0x180633AA8 (--$_Reallocate_grow_by@V_lambda_f68dc91b63048d8e897893337fb617c1_@@_K_KPEBG_K@-$basic_string@GU-.c)
 */

char **__fastcall std::wstring::replace(WCHAR **a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  WCHAR *v8; // rcx
  size_t v9; // r8
  const WCHAR *v10; // rdx
  unsigned __int64 v12; // rdx
  char *v13; // r15
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r12
  WCHAR *v16; // r13
  WCHAR *v17; // r9
  __int64 v18; // r15
  int v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+88h] [rbp+20h]

  v6 = (unsigned __int64)a1[2];
  v7 = a3;
  if ( v6 < a3 )
    v7 = v6;
  if ( v7 == a5 )
  {
    v8 = (WCHAR *)a1;
    if ( (unsigned __int64)a1[3] >= 8 )
      v8 = *a1;
    v9 = 2 * a5;
    v10 = &LocaleName;
LABEL_7:
    memmove_0(v8, v10, v9);
    return (char **)a1;
  }
  v12 = v6 - v7;
  v20 = v6 - v7;
  if ( a5 < v7 )
  {
    v13 = (char *)a1;
    a1[2] = (WCHAR *)(v12 + a5);
    if ( (unsigned __int64)a1[3] >= 8 )
      v13 = (char *)*a1;
    memmove_0(v13, &LocaleName, 2 * a5);
    v10 = (const WCHAR *)&v13[2 * v7];
    v8 = (WCHAR *)&v13[2 * a5];
    v9 = 2 * v20 + 2;
    goto LABEL_7;
  }
  v14 = (unsigned __int64)a1[3];
  v15 = a5 - v7;
  if ( a5 - v7 <= v14 - v6 )
  {
    v16 = (WCHAR *)a1;
    a1[2] = (WCHAR *)(v15 + v6);
    if ( v14 >= 8 )
      v16 = *a1;
    v17 = &v16[v7];
    if ( &LocaleName + a5 <= v16 || &LocaleName > &v16[v6] )
    {
      v18 = a5;
    }
    else if ( v17 > &LocaleName )
    {
      v18 = v17 - &LocaleName;
    }
    else
    {
      v18 = 0LL;
    }
    memmove_0(&v17[v15], &v16[v7], 2 * v12 + 2);
    memmove_0(v16, &LocaleName, 2 * v18);
    memcpy_0(&v16[v18], &LocaleName + v18 + v15, 2 * (a5 - v18));
    return (char **)a1;
  }
  return std::wstring::_Reallocate_grow_by<_lambda_f68dc91b63048d8e897893337fb617c1_,unsigned __int64,unsigned __int64,unsigned short const *,unsigned __int64>(
           (char **)a1,
           a5 - v7,
           v14,
           a4,
           v7,
           v19,
           a5);
}
