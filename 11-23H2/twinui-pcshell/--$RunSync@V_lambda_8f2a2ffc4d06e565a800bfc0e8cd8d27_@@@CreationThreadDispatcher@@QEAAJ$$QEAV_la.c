/*
 * XREFs of ??$RunSync@V_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@CreationThreadDispatcher@@QEAAJ$$QEAV_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_@@@Z @ 0x18048B14C
 * Callers:
 *     ?Run@?$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@UEAAXXZ @ 0x18048B670 (-Run@-$CTaskWrapper@V_lambda_28273f6668f79f5db2d6a9fae521721a_@@@ComTaskPool@Internal@Windows@@U.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIAsyncCallbackDispatcher@@@WRL@Microsoft@@@Details@12@@Z @ 0x180169DF4 (--$As@UIAsyncCallbackDispatcher@@@AgileRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIAsyncCal.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??0?$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@QEAA@$$QEAV_lambda_70db04ee97ce611edc9e35899f670330_@@@Z @ 0x18048B294 (--0-$CAsyncCallbackWithLambda@V_lambda_70db04ee97ce611edc9e35899f670330_@@@@QEAA@$$QEAV_lambda_7.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CreationThreadDispatcher::RunSync<_lambda_8f2a2ffc4d06e565a800bfc0e8cd8d27_>(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  std::_Ref_count_base *v5; // rdi
  void *v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]
  std::_Ref_count_base *v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *v16; // [rsp+50h] [rbp+8h] BYREF
  __int64 v17; // [rsp+60h] [rbp+18h] BYREF

  v16 = 0LL;
  v3 = Microsoft::WRL::AgileRef::As<IAsyncCallbackDispatcher>((Microsoft::WRL::AgileRef *)(a1 + 48), &v16);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v12 = *(_DWORD *)a2;
    v13 = *(_QWORD *)(a2 + 8);
    v5 = *(std::_Ref_count_base **)(a2 + 16);
    v14 = v5;
    *(_QWORD *)(a2 + 8) = 0LL;
    *(_QWORD *)(a2 + 16) = 0LL;
    v6 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v6 )
    {
      v7 = CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>::CAsyncCallbackWithLambda<_lambda_70db04ee97ce611edc9e35899f670330_>(
             v6,
             &v12);
      v5 = v14;
    }
    else
    {
      v7 = 0LL;
    }
    v17 = v7;
    if ( v5 )
      std::_Ref_count_base::_Decref(v5);
    if ( v7 )
    {
      v10 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v16 + 24LL))(v16, v7);
      v4 = v10;
      if ( v10 >= 0 )
      {
LABEL_13:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v17);
        goto LABEL_14;
      }
      v8 = (unsigned int)v10;
      v9 = 81LL;
    }
    else
    {
      v4 = -2147024882;
      v8 = 2147942414LL;
      v9 = 80LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
      (const char *)v8);
    goto LABEL_13;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x49,
    (int)"onecoreuap\\internal\\shell\\inc\\creationthreaddispatcher.h",
    (const char *)(unsigned int)v3);
LABEL_14:
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
  return v4;
}
