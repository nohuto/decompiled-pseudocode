/*
 * XREFs of HUBUCX_CreateEndpointsInUCX @ 0x1C0024D34
 * Callers:
 *     HUBDSM_CreatingNewEndpoints @ 0x1C00217A0 (HUBDSM_CreatingNewEndpoints.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     HUBUCX_GetEndpointPriority @ 0x1C0024BD0 (HUBUCX_GetEndpointPriority.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CreateEndpointsInUCX(__int64 a1)
{
  int v1; // edi
  __int64 v3; // r13
  _QWORD *v4; // r14
  _QWORD *i; // rax
  __int64 v6; // rbp
  __int64 v7; // r15
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // r8
  void (__fastcall *v12)(_QWORD, _QWORD, _QWORD, __int64); // r12
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdx
  _QWORD *j; // rax
  __int64 k; // rbp
  __int64 v18; // r8
  _QWORD *v19; // rsi
  __int64 v21; // [rsp+28h] [rbp-50h]
  int v22; // [rsp+80h] [rbp+8h] BYREF
  __int64 v23; // [rsp+88h] [rbp+10h]
  __int64 v24; // [rsp+90h] [rbp+18h]

  v22 = 0;
  v1 = 0;
  v3 = *(_QWORD *)a1;
  if ( !*(_DWORD *)(a1 + 96) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        4u,
        5u,
        0x26u,
        (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids);
    return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
  }
  v4 = (_QWORD *)(*(_QWORD *)(a1 + 48) + 16LL);
  v24 = *(_QWORD *)(a1 + 104);
  v23 = *(_QWORD *)(a1 + 136);
  for ( i = (_QWORD *)*v4; ; i = *(_QWORD **)(v6 + 8) )
  {
    v6 = (__int64)(i - 1);
    if ( v4 == i )
      goto LABEL_28;
    v7 = 0LL;
    if ( *(_DWORD *)(v6 + 24) )
      break;
LABEL_24:
    ;
  }
  while ( 1 )
  {
    v8 = v6 + 72 * v7 + 40;
    if ( *(_DWORD *)(v8 + 8) == 1 )
      break;
LABEL_23:
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 24) )
      goto LABEL_24;
  }
  v9 = *(_QWORD *)(v8 + 48);
  v10 = *(unsigned int *)(v8 + 40);
  v11 = *(_QWORD *)(v8 + 32);
  *(_DWORD *)(v8 + 8) = 2;
  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64, __int64, __int64))(v3 + 448))(
         *(_QWORD *)(v3 + 248),
         *(_QWORD *)(a1 + 24),
         v11,
         v10,
         v9,
         v6 + 72 * v7 + 40);
  if ( v1 >= 0 )
  {
    v12 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(v3 + 592);
    if ( !v12 )
      goto LABEL_20;
    v13 = *(unsigned int *)(v8 + 64);
    if ( (_DWORD)v13 )
      goto LABEL_18;
    if ( (int)HUBUCX_GetEndpointPriority(a1, v6, v6 + 72 * v7 + 40, &v22) >= 0 )
    {
      switch ( v22 )
      {
        case 1:
          v13 = 1LL;
          goto LABEL_18;
        case 2:
          v13 = 2LL;
          goto LABEL_18;
        case 3:
          v13 = 3LL;
LABEL_18:
          v12(*(_QWORD *)(v3 + 248), *(_QWORD *)(a1 + 24), *(_QWORD *)v8, v13);
          break;
      }
    }
    v1 = 0;
LABEL_20:
    v14 = *(_QWORD *)v8;
    if ( (*(_DWORD *)(v8 + 12) & 1) != 0 )
    {
      v15 = v23;
      *(_DWORD *)(v8 + 8) = 6;
      *(_QWORD *)(v15 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 144))++) = v14;
    }
    else
    {
      *(_QWORD *)(v24 + 8LL * (unsigned int)(*(_DWORD *)(a1 + 112))++) = v14;
    }
    goto LABEL_23;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v21) = v1;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x27u,
      (__int64)&WPP_a5663512bb0f384af60f2cebe8e2cf44_Traceguids,
      v21);
  }
  *(_DWORD *)(v8 + 8) = 1;
LABEL_28:
  for ( j = (_QWORD *)*v4; ; j = (_QWORD *)v19[1] )
  {
    v19 = j - 1;
    if ( v4 == j )
      break;
    for ( k = 0LL; (unsigned int)k < *((_DWORD *)v19 + 6); k = (unsigned int)(k + 1) )
    {
      if ( LODWORD(v19[9 * k + 6]) == 2 )
      {
        if ( v1 >= 0 )
        {
          LODWORD(v19[9 * k + 6]) = 3;
        }
        else
        {
          v18 = v19[9 * k + 5];
          LODWORD(v19[9 * k + 6]) = 1;
          (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(v3 + 456))(*(_QWORD *)(v3 + 248), *(_QWORD *)(a1 + 24), v18);
        }
      }
    }
  }
  if ( v1 < 0 )
  {
    *(_DWORD *)(a1 + 112) = 0;
    *(_DWORD *)(a1 + 144) = 0;
    *(_DWORD *)(a1 + 1564) = -1073737728;
    *(_DWORD *)(a1 + 1560) = -1073741670;
  }
  return ((v1 >> 31) & 0xFFFFFFF4) + 4077;
}
