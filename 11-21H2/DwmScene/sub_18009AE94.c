/*
 * XREFs of sub_18009AE94 @ 0x18009AE94
 * Callers:
 *     sub_18009ADA0 @ 0x18009ADA0 (sub_18009ADA0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_180029E58 @ 0x180029E58 (sub_180029E58.c)
 *     sub_180079B60 @ 0x180079B60 (sub_180079B60.c)
 *     sub_18009A858 @ 0x18009A858 (sub_18009A858.c)
 *     sub_18009B540 @ 0x18009B540 (sub_18009B540.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18009AE94(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdx
  unsigned int v5; // r14d
  __int64 *v6; // rsi
  char v7; // bp
  int v8; // ecx
  char v9; // al
  _QWORD *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // rsi
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD v18[3]; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v19[4]; // [rsp+48h] [rbp-A0h] BYREF
  _QWORD v20[4]; // [rsp+68h] [rbp-80h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+88h] [rbp-60h] BYREF

  v18[2] = a2;
  v4 = *a2;
  v5 = *(_DWORD *)(v4 + 88);
  v6 = (__int64 *)(a1 + 144);
  v7 = 1;
  if ( *(_QWORD *)(a1 + 152) && (*(_DWORD *)(a1 + 152) != 1 || *(_DWORD *)(*(_QWORD *)*v6 + 32LL) != v5) )
  {
    v7 = 0;
    v8 = *(_DWORD *)(a1 + 96);
    if ( v8 != *(_DWORD *)(v4 + 96) )
      goto LABEL_15;
    if ( v8 )
    {
      if ( v8 != 1 )
        goto LABEL_15;
      v9 = sub_18009A858((__int64 *)(a1 + 112), (_QWORD *)(v4 + 112));
    }
    else
    {
      v9 = *(_QWORD *)(a1 + 104) == *(_QWORD *)(v4 + 104);
    }
    if ( v9 )
      goto LABEL_10;
LABEL_15:
    sub_1800113D0(v20, "Attaching a device vertex layout to an incompatible vertex layout.");
    v16 = sub_1800113D0(
            v19,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\vertexlayout.cpp");
    sub_180079B60(pExceptionObject, (__int64)v16, v17, (const char *)v20, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
LABEL_10:
  v10 = (_QWORD *)sub_180029E58(v6, v5);
  v11 = *a2;
  v12 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v18[0] = *v10;
  *v10 = v11;
  v18[1] = v10[1];
  v10[1] = v12;
  sub_180010910((__int64)v18);
  if ( v7 )
  {
    v13 = sub_180029E58(v6, v5);
    v14 = *(_QWORD *)v13;
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(*(_QWORD *)v13 + 96LL);
    *(_QWORD *)(a1 + 104) = *(_QWORD *)(v14 + 104);
    if ( a1 + 112 != v14 + 112 )
      sub_18009B540();
    *(_QWORD *)(a1 + 136) = *(_QWORD *)(v14 + 136);
  }
  return sub_180010910((__int64)a2);
}
