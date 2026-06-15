/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x1800365B0
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x180008460 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800089F0 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180036320 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800679A2 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x18006A819 (memcpy_0.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall COnDeviceWorkItem::COnDeviceWorkItem(__int64 a1, _WORD *a2, int a3)
{
  __int64 v5; // rbx
  __int64 v6; // rax
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r15
  char *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  ATL::CStringData *v13; // rcx
  __int64 v14; // rbx
  char *v15; // rdx

  *(_QWORD *)a1 = &COnDeviceWorkItem::`vftable';
  *(_QWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
    if ( (_DWORD)v5 )
    {
      v6 = *(_QWORD *)(a1 + 8);
      v7 = *(unsigned int *)(v6 - 16);
      v8 = ((__int64)a2 - v6) >> 1;
      if ( ((1 - *(_DWORD *)(v6 - 8)) | (*(_DWORD *)(v6 - 12) - (int)v5)) < 0 )
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(a1 + 8, (unsigned int)v5);
      v9 = *(char **)(a1 + 8);
      v10 = 2LL * (int)v5;
      if ( v8 <= v7 )
      {
        v15 = &v9[2 * v8];
        if ( !v10 )
          goto LABEL_11;
        if ( v9 && v15 )
        {
          memmove_0(v9, v15, 2LL * (int)v5);
          goto LABEL_11;
        }
      }
      else
      {
        if ( !v10 )
          goto LABEL_11;
        if ( v9 )
        {
          memcpy_0(v9, a2, 2LL * (int)v5);
          goto LABEL_11;
        }
      }
      *(_DWORD *)_o__errno(v9) = 22;
      invalid_parameter_noinfo();
LABEL_11:
      if ( (int)v5 < 0 || (v11 = *(_QWORD *)(a1 + 8), (int)v5 > *(_DWORD *)(v11 - 12)) )
        ATL::AtlThrowImpl(-2147024809);
      *(_DWORD *)(v11 - 16) = v5;
      *(_WORD *)(v10 + *(_QWORD *)(a1 + 8)) = 0;
      goto LABEL_14;
    }
  }
  v13 = (ATL::CStringData *)(*(_QWORD *)(a1 + 8) - 24LL);
  v14 = *(_QWORD *)v13;
  if ( *((_DWORD *)v13 + 2) )
  {
    if ( *((int *)v13 + 4) >= 0 )
    {
      ATL::CStringData::Release(v13);
      *(_QWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14) + 24;
    }
    else
    {
      ATL::CSimpleStringT<unsigned short,0>::SetLength(a1 + 8, 0LL);
    }
  }
LABEL_14:
  *(_DWORD *)(a1 + 16) = a3;
  return a1;
}
