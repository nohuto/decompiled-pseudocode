/*
 * XREFs of sub_1403AA7E0 @ 0x1403AA7E0
 * Callers:
 *     sub_1403A7B10 @ 0x1403A7B10 (sub_1403A7B10.c)
 * Callees:
 *     sub_1403A7BF0 @ 0x1403A7BF0 (sub_1403A7BF0.c)
 *     sub_1403A7C40 @ 0x1403A7C40 (sub_1403A7C40.c)
 *     sub_1403A8CB4 @ 0x1403A8CB4 (sub_1403A8CB4.c)
 *     sub_1403AA2B8 @ 0x1403AA2B8 (sub_1403AA2B8.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1403AA7E0(int a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  int v5; // eax
  int v7; // ecx
  PVOID v8; // r14
  size_t v9; // rbp
  void *v10; // rax
  _DWORD *Pool2; // rax
  _DWORD *v12; // r15

  v2 = 0;
  v3 = 0LL;
  if ( a1 )
  {
    if ( a1 == 2 )
    {
      *(_DWORD *)a2 = 8;
      *(_DWORD *)a2 = dword_140C0DFE8 + 8;
    }
    else if ( a1 == 3 )
    {
      *(_OWORD *)a2 = xmmword_140C0E070;
      *(_OWORD *)(a2 + 16) = xmmword_140C0E080;
      *(_OWORD *)(a2 + 32) = xmmword_140C0E090;
      *(_OWORD *)(a2 + 48) = xmmword_140C0E0A0;
      *(_OWORD *)(a2 + 64) = xmmword_140C0E0B0;
      *(_OWORD *)(a2 + 80) = xmmword_140C0E0C0;
      *(_OWORD *)(a2 + 96) = xmmword_140C0E0D0;
      *(_OWORD *)(a2 + 112) = xmmword_140C0E0E0;
    }
    else if ( qword_140C0DFD8 || qword_140C0DFE0 )
    {
      v8 = qword_140C0DFE0;
      v9 = (unsigned int)dword_140C0DFE8;
      if ( !qword_140C0DFE0 )
      {
        v10 = (void *)sub_1403AA2B8((unsigned int)dword_140C0DFE8);
        v3 = (__int64)v10;
        if ( !v10 )
          return (unsigned int)-1073741801;
        v8 = v10;
        memmove(v10, qword_140C0DFD8, v9);
      }
      if ( (int)v9 + 8 < (unsigned int)v9 )
      {
        v2 = -1073741675;
      }
      else
      {
        sub_1403A7BF0();
        Pool2 = (_DWORD *)ExAllocatePool2(256LL, (unsigned int)(v9 + 8), 1263093570LL);
        v12 = Pool2;
        if ( Pool2 )
        {
          *Pool2 = ((unsigned int)dword_140C0DF90 >> 23) & 1;
          Pool2[1] = 8;
          memmove(Pool2 + 2, v8, v9);
          sub_1403A7C40();
          *(_QWORD *)a2 = v12;
        }
        else
        {
          sub_1403A7C40();
          v2 = -1073741801;
        }
      }
      if ( v3 )
        sub_1403A8CB4(v3);
    }
    else
    {
      *(_QWORD *)a2 = 0LL;
    }
  }
  else
  {
    *(_OWORD *)a2 = xmmword_140C0DF70;
    *(_OWORD *)(a2 + 16) = xmmword_140C0DF80;
    *(_DWORD *)(a2 + 20) = 0;
    v5 = *(_DWORD *)(a2 + 20);
    if ( (dword_140C0DF90 & 2) != 0 )
      v5 = 1;
    *(_DWORD *)(a2 + 20) = v5;
    if ( ((BYTE2(xmmword_140C0DF20) - 1) & 0xFD) == 0 )
    {
      v7 = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(a2 + 8) = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(a2 + 12) = v7;
    }
    *(_DWORD *)(a2 + 28) = BYTE2(xmmword_140C0DF20);
  }
  return v2;
}
