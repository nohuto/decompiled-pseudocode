/*
 * XREFs of ?QueryInterface@CursorManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180183920
 * Callers:
 *     ?QueryInterface@CursorManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C030 (-QueryInterface@CursorManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CursorManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007C050 (-QueryInterface@CursorManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     IsEqualGUID @ 0x180022FE0 (IsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800334B8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CursorManager::QueryInterface(CursorManager *this, struct _GUID *a2, void **a3)
{
  _QWORD *v6; // r8
  unsigned __int64 v7; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x85,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputhost\\components\\cursor\\manager\\cursormanager.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( IsEqualGUID(a2, &GUID_f40c54d9_03bb_449c_83a5_6796bd8f9dc5) )
  {
    (*(void (__fastcall **)(CursorManager *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 8;
LABEL_7:
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return 0LL;
  }
  if ( IsEqualGUID(v6, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    (*(void (__fastcall **)(CursorManager *))(*(_QWORD *)this + 8LL))(this);
    v7 = (unsigned __int64)this + 16;
    goto LABEL_7;
  }
  return 2147500034LL;
}
