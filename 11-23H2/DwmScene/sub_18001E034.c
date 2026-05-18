/*
 * XREFs of sub_18001E034 @ 0x18001E034
 * Callers:
 *     sub_18001E018 @ 0x18001E018 (sub_18001E018.c)
 * Callees:
 *     sub_18001E458 @ 0x18001E458 (sub_18001E458.c)
 *     sub_18001E624 @ 0x18001E624 (sub_18001E624.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001E034(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rdx
  _BYTE v14[40]; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= a3 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - a3;
  }
  sub_18001E458(v14, a1);
  if ( v14[8] )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v7 )
      {
        v8 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v9) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        if ( (unsigned int)std::streambuf::sputc(v8, v9) == -1 )
        {
          v6 = 4;
          goto LABEL_13;
        }
        --v7;
      }
    }
    v10 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::streambuf::sputn(v10, a2, a3) == a3 )
    {
LABEL_13:
      while ( v7 )
      {
        v11 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v12) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        if ( (unsigned int)std::streambuf::sputc(v11, v12) == -1 )
          goto LABEL_16;
        --v7;
      }
    }
    else
    {
LABEL_16:
      v6 |= 4u;
    }
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v6 = 4;
  }
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v6, 0LL);
  sub_18001E624(v14);
  return a1;
}
