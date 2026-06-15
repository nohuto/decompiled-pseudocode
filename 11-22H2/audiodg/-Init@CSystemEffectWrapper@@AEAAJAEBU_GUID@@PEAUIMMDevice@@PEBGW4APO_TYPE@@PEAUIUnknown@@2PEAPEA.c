/*
 * XREFs of ?Init@CSystemEffectWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140015864
 * Callers:
 *     ?Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEAU5@@Z @ 0x140015694 (-Create@CSystemEffectWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@2PEAPEA.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1400144C8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z @ 0x14007575C (-CollectExceptionData@@YAKPEAU_EXCEPTION_POINTERS@@JPEBGW4APO_TYPE@@U_GUID@@PEBD@Z.c)
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
  __int64 v11; // r15
  unsigned __int64 v12; // r9
  int Instance; // ebx
  int v14; // eax
  int v15; // r14d
  __int64 v16; // rax
  LPVOID *ppv; // [rsp+20h] [rbp-78h]
  int ppva; // [rsp+20h] [rbp-78h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  __int64 v21; // [rsp+B0h] [rbp+18h] BYREF

  v21 = 0LL;
  *(IID *)(a1 + 144) = *a2;
  *(_DWORD *)(a1 + 168) = a5;
  v11 = a6;
  *(_QWORD *)(a1 + 176) = a6;
  v12 = -1LL;
  do
    ++v12;
  while ( a4[v12] );
  Instance = _AllocStringWorker<CTCoAllocPolicy>(
               a1,
               (__int64)a2,
               a4,
               v12,
               (__int64)ppv,
               (unsigned __int16 **)(a1 + 160));
  if ( Instance >= 0 )
  {
    if ( !a7 )
      goto LABEL_10;
    v14 = CoRegisterDeviceCatalog(a7, &v21);
    v15 = v14;
    if ( v14 >= 0 )
    {
      Instance = 0;
    }
    else
    {
      Instance = -2147009265;
      if ( v14 == -2147009265 )
        goto LABEL_14;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x16,
        (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\systemeffectwrapper.cpp",
        (const char *)(unsigned int)v14,
        ppva);
      Instance = v15;
    }
    if ( Instance >= 0 )
    {
LABEL_10:
      Instance = CoCreateInstance(
                   a2,
                   (LPUNKNOWN)((a1 + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)a1 >> 64)),
                   1u,
                   &GUID_00000000_0000_0000_c000_000000000046,
                   (LPVOID *)(a1 + 136));
      if ( Instance >= 0 )
      {
        v16 = a1 + 128;
        if ( !v11 )
          v16 = a1 + 8;
        *a8 = v16 & -(__int64)(a1 != 0);
      }
    }
  }
LABEL_14:
  if ( v21 )
    CoRevokeDeviceCatalog();
  return (unsigned int)Instance;
}
