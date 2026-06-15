/*
 * XREFs of GetAssignedAccessTypeForUser_0 @ 0x180041DB4
 * Callers:
 *     GetAssignedAccessTypeForUser @ 0x180041D88 (GetAssignedAccessTypeForUser.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___ @ 0x1800420D0 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_47c177c364e43.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___ @ 0x180042300 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_49fe318f7c954.c)
 *     Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___ @ 0x180042530 (Windows--Internal--AssignedAccess--AssignedAccessConfigStoreHelper--FindIf__lambda_e4f37fdae0842.c)
 *     ?Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ @ 0x180042D30 (-Initialize@AssignedAccessConfigStoreHelper@AssignedAccess@Internal@Windows@@AEAA_NXZ.c)
 *     ??0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ @ 0x180043130 (--0AAManagerHelper@AssignedAccess@Internal@Windows@@QEAA@XZ.c)
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1800432AC (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall GetAssignedAccessTypeForUser_0(
        unsigned __int16 *a1,
        __int64 a2,
        enum Windows::Internal::AssignedAccess::AssignedAccessType *a3)
{
  HANDLE ProcessHeap; // rax
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *v6; // rax
  unsigned int v7; // ebx
  Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *v8; // rdi
  __int64 v9; // rcx
  HANDLE v10; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  int AssignedAccessTypeForUserWithoutGroup; // eax
  unsigned int v15; // esi
  HANDLE v16; // rax
  _QWORD v17[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v18[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  ProcessHeap = GetProcessHeap();
  v6 = (Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper *)HeapAlloc(ProcessHeap, 0, 0x20uLL);
  v7 = 0;
  v8 = v6;
  if ( v6 )
  {
    *((_QWORD *)v6 + 3) = 0LL;
    *(_QWORD *)v6 = 0LL;
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 + 2) = 0LL;
    if ( !Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::Initialize(v6) )
    {
      if ( *(_QWORD *)v8 )
      {
        CoTaskMemFree(*(LPVOID *)v8);
        *(_QWORD *)v8 = 0LL;
      }
      *((_QWORD *)v8 + 1) = 0LL;
      *((_QWORD *)v8 + 2) = 0LL;
      v10 = GetProcessHeap();
      HeapFree(v10, 0, v8);
      goto LABEL_6;
    }
    v18[0] = v8;
    v18[1] = a1;
    if ( (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_e4f37fdae08429a84761ade0db4bdd38___(
                            v9,
                            v18)
      || (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_49fe318f7c95465e9283e5ab1b54dbad___(
                            v12,
                            v8)
      || (unsigned __int8)Windows::Internal::AssignedAccess::AssignedAccessConfigStoreHelper::FindIf__lambda_47c177c364e43d13bff9c3e398002cbd___(
                            v13,
                            v8) )
    {
      Windows::Internal::AssignedAccess::AAManagerHelper::AAManagerHelper((Windows::Internal::AssignedAccess::AAManagerHelper *)v17);
      AssignedAccessTypeForUserWithoutGroup = Windows::Internal::AssignedAccess::AAManagerHelper::GetAssignedAccessTypeForUserWithoutGroup(
                                                (Windows::Internal::AssignedAccess::AAManagerHelper *)v17,
                                                a1,
                                                a3);
      v15 = AssignedAccessTypeForUserWithoutGroup;
      if ( AssignedAccessTypeForUserWithoutGroup < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x33,
          (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
          (const char *)(unsigned int)AssignedAccessTypeForUserWithoutGroup);
        if ( v17[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
        if ( *(_QWORD *)v8 )
        {
          CoTaskMemFree(*(LPVOID *)v8);
          *(_QWORD *)v8 = 0LL;
        }
        *((_QWORD *)v8 + 1) = 0LL;
        *((_QWORD *)v8 + 2) = 0LL;
        v7 = v15;
        goto LABEL_23;
      }
      if ( v17[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
    }
    else
    {
      *(_DWORD *)a3 = 0;
    }
    if ( *(_QWORD *)v8 )
    {
      CoTaskMemFree(*(LPVOID *)v8);
      *(_QWORD *)v8 = 0LL;
    }
    *((_QWORD *)v8 + 2) = 0LL;
    *((_QWORD *)v8 + 1) = 0LL;
LABEL_23:
    v16 = GetProcessHeap();
    HeapFree(v16, 0, v8);
    return v7;
  }
LABEL_6:
  v7 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2B,
    (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\config\\lib\\assignedaccessconfig.cpp",
    (const char *)0x8000FFFFLL);
  return v7;
}
