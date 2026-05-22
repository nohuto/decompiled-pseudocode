/*
 * XREFs of ?ShareBuffer@SipcEndpoint@@UEAAJPEAX@Z @ 0x180129460
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag0@details@wil@@YAXJ@Z @ 0x1801263D4 (-Return_Hr@in1diag0@details@wil@@YAXJ@Z.c)
 */

__int64 __fastcall SipcEndpoint::ShareBuffer(SipcEndpoint *this, __int64 a2, __int64 a3, __int64 a4)
{
  if ( *((_DWORD *)this + 15) == 2 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 1) + 64LL))(*((_QWORD *)this + 1), a2);
  wil::details::in1diag0::Return_Hr((wil::details::in1diag0 *)0x80070005LL, a2, a3, a4);
  return 2147942405LL;
}
