/*
 * XREFs of sub_180020470 @ 0x180020470
 * Callers:
 *     sub_1800CCB34 @ 0x1800CCB34 (sub_1800CCB34.c)
 *     sub_1800CCC14 @ 0x1800CCC14 (sub_1800CCC14.c)
 *     sub_1800CCE04 @ 0x1800CCE04 (sub_1800CCE04.c)
 *     sub_1800CF0F4 @ 0x1800CF0F4 (sub_1800CF0F4.c)
 *     sub_1800CF1C0 @ 0x1800CF1C0 (sub_1800CF1C0.c)
 * Callees:
 *     sub_18001E458 @ 0x18001E458 (sub_18001E458.c)
 *     sub_18001E624 @ 0x18001E624 (sub_18001E624.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180020470(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  char v14; // [rsp+28h] [rbp-20h]

  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( *(_BYTE *)(a2 + v5) );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - v5;
  }
  sub_18001E458((__int64)&v13, a1);
  if ( v14 )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v6 > 0 )
      {
        v7 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v8) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        if ( (unsigned int)std::streambuf::sputc(v7, v8) == -1 )
        {
          v4 = 4;
          goto LABEL_19;
        }
        --v6;
      }
    }
    v9 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::streambuf::sputn(v9, a2, v5) == v5 )
    {
      while ( v6 > 0 )
      {
        v10 = std::ios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        LOBYTE(v11) = std::ios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        if ( (unsigned int)std::streambuf::sputc(v10, v11) == -1 )
          goto LABEL_18;
        --v6;
      }
    }
    else
    {
LABEL_18:
      v4 = 4;
    }
LABEL_19:
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
  std::ios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v4, 0LL);
  sub_18001E624(&v13);
  return a1;
}
