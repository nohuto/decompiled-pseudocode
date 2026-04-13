/*
 * XREFs of ??$?6_WU?$char_traits@_W@std@@@std@@YAAEAV?$basic_ostream@_WU?$char_traits@_W@std@@@0@AEAV10@_W@Z @ 0x1800D1EF8
 * Callers:
 *     ?RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z @ 0x1800D447C (-RemoveTelemetryQueryParams@EdgeTileUtils@@YAJPEA_WPEAPEA_W@Z.c)
 * Callees:
 *     ?uncaught_exception@std@@YA_NXZ @ 0x18000523C (-uncaught_exception@std@@YA_NXZ.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x1800694D8 (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18006A0C4 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x1800A8CB4 (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 *__fastcall std::operator<<<wchar_t,std::char_traits<wchar_t>>(__int64 *a1)
{
  __int64 *v1; // rsi
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r15
  __int64 v7; // rcx
  _QWORD *v8; // r8
  unsigned __int16 v9; // r9
  int *v10; // rax
  _WORD **v11; // rcx
  unsigned __int16 *v12; // rdx
  __int64 v13; // rcx
  int *v14; // rax
  _WORD **v15; // rcx
  _WORD *v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // r8
  unsigned __int16 v19; // r9
  int *v20; // rax
  _WORD **v21; // rcx
  unsigned __int16 *v22; // rdx
  char *v23; // rcx
  int v24; // eax
  char v25; // dl
  __int64 v26; // rcx
  char *v28; // r9
  int v29; // edx
  __int64 v30; // [rsp+20h] [rbp-38h] BYREF
  char v31; // [rsp+28h] [rbp-30h]
  int v33; // [rsp+68h] [rbp+10h]

  v1 = a1;
  v2 = 0;
  v33 = 0;
  std::wostream::sentry::sentry((__int64)&v30, a1);
  if ( v31 )
  {
    v3 = *v1;
    v4 = *(int *)(*v1 + 4);
    v5 = *(__int64 *)((char *)v1 + v4 + 40);
    v6 = 0LL;
    if ( v5 > 1 )
      v6 = v5 - 1;
    try
    {
      if ( (*(_DWORD *)((_BYTE *)v1 + v4 + 24) & 0x1C0) == 0x40 )
      {
LABEL_15:
        v13 = *(__int64 *)((char *)v1 + *(int *)(v3 + 4) + 72);
        if ( !**(_QWORD **)(v13 + 64) || (v14 = *(int **)(v13 + 88), *v14 <= 0) )
        {
          if ( (*(unsigned __int16 (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 24LL))(v13, 38LL) == 0xFFFF )
            v2 = 4;
          goto LABEL_20;
        }
        --*v14;
        v15 = *(_WORD ***)(v13 + 64);
        v16 = (*v15)++;
        *v16 = 38;
        while ( !v2 && v6 > 0 )
        {
          v17 = *(int *)(*v1 + 4);
          v18 = *(_QWORD **)((char *)v1 + v17 + 72);
          v19 = *(_WORD *)((char *)v1 + v17 + 88);
          if ( *(_QWORD *)v18[8] && (v20 = (int *)v18[11], *v20 > 0) )
          {
            --*v20;
            v21 = (_WORD **)v18[8];
            v22 = (*v21)++;
            *v22 = v19;
          }
          else
          {
            v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v18 + 24LL))(*(__int64 *)((char *)v1 + v17 + 72), v19);
          }
          --v6;
          v2 = 4;
          if ( v19 != 0xFFFF )
            v2 = 0;
LABEL_20:
          v33 = v2;
        }
      }
      else
      {
        while ( !v2 )
        {
          if ( v6 <= 0 )
          {
            v3 = *v1;
            goto LABEL_15;
          }
          v7 = *(int *)(*v1 + 4);
          v8 = *(_QWORD **)((char *)v1 + v7 + 72);
          v9 = *(_WORD *)((char *)v1 + v7 + 88);
          if ( *(_QWORD *)v8[8] && (v10 = (int *)v8[11], *v10 > 0) )
          {
            --*v10;
            v11 = (_WORD **)v8[8];
            v12 = (*v11)++;
            *v12 = v9;
          }
          else
          {
            v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*v8 + 24LL))(*(__int64 *)((char *)v1 + v7 + 72), v9);
          }
          --v6;
          v2 = 4;
          if ( v9 != 0xFFFF )
            v2 = 0;
          v33 = v2;
        }
      }
    }
    catch ( ... )
    {
      v28 = (char *)a1 + *(int *)(*a1 + 4);
      v29 = *((_DWORD *)v28 + 4) | 4;
      if ( !*((_QWORD *)v28 + 9) )
        LOBYTE(v29) = v28[16] | 4;
      std::ios_base::clear((std::ios_base *)((char *)a1 + *(int *)(*a1 + 4)), v29, 1);
      v1 = a1;
      v2 = v33;
    }
  }
  *(__int64 *)((char *)v1 + *(int *)(*v1 + 4) + 40) = 0LL;
  v23 = (char *)v1 + *(int *)(*v1 + 4);
  if ( v2 )
  {
    v24 = v2 | *((_DWORD *)v23 + 4);
    v25 = v24 | 4;
    if ( *((_QWORD *)v23 + 9) )
      v25 = v24;
    std::ios_base::clear((std::ios_base *)v23, v25, 0);
  }
  if ( !std::uncaught_exception() )
    std::basic_ostream<unsigned short>::_Osfx(v30);
  v26 = *(_QWORD *)(*(int *)(*(_QWORD *)v30 + 4LL) + v30 + 72);
  if ( v26 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
  return v1;
}
