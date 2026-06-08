/*
 * XREFs of PerfControlCpc @ 0x1C0004040
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0001A08 (PerformanceFromPercentage.c)
 *     WriteGenAddrEx @ 0x1C0002034 (WriteGenAddrEx.c)
 */

_UNKNOWN **__fastcall PerfControlCpc(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  bool v7; // zf
  unsigned int v8; // r14d
  unsigned int v9; // ebp
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a3 || a4 )
  {
    v7 = *(_BYTE *)(a1 + 125) == 0;
    result = *(_UNKNOWN ***)a2;
    v8 = *(_DWORD *)(a2 + 20);
    v9 = *(_DWORD *)(a2 + 16);
    v10 = *(_BYTE **)(a1 + 144);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
    if ( !v7 )
    {
      if ( *(_BYTE *)(a2 + 36) )
        v11 = 0LL;
      else
        v11 = *(_QWORD *)a2;
      result = (_UNKNOWN **)WriteGenAddrEx(v10 + 128, v11);
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      v12 = PerformanceFromPercentage(a1, v9);
      result = (_UNKNOWN **)WriteGenAddrEx(v10 + 152, v12);
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      v13 = PerformanceFromPercentage(a1, v8);
      result = (_UNKNOWN **)WriteGenAddrEx(v10 + 176, v13);
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      v14 = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 24));
      result = (_UNKNOWN **)WriteGenAddrEx(v10 + 200, v14);
    }
    if ( *(_BYTE *)(a1 + 128) )
      return (_UNKNOWN **)WriteGenAddrEx(v10 + 416, 255 * *(_DWORD *)(a2 + 28) / 0x64u);
  }
  return result;
}
