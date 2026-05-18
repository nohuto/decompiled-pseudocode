/*
 * XREFs of sub_180020CD0 @ 0x180020CD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180020CD0(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  __int64 v9; // r13
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rdx
  __int64 v14; // r15
  int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rax

  v9 = std::streambuf::gptr(a1);
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    v10 = 0LL;
  }
  else
  {
    v11 = std::streambuf::pptr(a1);
    v10 = v11;
    if ( v11 && *(_QWORD *)(a1 + 104) < v11 )
      *(_QWORD *)(a1 + 104) = v11;
  }
  v12 = std::streambuf::eback(a1);
  v13 = *(_QWORD *)(a1 + 104) - v12;
  v14 = v12;
  if ( !a4 )
  {
    v16 = 0LL;
    goto LABEL_21;
  }
  v15 = a4 - 1;
  if ( !v15 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( !v9 && v12 )
          goto LABEL_34;
        v17 = v9;
      }
      else
      {
        if ( (a5 & 2) == 0 || !v10 && v12 )
          goto LABEL_34;
        v17 = v10;
      }
      v16 = v17 - v14;
      goto LABEL_21;
    }
LABEL_34:
    *a2 = -1LL;
    goto LABEL_35;
  }
  if ( v15 != 1 )
    goto LABEL_34;
  v16 = *(_QWORD *)(a1 + 104) - v12;
LABEL_21:
  v18 = v16 + a3;
  if ( v16 + a3 > v13 || v18 && ((a5 & 1) != 0 && !v9 || (a5 & 2) != 0 && !v10) )
    goto LABEL_34;
  if ( (a5 & 1) != 0 && v9 )
    std::streambuf::setg(a1, v14, v14 + v18, *(_QWORD *)(a1 + 104));
  if ( (a5 & 2) != 0 && v10 )
  {
    v19 = std::streambuf::epptr(a1);
    std::streambuf::setp(a1, v14, v14 + v18, v19);
  }
  *a2 = v18;
LABEL_35:
  a2[1] = 0LL;
  a2[2] = 0LL;
  return a2;
}
