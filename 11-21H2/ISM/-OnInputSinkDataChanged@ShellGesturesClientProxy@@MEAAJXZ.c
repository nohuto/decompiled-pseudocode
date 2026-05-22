/*
 * XREFs of ?OnInputSinkDataChanged@ShellGesturesClientProxy@@MEAAJXZ @ 0x18014F9D0
 * Callers:
 *     ?OnConnected@ShellGesturesClientProxy@@MEAAJXZ @ 0x18014F880 (-OnConnected@ShellGesturesClientProxy@@MEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     IsGetRoutingInfoForWindowHandlePresent @ 0x18004BEB4 (IsGetRoutingInfoForWindowHandlePresent.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800B4708 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?GetInputSinkData@BamoShellGesturesClientProxy@@UEAAAEBUInputSinkData@@XZ @ 0x18014F710 (-GetInputSinkData@BamoShellGesturesClientProxy@@UEAAAEBUInputSinkData@@XZ.c)
 *     ?reset@?$shared_storage@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180150290 (-reset@-$shared_storage@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEA.c)
 */

__int64 __fastcall ShellGesturesClientProxy::OnInputSinkDataChanged(ShellGesturesClientProxy *this)
{
  char *v1; // rdi
  const struct InputSinkData *InputSinkData; // rax
  __int128 v4; // xmm2
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // xmm1
  __int128 v9; // xmm3
  __int64 v10; // xmm2_8
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v14; // [rsp+28h] [rbp-D8h]
  _BYTE v15[48]; // [rsp+38h] [rbp-C8h]
  __int128 v16; // [rsp+68h] [rbp-98h]
  __int64 v17; // [rsp+98h] [rbp-68h]
  __int64 v18; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v19; // [rsp+A8h] [rbp-58h]
  __int128 v20; // [rsp+B8h] [rbp-48h]
  __int128 v21; // [rsp+C8h] [rbp-38h]
  __int64 v22; // [rsp+D8h] [rbp-28h]
  __int128 v23; // [rsp+E0h] [rbp-20h]
  __int128 v24; // [rsp+F0h] [rbp-10h]
  __int128 v25; // [rsp+100h] [rbp+0h]
  __int64 v26; // [rsp+110h] [rbp+10h]
  __int128 v27; // [rsp+118h] [rbp+18h]
  __int128 v28; // [rsp+128h] [rbp+28h]
  __int128 v29; // [rsp+138h] [rbp+38h]
  __int64 v30; // [rsp+148h] [rbp+48h]
  __int128 v31; // [rsp+150h] [rbp+50h]
  __int128 v32; // [rsp+160h] [rbp+60h]
  __int128 v33; // [rsp+170h] [rbp+70h]
  __int64 v34; // [rsp+180h] [rbp+80h]
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v1 = (char *)this + 128;
  wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::reset(
    (char *)this + 128,
    0LL);
  InputSinkData = BamoShellGesturesClientProxy::GetInputSinkData((ShellGesturesClientProxy *)((char *)this + 8));
  v4 = *(_OWORD *)InputSinkData;
  v5 = *((_OWORD *)InputSinkData + 1);
  v6 = *((_OWORD *)InputSinkData + 2);
  v7 = *(_QWORD *)InputSinkData;
  *(_OWORD *)v15 = v4;
  *(_OWORD *)&v15[16] = v5;
  *(_OWORD *)&v15[32] = v6;
  if ( v7 )
  {
    *(_QWORD *)&v16 = 0LL;
    *((_QWORD *)&v16 + 1) = v7;
    v14 = 0LL;
    v17 = 0LL;
    if ( IsGetRoutingInfoForWindowHandlePresent() )
    {
      v8 = *(_OWORD *)&v15[8];
      LODWORD(v16) = 3;
      v9 = *(_OWORD *)&v15[24];
      v10 = *(_QWORD *)&v15[40];
    }
    else
    {
      v10 = v17;
      v8 = 0LL;
      v9 = v14;
      LODWORD(v16) = 2;
    }
    v18 = 232LL;
    v22 = v10;
    v19 = v16;
    v23 = v16;
    v27 = v16;
    v31 = v16;
    v20 = v8;
    v21 = v9;
    v24 = v8;
    v25 = v9;
    v26 = v10;
    v28 = v8;
    v29 = v9;
    v30 = v10;
    v32 = v8;
    v33 = v9;
    v34 = v10;
    v11 = NtCreateCompositionInputSink(&v18, &v13);
    if ( v11 < 0 )
      return wil::details::in1diag3::Return_NtStatus(
               retaddr,
               (void *)0xDA,
               (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor"
                    "\\shellgesturesclientproxy.cpp",
               (const char *)(unsigned int)v11);
    wil::details::shared_storage<wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::reset(
      v1,
      v13);
  }
  return 0LL;
}
