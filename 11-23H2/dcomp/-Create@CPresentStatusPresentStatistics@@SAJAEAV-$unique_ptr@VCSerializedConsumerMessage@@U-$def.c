/*
 * XREFs of ?Create@CPresentStatusPresentStatistics@@SAJAEAV?$unique_ptr@VCSerializedConsumerMessage@@U?$default_delete@VCSerializedConsumerMessage@@@std@@@std@@PEAPEAV1@@Z @ 0x1801AD3A4
 * Callers:
 *     ?GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z @ 0x1801AD880 (-GetNextPresentStatistics@CPresentationManager@@UEAAJPEAPEAUIPresentStatistics@@@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180043FCC (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180098554 (--1-$com_ptr_t@UID3D10Multithread@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$com_ptr_t@VCPresentStatusPresentStatistics@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PEAVCPresentStatusPresentStatistics@@@Z @ 0x1801AD07C (--4-$com_ptr_t@VCPresentStatusPresentStatistics@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@PE.c)
 */

__int64 __fastcall CPresentStatusPresentStatistics::Create(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  int v5; // ecx
  _QWORD *v6; // r8
  unsigned __int64 v7; // r10
  unsigned int *v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // edx
  char *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned int v15; // edx
  __int64 v16; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1;
  v3 = 0;
  v16 = 0LL;
  v5 = -2147467259;
  v6 = *(_QWORD **)v2;
  v7 = *(_QWORD *)(v2 + 8);
  while ( 1 )
  {
    if ( (unsigned __int64)v6 >= v7 )
    {
      v3 = -2147467259;
      v10 = 19;
LABEL_9:
      DoStackCaptureDirect(v5, v10);
      goto LABEL_10;
    }
    v8 = (unsigned int *)(v6 + 2);
    v9 = *v6 - *(_QWORD *)&GUID_f62b137d_7b81_414b_b835_ad0cd16dee32.Data1;
    if ( *v6 == *(_QWORD *)&GUID_f62b137d_7b81_414b_b835_ad0cd16dee32.Data1 )
      v9 = v6[1] - *(_QWORD *)GUID_f62b137d_7b81_414b_b835_ad0cd16dee32.Data4;
    if ( !v9 && *v8 == 24 )
      break;
    v6 = (_QWORD *)((char *)v6 + *v8 + 20);
  }
  v12 = (char *)operator new(0x28uLL);
  if ( v12 )
  {
    *(_QWORD *)(v12 + 12) = 0LL;
    *(_QWORD *)(v12 + 20) = 0LL;
    *(_QWORD *)(v12 + 28) = 0LL;
    *((_DWORD *)v12 + 9) = 0;
    *((_DWORD *)v12 + 2) = 0;
    *(_QWORD *)v12 = &CPresentStatusPresentStatistics::`vftable';
  }
  else
  {
    v12 = 0LL;
  }
  wil::com_ptr_t<CPresentStatusPresentStatistics,wil::err_returncode_policy>::operator=(&v16, (__int64)v12);
  v13 = v16;
  if ( !v16 )
  {
    v3 = -2147024882;
    v10 = 23;
    v5 = -2147024882;
    goto LABEL_9;
  }
  *(_QWORD *)(v16 + 16) = *(_QWORD *)(v8 + 1);
  *(_QWORD *)(v13 + 24) = *(_QWORD *)(v8 + 3);
  v14 = v8[5];
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      if ( v15 == 2 )
        *(_DWORD *)(v13 + 32) = 2;
    }
    else
    {
      *(_DWORD *)(v13 + 32) = 1;
    }
  }
  else
  {
    *(_DWORD *)(v13 + 32) = 0;
  }
  v16 = 0LL;
  *a2 = v13;
LABEL_10:
  wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>(&v16);
  return v3;
}
