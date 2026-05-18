/*
 * XREFs of sub_180038DB0 @ 0x180038DB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall sub_180038DB0(__int64 a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // r15
  unsigned __int64 v13; // r12
  __int64 v14; // rax

  v5 = *a3 + a3[1];
  v8 = std::wstreambuf::gptr(a1);
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    v9 = 0LL;
  }
  else
  {
    v10 = std::wstreambuf::pptr(a1);
    v9 = v10;
    if ( v10 && *(_QWORD *)(a1 + 104) < v10 )
      *(_QWORD *)(a1 + 104) = v10;
  }
  v11 = std::wstreambuf::eback(a1);
  v12 = v11;
  if ( v5 > (*(_QWORD *)(a1 + 104) - v11) >> 1 || v5 && ((a4 & 1) != 0 && !v8 || (a4 & 2) != 0 && !v9) )
  {
    *a2 = -1LL;
  }
  else
  {
    v13 = v11 + 2 * v5;
    if ( (a4 & 1) != 0 && v8 )
      std::wstreambuf::setg(a1, v11, v11 + 2 * v5, *(_QWORD *)(a1 + 104));
    if ( (a4 & 2) != 0 && v9 )
    {
      v14 = std::wstreambuf::epptr(a1);
      std::wstreambuf::setp(a1, v12, v13, v14);
    }
    *a2 = v5;
  }
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
