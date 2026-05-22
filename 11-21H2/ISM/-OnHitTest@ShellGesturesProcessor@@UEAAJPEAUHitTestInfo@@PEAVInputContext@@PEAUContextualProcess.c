/*
 * XREFs of ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x18000A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002474 (-InternalRelease@-$ComPtr@UIInputPriv@Internal@Spatial@Input@UI@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C7A4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetIdForNamespace@InputSite@@QEBA?AV?$optional@_K@std@@W4InputSiteIdNamespace@@@Z @ 0x18004DA74 (-GetIdForNamespace@InputSite@@QEBA-AV-$optional@_K@std@@W4InputSiteIdNamespace@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18007BBB0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InternalRelease@?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180080384 (-InternalRelease@-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA?AV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@XZ @ 0x180150378 (--$GetAttachedObject@UIShellGesturesClientProxy@@VShellGesturesClientProxy@@@InputSite@@QEAA-AV-.c)
 *     ??$MakeAndInitialize@UContext@ShellGesturesProcessor@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x180150420 (--$MakeAndInitialize@UContext@ShellGesturesProcessor@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJP.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180150AEC (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??4?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVShellGesturesClientProxy@@@Z @ 0x180150B50 (--4-$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@QEAAAEAV012@PEAVShellGesturesClientProxy@.c)
 *     ?ShouldSelectClient@ShellGesturesProcessor@@AEAA_NAEBV?$ComPtr@VShellGesturesClientProxy@@@WRL@Microsoft@@W4InputType@@@Z @ 0x180150F80 (-ShouldSelectClient@ShellGesturesProcessor@@AEAA_NAEBV-$ComPtr@VShellGesturesClientProxy@@@WRL@M.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellGesturesProcessor::OnHitTest(
        ShellGesturesProcessor *this,
        struct HitTestInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v7; // edi
  int v8; // r14d
  int v9; // eax
  bool v10; // si
  char v11; // bl
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  unsigned __int64 v16; // r8
  __int64 v17; // rax
  ShellGesturesProcessor *v18; // rbx
  __int64 v19; // r11
  __int64 v20; // rcx
  __int64 IdForNamespace; // rax
  char v22; // r8
  unsigned int v23; // ebx
  __int64 v24; // r8
  char ShouldSelectClient; // al
  char v26; // al
  __int64 v27; // r14
  __int64 v28; // rcx
  _QWORD *v29; // r13
  bool v30; // cl
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  _QWORD *v33; // r13
  __int64 v34; // [rsp+20h] [rbp-30h]
  __int64 v35; // [rsp+20h] [rbp-30h]
  __int64 v36; // [rsp+28h] [rbp-28h]
  _QWORD *v37; // [rsp+30h] [rbp-20h] BYREF
  __int64 v38; // [rsp+38h] [rbp-18h]
  char v39[16]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  __int64 pvParam; // [rsp+98h] [rbp+48h] BYREF
  _QWORD *v43; // [rsp+A8h] [rbp+58h] BYREF

  v7 = 0;
  v8 = 0;
  LODWORD(pvParam) = 0;
  *(_DWORD *)a4 = 0;
  v9 = *(_DWORD *)a2;
  v10 = (*(_DWORD *)a2 & 8) != 0 && (v9 & 0x80u) == 0;
  v11 = 1;
  if ( (v9 & 0x1000000) != 0 )
  {
    v13 = (__int64 *)((char *)a4 + 8);
    if ( *((_QWORD *)a4 + 1) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x36,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\process"
                      "or\\shellgesturesprocessor.cpp",
        (const char *)a4);
  }
  else
  {
    if ( !v10 || (*((_BYTE *)a2 + 32) & 4) == 0 )
      return 0LL;
    v13 = (__int64 *)((char *)a4 + 8);
    if ( !*((_QWORD *)a4 + 1) )
    {
      LODWORD(pvParam) = 0;
      if ( !SystemParametersInfoW(0x2030u, 0, &pvParam, 0) || !(_DWORD)pvParam )
        v11 = 0;
      v13 = (__int64 *)((char *)a4 + 8);
    }
  }
  v14 = *v13;
  v34 = *v13;
  if ( *v13 )
  {
    if ( !*(_BYTE *)(v14 + 16) )
      goto LABEL_55;
    if ( *(_QWORD *)(v14 + 224) )
      goto LABEL_55;
    v37 = (_QWORD *)(v14 + 232);
    if ( !*(_QWORD *)(v14 + 232) )
      goto LABEL_55;
    v31 = 0LL;
    v43 = 0LL;
    v32 = *(_QWORD *)(*((_QWORD *)a3 + 22) + 104LL);
    v33 = *(_QWORD **)(v32 - 24);
    v38 = *(_QWORD *)(v32 - 16);
    if ( v33 != (_QWORD *)v38 )
    {
      while ( 1 )
      {
        InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(*v33, &pvParam);
        if ( pvParam )
        {
          if ( (unsigned __int8)ShellGesturesProcessor::ShouldSelectClient(this, &pvParam, *(unsigned int *)a2) )
            break;
        }
        Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
        if ( ++v33 == (_QWORD *)v38 )
          goto LABEL_52;
      }
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(&v43, &pvParam);
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
      v31 = v43;
    }
LABEL_52:
    if ( v31 != (_QWORD *)*v37 )
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(v37);
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v43);
    v14 = v34;
    goto LABEL_55;
  }
  Microsoft::WRL::ComPtr<Windows::UI::Input::Spatial::Internal::IInputPriv>::InternalRelease(v13);
  v15 = Microsoft::WRL::Details::MakeAndInitialize<ShellGesturesProcessor::Context,IUnknown,>((char *)a4 + 8);
  if ( v15 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x58,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\shellgestures\\processor"
                    "\\shellgesturesprocessor.cpp",
      (const char *)(unsigned int)v15,
      0);
  v14 = *((_QWORD *)a4 + 1);
  v35 = v14;
  if ( !v11 )
    goto LABEL_55;
  v16 = *((_QWORD *)&xmmword_180243020 + 1);
  v17 = *((_QWORD *)&xmmword_180243020 + 1) + qword_180243030;
  v38 = *((_QWORD *)&xmmword_180243020 + 1) + qword_180243030;
  v18 = this;
  while ( 1 )
  {
    v43 = (_QWORD *)v16;
    if ( v16 == v17 )
      break;
    v19 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)&ShellGesturesProcessor::s_clients + 1)
                                + 8 * ((xmmword_180243020 - 1) & (v16 >> 1)))
                    + 8 * (v16 & 1));
    v36 = v19;
    v20 = *(_QWORD *)(v19 + 144);
    if ( v20 )
    {
      IdForNamespace = InputSite::GetIdForNamespace(v20, v39, 0LL);
      if ( *(_BYTE *)(IdForNamespace + 8) == v22 )
      {
        v23 = *(_DWORD *)a2;
        v37 = (_QWORD *)v19;
        (**(void (__fastcall ***)(__int64))(v19 + 16))(v19 + 16);
        v8 |= 1u;
        LODWORD(pvParam) = v8;
        v24 = v23;
        v18 = this;
        ShouldSelectClient = ShellGesturesProcessor::ShouldSelectClient(this, &v37, v24);
        v16 = (unsigned __int64)v43;
        v19 = v36;
        if ( ShouldSelectClient )
        {
          v26 = 1;
          goto LABEL_28;
        }
      }
      else
      {
        v16 = (unsigned __int64)v43;
      }
    }
    v26 = 0;
LABEL_28:
    LOBYTE(pvParam) = v26;
    if ( (v8 & 1) != 0 )
    {
      v8 &= ~1u;
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&v37);
      v16 = (unsigned __int64)v43;
      v26 = pvParam;
      v19 = v36;
    }
    if ( v26 )
    {
      v27 = v35;
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v35 + 240, v19, v16);
      goto LABEL_34;
    }
    ++v16;
    v17 = v38;
  }
  v27 = v35;
LABEL_34:
  v28 = *(_QWORD *)(*((_QWORD *)a3 + 22) + 104LL);
  v29 = *(_QWORD **)(v28 - 24);
  v43 = *(_QWORD **)(v28 - 16);
  if ( v29 != v43 )
  {
    while ( 1 )
    {
      InputSite::GetAttachedObject<IShellGesturesClientProxy,ShellGesturesClientProxy>(*v29, &pvParam);
      if ( pvParam )
      {
        if ( (unsigned __int8)ShellGesturesProcessor::ShouldSelectClient(v18, &pvParam, *(unsigned int *)a2) )
          break;
      }
      Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
      if ( ++v29 == v43 )
        goto LABEL_39;
    }
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::operator=(v27 + 232, &pvParam);
    Microsoft::WRL::ComPtr<ShellGesturesClientProxy>::InternalRelease(&pvParam);
  }
LABEL_39:
  v14 = v35;
  v30 = *(_QWORD *)(v35 + 240) || *(_QWORD *)(v35 + 232);
  *(_BYTE *)(v35 + 16) = v30;
LABEL_55:
  if ( v10 )
    LOBYTE(v7) = *(_BYTE *)(v14 + 16) != 0;
  else
    v7 = 2;
  *(_DWORD *)a4 = v7;
  return 0LL;
}
