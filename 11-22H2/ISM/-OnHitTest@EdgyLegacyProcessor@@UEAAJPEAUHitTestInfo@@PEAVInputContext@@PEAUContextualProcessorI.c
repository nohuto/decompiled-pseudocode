/*
 * XREFs of ?OnHitTest@EdgyLegacyProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801D5DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002F9C (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x18010F3A0 (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 *     ?EnsureEdgeMetricsForDisplay@EdgyLegacyProcessor@@IEAAXPEBUHitTestInfo@@@Z @ 0x1801D5C50 (-EnsureEdgeMetricsForDisplay@EdgyLegacyProcessor@@IEAAXPEBUHitTestInfo@@@Z.c)
 *     ?QualifyEdgyHitTestInputReport@EdgyLegacyProcessor@@IEAA_NPEAUHitTestInfo@@PEAUEdgyPointerInfo@@@Z @ 0x1801D60B8 (-QualifyEdgyHitTestInputReport@EdgyLegacyProcessor@@IEAA_NPEAUHitTestInfo@@PEAUEdgyPointerInfo@@.c)
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1801D8A50 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801D9944 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ?OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z @ 0x1801DA16C (-OnHitTest@EdgyImpl@@QEAA_NAEBUEdgyPointerInfo@@AEBUD2D_VECTOR_2F@@@Z.c)
 *     ?Reset@EdgyImpl@@QEAAXXZ @ 0x1801DA2C4 (-Reset@EdgyImpl@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall EdgyLegacyProcessor::OnHitTest(
        EdgyLegacyProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v8; // edi
  __int64 *v9; // r14
  const struct HitTestInfo *v10; // rdx
  D2D_VECTOR_2F *v11; // rcx
  void *v12; // r13
  unsigned int v13; // eax
  HANDLE CurrentProcess; // rbx
  HANDLE v15; // rax
  char *v16; // rbx
  __int64 v17; // rcx
  __int64 (__fastcall ***v18)(_QWORD, _QWORD, _QWORD); // rdi
  __int64 (__fastcall *v19)(_QWORD, GUID *, __int64 *); // rbx
  __m256i v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-A0h]
  HANDLE TargetHandle; // [rsp+68h] [rbp-98h] BYREF
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  __int128 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  __int128 v27; // [rsp+A0h] [rbp-60h]
  __int128 v28; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v29; // [rsp+C0h] [rbp-40h]
  __int128 v30; // [rsp+D0h] [rbp-30h]
  __int64 v31; // [rsp+E0h] [rbp-20h]
  _BYTE v32[64]; // [rsp+F0h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v8 = 0;
  *(_DWORD *)a4 = 0;
  v21.m256i_i32[0] = -1;
  *(_OWORD *)((char *)v21.m256i_i64 + 4) = 0uLL;
  v21.m256i_i64[3] = 0LL;
  v9 = (__int64 *)((char *)a4 + 8);
  if ( !*((_QWORD *)a4 + 1)
    && EdgyLegacyProcessor::QualifyEdgyHitTestInputReport(this, a2, (struct EdgyPointerInfo *)&v21) )
  {
    EdgyLegacyProcessor::EnsureEdgeMetricsForDisplay(v11, v10);
    if ( EdgyImpl::OnHitTest(
           (EdgyLegacyProcessor *)((char *)this + 80),
           (const struct EdgyPointerInfo *)&v21,
           (const struct D2D_VECTOR_2F *)this + 8) )
    {
      *(__m256i *)((char *)this + 24) = v21;
      v12 = *(void **)(*((_QWORD *)a3 + 22) + 8LL);
      v28 = 0LL;
      v29 = 0LL;
      v30 = 0LL;
      v31 = 0LL;
      memset_0(v32, 0, sizeof(v32));
      if ( v12 )
      {
        v13 = ToCompositionInputType(*(_DWORD *)a2);
        if ( (int)NtQueryCompositionInputQueueAndTransform(v12, v13, &v28, v32) >= 0 && (unsigned int)(v28 - 3) <= 1 )
        {
          v27 = v29;
          *(_OWORD *)v21.m256i_i8 = v30;
          v22 = v31;
          CurrentProcess = GetCurrentProcess();
          v15 = GetCurrentProcess();
          if ( DuplicateHandle(v15, v12, CurrentProcess, &TargetHandle, 0, 0, 2u) )
          {
            v16 = (char *)this + 72;
            v17 = *((_QWORD *)this + 9);
            if ( v17 )
            {
              v24 = v27;
              v25 = *(_OWORD *)v21.m256i_i8;
              v26 = v22;
              EdgyProcessorTarget::UpdateInputTarget(v17, &v24, TargetHandle, (char *)this + 24);
            }
            else
            {
              Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease((__int64 *)this + 9);
              v24 = v27;
              v25 = *(_OWORD *)v21.m256i_i8;
              v26 = v22;
              v8 = EdgyProcessorTarget::Create(this, (char *)this + 24, &v24, TargetHandle, (char *)this + 72);
              if ( v8 < 0 )
                goto LABEL_15;
            }
            v18 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD))v16;
            v19 = ***(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))v16;
            Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v9);
            v8 = v19(v18, &GUID_00000000_0000_0000_c000_000000000046, v9);
            if ( v8 >= 0 )
              *(_DWORD *)a4 = 1;
          }
        }
      }
    }
    else
    {
      Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v9);
      *(_DWORD *)a4 = 0;
    }
  }
LABEL_15:
  if ( !*v9 )
    EdgyImpl::Reset((EdgyLegacyProcessor *)((char *)this + 80));
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF8,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgylegacyprocessor.cpp",
    (const char *)(unsigned int)v8);
  return (unsigned int)v8;
}
