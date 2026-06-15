/*
 * XREFs of AudioDGGetVpoFromVpoContext @ 0x140066D50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002A38 (--1-$com_ptr_t@UIAudioVirtualProtectedOutput@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x14005258C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?FindKey@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEBAHAEBK@Z @ 0x140066674 (-FindKey@-$CSimpleMap@KPEAVCVpoContext@@V-$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@Q.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDGGetVpoFromVpoContext(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v7; // rcx
  int Key; // eax
  __int64 v9; // rdi
  unsigned int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rbx
  __int64 v16; // rcx
  __int64 v17; // [rsp+30h] [rbp-10h] BYREF
  __int64 v18; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  int v20; // [rsp+68h] [rbp+28h] BYREF

  v20 = a2;
  v17 = 0LL;
  v18 = 0LL;
  EnterCriticalSection(&CVpoContext::s_csMapVpoContext);
  Key = ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::FindKey(
          v7,
          &v20);
  if ( Key == -1 )
  {
    v9 = 0LL;
  }
  else
  {
    if ( Key < 0 || Key >= (int)qword_1400CF818 )
    {
      ATL::_AtlRaiseException(0xC000008C);
      JUMPOUT(0x140066F7ALL);
    }
    v9 = *(_QWORD *)(qword_1400CF810 + 8LL * Key);
  }
  LeaveCriticalSection(&CVpoContext::s_csMapVpoContext);
  if ( !v9 )
  {
    v10 = -2147023728;
    v11 = 2147943568LL;
    v12 = 96LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\vpocontext.cpp",
      (const char *)v11);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v18);
    wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v17);
    return v10;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(v9 + 80) + 16LL) + 24LL))(
          *(_QWORD *)(v9 + 80) + 16LL,
          a4,
          &v18);
  v10 = v13;
  if ( v13 < 0 )
  {
    v12 = 99LL;
LABEL_15:
    v11 = (unsigned int)v13;
    goto LABEL_16;
  }
  v14 = *(_QWORD *)(v9 + 72);
  if ( v14 )
  {
    v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v14 + 240LL))(
            v14,
            a3,
            a4,
            v18,
            &v17);
    v10 = v13;
    if ( v13 < 0 )
    {
      v12 = 104LL;
      goto LABEL_15;
    }
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v18 + 24LL))(v18, 0LL, &v17);
    v10 = v13;
    if ( v13 < 0 )
    {
      v12 = 108LL;
      goto LABEL_15;
    }
  }
  v16 = v17;
  v17 = 0LL;
  *a5 = v16;
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v18);
  wil::com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>::~com_ptr_t<IAudioVirtualProtectedOutput,wil::err_returncode_policy>(&v17);
  return 0LL;
}
