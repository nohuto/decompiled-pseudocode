/*
 * XREFs of ??0COnDeviceWorkItem@@QEAA@PEBGW4ONDEVICE_WORK_ITEM_TYPE@@@Z @ 0x180059C50
 * Callers:
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z @ 0x180059A50 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGU_tagpropertykey@@@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z @ 0x1800C48E8 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@K@Z.c)
 *     ?QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@@Z @ 0x1800C4BD8 (-QueueOnDeviceWorkItem@CAudioSrv@@AEAAJPEBGW4ONDEVICE_WORK_ITEM_TYPE@@W4__MIDL___MIDL_itf_mmdevi.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18001C8C0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x18005F922 (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     memmove_0 @ 0x18006A67B (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800C3178 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800C36C0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall COnDeviceWorkItem::COnDeviceWorkItem(__int64 a1, _WORD *a2, int a3)
{
  __int64 *v6; // rdi
  char *v7; // rdx
  __int64 v8; // rbx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r14
  char *v11; // rcx
  size_t v12; // r8

  *(_QWORD *)a1 = &COnDeviceWorkItem::`vftable';
  v6 = (__int64 *)(a1 + 8);
  *(_QWORD *)(a1 + 8) = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  if ( !a2 )
    goto LABEL_21;
  v8 = -1LL;
  do
    ++v8;
  while ( a2[v8] );
  if ( !(_DWORD)v8 )
  {
LABEL_21:
    ATL::CSimpleStringT<unsigned short,0>::Empty(v6);
    goto LABEL_14;
  }
  v9 = *(unsigned int *)(*v6 - 16);
  v10 = ((__int64)a2 - *v6) >> 1;
  if ( ((1 - *(_DWORD *)(*v6 - 8)) | (*(_DWORD *)(*v6 - 12) - (int)v8)) < 0 )
    ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v6, v8);
  v11 = (char *)*v6;
  v12 = 2LL * (int)v8;
  if ( v10 <= v9 )
  {
    v7 = &v11[2 * v10];
    if ( !v12 )
      goto LABEL_11;
    if ( v11 && v7 )
    {
      memmove_0(v11, v7, v12);
      goto LABEL_11;
    }
  }
  else
  {
    if ( !v12 )
      goto LABEL_11;
    if ( v11 )
    {
      memcpy_0(v11, a2, v12);
      goto LABEL_11;
    }
  }
  *(_DWORD *)_o__errno(v11, v7) = 22;
  invalid_parameter_noinfo();
LABEL_11:
  if ( (int)v8 < 0 || (int)v8 > *(_DWORD *)(*v6 - 12) )
    ATL::AtlThrowImpl(-2147024809);
  *(_DWORD *)(*v6 - 16) = v8;
  *(_WORD *)(*v6 + 2LL * (int)v8) = 0;
LABEL_14:
  *(_DWORD *)(a1 + 16) = a3;
  return a1;
}
