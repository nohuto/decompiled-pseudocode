/*
 * XREFs of ?SetSpatialStreamGrantCountInternal@@YAJPEAUIStreamInstanceInternal@@I_J@Z @ 0x140068CE4
 * Callers:
 *     ?SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z @ 0x140068C10 (-SetSpatialStreamGrantCount@CSubmixImpl@@UEAAJ_KI_J@Z.c)
 *     ?SetSpatialStreamGrantCount@CStreamInstance@@UEAAJI_J@Z @ 0x140077BF0 (-SetSpatialStreamGrantCount@CStreamInstance@@UEAAJI_J@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEAVCProcessNode@@XZ @ 0x140004F18 (-GetHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAAEAPEA.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SetSpatialStreamGrantCountInternal(struct IStreamInstanceInternal *a1, unsigned int a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rbx
  int v8; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+48h] [rbp+20h] BYREF

  v5 = (*(__int64 (__fastcall **)(struct IStreamInstanceInternal *))(*(_QWORD *)a1 + 24LL))(a1);
  v6 = *(__int64 **)(*(_QWORD *)ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::GetHead((_QWORD *)(v5 + 16))
                   + 32LL);
  if ( v6 )
  {
    v7 = *v6;
    v14 = v7;
    if ( v7 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      v13 = 0LL;
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v7)(
             v7,
             &GUID_3d7ca171_206f_4cec_968b_149749ff740b,
             &v13);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1005LL;
LABEL_7:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
          (const char *)(unsigned int)v8);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v13);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v14);
        return v9;
      }
      v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v13 + 32LL))(v13, a2, a3);
      v9 = v8;
      if ( v8 < 0 )
      {
        v10 = 1006LL;
        goto LABEL_7;
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v13);
    }
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v14);
  }
  return 0LL;
}
