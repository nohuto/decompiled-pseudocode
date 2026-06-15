/*
 * XREFs of ?SetCellularRouting@TelephonyController@@UEAAJU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x180167B90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall TelephonyController::SetCellularRouting(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 (__fastcall *v6)(__int64 *, _BYTE *, int *); // r9
  __int64 v7; // r8
  _OWORD *v8; // rax
  _OWORD *v9; // rdx
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  int v23; // [rsp+40h] [rbp-448h] BYREF
  _BYTE v24[4]; // [rsp+44h] [rbp-444h] BYREF
  GUID v25; // [rsp+48h] [rbp-440h] BYREF
  int v26; // [rsp+58h] [rbp-430h]
  int v27; // [rsp+5Ch] [rbp-42Ch]
  _BYTE v28[1056]; // [rsp+60h] [rbp-428h] BYREF

  v2 = *a1;
  v3 = 0;
  v23 = 0;
  v6 = *(__int64 (__fastcall **)(__int64 *, _BYTE *, int *))(v2 + 96);
  v7 = 8LL;
  v8 = (_OWORD *)a2;
  v9 = v28;
  do
  {
    v10 = v8[1];
    *v9 = *v8;
    v11 = v8[2];
    v9[1] = v10;
    v12 = v8[3];
    v9[2] = v11;
    v13 = v8[4];
    v9[3] = v12;
    v14 = v8[5];
    v9[4] = v13;
    v15 = v8[6];
    v9[5] = v14;
    v16 = v8[7];
    v8 += 8;
    v9[6] = v15;
    v9 += 8;
    *(v9 - 1) = v16;
    --v7;
  }
  while ( v7 );
  v17 = *v8;
  v18 = *((_QWORD *)v8 + 2);
  *v9 = v17;
  *((_QWORD *)v9 + 2) = v18;
  v19 = v6(a1, v28, &v23);
  if ( v19 < 0 )
    return (unsigned int)v19;
  if ( !v23 )
    return v3;
  v19 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64, _QWORD, int, _DWORD))(*(_QWORD *)g_AudioResourceManager + 64LL))(
          g_AudioResourceManager,
          0LL,
          a2,
          *(unsigned int *)(a2 + 520),
          1,
          0);
  if ( v19 < 0 )
    return (unsigned int)v19;
  v19 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64, _QWORD, int, int))(*(_QWORD *)g_AudioResourceManager + 64LL))(
          g_AudioResourceManager,
          0LL,
          a2 + 524,
          *(unsigned int *)(a2 + 1044),
          1,
          1);
  if ( v19 < 0 )
  {
    return (unsigned int)v19;
  }
  else
  {
    v20 = a1[24];
    v26 = 0;
    v25 = GUID_abf25c7e_0e64_4e32_b190_d0f6d7c53e97;
    v27 = 2;
    v21 = (*(__int64 (__fastcall **)(__int64, GUID *, __int64, __int64, int, _BYTE *))(*(_QWORD *)v20 + 24LL))(
            v20,
            &v25,
            24LL,
            a2,
            1048,
            v24);
    if ( v21 < 0 )
      return (unsigned int)v21;
  }
  return v3;
}
