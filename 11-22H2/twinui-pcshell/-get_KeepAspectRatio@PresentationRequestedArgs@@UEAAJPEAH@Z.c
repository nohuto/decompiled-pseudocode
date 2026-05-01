/*
 * XREFs of ?get_KeepAspectRatio@PresentationRequestedArgs@@UEAAJPEAH@Z @ 0x1803A5C40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall PresentationRequestedArgs::get_KeepAspectRatio(PresentationRequestedArgs *this, int *a2)
{
  int v2; // ebx
  __int64 result; // rax
  char v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 7) + 112LL))(*((_QWORD *)this + 7), &v5);
  if ( (int)result >= 0 )
  {
    LOBYTE(v2) = v5 != 0;
    result = 0LL;
    *a2 = v2;
  }
  return result;
}
