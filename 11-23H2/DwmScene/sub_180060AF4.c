/*
 * XREFs of sub_180060AF4 @ 0x180060AF4
 * Callers:
 *     sub_180043F98 @ 0x180043F98 (sub_180043F98.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     _CxxThrowException @ 0x18000CA79 (_CxxThrowException.c)
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180010AF8 @ 0x180010AF8 (sub_180010AF8.c)
 *     sub_180010DD0 @ 0x180010DD0 (sub_180010DD0.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_18001246C @ 0x18001246C (sub_18001246C.c)
 *     sub_1800124F8 @ 0x1800124F8 (sub_1800124F8.c)
 *     sub_18003AF58 @ 0x18003AF58 (sub_18003AF58.c)
 *     sub_18005F370 @ 0x18005F370 (sub_18005F370.c)
 *     sub_18005F46C @ 0x18005F46C (sub_18005F46C.c)
 *     ?GetVirtualProcessorRoot@UMSThreadProxy@details@Concurrency@@QEAAPEAVUMSFreeVirtualProcessorRoot@23@XZ @ 0x180060AE8 (-GetVirtualProcessorRoot@UMSThreadProxy@details@Concurrency@@QEAAPEAVUMSFreeVirtualProcessorRoot.c)
 *     sub_180086A8C @ 0x180086A8C (sub_180086A8C.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180060AF4(Concurrency::details::UMSThreadProxy *a1, _QWORD *a2, __int64 a3, int a4)
{
  _QWORD *v5; // rax
  __int64 v6; // r8
  unsigned __int64 VirtualProcessorRoot; // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  __int64 v10; // r9
  __int64 *v11; // rsi
  __int64 v12; // r11
  unsigned __int64 v13; // r14
  _QWORD *v14; // rdx
  _QWORD *v15; // r11
  _QWORD *i; // r10
  _QWORD *v17; // rdi
  _QWORD *v18; // r10
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v22; // [rsp+30h] [rbp-79h] BYREF
  int v23; // [rsp+38h] [rbp-71h] BYREF
  __int64 v24[3]; // [rsp+40h] [rbp-69h] BYREF
  _QWORD v25[2]; // [rsp+58h] [rbp-51h] BYREF
  __int64 v26; // [rsp+68h] [rbp-41h]
  _QWORD v27[4]; // [rsp+78h] [rbp-31h] BYREF
  _QWORD pExceptionObject[7]; // [rsp+98h] [rbp-11h] BYREF

  v22 = a2;
  v23 = a4;
  if ( *((_DWORD *)a1 + 108) != 1 )
  {
    sub_180010DD0(
      v27,
      (__int64)"ShaderFamily::GetPipeline() -- shader family declaration must be complete before pipelines can be accessed");
    v5 = sub_180010DD0(
           v25,
           (__int64)"onecoreuap\\windows\\dwm\\spectre\\engine\\products\\components\\nativerenderer\\cpp\\source\\engine"
                    "\\shaderfamily.cpp");
    sub_18003AF58(pExceptionObject, (__int64)v5, v6, (__int64)v27, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  VirtualProcessorRoot = (unsigned __int64)Concurrency::details::UMSThreadProxy::GetVirtualProcessorRoot(a1);
  v22 = (_QWORD *)(VirtualProcessorRoot & v8);
  v11 = (__int64 *)(*(_QWORD *)sub_18005F370((__int64 *)(v9 + 416), (__int64)v27, &v23, v10) + 56LL);
  sub_180010AF8(v11, (__int64)v25, (unsigned __int64 *)&v22);
  v13 = (unsigned __int64)v22;
  if ( *(_BYTE *)(v26 + 25) || (unsigned __int64)v22 < *(_QWORD *)(v26 + 32) || v26 == *v11 )
  {
    v15 = *(_QWORD **)(v12 + 40);
    for ( i = (_QWORD *)*v15; i != v15; i = (_QWORD *)*v18 )
    {
      v17 = i + 2;
      if ( (unsigned __int8)sub_180086A8C(i[2], v13) )
      {
        v19 = sub_18005F46C(v11, (__int64)v24, (unsigned __int64 *)&v22);
        sub_1800124F8((__int64 *)(*(_QWORD *)v19 + 40LL), v17);
        v14 = v17;
        goto LABEL_7;
      }
    }
    *(_OWORD *)v24 = 0LL;
    v20 = sub_18005F46C(v11, (__int64)v25, (unsigned __int64 *)&v22);
    sub_180011020((_QWORD *)(*(_QWORD *)v20 + 40LL), v24);
    if ( v24[1] )
      sub_180010530(v24[1]);
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  else
  {
    v14 = (_QWORD *)(v26 + 40);
LABEL_7:
    sub_18001246C(a2, v14);
  }
  return a2;
}
