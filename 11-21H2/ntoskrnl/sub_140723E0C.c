/*
 * XREFs of sub_140723E0C @ 0x140723E0C
 * Callers:
 *     sub_1406BC4A0 @ 0x1406BC4A0 (sub_1406BC4A0.c)
 *     sub_1406C5CA0 @ 0x1406C5CA0 (sub_1406C5CA0.c)
 *     sub_1406D7990 @ 0x1406D7990 (sub_1406D7990.c)
 *     sub_140722B40 @ 0x140722B40 (sub_140722B40.c)
 *     sub_14081A150 @ 0x14081A150 (sub_14081A150.c)
 *     sub_1409CAC10 @ 0x1409CAC10 (sub_1409CAC10.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140723E0C(unsigned __int64 a1, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edi
  const void *v5; // rsi
  unsigned __int64 v6; // rcx
  _WORD *Pool2; // rax
  unsigned int v9; // [rsp+24h] [rbp-34h]

  *(_QWORD *)a2 = 0LL;
  v9 = 0;
  v3 = 0x7FFFFFFF0000LL;
  if ( a1 < 0x7FFFFFFF0000LL )
    v3 = a1;
  v4 = *(_DWORD *)v3;
  v5 = *(const void **)(v3 + 8);
  if ( (unsigned __int16)*(_DWORD *)v3 )
  {
    if ( ((unsigned __int8)v5 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v6 = (unsigned __int64)v5 + (unsigned __int16)v4;
    if ( v6 > 0x7FFFFFFF0000LL || v6 < (unsigned __int64)v5 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  if ( (v4 & 1) != 0 || (unsigned __int16)v4 == 65534 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    Pool2 = (_WORD *)ExAllocatePool2(256LL, (unsigned __int16)v4 + 16LL, 1934976339LL);
    *(_QWORD *)a2 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = v4;
      *(_WORD *)(*(_QWORD *)a2 + 2LL) = v4;
      *(_QWORD *)(*(_QWORD *)a2 + 8LL) = *(_QWORD *)a2 + 16LL;
      if ( (_WORD)v4 )
        memmove(*(void **)(*(_QWORD *)a2 + 8LL), v5, (unsigned __int16)v4);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v9;
}
