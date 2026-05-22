/*
 * XREFs of ?GetGutterExtensionSurface@CDxDevice@DirectComposition@@AEAAJW4DXGI_FORMAT@@PEAUGutterExtensionSurface@12@@Z @ 0x180023C10
 * Callers:
 *     ?ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV?$DynArray@UGutterExtension@DirectComposition@@$0A@@@PEAUID3D11ShaderResourceView@@PEAUID3D11RenderTargetView@@IIW4DXGI_FORMAT@@@Z @ 0x1800233F0 (-ExecuteGutterExtensions@CDxDevice@DirectComposition@@QEAAJAEBV-$DynArray@UGutterExtension@Direc.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ??$ReleaseInterface@UID3D11RenderTargetView@@@@YAXAEAPEAUID3D11RenderTargetView@@@Z @ 0x180038A1C (--$ReleaseInterface@UID3D11RenderTargetView@@@@YAXAEAPEAUID3D11RenderTargetView@@@Z.c)
 *     ??$ReleaseInterface@UID3D11ShaderResourceView@@@@YAXAEAPEAUID3D11ShaderResourceView@@@Z @ 0x180038A58 (--$ReleaseInterface@UID3D11ShaderResourceView@@@@YAXAEAPEAUID3D11ShaderResourceView@@@Z.c)
 *     ??$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z @ 0x180038AD0 (--$ReleaseInterface@UID3D11Texture2D@@@@YAXAEAPEAUID3D11Texture2D@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 *     ?RemoveAt@?$DynArray@UGutterExtensionSurface@CDxDevice@DirectComposition@@$0A@@@QEAAJI@Z @ 0x1800F79BC (-RemoveAt@-$DynArray@UGutterExtensionSurface@CDxDevice@DirectComposition@@$0A@@@QEAAJI@Z.c)
 */

__int64 __fastcall DirectComposition::CDxDevice::GetGutterExtensionSurface(
        DirectComposition::CDxDevice *this,
        enum DXGI_FORMAT a2,
        struct DirectComposition::CDxDevice::GutterExtensionSurface *a3)
{
  int v4; // edx
  char *v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v11; // r12
  __int64 v12; // rcx
  int v13; // ebx
  char *v14; // r14
  __int64 *v15; // r8
  unsigned int v16; // eax
  unsigned int v17; // edx
  int v18; // eax
  __int64 v19; // r8
  unsigned int v20; // eax
  unsigned int v21; // edx
  unsigned int v22; // edx
  int v23; // ecx
  __int64 v24; // rax
  __int64 v25; // rcx
  int v26; // eax
  unsigned int v27; // edx
  int v28; // ecx
  __int64 v29; // rax
  __int64 v30; // rcx
  _DWORD v31[5]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v32; // [rsp+44h] [rbp-2Ch]
  int v33; // [rsp+4Ch] [rbp-24h]
  __int64 v34; // [rsp+50h] [rbp-20h]
  int v35; // [rsp+58h] [rbp-18h]

  v4 = *((_DWORD *)this + 58);
  if ( v4 )
  {
    v7 = (char *)this + 208;
    v8 = *((_QWORD *)this + 26);
    while ( 1 )
    {
      v9 = 32LL * (unsigned int)--v4;
      if ( *(_DWORD *)(v9 + v8) == a2 )
        break;
      if ( !v4 )
        goto LABEL_6;
    }
    *(_OWORD *)a3 = *(_OWORD *)(v9 + v8);
    *((_OWORD *)a3 + 1) = *(_OWORD *)(v9 + v8 + 16);
    if ( v4 == *((_DWORD *)this + 58) - 1 )
      return 0LL;
    DynArray<DirectComposition::CDxDevice::GutterExtensionSurface,0>::RemoveAt(v7);
    v20 = *((_DWORD *)v7 + 6);
    v21 = v20 + 1;
    if ( v20 + 1 < v20 )
    {
      v22 = 181;
      v23 = -2147024362;
LABEL_21:
      DoStackCaptureDirect(v23, v22);
      return 0LL;
    }
    if ( v21 > *((_DWORD *)v7 + 5) )
    {
      v26 = DynArrayImpl<0>::AddMultipleAndSet(v7, 32LL, v19, a3);
      if ( v26 < 0 )
      {
        v22 = 192;
        v23 = v26;
        goto LABEL_21;
      }
    }
    else
    {
      v24 = *(_QWORD *)v7;
      v25 = 32LL * *((unsigned int *)v7 + 6);
      *(_OWORD *)(v25 + v24) = *(_OWORD *)a3;
      *(_OWORD *)(v25 + v24 + 16) = *((_OWORD *)a3 + 1);
      *((_DWORD *)v7 + 6) = v21;
    }
    return 0LL;
  }
LABEL_6:
  v31[0] = 64;
  *(_OWORD *)a3 = 0LL;
  v31[1] = 320;
  v11 = (_QWORD *)((char *)a3 + 8);
  *((_OWORD *)a3 + 1) = 0LL;
  v12 = *((_QWORD *)this + 3);
  v31[2] = 1;
  v31[3] = 1;
  v31[4] = a2;
  v32 = 1LL;
  v33 = 0;
  v34 = 40LL;
  v35 = 0;
  v13 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD, char *))(*(_QWORD *)v12 + 40LL))(
          v12,
          v31,
          0LL,
          (char *)a3 + 8);
  if ( v13 < 0 )
  {
    v14 = (char *)a3 + 24;
    goto LABEL_27;
  }
  v14 = (char *)a3 + 24;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 3) + 56LL))(
          *((_QWORD *)this + 3),
          *v11,
          0LL,
          (char *)a3 + 16);
  if ( v13 < 0 )
    goto LABEL_27;
  v13 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, char *))(**((_QWORD **)this + 3) + 72LL))(
          *((_QWORD *)this + 3),
          *v11,
          0LL,
          (char *)a3 + 24);
  if ( v13 < 0 )
    goto LABEL_27;
  v15 = (__int64 *)((char *)this + 208);
  *(_DWORD *)a3 = a2;
  v16 = *((_DWORD *)this + 58);
  v17 = v16 + 1;
  if ( v16 + 1 < v16 )
  {
    v13 = -2147024362;
    v27 = 181;
    v28 = -2147024362;
LABEL_25:
    DoStackCaptureDirect(v28, v27);
LABEL_27:
    ReleaseInterface<ID3D11Texture2D>(v11);
    ReleaseInterface<ID3D11ShaderResourceView>((char *)a3 + 16);
    ReleaseInterface<ID3D11RenderTargetView>(v14);
    *(_OWORD *)a3 = 0LL;
    *((_OWORD *)a3 + 1) = 0LL;
    return (unsigned int)v13;
  }
  v13 = 0;
  if ( v17 <= *((_DWORD *)this + 57) )
  {
    v29 = *v15;
    v30 = 32LL * *((unsigned int *)this + 58);
    *(_OWORD *)(v30 + v29) = *(_OWORD *)a3;
    *(_OWORD *)(v30 + v29 + 16) = *((_OWORD *)a3 + 1);
    *((_DWORD *)this + 58) = v17;
    return (unsigned int)v13;
  }
  v18 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 208, 32LL, v15, a3);
  v13 = v18;
  if ( v18 < 0 )
  {
    v27 = 192;
    v28 = v18;
    goto LABEL_25;
  }
  return (unsigned int)v13;
}
