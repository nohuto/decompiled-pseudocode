/*
 * XREFs of sub_1800208C4 @ 0x1800208C4
 * Callers:
 *     sub_180020FA4 @ 0x180020FA4 (sub_180020FA4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800208C4(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  if ( (*(_DWORD *)(a1 + 112) & 0x22) != 2 && ((__int64 (*)(void))std::streambuf::pptr)() )
  {
    v4 = std::streambuf::pbase(a1);
    *(_QWORD *)a2 = v4;
    v5 = std::streambuf::pptr(a1);
    if ( v5 < *(_QWORD *)(a1 + 104) )
      v5 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(a2 + 8) = v5 - v4;
    v6 = std::streambuf::epptr(a1) - v4;
    goto LABEL_9;
  }
  if ( (*(_BYTE *)(a1 + 112) & 4) == 0 && std::streambuf::gptr(a1) )
  {
    v7 = std::streambuf::eback(a1);
    *(_QWORD *)a2 = v7;
    v6 = std::streambuf::egptr(a1) - v7;
    *(_QWORD *)(a2 + 8) = v6;
LABEL_9:
    *(_QWORD *)(a2 + 16) = v6;
  }
  return a2;
}
