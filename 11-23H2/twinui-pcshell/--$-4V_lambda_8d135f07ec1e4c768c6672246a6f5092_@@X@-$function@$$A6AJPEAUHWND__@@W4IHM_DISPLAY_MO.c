/*
 * XREFs of ??$?4V_lambda_8d135f07ec1e4c768c6672246a6f5092_@@X@?$function@$$A6AJPEAUHWND__@@W4IHM_DISPLAY_MODE@@@Z@wistd@@QEAAAEAV01@$$QEAV_lambda_8d135f07ec1e4c768c6672246a6f5092_@@@Z @ 0x1801723EC
 * Callers:
 *     ??$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@Shell@Internal@Windows@@QEAAJPEAVUndockedSearchAppExperienceManager@@P84@EAAJPEAUHWND__@@PEAUtagRECT@@W4IHM_DISPLAY_MODE@@22@ZP84@EAAJ13@Z@Z @ 0x1801722CC (--$RuntimeClassInitialize@VUndockedSearchAppExperienceManager@@@IInputHostLayoutChangesHandler@S.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<long (HWND__ *,enum IHM_DISPLAY_MODE)>::operator=<_lambda_8d135f07ec1e4c768c6672246a6f5092_,void>(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
  *(_QWORD *)(a1 + 8) = &wistd::__function::__func<_lambda_8d135f07ec1e4c768c6672246a6f5092_,long (HWND__ *,enum IHM_DISPLAY_MODE)>::`vftable';
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( a1 + 16 != a2 )
  {
    *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
    *(_QWORD *)a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 8);
  result = a1;
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 112) = a1 + 8;
  return result;
}
