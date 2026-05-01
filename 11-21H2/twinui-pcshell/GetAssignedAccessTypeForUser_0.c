/*
 * XREFs of GetAssignedAccessTypeForUser_0 @ 0x1801077B4
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x18010778C (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ??1?$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ @ 0x180030DBC (--1-$CComPtr@UIWICImagingFactory@@@ATL@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x1801078B4 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180107A24 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x180107B8C (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180107DDC (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180188B1C (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180188D28 (--3@YAXPEAX@Z.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x1805F44D0 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1805F46B8 (-GetAssignedAccessTypeForUserWithGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEB.c)
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1805F47D8 (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser_0(
        unsigned __int16 *a1,
        char a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  _DWORD *v6; // rdi
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edi
  int AssignedAccessTypeForUserWithoutGroup; // eax
  __int64 v14[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = operator new(0x20uLL);
  v6[7] = 0;
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)v6 + 1) = 0LL;
  *((_QWORD *)v6 + 2) = 0LL;
  v6[6] = 0;
  if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize((Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)v6) )
  {
    v8 = 0LL;
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(v6);
    operator delete(v6);
    goto LABEL_13;
  }
  v8 = v6;
  if ( !v6 )
  {
LABEL_13:
    v11 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29,
      (__int64)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
      (const char *)0x8000FFFFLL);
    goto LABEL_7;
  }
  v15[0] = v6;
  v15[1] = a1;
  if ( (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
                          v7,
                          v15)
    || (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___(
                          v9,
                          v6)
    || (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___(
                          v10,
                          v6) )
  {
    Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v14);
    if ( a2 )
      AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
                                                (Windows::Internal::AssignedAccess::AAManagerHelper *)v14,
                                                a1,
                                                a3);
    else
      AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithGroup(
                                                (Windows::Internal::AssignedAccess::AAManagerHelper *)v14,
                                                a1,
                                                a3);
    v11 = AssignedAccessTypeForUserWithoutGroup;
    if ( AssignedAccessTypeForUserWithoutGroup >= 0 )
      v11 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x31,
        (__int64)"shellcommondesktopbase\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
        (const char *)(unsigned int)AssignedAccessTypeForUserWithoutGroup);
    ATL::CComPtr<IWICImagingFactory>::~CComPtr<IWICImagingFactory>(v14);
  }
  else
  {
    *(_DWORD *)a3 = 0;
    v11 = 0;
  }
LABEL_7:
  if ( v8 )
  {
    if ( *(_QWORD *)v8 )
    {
      CoTaskMemFree(*(LPVOID *)v8);
      *(_QWORD *)v8 = 0LL;
    }
    *((_QWORD *)v8 + 1) = 0LL;
    *((_QWORD *)v8 + 2) = 0LL;
    operator delete(v8);
  }
  return v11;
}
