/*
 * XREFs of sub_18000246C @ 0x18000246C
 * Callers:
 *     sub_180004F38 @ 0x180004F38 (sub_180004F38.c)
 * Callees:
 *     sub_180002540 @ 0x180002540 (sub_180002540.c)
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_1800099BC @ 0x1800099BC (sub_1800099BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001BE48 @ 0x18001BE48 (sub_18001BE48.c)
 */

__int64 __fastcall sub_18000246C(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  _QWORD *v5; // rbx
  _QWORD *v6; // rsi
  __int64 v7; // r15
  _QWORD *v8; // rbp
  _QWORD *v9; // r14
  int v10; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebp
  int MatchingRestrictedErrorInfo; // ebx
  bool v15; // sf
  __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  _QWORD *v17; // [rsp+78h] [rbp+20h] BYREF

  v16 = a3;
  v4 = 0;
  v17 = 0LL;
  sub_180002540(&v17);
  v5 = v17;
  v6 = (_QWORD *)v17[2];
  v7 = v17[4];
  if ( v6 == (_QWORD *)v17[3] )
    goto LABEL_10;
  v8 = (_QWORD *)a1[1];
  v9 = (_QWORD *)*a1;
  while ( 1 )
  {
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v6 + 24LL))(*v6, *v9, *v8);
    v4 = v10;
    if ( v10 == -2147417848 || v10 == -2147023174 || v10 == -1996357631 || v10 == -2147418105 || v10 == -2147418094 )
    {
      RoTransformError((unsigned int)v10, 0LL, 0LL);
      sub_18001BE48(v12, *v6);
      goto LABEL_14;
    }
    if ( v10 < 0 )
      break;
LABEL_9:
    v7 += 8LL;
    if ( ++v6 == (_QWORD *)v5[3] )
      goto LABEL_10;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v4, 0LL, 0LL);
LABEL_14:
    v4 = 0;
    goto LABEL_9;
  }
  v16 = 0LL;
  v13 = v4;
  sub_1800099BC(&v16);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v4, &v16);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v6, v16);
  sub_1800099BC(&v16);
  v4 = 0;
  v15 = MatchingRestrictedErrorInfo < 0;
  v5 = v17;
  if ( v15 )
    v4 = v13;
LABEL_10:
  sub_180004C40(v5);
  return v4;
}
