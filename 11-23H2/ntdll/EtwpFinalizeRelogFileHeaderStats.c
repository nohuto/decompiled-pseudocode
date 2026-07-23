/*
 * XREFs of EtwpFinalizeRelogFileHeaderStats @ 0x18012628C
 * Callers:
 *     EtwpFinalizeLogFileHeader @ 0x18005B754 (EtwpFinalizeLogFileHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFinalizeRelogFileHeaderStats(__int64 a1, __int64 a2, unsigned int a3, int a4, int a5)
{
  __int64 v5; // rbx
  unsigned int v7; // r11d
  int v8; // r9d
  bool v9; // zf
  __int64 v10; // rax

  v5 = 0LL;
  v7 = 72;
  if ( *(_DWORD *)(a2 + 48) <= 0x48u )
    return 0LL;
  while ( v7 <= a3
       && (unsigned __int64)v7 + 312 <= a3
       && (unsigned int)v5 < *(_DWORD *)(a1 + 480)
       && *(_WORD *)(v7 + a2 + 4) >= 0x138u )
  {
    v8 = a4 + *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12 * v5);
    *(_DWORD *)(v7 + a2 + 68) = v8;
    *(_DWORD *)(v7 + a2 + 80) += *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12 * v5 + 4);
    *(_DWORD *)(v7 + a2 + 308) += a5 + *(_DWORD *)(*(_QWORD *)(a1 + 496) + 12 * v5 + 8);
    if ( !(_DWORD)v5 )
    {
      v9 = (*(_DWORD *)(v7 + a2 + 64) & 0x100000) == 0;
      *(_DWORD *)(v7 + a2 + 68) = v8 + 1;
      if ( v9 )
      {
        v10 = *(_QWORD *)(a1 + 360);
      }
      else
      {
        v10 = MEMORY[0x7FFE0014];
        *(_DWORD *)(v7 + a2 + 64) &= ~0x100000u;
      }
      *(_QWORD *)(v7 + a2 + 48) = v10;
    }
    v5 = (unsigned int)(v5 + 1);
    v7 += (*(unsigned __int16 *)(v7 + a2 + 4) + 7) & 0xFFFFFFF8;
    if ( v7 >= *(_DWORD *)(a2 + 48) )
      return 0LL;
  }
  return 3221225485LL;
}
