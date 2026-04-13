/*
 * XREFs of ??R_lambda_8edc18712893764f2ff11833e5f94b18_@@QEBA@XZ @ 0x18007E764
 * Callers:
 *     ?StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z @ 0x180084290 (-StartProductInstall@AppManager@ContentManagement@@UEAAJPEAUHSTRING__@@0EE00@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003F248 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z @ 0x18007FA18 (-GenerateStoreId@StoreHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0PEAPEAU3@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall _lambda_8edc18712893764f2ff11833e5f94b18_::operator()(__int64 a1)
{
  HSTRING *v2; // r9
  int StoreId; // eax
  __int64 v4; // r9
  unsigned int v5; // ebx
  __int64 v6; // r8
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  HSTRING string; // [rsp+60h] [rbp+8h] BYREF

  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  StoreId = CreativeFramework::StoreHelpers::GenerateStoreId(
              **(HSTRING **)a1,
              **(HSTRING **)(a1 + 8),
              (HSTRING)&string,
              v2);
  v5 = StoreId;
  if ( StoreId >= 0 )
  {
    v6 = **(_QWORD **)(a1 + 48);
    LOBYTE(v4) = **(_BYTE **)(a1 + 32);
    LOBYTE(v6) = **(_BYTE **)(a1 + 24);
    v5 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64, __int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 48LL) + 112LL))(
           *(_QWORD *)(a1 + 16) + 48LL,
           string,
           v6,
           v4,
           **(_QWORD **)(a1 + 40),
           0LL,
           0LL,
           **(_QWORD **)(a1 + 48));
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x165,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\appmanager\\appmanager.cpp",
      (const char *)(unsigned int)StoreId);
  }
  WindowsDeleteString(string);
  return v5;
}
