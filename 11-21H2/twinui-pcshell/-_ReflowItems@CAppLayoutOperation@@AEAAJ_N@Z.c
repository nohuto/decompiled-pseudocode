/*
 * XREFs of ?_ReflowItems@CAppLayoutOperation@@AEAAJ_N@Z @ 0x1806159B8
 * Callers:
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x1806150B0 (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??I?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA?AV?$ComPtrRef@V?$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@@Details@12@XZ @ 0x1800759C4 (--I-$ComPtr@UIImmersiveApplicationArrayService@@@WRL@Microsoft@@QEAA-AV-$ComPtrRef@V-$ComPtr@UII.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180178FD0 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x1805EF8A0 (-ComputeGutterWidth@ImmersiveApplicationLayout@@YAHPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 */

__int64 __fastcall CAppLayoutOperation::_ReflowItems(CAppLayoutOperation *this, char a2)
{
  CAppLayoutOperation *v2; // rdi
  int v3; // ebx
  const struct LAYOUT_ENVIRONMENT_DETAILS *v4; // rdx
  enum DEVICE_SCALE_FACTOR v5; // r8d
  int v6; // eax
  unsigned int v7; // r15d
  unsigned int v8; // r12d
  unsigned int v9; // r14d
  unsigned int v10; // r13d
  __int64 v11; // rdi
  int v12; // esi
  __int64 (__fastcall *v13)(__int64, _QWORD, __int64, _QWORD, __m128i *); // rbx
  int v14; // eax
  __int64 v15; // rdi
  unsigned int v16; // esi
  __int64 (__fastcall *v17)(__int64, _QWORD, __int64, _QWORD, __int64 *); // rbx
  __int64 (__fastcall *v18)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v19; // rbx
  int v20; // eax
  unsigned int v21; // edx
  __int32 v24; // [rsp+3Ch] [rbp-95h]
  CAppLayoutOperation *v25; // [rsp+40h] [rbp-91h] BYREF
  __m128i v26; // [rsp+48h] [rbp-89h] BYREF
  __int64 v27; // [rsp+58h] [rbp-79h] BYREF
  unsigned int v28; // [rsp+60h] [rbp-71h]
  int v29; // [rsp+64h] [rbp-6Dh]
  __int64 v30; // [rsp+68h] [rbp-69h] BYREF
  __m128i v31; // [rsp+78h] [rbp-59h] BYREF
  _DWORD v32[12]; // [rsp+88h] [rbp-49h] BYREF
  _QWORD v33[3]; // [rsp+B8h] [rbp-19h] BYREF
  __m128i v34; // [rsp+D0h] [rbp-1h]

  v2 = this;
  v25 = this;
  v3 = -2147319767;
  v28 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), 5LL);
  if ( !v28 )
    return (unsigned int)v3;
  (*(void (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)v2 + 5) + 24LL))(*((_QWORD *)v2 + 5), v32);
  v6 = ImmersiveApplicationLayout::ComputeGutterWidth((ImmersiveApplicationLayout *)v32, v4, v5);
  v7 = v32[0];
  v8 = 0;
  v29 = v6;
  v9 = 0;
  v10 = v32[2] - v6 * (v28 - 1) - v32[0];
  if ( !a2 )
  {
    v11 = *((_QWORD *)v2 + 5);
    v12 = 0;
    v26.m128i_i64[0] = 0LL;
    v13 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __m128i *))(*(_QWORD *)v11 + 136LL);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v26.m128i_i64);
    v3 = v13(v11, 0LL, 1LL, 0LL, &v26);
    if ( v3 >= 0 )
    {
      while ( (*(int (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v26.m128i_i64[0] + 24LL))(
                v26.m128i_i64[0],
                5LL,
                v33) >= 0 )
      {
        if ( v34.m128i_i32[2] - v34.m128i_i32[0] <= 0 )
          ++v9;
        v14 = v34.m128i_i32[2] - v34.m128i_i32[0] + v12;
        if ( v34.m128i_i32[2] - v34.m128i_i32[0] <= 0 )
          v14 = v12;
        v12 = v14;
      }
    }
    v8 = v10 - v12;
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(v26.m128i_i64);
    if ( v3 < 0 )
      return (unsigned int)v3;
    v7 = v32[0];
    v2 = v25;
  }
  v15 = *((_QWORD *)v2 + 5);
  v16 = 0;
  v27 = 0LL;
  v26.m128i_i32[0] = v32[1];
  v24 = v32[3];
  v17 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, __int64 *))(*(_QWORD *)v15 + 136LL);
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v27);
  v3 = v17(v15, 0LL, 1LL, 0LL, &v27);
  if ( v3 >= 0 )
  {
    while ( 1 )
    {
      if ( (*(int (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v27 + 24LL))(v27, 5LL, v33) < 0 )
        goto LABEL_25;
      v25 = 0LL;
      v31 = v34;
      v18 = **(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v33[0];
      v19 = (__int64 *)*Microsoft::WRL::ComPtr<IImmersiveApplicationArrayService>::operator&((__int64)&v25, &v30);
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v19);
      v3 = v18(v33[0], &GUID_d10c2c80_0ce6_45e9_add1_2000d3246f04, v19);
      if ( v3 >= 0 )
        break;
LABEL_23:
      v26 = v31;
      v7 = v29 + _mm_cvtsi128_si32(_mm_srli_si128(v31, 8));
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v25);
      if ( v3 < 0 )
        goto LABEL_25;
      v24 = v26.m128i_i32[3];
      v26.m128i_i32[0] = v26.m128i_i32[1];
    }
    if ( a2 )
    {
      v21 = v10 % v28;
      v20 = v10 / v28;
    }
    else
    {
      v20 = v31.m128i_i32[2] - v31.m128i_i32[0];
      if ( v31.m128i_i32[2] - v31.m128i_i32[0] > 0 )
      {
LABEL_22:
        v31.m128i_i32[2] = v7 + v20;
        v31.m128i_i64[0] = __PAIR64__(v26.m128i_u32[0], v7);
        v31.m128i_i32[3] = v24;
        (*(void (__fastcall **)(CAppLayoutOperation *, _QWORD, __m128i *))(*(_QWORD *)v25 + 104LL))(v25, 0LL, &v31);
        goto LABEL_23;
      }
      v21 = v8 % v9;
      v20 = v8 / v9;
    }
    if ( v16 < v21 )
      ++v20;
    ++v16;
    goto LABEL_22;
  }
LABEL_25:
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v27);
  return (unsigned int)v3;
}
