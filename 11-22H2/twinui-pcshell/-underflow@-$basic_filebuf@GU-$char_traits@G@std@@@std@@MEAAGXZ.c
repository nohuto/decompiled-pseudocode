/*
 * XREFs of ?underflow@?$basic_filebuf@GU?$char_traits@G@std@@@std@@MEAAGXZ @ 0x1806E50E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall std::basic_filebuf<unsigned short>::underflow(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax
  unsigned __int16 v4; // bx

  if ( std::basic_streambuf<unsigned short>::gptr(a1) )
  {
    v2 = std::basic_streambuf<unsigned short>::egptr(a1);
    if ( std::basic_streambuf<unsigned short>::gptr(a1) < v2 )
      return *(unsigned __int16 *)std::basic_streambuf<unsigned short>::gptr(a1);
  }
  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 56LL))(a1);
  result = 0xFFFFLL;
  if ( v4 != 0xFFFF )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 32LL))(a1, v4);
    return v4;
  }
  return result;
}
