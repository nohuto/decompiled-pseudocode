/*
 * XREFs of ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180069190
 * Callers:
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x1800585AC (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x18005879C (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 * Callees:
 *     ??$use_facet@V?$ctype@G@std@@@std@@YAAEBV?$ctype@G@0@AEBVlocale@0@@Z @ 0x180054C50 (--$use_facet@V-$ctype@G@std@@@std@@YAAEBV-$ctype@G@0@AEBVlocale@0@@Z.c)
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x18006BAFC (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall std::basic_istream<unsigned short>::_Ipfx(__int64 *a1)
{
  __int64 *v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rbx
  struct std::_Facet_base *v6; // r14
  void (__fastcall ***v7)(_QWORD, __int64); // rax
  __int64 v8; // rcx
  unsigned __int16 *v9; // rdx
  unsigned __int16 v10; // cx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rbx
  int *v14; // rax
  _WORD **v15; // rax
  _WORD **v16; // rcx
  __int16 *v17; // rdx
  __int16 v18; // ax
  unsigned __int16 *v19; // rcx
  __int64 v21; // r9
  int v22; // edx
  __int64 v24; // [rsp+50h] [rbp+18h] BYREF

  v1 = a1;
  v2 = *a1;
  v3 = *(int *)(*a1 + 4);
  if ( !*(_DWORD *)((char *)v1 + v3 + 16) )
  {
    if ( *(__int64 *)((char *)v1 + v3 + 80) )
    {
      std::basic_ostream<unsigned short>::flush();
      v2 = *v1;
    }
    v4 = *(int *)(v2 + 4);
    if ( (*((_BYTE *)v1 + v4 + 24) & 1) != 0 )
    {
      v5 = **(_QWORD **)((char *)v1 + v4 + 64);
      v24 = v5;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v6 = std::use_facet<std::ctype<unsigned short>>(&v24);
      if ( v5 )
      {
        v7 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        if ( v7 )
          (**v7)(v7, 1LL);
      }
      try
      {
        v8 = *(__int64 *)((char *)v1 + *(int *)(*v1 + 4) + 72);
        v9 = **(unsigned __int16 ***)(v8 + 56);
        if ( v9 && **(int **)(v8 + 80) > 0 )
          v10 = *v9;
        else
          v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
        while ( 1 )
        {
          if ( v10 == 0xFFFF )
          {
            v11 = (__int64)v1 + *(int *)(*v1 + 4);
            std::ios_base::clear(
              (std::ios_base *)v11,
              *(_DWORD *)(v11 + 16) | (*(_QWORD *)(v11 + 72) != 0LL ? 1 : 5),
              0);
            goto LABEL_35;
          }
          if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v6 + 32LL))(
                  v6,
                  72LL,
                  v10) )
            goto LABEL_35;
          v12 = *(int *)(*v1 + 4);
          v13 = *(__int64 *)((char *)v1 + v12 + 72);
          if ( !**(_QWORD **)(v13 + 56) )
            break;
          v14 = *(int **)(v13 + 80);
          if ( *v14 <= 1 )
          {
            if ( *v14 <= 0 )
              break;
            --*v14;
            v16 = *(_WORD ***)(v13 + 56);
            v17 = (*v16)++;
            v18 = *v17;
LABEL_21:
            if ( v18 == -1 )
            {
              v10 = -1;
            }
            else
            {
              v19 = **(unsigned __int16 ***)(v13 + 56);
              if ( v19 && **(int **)(v13 + 80) > 0 )
                v10 = *v19;
              else
                v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 48LL))(v13);
            }
          }
          else
          {
            --*v14;
            v15 = *(_WORD ***)(v13 + 56);
            v10 = *++*v15;
          }
        }
        v18 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v13 + 56LL))(*(__int64 *)((char *)v1 + v12 + 72));
        goto LABEL_21;
      }
      catch ( ... )
      {
        v21 = (__int64)a1 + *(int *)(*a1 + 4);
        v22 = *(_DWORD *)(v21 + 16) | 4;
        if ( !*(_QWORD *)(v21 + 72) )
          v22 = *(_DWORD *)(v21 + 16) | 4;
        std::ios_base::clear((std::ios_base *)((char *)a1 + *(int *)(*a1 + 4)), v22, 1);
        v1 = a1;
        goto LABEL_27;
      }
LABEL_35:
      ;
    }
LABEL_27:
    v2 = *v1;
    if ( !*(_DWORD *)((char *)v1 + *(int *)(*v1 + 4) + 16) )
      return 1;
  }
  std::ios_base::clear(
    (std::ios_base *)((char *)v1 + *(int *)(v2 + 4)),
    *(_DWORD *)((char *)v1 + *(int *)(v2 + 4) + 16) | (*(__int64 *)((char *)v1 + *(int *)(v2 + 4) + 72) != 0 ? 2 : 6),
    0);
  return 0;
}
