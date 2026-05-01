/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::_scalar_deleting_destructor_ @ 0x1803A9C20
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1801C6D0C (--3@YAXPEAX_K@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  char *v4; // rcx
  __int64 v5; // rcx

  v4 = (char *)a1[3];
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v4);
  v5 = a1[2];
  if ( v5 )
  {
    a1[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)a1 + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
