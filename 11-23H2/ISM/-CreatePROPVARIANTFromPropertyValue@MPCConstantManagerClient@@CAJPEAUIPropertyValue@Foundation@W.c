/*
 * XREFs of ?CreatePROPVARIANTFromPropertyValue@MPCConstantManagerClient@@CAJPEAUIPropertyValue@Foundation@Windows@@PEAUtagPROPVARIANT@@@Z @ 0x1801866A8
 * Callers:
 *     ?SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@PEAUHSTRING__@@PEAUIPropertyValue@Foundation@6@PEAPEAUIAsyncAction@96@@Z @ 0x18018B720 (-SetConstantAsync@MPCConstantManagerClient@@UEAAJW4InputType@MPCManager@Input@Internal@Windows@@.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z @ 0x180189938 (-InitPropVariantFromString@@YAJPEBGPEAUtagPROPVARIANT@@@Z.c)
 */

__int64 __fastcall MPCConstantManagerClient::CreatePROPVARIANTFromPropertyValue(
        struct Windows::Foundation::IPropertyValue *a1,
        struct tagPROPVARIANT *a2)
{
  int v2; // edi
  __int64 v3; // rax
  int v6; // eax
  int v8; // eax
  const unsigned __int16 *StringRawBuffer; // rax
  int inited; // eax
  int v11; // eax
  bool v12; // zf
  int v13; // eax
  double v14; // xmm0_8
  int v15; // eax
  int v16; // eax
  HSTRING string; // [rsp+20h] [rbp-20h] BYREF
  double v18; // [rsp+28h] [rbp-18h] BYREF
  LARGE_INTEGER v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  char v21; // [rsp+60h] [rbp+20h] BYREF
  int v22; // [rsp+70h] [rbp+30h] BYREF
  float v23; // [rsp+78h] [rbp+38h] BYREF

  *(_OWORD *)&a2->vt = 0LL;
  v2 = 0;
  a2->bstrblobVal.pData = 0LL;
  v3 = *(_QWORD *)a1;
  v22 = 0;
  v6 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, int *))(v3 + 48))(a1, &v22);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x18A,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
      (const char *)(unsigned int)v6,
      (int)string);
  switch ( v22 )
  {
    case 7:
      v16 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, LARGE_INTEGER *))(*(_QWORD *)a1 + 112LL))(
              a1,
              v19);
      if ( v16 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x190,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v16,
          (int)string);
      a2->vt = 21;
      a2->hVal = v19[0];
      return 0LL;
    case 8:
      v15 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, float *))(*(_QWORD *)a1 + 120LL))(
              a1,
              &v23);
      if ( v15 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19A,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v15,
          (int)string);
      v14 = v23;
      goto LABEL_22;
    case 9:
      v13 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, double *))(*(_QWORD *)a1 + 128LL))(
              a1,
              &v18);
      if ( v13 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x19F,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v13,
          (int)string);
      v14 = v18;
LABEL_22:
      a2->dblVal = v14;
      a2->vt = 5;
      return 0LL;
    case 11:
      v11 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, char *))(*(_QWORD *)a1 + 144LL))(
              a1,
              &v21);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x195,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v11,
          (int)string);
      v12 = v21 == 0;
      a2->vt = 11;
      LOBYTE(v2) = !v12;
      a2->iVal = -(v2 != 0);
      break;
    case 12:
      v8 = (*(__int64 (__fastcall **)(struct Windows::Foundation::IPropertyValue *, HSTRING *))(*(_QWORD *)a1 + 152LL))(
             a1,
             &string);
      if ( v8 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1A4,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)v8,
          (int)string);
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      inited = InitPropVariantFromString(StringRawBuffer, a2);
      if ( inited < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x1A5,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\mpcmanager\\lib\\mpcconstantmanagerclient.cpp",
          (const char *)(unsigned int)inited,
          (int)string);
      break;
    default:
      return 2147942487LL;
  }
  return 0LL;
}
