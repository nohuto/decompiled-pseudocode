/*
 * XREFs of sub_180069260 @ 0x180069260
 * Callers:
 *     sub_1800491C8 @ 0x1800491C8 (sub_1800491C8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800113D0 @ 0x1800113D0 (sub_1800113D0.c)
 *     sub_18003F4DC @ 0x18003F4DC (sub_18003F4DC.c)
 *     sub_180067D9C @ 0x180067D9C (sub_180067D9C.c)
 *     sub_180067EB8 @ 0x180067EB8 (sub_180067EB8.c)
 *     ?GetVirtualProcessorRoot@UMSThreadProxy@details@Concurrency@@QEAAPEAVUMSFreeVirtualProcessorRoot@23@XZ @ 0x180069254 (-GetVirtualProcessorRoot@UMSThreadProxy@details@Concurrency@@QEAAPEAVUMSFreeVirtualProcessorRoot.c)
 *     sub_18009489C @ 0x18009489C (sub_18009489C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180069260(Concurrency::details::UMSThreadProxy *a1, _QWORD *a2, __int64 a3, int a4)
{
  unsigned __int64 VirtualProcessorRoot; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 *v9; // r14
  __int64 *v10; // r8
  __int64 *v11; // rcx
  __int64 *v12; // rdx
  unsigned __int64 v13; // r11
  __int64 v14; // rax
  _QWORD **v15; // r10
  _QWORD *i; // rbx
  _QWORD *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v22; // rax
  __int64 v23; // r8
  _QWORD *v24; // [rsp+30h] [rbp-69h] BYREF
  int v25; // [rsp+38h] [rbp-61h] BYREF
  _QWORD v26[2]; // [rsp+40h] [rbp-59h] BYREF
  _OWORD v27[2]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v28[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+90h] [rbp-9h] BYREF

  v24 = a2;
  v25 = a4;
  if ( *((_DWORD *)a1 + 108) != 1 )
  {
    sub_1800113D0(
      v28,
      "ShaderFamily::GetPipeline() -- shader family declaration must be complete before pipelines can be accessed");
    v22 = sub_1800113D0(
            v27,
            "onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine\\shaderfamily.cpp");
    sub_18003F4DC(pExceptionObject, (__int64)v22, v23, (__int64)v28, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  VirtualProcessorRoot = (unsigned __int64)Concurrency::details::UMSThreadProxy::GetVirtualProcessorRoot(a1);
  v24 = (_QWORD *)(VirtualProcessorRoot & v6);
  v8 = sub_180067D9C((__int64 *)(v7 + 416), &v25);
  v9 = (__int64 *)(v8 + 16);
  v10 = *(__int64 **)(v8 + 16);
  v11 = (__int64 *)v10[1];
  v12 = v10;
  v13 = (unsigned __int64)v24;
  while ( !*((_BYTE *)v11 + 25) )
  {
    if ( v11[4] >= (unsigned __int64)v24 )
    {
      v12 = v11;
      v11 = (__int64 *)*v11;
    }
    else
    {
      v11 = (__int64 *)v11[2];
    }
  }
  if ( *((_BYTE *)v12 + 25) || (unsigned __int64)v24 < v12[4] || v12 == v10 )
  {
    v15 = *(_QWORD ***)v8;
    for ( i = **(_QWORD ***)v8; ; i = (_QWORD *)*i )
    {
      if ( i == v15 )
      {
        v27[0] = 0LL;
        v20 = (_QWORD *)sub_180067EB8(v9, (unsigned __int64 *)&v24);
        v27[0] = 0LL;
        v28[0] = *v20;
        *v20 = 0LL;
        v28[1] = v20[1];
        v20[1] = 0LL;
        sub_180010910((__int64)v28);
        sub_180010910((__int64)v27);
        *a2 = 0LL;
        a2[1] = 0LL;
        return a2;
      }
      if ( (unsigned __int8)sub_18009489C(i[2], v13) )
        break;
    }
    v17 = (_QWORD *)sub_180067EB8(v9, (unsigned __int64 *)&v24);
    v18 = i[3];
    if ( v18 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
      v18 = i[3];
    }
    v26[0] = *v17;
    *v17 = i[2];
    v26[1] = v17[1];
    v17[1] = v18;
    sub_180010910((__int64)v26);
    *a2 = 0LL;
    a2[1] = 0LL;
    v19 = i[3];
    if ( v19 )
      _InterlockedIncrement((volatile signed __int32 *)(v19 + 8));
    *a2 = i[2];
    a2[1] = i[3];
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
    v14 = v12[6];
    if ( v14 )
      _InterlockedIncrement((volatile signed __int32 *)(v14 + 8));
    *a2 = v12[5];
    a2[1] = v12[6];
  }
  return a2;
}
