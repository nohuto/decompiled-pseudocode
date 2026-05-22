/*
 * XREFs of ?UpdateSharedLights@Visual@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002434
 * Callers:
 *     ?RemoveVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z @ 0x180001A90 (-RemoveVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl.c)
 *     ?AddVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@345@PEAVVisual@345@@Z @ 0x180001DB0 (-AddVisual@SharedLight@Private@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@34.c)
 *     ?RemoveSharedLight@Visual@Composition@UI@Windows@@QEAAJPEAVSharedLight@Private@234@W4LightBehavior@234@@Z @ 0x18010B788 (-RemoveSharedLight@Visual@Composition@UI@Windows@@QEAAJPEAVSharedLight@Private@234@W4LightBehavi.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000B7B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z @ 0x180030EB4 (-FlushKernelCommands@CDevice@DirectComposition@@AEAAX_N@Z.c)
 *     ?BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z @ 0x180032D60 (-BeginKernelCommand@CDevice@DirectComposition@@AEAAXIPEAPEAX_N@Z.c)
 *     ?ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z @ 0x18003401C (-ResourceSetReferenceArrayProperty@CDevice@DirectComposition@@QEAAXIIPEBI_K@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18005F634 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800691D8 (--_U@YAPEAX_K@Z.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x180073550 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     ?GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV?$DynArray@PEAVCompositionLight@Composition@UI@Windows@@$0A@@@XZ @ 0x1800A1B68 (-GetSparse_ExcludedLightsWeak@Visual@Composition@UI@Windows@@AEBAPEAV-$DynArray@PEAVCompositionL.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::Visual::UpdateSharedLights(__int64 a1, int a2)
{
  unsigned int v2; // r11d
  unsigned int v3; // r10d
  unsigned int *p_Src; // rdi
  __int64 v6; // rsi
  __int64 i; // rsi
  __int64 Sparse_ExcludedLightsWeak; // rsi
  unsigned int v9; // r13d
  unsigned int v10; // r15d
  __int64 v11; // r12
  __int64 v12; // rcx
  unsigned int v13; // edx
  unsigned int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // r13
  __int64 v17; // rsi
  unsigned __int64 v18; // r15
  unsigned int v19; // r14d
  unsigned int v20; // ecx
  _DWORD *v21; // rbx
  void (__fastcall ***v22)(_QWORD); // rcx
  HANDLE ProcessHeap; // rax
  int v25; // ebx
  unsigned int v26; // edx
  _QWORD *v27; // rax
  int v28; // [rsp+20h] [rbp-60h]
  int v30; // [rsp+30h] [rbp-50h]
  void *v31; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+40h] [rbp-40h] BYREF
  unsigned int *v33; // [rsp+48h] [rbp-38h] BYREF
  unsigned int *v34; // [rsp+50h] [rbp-30h]
  int v35; // [rsp+58h] [rbp-28h]
  __int64 v36; // [rsp+5Ch] [rbp-24h]
  char Src; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v2 = 1;
  v3 = 0;
  v35 = 1;
  v36 = 1LL;
  p_Src = (unsigned int *)&Src;
  v33 = (unsigned int *)&Src;
  v34 = (unsigned int *)&Src;
  if ( a2 == 1 )
  {
    Sparse_ExcludedLightsWeak = Windows::UI::Composition::Visual::GetSparse_ExcludedLightsWeak();
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 112);
    if ( (*(_DWORD *)(v6 + 4) & 0x80000) == 0 )
      goto LABEL_15;
    for ( i = v6 + 12; (*(_DWORD *)i & 0x7F000000) != 0xD000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
      ;
    Sparse_ExcludedLightsWeak = *(_QWORD *)(i + 4);
  }
  if ( !Sparse_ExcludedLightsWeak || (v9 = *(_DWORD *)(Sparse_ExcludedLightsWeak + 24), v10 = 0, !v9) )
  {
LABEL_15:
    if ( a2 )
    {
      DirectComposition::CDevice::ResourceSetReferenceArrayProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
        *(_DWORD *)(a1 + 128),
        0x2Fu,
        p_Src,
        v3);
    }
    else
    {
      v16 = v3;
      v17 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 456LL);
      v30 = *(_DWORD *)(a1 + 128);
      if ( !v30 )
      {
LABEL_29:
        if ( p_Src != v34 )
        {
          if ( p_Src )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, p_Src);
          }
        }
        return 0LL;
      }
      v18 = 4LL * v3;
      if ( v18 > 0xFFFFFFFF )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x18E7,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
          (const char *)0x80070216LL,
          v28);
      v19 = v18 + 16;
      if ( (unsigned int)v18 >= 0xFFFFFFF0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x18EB,
          (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
          (const char *)0x80070216LL,
          v28);
      if ( *(_QWORD *)(v17 + 192) )
        DirectComposition::CDevice::FlushKernelCommands((DirectComposition::CDevice *)v17, 0);
      if ( v19 > *(_DWORD *)(v17 + 176) )
      {
        v21 = operator new[](v19);
        if ( !v21 )
          Microsoft::WRL2::FailFast::Unexpected(0LL);
        DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v17, 0x18u, &v31, 0);
        v27 = v31;
        *(_DWORD *)v31 = 0;
        v27[1] = v21;
        *((_DWORD *)v27 + 4) = v19;
        *(_QWORD *)(v17 + 192) = v21;
      }
      else
      {
        while ( 1 )
        {
          v20 = *(_DWORD *)(v17 + 180);
          if ( v20 >= v19 )
            break;
          DirectComposition::CDevice::FlushKernelCommands((DirectComposition::CDevice *)v17, 0);
        }
        v21 = (_DWORD *)(*(unsigned int *)(v17 + 176) + *(_QWORD *)(v17 + 168) - v20);
        *(_DWORD *)(v17 + 180) = v20 - v19;
      }
      ++*(_DWORD *)(v17 + 184);
      *v21 = 14;
      v21[1] = v30;
      v21[2] = 46;
      v21[3] = v16;
      if ( v16 )
        memcpy_0(v21 + 4, p_Src, (unsigned int)v18);
      v22 = *(void (__fastcall ****)(_QWORD))(v17 + 80);
      if ( v22 )
        (**v22)(v22);
    }
    p_Src = v33;
    goto LABEL_29;
  }
  v11 = 0LL;
  while ( 1 )
  {
    v12 = *(_QWORD *)(v11 + *(_QWORD *)Sparse_ExcludedLightsWeak);
    if ( !*(_BYTE *)(v12 + 257) )
      goto LABEL_14;
    v13 = *(_DWORD *)(v12 + 128);
    v14 = v3 + 1;
    v32 = v13;
    if ( v3 + 1 < v3 )
      break;
    if ( v14 > v2 )
    {
      v31 = &v32;
      v25 = DynArrayImpl<0>::Grow((unsigned int)&v33, 4, 1, 0, (__int64)&v31);
      if ( v25 < 0 )
      {
        v26 = 192;
        goto LABEL_40;
      }
      *(unsigned int *)((char *)v33 + (unsigned int)(4 * HIDWORD(v36))) = *(_DWORD *)v31;
      v3 = ++HIDWORD(v36);
    }
    else
    {
      v15 = v3++;
      p_Src[v15] = v13;
      HIDWORD(v36) = v14;
    }
    v2 = v36;
    p_Src = v33;
LABEL_14:
    ++v10;
    v11 += 8LL;
    if ( v10 >= v9 )
      goto LABEL_15;
  }
  v25 = -2147024362;
  v26 = 181;
LABEL_40:
  DoStackCaptureDirect(v25, v26);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x95B,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtvisual.cpp",
    (const char *)(unsigned int)v25,
    v28);
  DynArrayImpl<0>::~DynArrayImpl<0>(&v33);
  return (unsigned int)v25;
}
