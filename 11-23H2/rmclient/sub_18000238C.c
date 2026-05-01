/*
 * XREFs of sub_18000238C @ 0x18000238C
 * Callers:
 *     sub_180004E90 @ 0x180004E90 (sub_180004E90.c)
 * Callees:
 *     sub_180002540 @ 0x180002540 (sub_180002540.c)
 *     sub_180004C40 @ 0x180004C40 (sub_180004C40.c)
 *     sub_1800099BC @ 0x1800099BC (sub_1800099BC.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_18001BC8C @ 0x18001BC8C (sub_18001BC8C.c)
 */

__int64 __fastcall sub_18000238C(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edi
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 *v8; // r15
  _QWORD *v9; // rbp
  _QWORD *v10; // r14
  int v11; // eax
  __int64 v13; // rax
  unsigned int v14; // ebp
  int MatchingRestrictedErrorInfo; // ebx
  bool v16; // sf
  _QWORD v17[7]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v17[0] = 0LL;
  sub_180002540(v17);
  v6 = v17[0];
  v7 = *(_QWORD **)(v17[0] + 16LL);
  v8 = *(__int64 **)(v17[0] + 32LL);
  if ( v7 == *(_QWORD **)(v17[0] + 24LL) )
    goto LABEL_10;
  v9 = (_QWORD *)a1[1];
  v10 = (_QWORD *)*a1;
  while ( 1 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v7 + 24LL))(*v7, *v10, *v9);
    v4 = v11;
    if ( v11 == -2147417848 || v11 == -2147023174 || v11 == -1996357631 || v11 == -2147418105 || v11 == -2147418094 )
    {
      RoTransformError((unsigned int)v11, 0LL, 0LL);
      sub_18001BC8C(a3, *v7);
      goto LABEL_14;
    }
    if ( v11 < 0 )
      break;
LABEL_9:
    ++v8;
    if ( ++v7 == *(_QWORD **)(v6 + 24) )
      goto LABEL_10;
  }
  if ( !(unsigned int)IsErrorPropagationEnabled() )
  {
    RoTransformError(v4, 0LL, 0LL);
LABEL_14:
    v4 = 0;
    goto LABEL_9;
  }
  v13 = *v8;
  v18 = 0LL;
  v14 = v4;
  v17[1] = v13;
  sub_1800099BC(&v18);
  MatchingRestrictedErrorInfo = RoGetMatchingRestrictedErrorInfo(v4, &v18);
  if ( MatchingRestrictedErrorInfo >= 0 )
    MatchingRestrictedErrorInfo = RoReportFailedDelegate(*v7, v18);
  sub_1800099BC(&v18);
  v4 = 0;
  v16 = MatchingRestrictedErrorInfo < 0;
  v6 = v17[0];
  if ( v16 )
    v4 = v14;
LABEL_10:
  sub_180004C40(v6);
  return v4;
}
