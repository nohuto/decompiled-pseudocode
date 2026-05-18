/*
 * XREFs of sub_1800384B0 @ 0x1800384B0
 * Callers:
 *     sub_180031A18 @ 0x180031A18 (sub_180031A18.c)
 * Callees:
 *     sub_1800100E8 @ 0x1800100E8 (sub_1800100E8.c)
 */

__int64 __fastcall sub_1800384B0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  void *v4; // rax
  __int64 result; // rax

  if ( (*(_BYTE *)(a1 + 112) & 1) != 0 )
  {
    if ( std::wstreambuf::pptr(a1) )
      v2 = std::wstreambuf::epptr(a1);
    else
      v2 = std::wstreambuf::egptr(a1);
    v3 = (v2 - std::wstreambuf::eback(a1)) >> 1;
    v4 = (void *)std::wstreambuf::eback(a1);
    sub_1800100E8(v4, 2 * v3);
  }
  std::wstreambuf::setg(a1, 0LL, 0LL, 0LL);
  result = std::wstreambuf::setp(a1, 0LL, 0LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_DWORD *)(a1 + 112) &= ~1u;
  return result;
}
