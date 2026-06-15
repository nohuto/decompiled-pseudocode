/*
 * XREFs of ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x1400119CC
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140011C40 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x140011B80 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140026348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14006CF68 (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
 */

__int64 __fastcall CSystemEffectWrapper::Init(
        __int64 a1,
        const IID *a2,
        __int64 a3,
        const unsigned __int16 *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8)
{
  __int64 v10; // r15
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r12
  HRESULT Instance; // ebx
  SIZE_T v14; // rcx
  unsigned __int16 *v15; // rax
  int v17; // eax
  HRESULT v18; // r14d
  unsigned __int16 **ppv; // [rsp+48h] [rbp-A8h]
  unsigned __int64 *v20; // [rsp+50h] [rbp-A0h]
  unsigned int v21; // [rsp+58h] [rbp-98h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+0h]
  __int64 v24; // [rsp+108h] [rbp+18h] BYREF

  v24 = 0LL;
  *(IID *)(a1 + 120) = *a2;
  *(_DWORD *)(a1 + 144) = a5;
  v10 = a6;
  *(_QWORD *)(a1 + 152) = a6;
  v11 = -1LL;
  do
    ++v11;
  while ( a4[v11] );
  *(_QWORD *)(a1 + 136) = 0LL;
  v12 = -1LL;
  if ( v11 + 1 >= v11 )
    v12 = v11 + 1;
  Instance = v11 + 1 < v11 ? 0x80070216 : 0;
  if ( v11 + 1 >= v11 )
  {
    v14 = 2 * v12;
    if ( is_mul_ok(v12, 2uLL) )
    {
      Instance = 0;
    }
    else
    {
      v14 = -1LL;
      Instance = -2147024362;
    }
    if ( Instance >= 0 )
    {
      v15 = (unsigned __int16 *)CoTaskMemAlloc(v14);
      *(_QWORD *)(a1 + 136) = v15;
      Instance = 0;
      if ( !v15 )
        Instance = -2147024882;
      if ( Instance >= 0 )
        StringCchCopyNExW(v15, v12, a4, v11, ppv, v20, v21);
    }
  }
  if ( Instance >= 0 )
  {
    if ( !a7 )
      goto LABEL_15;
    v17 = CoRegisterDeviceCatalog(a7, &v24);
    v18 = v17;
    if ( v17 >= 0 )
    {
      Instance = 0;
    }
    else
    {
      Instance = -2147009265;
      if ( v17 == -2147009265 )
        goto LABEL_18;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
        (const char *)(unsigned int)v17,
        (int)ppv);
      Instance = v18;
    }
    if ( Instance >= 0 )
    {
LABEL_15:
      Instance = CoCreateInstance(
                   a2,
                   (LPUNKNOWN)(a1 + 8),
                   1u,
                   &GUID_00000000_0000_0000_c000_000000000046,
                   (LPVOID *)(a1 + 112));
      if ( Instance >= 0 )
      {
        if ( v10 )
          *a8 = a1;
        else
          *a8 = (a1 + 8) & -(__int64)(a1 != 0);
      }
    }
  }
LABEL_18:
  if ( v24 )
    CoRevokeDeviceCatalog();
  return (unsigned int)Instance;
}
