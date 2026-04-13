/*
 * XREFs of ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x1800CC818
 * Callers:
 *     ??5?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x1800CA508 (--5-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800E7DE0 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x1800A8A14 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x1800AF1EC (-flush@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAAEAV12@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

char __fastcall std::wistream::_Ipfx(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rbx
  struct std::_Facet_base *v7; // r14
  void (__fastcall ***v8)(_QWORD, __int64); // rax
  __int64 v9; // rcx
  unsigned __int16 *v10; // rdx
  unsigned __int16 v11; // cx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rbx
  int *v15; // rax
  _WORD **v16; // rax
  _WORD **v17; // rcx
  __int16 *v18; // rdx
  __int16 v19; // ax
  unsigned __int16 *v20; // rcx
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF

  v2 = *a1;
  v3 = *(int *)(*a1 + 4);
  if ( !*(_DWORD *)((char *)a1 + v3 + 16) )
  {
    v4 = *(__int64 **)((char *)a1 + v3 + 80);
    if ( v4 )
    {
      std::wostream::flush(v4);
      v2 = *a1;
    }
    v5 = *(int *)(v2 + 4);
    if ( (*((_BYTE *)a1 + v5 + 24) & 1) != 0 )
    {
      v6 = **(_QWORD **)((char *)a1 + v5 + 64);
      v22 = v6;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
      v7 = std::use_facet<std::ctype<wchar_t>>(&v22);
      if ( v6 )
      {
        v8 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        if ( v8 )
          (**v8)(v8, 1LL);
      }
      v9 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
      v10 = **(unsigned __int16 ***)(v9 + 56);
      if ( v10 && **(int **)(v9 + 80) > 0 )
        v11 = *v10;
      else
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
      while ( 1 )
      {
        if ( v11 == 0xFFFF )
        {
          v12 = (__int64)a1 + *(int *)(*a1 + 4);
          std::ios_base::clear((std::ios_base *)v12, *(_BYTE *)(v12 + 16) | (*(_QWORD *)(v12 + 72) != 0LL ? 1 : 5), 0);
          goto LABEL_27;
        }
        if ( !(*(unsigned __int8 (__fastcall **)(struct std::_Facet_base *, __int64, _QWORD))(*(_QWORD *)v7 + 32LL))(
                v7,
                72LL,
                v11) )
          goto LABEL_27;
        v13 = *(int *)(*a1 + 4);
        v14 = *(__int64 *)((char *)a1 + v13 + 72);
        if ( !**(_QWORD **)(v14 + 56) )
          break;
        v15 = *(int **)(v14 + 80);
        if ( *v15 <= 1 )
        {
          if ( *v15 <= 0 )
            break;
          --*v15;
          v17 = *(_WORD ***)(v14 + 56);
          v18 = (*v17)++;
          v19 = *v18;
LABEL_21:
          if ( v19 == -1 )
          {
            v11 = -1;
          }
          else
          {
            v20 = **(unsigned __int16 ***)(v14 + 56);
            if ( v20 && **(int **)(v14 + 80) > 0 )
              v11 = *v20;
            else
              v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 48LL))(v14);
          }
        }
        else
        {
          --*v15;
          v16 = *(_WORD ***)(v14 + 56);
          v11 = *++*v16;
        }
      }
      v19 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 56LL))(*(__int64 *)((char *)a1 + v13 + 72));
      goto LABEL_21;
    }
LABEL_27:
    v2 = *a1;
    if ( !*(_DWORD *)((char *)a1 + *(int *)(*a1 + 4) + 16) )
      return 1;
  }
  std::ios_base::clear(
    (std::ios_base *)((char *)a1 + *(int *)(v2 + 4)),
    *((_BYTE *)a1 + *(int *)(v2 + 4) + 16) | (*(__int64 *)((char *)a1 + *(int *)(v2 + 4) + 72) != 0 ? 2 : 6),
    0);
  return 0;
}
