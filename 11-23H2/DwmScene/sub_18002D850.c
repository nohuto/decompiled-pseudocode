/*
 * XREFs of sub_18002D850 @ 0x18002D850
 * Callers:
 *     sub_1800344A0 @ 0x1800344A0 (sub_1800344A0.c)
 * Callees:
 *     sub_18001E5CC @ 0x18001E5CC (sub_18001E5CC.c)
 *     sub_18001F098 @ 0x18001F098 (sub_18001F098.c)
 *     sub_180031670 @ 0x180031670 (sub_180031670.c)
 *     sub_1800320DC @ 0x1800320DC (sub_1800320DC.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002D850(__int64 a1, _BYTE *a2)
{
  _BYTE *v2; // r15
  unsigned int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r12
  __int64 v9; // rbx
  unsigned __int16 v10; // ax
  __int64 v11; // rbx
  __int64 v12; // rdx
  unsigned __int16 v13; // ax
  __int16 v14; // ax
  int v15; // ecx
  __int64 v16; // rbx
  unsigned __int16 v17; // ax
  _BYTE v19[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-38h] BYREF

  v2 = a2;
  v4 = 0;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  if ( std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= 0
    || std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) <= v5 )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) - v5;
  }
  sub_180031670(v19, a1);
  if ( v19[8] )
  {
    v7 = std::ios_base::getloc(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v20);
    v8 = sub_18001F098(v7);
    sub_18001E5CC((__int64)v20);
    if ( (std::ios_base::flags((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL))) & 0x1C0) == 0x40 )
      goto LABEL_13;
    while ( v6 > 0 )
    {
      v9 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v10 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      if ( (unsigned __int16)std::wstreambuf::sputc(v9, v10) == 0xFFFF )
      {
LABEL_21:
        v4 = 4;
        goto LABEL_22;
      }
      --v6;
    }
LABEL_13:
    while ( v5 > 0 )
    {
      v11 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      LOBYTE(v12) = *v2;
      v13 = std::ctype<wchar_t>::widen(v8, v12);
      v14 = std::wstreambuf::sputc(v11, v13);
      v15 = v4 | 4;
      if ( v14 != -1 )
        v15 = v4;
      v4 = v15;
      --v5;
      ++v2;
      if ( v15 )
        goto LABEL_22;
    }
    while ( v6 > 0 )
    {
      v16 = std::wios::rdbuf(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      v17 = std::wios::fill(a1 + *(int *)(*(_QWORD *)a1 + 4LL));
      if ( (unsigned __int16)std::wstreambuf::sputc(v16, v17) == 0xFFFF )
        goto LABEL_21;
      --v6;
    }
LABEL_22:
    std::ios_base::width((std::ios_base *)(a1 + *(int *)(*(_QWORD *)a1 + 4LL)), 0LL);
  }
  else
  {
    v4 = 4;
  }
  std::wios::setstate(a1 + *(int *)(*(_QWORD *)a1 + 4LL), v4, 0LL);
  sub_1800320DC(v19);
  return a1;
}
