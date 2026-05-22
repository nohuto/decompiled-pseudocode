/*
 * XREFs of ?Create@CCompositionFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801B0C54
 * Callers:
 *     ?GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z @ 0x1801AD880 (-GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Initialize@CCompositionFramePresentStatistics@@IEAAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@@Z @ 0x1801B0E04 (-Initialize@CCompositionFramePresentStatistics@@IEAAJPEAVCPresentationManager@@AEAV-$unique_ptr@.c)
 */

__int64 __fastcall CCompositionFramePresentStatistics::Create(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  int v8; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edx
  int v11; // ecx
  _QWORD *v13; // [rsp+48h] [rbp+20h] BYREF

  v6 = operator new(0x40uLL);
  v7 = v6;
  if ( !v6 )
  {
    v13 = 0LL;
    v9 = -2147024882;
    v11 = -2147024882;
    v10 = 18;
    goto LABEL_6;
  }
  memset_0(v6, 0, 0x40uLL);
  v13 = v7;
  *v7 = &CCompositionFramePresentStatistics::`vftable';
  v7[6] = 0LL;
  v7[7] = 0LL;
  ((void (__fastcall *)(_QWORD *))*(&CCompositionFramePresentStatistics::`vftable' + 1))(v7);
  v8 = CCompositionFramePresentStatistics::Initialize(v7, a1, a2);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 21;
    v11 = v8;
LABEL_6:
    DoStackCaptureDirect(v11, v10);
    goto LABEL_7;
  }
  v13 = 0LL;
  *a3 = v7;
LABEL_7:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)&v13);
  return v9;
}
