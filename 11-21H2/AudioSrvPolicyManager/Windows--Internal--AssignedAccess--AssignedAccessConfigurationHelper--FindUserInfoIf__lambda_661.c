/*
 * XREFs of Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___ @ 0x180042E2C
 * Callers:
 *     ?GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJPEBGPEAW4AssignedAccessType@234@@Z @ 0x1800432AC (-GetAssignedAccessTypeForUserWithoutGroup@AAManagerHelper@AssignedAccess@Internal@Windows@@AEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180006854 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetRangeNoThrow@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@wil@@YA?AV?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@0@PEAU?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@PEAJ@Z @ 0x1800430DC (--$GetRangeNoThrow@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@wil@@YA-AV-$vect.c)
 *     ?get_at_current@?$vector_range_nothrow@U?$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@Internal@Windows@@@Collections@Foundation@Windows@@@wil@@QEAAXI@Z @ 0x180043498 (-get_at_current@-$vector_range_nothrow@U-$IVectorView@PEAVAssignedAccessUserInfo@AssignedAccess@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180044490 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::AssignedAccess::AssignedAccessConfigurationHelper::FindUserInfoIf__lambda_661bc23c674c805837064d315685ee67___(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  __int64 v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  int v9; // ecx
  int v10; // esi
  __int64 v11; // r15
  HSTRING v12; // r14
  int (__fastcall *v13)(__int64, HSTRING *); // r13
  DWORD LastError; // edi
  PCWSTR StringRawBuffer; // rax
  char v16; // di
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  HSTRING string; // [rsp+20h] [rbp-40h] BYREF
  __int64 v21; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v22[8]; // [rsp+30h] [rbp-30h] BYREF
  int v23; // [rsp+38h] [rbp-28h]
  int *v24; // [rsp+40h] [rbp-20h]
  __int64 v25; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v27; // [rsp+A8h] [rbp+48h] BYREF
  int i; // [rsp+B8h] [rbp+58h]

  if ( a2 )
  {
    *a3 = 0LL;
    v6 = *a2;
    v21 = 0LL;
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v6 + 80))(a2, &v21);
    v8 = v7;
    if ( v7 >= 0 )
    {
      wil::GetRangeNoThrow<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>(v22, v21);
      wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::get_at_current(
        v22,
        0LL);
      v9 = v23;
      v10 = 0;
      for ( i = v23; ; v9 = i )
      {
        if ( *v24 < 0 || v10 == v9 )
        {
          v19 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
          v18 = v21;
          if ( v21 )
            goto LABEL_30;
          return 0LL;
        }
        v11 = v25;
        string = 0LL;
        if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v25 + 88LL))(v25, &v27) < 0 || v27 > 1 )
          goto LABEL_16;
        v12 = string;
        v13 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v11 + 48LL);
        if ( string )
        {
          LastError = GetLastError();
          WindowsDeleteString(v12);
          SetLastError(LastError);
        }
        string = 0LL;
        if ( v13(v11, &string) < 0
          || (StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL),
              v16 = 1,
              (unsigned int)_o__wcsicmp(*a1, StringRawBuffer)) )
        {
LABEL_16:
          v16 = 0;
        }
        if ( string )
          WindowsDeleteString(string);
        if ( v16 )
          break;
        wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<Windows::Internal::AssignedAccess::AssignedAccessUserInfo *>>::get_at_current(
          v22,
          (unsigned int)++v10);
      }
      v17 = v25;
      if ( v25 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 8LL))(v25);
        v17 = v25;
      }
      *a3 = v17;
      if ( v17 )
      {
        v25 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      }
      v18 = v21;
      if ( v21 )
LABEL_30:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v18);
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12,
        (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
        (const char *)(unsigned int)v7);
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      return v8;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF,
      (__int64)"onecoreuap\\base\\embedded\\sys\\lockdown\\inc\\assignedaccessconfigurationhelper.h",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
