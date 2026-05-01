/*
 * XREFs of ?underflow@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAAHXZ @ 0x1801B09E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::stringbuf::underflow(__int64 a1)
{
  unsigned __int8 *v2; // rbx
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rsi
  __int64 v6; // rbx
  __int64 v7; // rax

  v2 = (unsigned __int8 *)std::streambuf::gptr(a1);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  if ( (unsigned __int64)v2 < std::streambuf::egptr(a1) )
    return *v2;
  v3 = std::streambuf::pptr(a1);
  if ( !v3 || (*(_BYTE *)(a1 + 112) & 4) != 0 )
    return 0xFFFFFFFFLL;
  v4 = *(_QWORD *)(a1 + 104);
  if ( v4 < v3 )
    v4 = v3;
  if ( v4 <= (unsigned __int64)v2 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 104) = v4;
  v6 = std::streambuf::gptr(a1);
  v7 = std::streambuf::eback(a1);
  std::streambuf::setg(a1, v7, v6, v4);
  return *(unsigned __int8 *)std::streambuf::gptr(a1);
}
