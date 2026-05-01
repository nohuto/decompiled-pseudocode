/*
 * XREFs of ?SendViewStateToWindow@LegacyWindowWrapper@@AEAAX_N@Z @ 0x1804DBD20
 * Callers:
 *     ?v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z @ 0x1804DBFE0 (-v_OnWindowCreated@LegacyWindowWrapper@@EEAAXW4WindowCreatedType@@@Z.c)
 *     ?v_SetDesiredPosition_OnBeforePositionWindow@LegacyWindowWrapper@@EEAAX_N0@Z @ 0x1804DC2E0 (-v_SetDesiredPosition_OnBeforePositionWindow@LegacyWindowWrapper@@EEAAX_N0@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18000D700 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall LegacyWindowWrapper::SendViewStateToWindow(LegacyWindowWrapper *this, unsigned __int8 a2)
{
  int v2; // ebx
  __int64 v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 216LL))(*((_QWORD *)this + 36));
  v4 = *((int *)this + 76);
  if ( *((_DWORD *)this + 76) )
  {
    if ( (*((_BYTE *)this + 364) & 0x10) == 0 )
    {
      v5 = *((unsigned __int16 *)this + 260) | ((unsigned __int64)*((unsigned __int16 *)this + 262) << 16);
      v6 = *((unsigned __int16 *)this + 264) | (unsigned __int64)(unsigned int)(v2 << 17);
      v7 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 36) + 160LL))(
                       *((_QWORD *)this + 36),
                       &v8);
      (*(void (__fastcall **)(_QWORD, __int64, __int64, unsigned __int64, unsigned __int64))(*(_QWORD *)*v7 + 24LL))(
        *v7,
        v4,
        1LL,
        v5,
        v6);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v8);
    }
  }
}
