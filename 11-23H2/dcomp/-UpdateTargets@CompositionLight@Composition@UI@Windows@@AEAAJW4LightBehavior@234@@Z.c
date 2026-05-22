/*
 * XREFs of ?UpdateTargets@CompositionLight@Composition@UI@Windows@@AEAAJW4LightBehavior@234@@Z @ 0x180002140
 * Callers:
 *     ?RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@@Z @ 0x180001950 (-RemoveAllVisuals@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImp.c)
 *     ?RemoveVisualByLightBehavior@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisual@234@W4LightBehavior@234@@Z @ 0x180001B20 (-RemoveVisualByLightBehavior@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisual@234@W4Ligh.c)
 *     ?AddVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@PEAVVisual@234@@Z @ 0x180001E50 (-AddVisual@CompositionLight@Composition@UI@Windows@@UEAAJPEAVVisualUnorderedCollectionImpl@234@P.c)
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
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800F6E34 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z @ 0x180109090 (-Unexpected@FailFast@WRL2@Microsoft@@SAXPEBD@Z.c)
 */

__int64 __fastcall Windows::UI::Composition::CompositionLight::UpdateTargets(__int64 a1, int a2)
{
  __int64 v4; // rdi
  __int64 v5; // r15
  unsigned int v6; // esi
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // r8d
  int v13; // r13d
  __int64 v14; // r15
  void *v15; // rdx
  __int64 v16; // rdi
  unsigned __int64 v17; // rsi
  unsigned int v18; // r14d
  unsigned int v19; // ecx
  _DWORD *v20; // rbx
  void (__fastcall ***v21)(_QWORD); // rcx
  void *v22; // rbx
  HANDLE ProcessHeap; // rax
  int v25; // r14d
  unsigned int v26; // edx
  _QWORD *v27; // rcx
  int v28; // [rsp+20h] [rbp-50h]
  void *v29; // [rsp+30h] [rbp-40h] BYREF
  void *v30; // [rsp+38h] [rbp-38h] BYREF
  void *Src; // [rsp+40h] [rbp-30h] BYREF
  char *v32; // [rsp+48h] [rbp-28h]
  int v33; // [rsp+50h] [rbp-20h]
  __int64 v34; // [rsp+54h] [rbp-1Ch]
  char v35; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  if ( *(_BYTE *)(a1 + 257) )
    return 0LL;
  v33 = 1;
  Src = &v35;
  v4 = 0LL;
  v34 = 1LL;
  v32 = &v35;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_36;
    v5 = 176LL;
  }
  else
  {
    v5 = 216LL;
  }
  v6 = *(_DWORD *)(a1 + v5 + 24);
  v7 = DynArrayImpl<0>::Grow((unsigned int)&Src, 4, v6, 0, 0LL);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x123,
      (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
      (const char *)(unsigned int)v7,
      v28);
    DynArrayImpl<0>::~DynArrayImpl<0>(&Src);
    return v8;
  }
  v9 = 0;
  if ( !v6 )
  {
    LODWORD(v10) = HIDWORD(v34);
LABEL_11:
    if ( a2 )
    {
      DirectComposition::CDevice::ResourceSetReferenceArrayProperty(
        *(DirectComposition::CDevice **)(*(_QWORD *)(a1 + 24) + 456LL),
        *(_DWORD *)(a1 + 128),
        1u,
        (const unsigned int *)Src,
        (unsigned int)v10);
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 128);
      v14 = (unsigned int)v10;
      v15 = Src;
      v16 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 456LL);
      v29 = Src;
      if ( v13 )
      {
        v17 = 4LL * (unsigned int)v14;
        if ( v17 > 0xFFFFFFFF )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x18E7,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
            (const char *)0x80070216LL,
            v28);
        v18 = v17 + 16;
        if ( (unsigned int)v17 >= 0xFFFFFFF0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x18EB,
            (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\device.cpp",
            (const char *)0x80070216LL,
            v28);
        if ( *(_QWORD *)(v16 + 192) )
        {
          DirectComposition::CDevice::FlushKernelCommands((DirectComposition::CDevice *)v16, 0);
          v15 = v29;
        }
        if ( v18 <= *(_DWORD *)(v16 + 176) )
        {
          v19 = *(_DWORD *)(v16 + 180);
          if ( v19 < v18 )
          {
            do
            {
              DirectComposition::CDevice::FlushKernelCommands((DirectComposition::CDevice *)v16, 0);
              v19 = *(_DWORD *)(v16 + 180);
            }
            while ( v19 < v18 );
            v15 = v29;
          }
          v20 = (_DWORD *)(*(unsigned int *)(v16 + 176) + *(_QWORD *)(v16 + 168) - v19);
          *(_DWORD *)(v16 + 180) = v19 - v18;
          goto LABEL_20;
        }
        v20 = operator new[](v18);
        if ( v20 )
        {
          DirectComposition::CDevice::BeginKernelCommand((DirectComposition::CDevice *)v16, 0x18u, &v30, 0);
          v27 = v30;
          v15 = v29;
          *(_DWORD *)v30 = 0;
          v27[1] = v20;
          *((_DWORD *)v27 + 4) = v18;
          *(_QWORD *)(v16 + 192) = v20;
LABEL_20:
          ++*(_DWORD *)(v16 + 184);
          *v20 = 14;
          v20[1] = v13;
          v20[2] = 0;
          v20[3] = v14;
          if ( v14 )
            memcpy_0(v20 + 4, v15, (unsigned int)v17);
          v21 = *(void (__fastcall ****)(_QWORD))(v16 + 80);
          if ( v21 )
            (**v21)(v21);
          goto LABEL_24;
        }
LABEL_36:
        Microsoft::WRL2::FailFast::Unexpected(0LL);
      }
    }
LABEL_24:
    v22 = Src;
    if ( Src != v32 )
    {
      if ( Src )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v22);
      }
    }
    return 0LL;
  }
  v10 = HIDWORD(v34);
  while ( 1 )
  {
    v11 = v10 + 1;
    v12 = *(_DWORD *)(*(_QWORD *)(v4 + *(_QWORD *)(a1 + v5)) + 128LL);
    LODWORD(v29) = v12;
    if ( (int)v10 + 1 < (unsigned int)v10 )
      break;
    if ( v11 > (unsigned int)v34 )
    {
      v30 = &v29;
      v25 = DynArrayImpl<0>::Grow((unsigned int)&Src, 4, 1, 0, (__int64)&v30);
      if ( v25 < 0 )
      {
        v26 = 192;
        goto LABEL_40;
      }
      *(_DWORD *)((char *)Src + (unsigned int)(4 * HIDWORD(v34))) = *(_DWORD *)v30;
      v10 = (unsigned int)++HIDWORD(v34);
    }
    else
    {
      *((_DWORD *)Src + v10) = v12;
      v10 = v11;
      HIDWORD(v34) = v11;
    }
    ++v9;
    v4 += 8LL;
    if ( v9 >= v6 )
      goto LABEL_11;
  }
  v25 = -2147024362;
  v26 = 181;
LABEL_40:
  DoStackCaptureDirect(v25, v26);
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x127,
    (unsigned int)"onecoreuap\\windows\\dwm\\dcomp\\winrtnested\\wrtcompositionlight.cpp",
    (const char *)(unsigned int)v25,
    v28);
  DynArrayImpl<0>::~DynArrayImpl<0>(&Src);
  return (unsigned int)v25;
}
