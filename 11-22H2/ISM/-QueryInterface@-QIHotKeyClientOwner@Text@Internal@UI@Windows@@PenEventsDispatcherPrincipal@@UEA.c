/*
 * XREFs of ?QueryInterface@?QIHotKeyClientOwner@Text@Internal@UI@Windows@@PenEventsDispatcherPrincipal@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801BD760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall _QueryInterface__QIHotKeyClientOwner_Text_Internal_UI_Windows__PenEventsDispatcherPrincipal__UEAAJAEBU_GUID__PEAPEAX_Z(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  void (__fastcall ***v7)(__int64); // rdi
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  v7 = (void (__fastcall ***)(__int64))(a1 - 56);
  v8 = *a2 - *(_QWORD *)&GUID_0ba2f71b_20b8_5ab8_98b9_48331301ecdf.Data1;
  if ( *a2 == *(_QWORD *)&GUID_0ba2f71b_20b8_5ab8_98b9_48331301ecdf.Data1 )
    v8 = a2[1] - *(_QWORD *)GUID_0ba2f71b_20b8_5ab8_98b9_48331301ecdf.Data4;
  if ( !v8 )
  {
    (*v7[2])((__int64)(v7 + 2));
    *a3 = a1 & -(__int64)(v7 != 0LL);
    return 0LL;
  }
  v9 = *a2 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *a2 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v9 = a2[1] - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v9 )
  {
    v10 = *a2 - *(_QWORD *)&GUID_df95c51d_213d_f89c_06cb_1bab425b7455.Data1;
    if ( *a2 == *(_QWORD *)&GUID_df95c51d_213d_f89c_06cb_1bab425b7455.Data1 )
      v10 = a2[1] - *(_QWORD *)GUID_df95c51d_213d_f89c_06cb_1bab425b7455.Data4;
    if ( v10 )
      goto LABEL_16;
  }
  if ( a1 == 56 )
  {
LABEL_16:
    *a3 = 0LL;
    return (unsigned int)-2147467262;
  }
  *a3 = (__int64)(v7 + 1);
  if ( a1 == 48 )
    return (unsigned int)-2147467262;
  (**v7)(a1 - 56);
  return v3;
}
