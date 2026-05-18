/*
 * XREFs of sub_18002F42C @ 0x18002F42C
 * Callers:
 *     sub_18002DAC0 @ 0x18002DAC0 (sub_18002DAC0.c)
 * Callees:
 *     sub_180031670 @ 0x180031670 (sub_180031670.c)
 *     sub_1800320DC @ 0x1800320DC (sub_1800320DC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18002F42C(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // rbx
  unsigned __int16 v12; // ax
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
  sub_180031670(v14, a1);
  if ( v14[8] )
  {
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) != 0x40 )
    {
      while ( v7 )
      {
        v8 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v9 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        if ( (unsigned __int16)std::wstreambuf::sputc(v8, v9) == 0xFFFF )
        {
          v6 = 4;
          goto LABEL_13;
        }
        --v7;
      }
    }
    v10 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
    if ( std::wstreambuf::sputn(v10, a2, a3) == a3 )
    {
LABEL_13:
      while ( v7 )
      {
        v11 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        v12 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
        if ( (unsigned __int16)std::wstreambuf::sputc(v11, v12) == 0xFFFF )
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
  std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v6, 0LL);
  sub_1800320DC(v14);
  return a1;
}
