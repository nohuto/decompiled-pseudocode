/*
 * XREFs of EtwpFinalizeRelogFileHeaderStats @ 0x1801230A0
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x180090B9C (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFinalizeRelogFileHeaderStats(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r11d
  unsigned __int16 v8; // r9
  int v9; // ebp
  bool v10; // zf
  __int64 v11; // rax

  v5 = 0LL;
  v7 = 72;
  if ( *(_DWORD *)(a2 + 48) <= 0x48u )
    return 0LL;
  while ( v7 <= a3 )
  {
    if ( (unsigned __int64)v7 + 312 > a3 )
      break;
    if ( (unsigned int)v5 >= *(_DWORD *)(a1 + 480) )
      break;
    v8 = *(_WORD *)(v7 + a2 + 4);
    if ( v8 < 0x138u )
      break;
    v9 = a4 + *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12 * v5);
    *(_DWORD *)(v7 + a2 + 68) = v9;
    *(_DWORD *)(v7 + a2 + 80) += *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12 * v5 + 4);
    *(_DWORD *)(v7 + a2 + 308) += a5 + *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12 * v5 + 8);
    if ( !(_DWORD)v5 )
    {
      v10 = (*(_DWORD *)(v7 + a2 + 64) & 0x100000) == 0;
      *(_DWORD *)(v7 + a2 + 68) = v9 + 1;
      if ( v10 )
      {
        *(_QWORD *)(v7 + a2 + 48) = *(_QWORD *)(a1 + 360);
      }
      else
      {
        v11 = MEMORY[0x7FFE0014];
        *(_DWORD *)(v7 + a2 + 64) &= ~0x100000u;
        *(_QWORD *)(v7 + a2 + 48) = v11;
        v8 = *(_WORD *)(v7 + a2 + 4);
      }
    }
    v5 = (unsigned int)(v5 + 1);
    v7 += (v8 + 7) & 0xFFFFFFF8;
    if ( v7 >= *(_DWORD *)(a2 + 48) )
      return 0LL;
  }
  return 3221225485LL;
}
