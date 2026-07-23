/*
 * XREFs of sub_1407F7238 @ 0x1407F7238
 * Callers:
 *     sub_1407F71B0 @ 0x1407F71B0 (sub_1407F71B0.c)
 * Callees:
 *     sub_14025F6B0 @ 0x14025F6B0 (sub_14025F6B0.c)
 *     sub_140375EAC @ 0x140375EAC (sub_140375EAC.c)
 */

unsigned __int64 __fastcall sub_1407F7238(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5)
{
  char v5; // r15
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  unsigned __int64 v9; // rdi
  __int64 v10; // rsi
  unsigned int v11; // eax

  v5 = a3;
  v6 = a2;
  v7 = a4;
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 8LL * a3 + 16736) + 48LL) >= a2 )
  {
    v9 = a5;
    if ( a5 < a5 + 80 )
    {
      v10 = 80LL;
      do
      {
        if ( !v6 )
          break;
        *(_QWORD *)v9 = ((unsigned __int64)(v5 & 0xF) << 12) | sub_140375EAC(v7) & 0xFFFFFFFFFFFF0FFFuLL;
        v11 = sub_14025F6B0(a1, (unsigned __int64 *)v9, v6, 0x29u);
        *(_DWORD *)(v9 + 8) = v11;
        if ( (unsigned __int64)v11 * (v10 >> 4) < v6 )
          break;
        v6 -= v11;
        v9 += 16LL;
        v10 -= 16LL;
      }
      while ( v9 < a5 + 80 );
    }
  }
  return v6;
}
