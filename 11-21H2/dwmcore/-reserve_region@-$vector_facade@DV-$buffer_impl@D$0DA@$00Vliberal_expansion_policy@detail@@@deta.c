/*
 * XREFs of ?reserve_region@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAD_K0@Z @ 0x1800F11DC
 * Callers:
 *     ?insert@?$vector_facade@DV?$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@D@2@V?$basic_iterator@$$CBD@2@_KAEBD@Z @ 0x1800F1110 (-insert@-$vector_facade@DV-$buffer_impl@D$0DA@$00Vliberal_expansion_policy@detail@@@detail@@@det.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x18008FCE4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800C8E70 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAD@std@@V?$checked_array_iterator@PEAD@stdext@@@std@@YA?AV?$checked_array_iterator@PEAD@stdext@@V?$move_iterator@PEAD@0@0V12@@Z @ 0x1802AC128 (--$move@V-$move_iterator@PEAD@std@@V-$checked_array_iterator@PEAD@stdext@@@std@@YA-AV-$checked_a.c)
 *     ??$move_backward@V?$move_iterator@PEAD@std@@V?$checked_array_iterator@PEAD@stdext@@@std@@YA?AV?$checked_array_iterator@PEAD@stdext@@V?$move_iterator@PEAD@0@0V12@@Z @ 0x1802AC1D0 (--$move_backward@V-$move_iterator@PEAD@std@@V-$checked_array_iterator@PEAD@stdext@@@std@@YA-AV-$.c)
 */

char *__fastcall detail::vector_facade<char,detail::buffer_impl<char,48,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2,
        unsigned __int64 a3)
{
  _BYTE *v3; // r14
  __int64 v5; // rdx
  _QWORD *v7; // r15
  char *v8; // r9
  __int64 v9; // rdx
  unsigned __int64 v10; // r8
  _BYTE *v11; // rax
  char *v12; // rbx
  _BYTE *v14; // r14
  unsigned __int64 v15; // r8
  SIZE_T v16; // rdi
  LPVOID v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  LPVOID v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  SIZE_T v23; // rax
  __int64 v24; // rbx
  unsigned __int64 v25; // r10
  unsigned __int64 v26; // r11
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v30; // [rsp+50h] [rbp-10h]

  v3 = (_BYTE *)a1[1];
  v5 = a1[2];
  v7 = a1;
  if ( v5 - (__int64)v3 < a3 )
  {
    v14 = &v3[-*a1];
    v15 = (unsigned __int64)&v14[a3];
    if ( v15 < (unsigned __int64)v14 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v16 = detail::liberal_expansion_policy::expand((detail::liberal_expansion_policy *)a1, v5 - *a1, v15);
    v17 = operator new(v16);
    v18 = v7[1];
    v19 = (char *)*v7;
    *(_QWORD *)&v27 = v17;
    v20 = v17;
    *((_QWORD *)&v27 + 1) = v14;
    v28 = 0LL;
    v29 = v27;
    v30 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::move<std::move_iterator<char *>,stdext::checked_array_iterator<char *>>)(
      &v27,
      v19,
      v18,
      &v29);
    v21 = (char *)*v7;
    v22 = *v7 == (_QWORD)(v7 + 3);
    *v7 = v20;
    if ( v22 )
      v21 = 0LL;
    DefaultHeap::Free(v21);
    v3 = &v14[*v7];
    v23 = v16 + *v7;
    v7[1] = v3;
    v7[2] = v23;
  }
  v8 = (char *)*v7;
  v9 = (__int64)&v3[-*v7];
  *((_QWORD *)&v27 + 1) = a3;
  v10 = v9 - a2;
  *(_QWORD *)&v27 = &v8[v9];
  if ( a3 && (!&v8[v9] || (a3 & 0x8000000000000000uLL) != 0LL) )
  {
LABEL_26:
    _o__invalid_parameter_noinfo_noreturn(a1);
    __debugbreak();
LABEL_27:
    v30 = v9;
    v12 = &v8[a2];
    v27 = v29;
    v28 = v9;
    ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<char *>,stdext::checked_array_iterator<char *>>)(
      &v29,
      &v8[a2],
      &v8[v9 - a3],
      &v27);
    goto LABEL_10;
  }
  v28 = a3;
  a1 = (_QWORD *)a3;
  if ( a3 >= v10 )
    a1 = (_QWORD *)(v9 - a2);
  v29 = v27;
  v30 = a3;
  v11 = (_BYTE *)(v3 - (_BYTE *)a1);
  if ( v3 != (_BYTE *)(v3 - (_BYTE *)a1) )
  {
    v24 = v29;
    v25 = a3;
    v26 = v30;
    do
    {
      --v3;
      if ( !v24 )
        goto LABEL_26;
      if ( !v25 )
        goto LABEL_26;
      v25 = v26 - 1;
      v26 = v25;
      if ( v25 >= *((_QWORD *)&v29 + 1) )
        goto LABEL_26;
      LOBYTE(a1) = *v3;
      *(_BYTE *)(v25 + v24) = *v3;
    }
    while ( v3 != v11 );
  }
  if ( v10 > a3 )
  {
    *(_QWORD *)&v29 = v8;
    *((_QWORD *)&v29 + 1) = v9;
    if ( !v9 || v8 && v9 >= 0 )
      goto LABEL_27;
    goto LABEL_26;
  }
  v12 = &v8[a2];
LABEL_10:
  v7[1] += a3;
  return v12;
}
