/*
 * XREFs of ?UpdateSubresource@CDxDevice@DirectComposition@@QEAAXPEAUID3D11Resource@@IAEBUtagRECT@@PEBXIIW4DXGI_FORMAT@@_N@Z @ 0x18003513C
 * Callers:
 *     ?UpdateSubresource@CAtlasSurfacePool@DirectComposition@@QEAAXAEBUtagRECT@@PEBXII_N@Z @ 0x180035064 (-UpdateSubresource@CAtlasSurfacePool@DirectComposition@@QEAAXAEBUtagRECT@@PEBXII_N@Z.c)
 * Callees:
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000B050 (-DoStackCaptureDirect@@YAXJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180073310 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180095B40 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800A8170 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CDxDevice::UpdateSubresource(
        DirectComposition::CDxDevice *this,
        struct ID3D11Resource *a2,
        __int64 a3,
        const struct tagRECT *a4,
        const void *a5,
        unsigned int a6,
        unsigned int a7,
        enum DXGI_FORMAT a8,
        bool a9)
{
  struct ID3D11Resource *v10; // r11
  int v12; // r9d
  unsigned int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // rcx
  __int64 *v17; // r14
  __int64 v18; // rcx
  LONG top; // r11d
  enum DXGI_FORMAT v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  _QWORD *v24; // r8
  __int64 v25; // rax
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // edx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // [rsp+50h] [rbp-59h] BYREF
  __int64 v32; // [rsp+58h] [rbp-51h] BYREF
  __int128 v33; // [rsp+60h] [rbp-49h] BYREF
  struct ID3D11Resource *v34; // [rsp+70h] [rbp-39h]
  __int64 v35; // [rsp+78h] [rbp-31h] BYREF
  int v36; // [rsp+80h] [rbp-29h]
  LONG right; // [rsp+84h] [rbp-25h]
  enum DXGI_FORMAT bottom; // [rsp+88h] [rbp-21h]
  __int64 v39; // [rsp+8Ch] [rbp-1Dh]
  int v40; // [rsp+94h] [rbp-15h]
  __int64 v41; // [rsp+98h] [rbp-11h]
  int v42; // [rsp+A0h] [rbp-9h]

  v10 = a2;
  v34 = a2;
  v12 = 0;
  v31 = 0LL;
  v32 = 0LL;
  if ( !a9 )
    goto LABEL_13;
  v13 = *((_DWORD *)this + 68);
  v14 = 0;
  if ( !v13 )
    goto LABEL_13;
  v15 = *((_QWORD *)this + 31);
  while ( 1 )
  {
    v16 = 16LL * v14;
    if ( *(_DWORD *)(v16 + v15) == a8 )
      break;
    if ( ++v14 >= v13 )
      goto LABEL_13;
  }
  v17 = (__int64 *)(v16 + v15 + 8);
  if ( !v17 )
  {
LABEL_13:
    v17 = &v31;
    v22 = *((_QWORD *)this + 3);
    LODWORD(v35) = a4->right - a4->left;
    HIDWORD(v35) = a4->bottom - a4->top;
    v36 = 1;
    right = 1;
    v39 = 1LL;
    v40 = 1;
    bottom = a8;
    v41 = 8LL;
    v42 = 0;
    *(_QWORD *)&v33 = a5;
    *((_QWORD *)&v33 + 1) = a6;
    v23 = (*(__int64 (__fastcall **)(__int64, __int64 *, __int128 *, __int64 *))(*(_QWORD *)v22 + 40LL))(
            v22,
            &v35,
            &v33,
            &v31);
    v10 = v34;
    v12 = v23;
  }
  if ( v12 < 0 )
  {
    v30 = *((_QWORD *)this + 9);
    v35 = *(_QWORD *)&a4->left;
    right = a4->right;
    bottom = a4->bottom;
    v36 = 0;
    LODWORD(v39) = 1;
    (*(void (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, __int64 *, const void *, unsigned int, _DWORD))(*(_QWORD *)v30 + 384LL))(
      v30,
      v10,
      0LL,
      &v35,
      a5,
      a6,
      0);
  }
  else
  {
    (**(void (__fastcall ***)(__int64, GUID *, __int64 *))*v17)(*v17, &GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d, &v32);
    v18 = *((_QWORD *)this + 9);
    top = a4->top;
    right = a4->right - a4->left;
    v20 = a4->bottom - top;
    v35 = 0LL;
    bottom = v20;
    v36 = 0;
    LODWORD(v39) = 1;
    (*(void (__fastcall **)(__int64, struct ID3D11Resource *, _QWORD, _QWORD, LONG, _DWORD, __int64, _DWORD, __int64 *))(*(_QWORD *)v18 + 368LL))(
      v18,
      v34,
      0LL,
      (unsigned int)a4->left,
      top,
      0,
      v32,
      0,
      &v35);
    v21 = v31;
    if ( !a9 )
      goto LABEL_18;
    if ( !v31 )
      goto LABEL_9;
    v24 = (_QWORD *)((char *)this + 248);
    LODWORD(v33) = a8;
    v25 = *((unsigned int *)this + 68);
    *((_QWORD *)&v33 + 1) = v31;
    v26 = v25 + 1;
    if ( (int)v25 + 1 < (unsigned int)v25 )
    {
      v28 = 181;
      v29 = -2147024362;
    }
    else
    {
      if ( v26 <= *((_DWORD *)this + 67) )
      {
        *(_OWORD *)(*v24 + 16 * v25) = v33;
        *((_DWORD *)this + 68) = v26;
        goto LABEL_17;
      }
      v27 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 248, 16LL, v24, &v33);
      if ( v27 >= 0 )
      {
LABEL_17:
        v21 = 0LL;
        v31 = 0LL;
        goto LABEL_18;
      }
      v28 = 192;
      v29 = v27;
    }
    DoStackCaptureDirect(v29, v28);
  }
  v21 = v31;
LABEL_18:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
LABEL_9:
  if ( v32 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
}
