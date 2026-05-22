/*
 * XREFs of ?ProcessVisibilityChangedNotification@CursorNotificationProcessor@@AEAAJ_N@Z @ 0x180043F34
 * Callers:
 *     ?OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z @ 0x180043E9C (-OnMitMessageReceived@CursorNotificationProcessor@@AEAAJAEBU_MIT_CURSOR_MANAGEMENT_MESSAGE@@H@Z.c)
 * Callees:
 *     ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x180043FB8 (-CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044BD0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorNotificationProcessor::ProcessVisibilityChangedNotification(
        CursorNotificationProcessor *this,
        char a2)
{
  __int64 v4; // r9
  bool v5; // di
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  _BYTE v10[4]; // [rsp+30h] [rbp-48h] BYREF
  int v11; // [rsp+34h] [rbp-44h] BYREF
  char v12; // [rsp+40h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  memset_0(v10, 0, 0x40uLL);
  LOBYTE(v4) = 1;
  v5 = (*(int (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(**(_QWORD **)this + 72LL))(
         *(_QWORD *)this,
         0LL,
         1LL,
         v4) >= 0;
  if ( !CursorNotificationProcessor::CheckAndEnsureCursorManagerClient(this) )
    return 0LL;
  if ( !v5 )
    return 0LL;
  v7 = *((_QWORD *)this + 1);
  v10[0] = 3;
  v12 = a2;
  v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *, __int64))(*(_QWORD *)v7 + 184LL))(
         v7,
         *((_QWORD *)this + 2),
         v10,
         64LL);
  v9 = v8;
  if ( v8 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x104,
    (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\cursornoti"
                  "ficationprocessor.cpp",
    (const char *)(unsigned int)v8,
    (int)&v11);
  return v9;
}
