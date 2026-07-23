/*
 * XREFs of sub_14024A390 @ 0x14024A390
 * Callers:
 *     FsRtlUninitializeOplock @ 0x14023A260 (FsRtlUninitializeOplock.c)
 *     sub_14024A5B4 @ 0x14024A5B4 (sub_14024A5B4.c)
 *     sub_140256F58 @ 0x140256F58 (sub_140256F58.c)
 *     sub_1402A30D0 @ 0x1402A30D0 (sub_1402A30D0.c)
 *     sub_1402A4E10 @ 0x1402A4E10 (sub_1402A4E10.c)
 *     sub_140376950 @ 0x140376950 (sub_140376950.c)
 *     sub_14039F3B0 @ 0x14039F3B0 (sub_14039F3B0.c)
 *     sub_1404173E4 @ 0x1404173E4 (sub_1404173E4.c)
 *     sub_140542458 @ 0x140542458 (sub_140542458.c)
 *     sub_14092E8CC @ 0x14092E8CC (sub_14092E8CC.c)
 *     sub_14092EA08 @ 0x14092EA08 (sub_14092EA08.c)
 * Callees:
 *     sub_14024A468 @ 0x14024A468 (sub_14024A468.c)
 *     sub_1402ACD80 @ 0x1402ACD80 (sub_1402ACD80.c)
 */

__int64 __fastcall sub_14024A390(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rdi
  unsigned int CurrentThread; // ebp
  __int64 v7; // rcx
  int v8; // r9d
  _QWORD *i; // rdi
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v4 = a2;
  if ( (_BYTE)a3 )
  {
    CurrentThread = (unsigned int)KeGetCurrentThread();
    v7 = *(_QWORD *)(a1 + 24);
    if ( v7 )
    {
      v8 = a1 + 144;
    }
    else if ( !a2 || (v7 = *(_QWORD *)(a2 + 40), v8 = a2 + 48, !v7) )
    {
      for ( i = *(_QWORD **)(a1 + 72); i != (_QWORD *)(a1 + 72); i = (_QWORD *)*i )
        result = sub_14024A468(i[5], CurrentThread, (int)a1 + 32, (int)i + 48, a1);
      return result;
    }
    return sub_14024A468(v7, CurrentThread, (int)a1 + 32, v8, a1);
  }
  if ( a2 )
  {
    result = *(unsigned int *)(a2 + 48);
    if ( (result & 0x20) != 0 )
    {
      v10 = *(_QWORD *)(a2 + 40);
      LOBYTE(a3) = 1;
      LOBYTE(a2) = 1;
      result = sub_1402ACD80(v10, a2, a3, a1);
      *(_DWORD *)(v4 + 48) &= ~0x20u;
    }
  }
  else
  {
    result = *(unsigned int *)(a1 + 144);
    if ( (result & 0x20) != 0 )
    {
      LOBYTE(a3) = 1;
      LOBYTE(a2) = 1;
      result = sub_1402ACD80(*(_QWORD *)(a1 + 24), a2, a3, a1);
      *(_DWORD *)(a1 + 144) &= ~0x20u;
    }
  }
  return result;
}
