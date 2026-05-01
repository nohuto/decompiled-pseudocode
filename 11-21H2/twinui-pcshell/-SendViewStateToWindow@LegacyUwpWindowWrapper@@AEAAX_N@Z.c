/*
 * XREFs of ?SendViewStateToWindow@LegacyUwpWindowWrapper@@AEAAX_N@Z @ 0x1804046FC
 * Callers:
 *     ?v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1804049C0 (-v_OnWindowCreated@LegacyUwpWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyUwpWindowWrapper@@EEAAX_N0@Z @ 0x180404BE0 (-v_SetDesiredPosition_OnBeforePositionWindow@LegacyUwpWindowWrapper@@EEAAX_N0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000B3E0 (--1-$com_ptr_t@UISnapAssistCallback2@WindowSnapping@Shell@Internal@Windows@@Uerr_returncode_poli.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall LegacyUwpWindowWrapper::SendViewStateToWindow(LegacyUwpWindowWrapper *this, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 35) + 224LL))(*((_QWORD *)this + 35));
  v4 = *((int *)this + 74);
  if ( *((_DWORD *)this + 74) )
  {
    if ( (*((_BYTE *)this + 356) & 0x10) == 0 )
    {
      v5 = *((unsigned __int16 *)this + 256) | ((unsigned __int64)*((unsigned __int16 *)this + 258) << 16);
      v6 = *((unsigned __int16 *)this + 260) | (unsigned __int64)(unsigned int)(v2 << 17);
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 35) + 168LL))(
                       *((_QWORD *)this + 35),
                       &v8);
      (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)*v7 + 24LL))(
        *v7,
        v4,
        1LL,
        v5,
        v6);
      wil::com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>::~com_ptr_t<Windows::Internal::Shell::WindowSnapping::ISnapAssistCallback2,wil::err_returncode_policy>(&v8);
    }
  }
}
