/*
 * XREFs of ?seekpos@?$basic_stringbuf@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MEAA?AV?$fpos@U_Mbstatet@@@2@V32@H@Z @ 0x1800F6A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall std::stringbuf::seekpos(__int64 a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // rbp
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r14
  unsigned __int64 v13; // r12
  __int64 v14; // rax

  v5 = *a3 + a3[1];
  v8 = std::streambuf::gptr(a1);
  v9 = std::streambuf::pptr(a1);
  v10 = v9;
  if ( v9 && *(_QWORD *)(a1 + 104) < v9 )
    *(_QWORD *)(a1 + 104) = v9;
  v11 = std::streambuf::eback(a1);
  v12 = v11;
  if ( v5 > *(_QWORD *)(a1 + 104) - v11 || v5 && ((a4 & 1) != 0 && !v8 || (a4 & 2) != 0 && !v10) )
  {
    *a2 = -1LL;
  }
  else
  {
    v13 = v11 + v5;
    if ( (a4 & 1) != 0 && v8 )
      std::streambuf::setg(a1, v11, v11 + v5, *(_QWORD *)(a1 + 104));
    if ( (a4 & 2) != 0 && v10 )
    {
      v14 = std::streambuf::epptr(a1);
      std::streambuf::setp(a1, v12, v13, v14);
    }
    *a2 = v5;
  }
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
