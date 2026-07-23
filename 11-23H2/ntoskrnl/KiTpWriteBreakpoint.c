/*
 * XREFs of KiTpWriteBreakpoint @ 0x14057F3BC
 * Callers:
 *     KiTpHandleTrap @ 0x14057F170 (KiTpHandleTrap.c)
 *     KeSetTracepoint @ 0x140975F30 (KeSetTracepoint.c)
 * Callees:
 *     KiTpWriteMemory @ 0x14057F45C (KiTpWriteMemory.c)
 *     MmWriteSystemImageTracepoint @ 0x1406438BC (MmWriteSystemImageTracepoint.c)
 */

__int64 __fastcall KiTpWriteBreakpoint(__int64 a1, __int64 a2)
{
  char v2; // si
  _BYTE *v4; // rdi
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  int *v8; // r9
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *(_BYTE *)(a1 + 50) || !VslVsmEnabled )
    goto LABEL_8;
  v4 = (_BYTE *)(a1 + 49);
  result = MmWriteSystemImageTracepoint(*(_QWORD *)(a1 + 8));
  if ( !*v4 && (int)result >= 0 )
  {
    *v4 = 1;
    return result;
  }
  if ( (_DWORD)result == -1073741637 || (_DWORD)result == -1073741667 )
  {
LABEL_8:
    v6 = *(_QWORD *)(a1 + 8);
    LOBYTE(a2) = *(_BYTE *)(a1 + 50);
    v7 = *(_QWORD *)(a1 + 16);
    if ( v2 )
    {
      v9 = 204;
      v8 = &v9;
    }
    else
    {
      v8 = (int *)(a1 + 51);
    }
    return KiTpWriteMemory(v7, a2, v6, v8);
  }
  return result;
}
