/*
 * XREFs of ?OnDefaultDeviceChangedForPolicy@AudioDeviceMgr@@UEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEBG@Z @ 0x180001E10
 * Callers:
 *     <none>
 * Callees:
 *     memcpy_s @ 0x1800106EC (memcpy_s.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18001CE68 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180036700 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x18004237C (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     _invalid_parameter_noinfo @ 0x1800679A2 (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x1800759B8 (memmove_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800CE7C4 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x1800DF24C (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800E1328 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioDeviceMgr::OnDefaultDeviceChangedForPolicy(__int64 a1, int a2, int a3, _WORD *a4)
{
  unsigned int v8; // r13d
  HANDLE ProcessHeap; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned __int16 v13; // dx
  int *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rbp
  _QWORD *i; // r8
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  _QWORD *v20; // rax
  int v21; // edx
  _QWORD *v22; // rax
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 **v25; // rax
  __int64 v27; // rsi
  unsigned __int64 v28; // r13
  char *v29; // rcx
  rsize_t v30; // rdx
  HINSTANCE StringResourceInstance; // rax
  unsigned int v32; // [rsp+20h] [rbp-38h]

  v8 = 0;
  ProcessHeap = GetProcessHeap();
  v10 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v11 = v10;
  if ( !v10 )
    return (unsigned int)-2147024882;
  *v10 = &WorkItemBase::`vftable';
  v12 = (*(__int64 (__fastcall **)(__int64 *))(ATL::g_strmgr + 24))(&ATL::g_strmgr) + 24;
  v11[1] = v12;
  if ( !a4 )
    goto LABEL_3;
  if ( (unsigned __int64)a4 < 0x10000 )
  {
    StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a4, v13);
    if ( StringResourceInstance )
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        v11 + 1,
        StringResourceInstance,
        (unsigned __int16)a4);
  }
  else
  {
    v27 = -1LL;
    do
      ++v27;
    while ( a4[v27] );
    if ( !(_DWORD)v27 )
    {
LABEL_3:
      v14 = (int *)(v12 - 24);
      v15 = *(_QWORD *)(v12 - 24);
      if ( *(_DWORD *)(v12 - 24 + 8) )
      {
        if ( v14[4] >= 0 )
        {
          ATL::CStringData::Release((ATL::CStringData *)v14);
          v11[1] = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15) + 24;
        }
        else
        {
          ATL::CSimpleStringT<unsigned short,0>::SetLength(v11 + 1, 0LL);
        }
      }
      goto LABEL_4;
    }
    v32 = *(_DWORD *)(v12 - 16);
    v28 = ((__int64)a4 - v12) >> 1;
    if ( (int)((*(_DWORD *)(v12 - 12) - v27) | (1 - *(_DWORD *)(v12 - 8))) < 0 )
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v11 + 1, (unsigned int)v27);
    v29 = (char *)v11[1];
    v30 = 2LL * (int)v27;
    if ( v28 <= v32 )
    {
      if ( v30 )
      {
        if ( v29 && &v29[2 * v28] )
        {
          memmove_0(v29, &v29[2 * v28], 2LL * (int)v27);
        }
        else
        {
          *(_DWORD *)_o__errno() = 22;
          invalid_parameter_noinfo();
        }
      }
    }
    else
    {
      memcpy_s(v29, v30, a4, 2LL * (int)v27);
    }
    ATL::CSimpleStringT<unsigned short,0>::SetLength(v11 + 1, (unsigned int)v27);
    v8 = 0;
  }
LABEL_4:
  *v11 = &DefaultDeviceChangedWorkItem::`vftable';
  *((_DWORD *)v11 + 4) = a3;
  *((_DWORD *)v11 + 5) = a2;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 160));
  v16 = *(_QWORD *)(a1 + 120);
  i = v11;
  if ( !*(_QWORD *)(a1 + 144) )
  {
    v18 = *(unsigned int *)(a1 + 152);
    if ( *(_DWORD *)(a1 + 152) )
    {
      if ( 0xFFFFFFFFFFFFFFFFuLL / v18 < 0x18 )
        goto LABEL_36;
      v19 = 24 * v18;
    }
    else
    {
      v19 = 0LL;
    }
    v20 = malloc(v19 + 8);
    if ( v20 )
    {
      *v20 = *(_QWORD *)(a1 + 136);
      *(_QWORD *)(a1 + 136) = v20;
      v21 = *(_DWORD *)(a1 + 152) - 1;
      v22 = &v20[2 * v21 + 1 + (unsigned int)v21];
      for ( i = v11; v21 >= 0; --v21 )
      {
        *v22 = *(_QWORD *)(a1 + 144);
        *(_QWORD *)(a1 + 144) = v22;
        v22 -= 3;
      }
      goto LABEL_11;
    }
LABEL_36:
    ATL::AtlThrowImpl(-2147024882);
  }
LABEL_11:
  v23 = *(__int64 **)(a1 + 144);
  v24 = *v23;
  v23[2] = (__int64)i;
  *(_QWORD *)(a1 + 144) = v24;
  v23[1] = v16;
  *v23 = 0LL;
  ++*(_QWORD *)(a1 + 128);
  v25 = *(__int64 ***)(a1 + 120);
  if ( v25 )
    *v25 = v23;
  else
    *(_QWORD *)(a1 + 112) = v23;
  *(_QWORD *)(a1 + 120) = v23;
  SetEvent(*(HANDLE *)(a1 + 200));
  LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 160));
  return v8;
}
