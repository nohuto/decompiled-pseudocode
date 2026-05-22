/*
 * XREFs of ?Create@CIndependentFlipFramePresentStatistics@@SAJPEAVCPresentationManager@@AEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801B1118
 * Callers:
 *     ?GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z @ 0x1801AD880 (-GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetContentForResourceId@CPresentationManager@@QEAAPEAVCPresentationSurface@@_K@Z @ 0x1801B0D28 (-GetContentForResourceId@CPresentationManager@@QEAAPEAVCPresentationSurface@@_K@Z.c)
 *     ??4?$com_ptr_t@VCIndependentFlipFramePresentStatistics@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCIndependentFlipFramePresentStatistics@@@Z @ 0x1801B1080 (--4-$com_ptr_t@VCIndependentFlipFramePresentStatistics@@Uerr_returncode_policy@wil@@@wil@@QEAAAE.c)
 *     ?QPCToHns@CPresentationManager@@QEAA?AUSystemInterruptTime@@_K@Z @ 0x1801B12D4 (-QPCToHns@CPresentationManager@@QEAA-AUSystemInterruptTime@@_K@Z.c)
 */

__int64 __fastcall CIndependentFlipFramePresentStatistics::Create(CPresentationManager *this, __int64 *a2, __int64 *a3)
{
  __int64 v3; // rax
  unsigned int v4; // ebx
  int v7; // ecx
  _QWORD *v8; // rdx
  unsigned __int64 v9; // r10
  unsigned int *v10; // rdi
  __int64 v11; // rax
  unsigned int v12; // edx
  _QWORD *v14; // rax
  _QWORD *v15; // rsi
  __int64 v16; // rsi
  struct CPresentationSurface *ContentForResourceId; // rax
  __int64 v18; // rcx
  __int64 v19; // [rsp+48h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = 0;
  v19 = 0LL;
  v7 = -2147467259;
  v8 = *(_QWORD **)v3;
  v9 = *(_QWORD *)(v3 + 8);
  while ( 1 )
  {
    if ( (unsigned __int64)v8 >= v9 )
    {
      v4 = -2147467259;
      v12 = 18;
LABEL_9:
      DoStackCaptureDirect(v7, v12);
      goto LABEL_10;
    }
    v10 = (unsigned int *)(v8 + 2);
    v11 = *v8 - *(_QWORD *)&GUID_d95b714e_88dd_40d3_8ac6_cc1f0f048571.Data1;
    if ( *v8 == *(_QWORD *)&GUID_d95b714e_88dd_40d3_8ac6_cc1f0f048571.Data1 )
      v11 = v8[1] - *(_QWORD *)GUID_d95b714e_88dd_40d3_8ac6_cc1f0f048571.Data4;
    if ( !v11 && *v10 == 56 )
      break;
    v8 = (_QWORD *)((char *)v8 + *v10 + 20);
  }
  v14 = operator new(0x40uLL);
  v15 = v14;
  if ( v14 )
  {
    memset_0(v14, 0, 0x40uLL);
    *v15 = &CIndependentFlipFramePresentStatistics::`vftable';
  }
  else
  {
    v15 = 0LL;
  }
  wil::com_ptr_t<CIndependentFlipFramePresentStatistics,wil::err_returncode_policy>::operator=(&v19, (__int64)v15);
  v16 = v19;
  if ( !v19 )
  {
    v4 = -2147024882;
    v12 = 22;
    v7 = -2147024882;
    goto LABEL_9;
  }
  *(_QWORD *)(v19 + 16) = *(_QWORD *)(v10 + 1);
  *(_QWORD *)(v16 + 24) = *(_QWORD *)(v10 + 3);
  *(_DWORD *)(v16 + 32) = v10[5];
  ContentForResourceId = CPresentationManager::GetContentForResourceId(this, *(_QWORD *)(v10 + 9));
  if ( ContentForResourceId )
    v18 = *((_QWORD *)ContentForResourceId + 6);
  else
    v18 = -1LL;
  *(_QWORD *)(v16 + 40) = v18;
  *(_QWORD *)(v16 + 48) = *(_QWORD *)CPresentationManager::QPCToHns(this, &v19, *(_QWORD *)(v10 + 11));
  *(_QWORD *)(v16 + 56) = *(_QWORD *)CPresentationManager::QPCToHns(this, &v19, *(_QWORD *)(v10 + 13));
  v19 = 0LL;
  *a3 = v16;
LABEL_10:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v19);
  return v4;
}
