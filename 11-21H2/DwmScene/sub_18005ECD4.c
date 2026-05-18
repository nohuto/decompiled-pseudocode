/*
 * XREFs of sub_18005ECD4 @ 0x18005ECD4
 * Callers:
 *     sub_18005EC68 @ 0x18005EC68 (sub_18005EC68.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_1800122D0 @ 0x1800122D0 (sub_1800122D0.c)
 *     sub_180012720 @ 0x180012720 (sub_180012720.c)
 *     sub_18005EB2C @ 0x18005EB2C (sub_18005EB2C.c)
 *     sub_18005F408 @ 0x18005F408 (sub_18005F408.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
int __fastcall sub_18005ECD4(__int64 a1, __int64 *a2, __int64 a3, __int64 a4, int a5)
{
  char v7; // bl
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  __int64 v13; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  char v16; // di
  __int64 v17; // r8
  __int64 v18; // rdx
  signed __int32 v19; // eax
  __int64 v20; // rcx
  signed __int32 v21; // ett
  char v22; // di
  __int64 *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rcx
  unsigned int v29; // eax
  int v30; // r8d
  unsigned int v31; // eax
  int v32; // r8d
  __int128 v33; // [rsp+30h] [rbp-D0h] BYREF
  _Mtx_t v34; // [rsp+40h] [rbp-C0h]
  __int64 v35; // [rsp+48h] [rbp-B8h]
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int128 v37; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v38; // [rsp+68h] [rbp-98h] BYREF
  __int128 v39; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v40[2]; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v41[4]; // [rsp+98h] [rbp-68h] BYREF
  _QWORD v42[4]; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+D8h] [rbp-28h] BYREF

  v36 = a4;
  v35 = a3;
  v7 = 0;
  v34 = (_Mtx_t)(a1 + 128);
  v8 = Mtx_lock((_Mtx_t)(a1 + 128));
  if ( v8 )
    std::_Throw_C_error(v8);
  v9 = *a2;
  v37 = 0LL;
  v10 = *(_QWORD *)(v9 + 64);
  if ( v10 )
  {
    v11 = *(_DWORD *)(v10 + 8);
    while ( v11 )
    {
      v12 = v11;
      v11 = _InterlockedCompareExchange((volatile signed __int32 *)(v10 + 8), v11 + 1, v11);
      if ( v12 == v11 )
      {
        v37 = *(_OWORD *)(v9 + 56);
        break;
      }
    }
  }
  if ( (_QWORD)v37 )
  {
    v33 = 0LL;
    v13 = *(_QWORD *)(v37 + 80);
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      while ( v14 )
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14);
        if ( v15 == v14 )
        {
          v20 = *(_QWORD *)(v37 + 72);
          v33 = *(_OWORD *)(v37 + 72);
          goto LABEL_24;
        }
      }
    }
    else
    {
      v20 = v33;
LABEL_24:
      v7 = 1;
      if ( v20 )
      {
        v16 = 0;
        goto LABEL_16;
      }
    }
    v7 = 1;
  }
  v16 = 1;
LABEL_16:
  if ( (v7 & 1) != 0 )
  {
    v7 &= ~1u;
    sub_180010910((__int64)&v33);
  }
  if ( v16 )
  {
    sub_1800113D0(v42, "Cameras added to Displays must be attached to a scene.");
    v31 = (unsigned int)sub_1800113D0(
                          v41,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\display.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v31, v32, (unsigned int)v42, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  sub_18005F408(a1, v40);
  if ( !v40[0] )
    goto LABEL_32;
  v17 = v37;
  v38 = 0LL;
  v18 = *(_QWORD *)(v37 + 80);
  if ( v18 )
  {
    v19 = *(_DWORD *)(v18 + 8);
    while ( v19 )
    {
      v21 = v19;
      v19 = _InterlockedCompareExchange((volatile signed __int32 *)(v18 + 8), v19 + 1, v19);
      if ( v21 == v19 )
      {
        v38 = *(_OWORD *)(v17 + 72);
        break;
      }
    }
  }
  v7 |= 2u;
  if ( sub_1800122D0(&v38, v40) )
    v22 = 1;
  else
LABEL_32:
    v22 = 0;
  if ( (v7 & 2) != 0 )
    sub_180010910((__int64)&v38);
  if ( v22 )
  {
    sub_1800113D0(v41, "Displays require that all cameras be in the same scene.");
    v29 = (unsigned int)sub_1800113D0(
                          v42,
                          "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\"
                          "engine\\display.cpp");
    sub_180079B60((unsigned int)pExceptionObject, v29, v30, (unsigned int)v41, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v23 = *(__int64 **)(a1 + 48);
  if ( v23 == *(__int64 **)(a1 + 56) )
  {
    sub_180012720((__int64 *)(a1 + 40), (__int64)v23, a2);
  }
  else
  {
    *v23 = 0LL;
    v23[1] = 0LL;
    v24 = a2[1];
    if ( v24 )
      _InterlockedIncrement((volatile signed __int32 *)(v24 + 8));
    *v23 = *a2;
    v23[1] = a2[1];
    *(_QWORD *)(a1 + 48) += 16LL;
  }
  v39 = 0LL;
  v25 = a2[1];
  if ( v25 )
  {
    *(_QWORD *)&v39 = *a2;
    *((_QWORD *)&v39 + 1) = v25;
    _InterlockedIncrement((volatile signed __int32 *)(v25 + 12));
  }
  v26 = sub_18005EB2C((__int64 *)(a1 + 88), (__int64 *)&v39);
  *(_QWORD *)v26 = v35;
  *(_QWORD *)(v26 + 8) = v36;
  *(_DWORD *)(v26 + 16) = a5;
  v27 = *((_QWORD *)&v39 + 1);
  if ( *((_QWORD *)&v39 + 1)
    && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v39 + 1) + 12LL), 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
  }
  sub_180010910((__int64)v40);
  sub_180010910((__int64)&v37);
  return Mtx_unlock(v34);
}
