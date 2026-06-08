/*
 * XREFs of PerfControlCpcSingleRegister @ 0x1C0009070
 * Callers:
 *     <none>
 * Callees:
 *     PerformanceFromPercentage @ 0x1C0001978 (PerformanceFromPercentage.c)
 *     WriteIoMemRawEx @ 0x1C0001BF8 (WriteIoMemRawEx.c)
 *     ReadIoMemRawEx @ 0x1C00027F8 (ReadIoMemRawEx.c)
 */

_UNKNOWN **__fastcall PerfControlCpcSingleRegister(__int64 a1, __int64 a2, char a3, char a4)
{
  _UNKNOWN **result; // rax
  __int64 v7; // r14
  unsigned int v8; // r15d
  unsigned int v9; // ebp
  _BYTE *v10; // rbx
  __int64 IoMemRaw; // r11
  unsigned __int8 v12; // cl
  unsigned __int64 v13; // rax
  char v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned __int64 v17; // rax
  char v18; // r9
  __int64 v19; // r10
  __int64 v20; // r11
  unsigned __int64 v21; // rax
  char v22; // r9
  __int64 v23; // r10
  __int64 v24; // r11
  unsigned __int8 v25; // cl
  unsigned int v26; // r8d
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( a3 || a4 )
  {
    v7 = a1 + 152;
    v8 = *(_DWORD *)(a2 + 20);
    v9 = *(_DWORD *)(a2 + 16);
    v10 = *(_BYTE **)(a1 + 144);
    *(_QWORD *)(a1 + 80) = *(_QWORD *)a2;
    IoMemRaw = ReadIoMemRawEx(a1 + 152);
    if ( *(_BYTE *)(a1 + 125) )
    {
      v12 = v10[129];
      if ( *(_BYTE *)(a2 + 36) )
      {
        if ( v12 < 0x40u || v10[130] )
          IoMemRaw &= ~(((1LL << v12) - 1) << v10[130]);
        else
          IoMemRaw = 0LL;
      }
      else if ( v12 < 0x40u || v10[130] )
      {
        IoMemRaw = IoMemRaw & ~(((1LL << v12) - 1) << v10[130]) | (((1LL << v12) - 1) << v10[130]) & (*(_QWORD *)a2 << v10[130]);
      }
      else
      {
        IoMemRaw = *(_QWORD *)a2;
      }
    }
    if ( *(_BYTE *)(a1 + 126) )
    {
      if ( v10[153] < 0x40u || v10[154] )
      {
        v13 = PerformanceFromPercentage(a1, v9);
        IoMemRaw = v16 & ~v15 | v15 & (v13 << v14);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, v9);
      }
    }
    if ( *(_BYTE *)(a1 + 127) )
    {
      if ( v10[177] < 0x40u || v10[178] )
      {
        v17 = PerformanceFromPercentage(a1, v8);
        IoMemRaw = v20 & ~v19 | v19 & (v17 << v18);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, v8);
      }
    }
    if ( *(_BYTE *)(a1 + 130) )
    {
      if ( v10[201] < 0x40u || v10[202] )
      {
        v21 = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 24));
        IoMemRaw = v24 & ~v23 | v23 & (v21 << v22);
      }
      else
      {
        IoMemRaw = PerformanceFromPercentage(a1, *(_DWORD *)(a2 + 24));
      }
    }
    if ( *(_BYTE *)(a1 + 128) )
    {
      v25 = v10[417];
      v26 = 255 * *(_DWORD *)(a2 + 28) / 0x64u;
      if ( v25 < 0x40u || v10[418] )
        IoMemRaw = IoMemRaw & ~(((1LL << v25) - 1) << v10[418]) | (((1LL << v25) - 1) << v10[418]) & ((unsigned __int64)v26 << v10[418]);
      else
        IoMemRaw = v26;
    }
    return (_UNKNOWN **)WriteIoMemRawEx(v7, IoMemRaw);
  }
  return result;
}
