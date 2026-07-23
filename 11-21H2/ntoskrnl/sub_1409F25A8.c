/*
 * XREFs of sub_1409F25A8 @ 0x1409F25A8
 * Callers:
 *     sub_1409EEA80 @ 0x1409EEA80 (sub_1409EEA80.c)
 * Callees:
 *     sub_140363220 @ 0x140363220 (sub_140363220.c)
 */

__int64 __fastcall sub_1409F25A8(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rbx
  ULONG v6; // eax
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 result; // rax

  v3 = a3;
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 36) = sub_140363220(0);
  v6 = 10 * a2 / DesiredTime;
  *(_DWORD *)(a1 + 8) = v6;
  v7 = *(_DWORD *)(a1 + 8) == 0;
  *(_DWORD *)(a1 + 4) = MEMORY[0xFFFFF78000000320] + ~v6;
  if ( v7 )
  {
    if ( a2 )
    {
      v8 = v3 * (DesiredTime / 0xA / a2);
      LODWORD(v3) = 0x10000000;
      if ( v8 < 0x10000000 )
        LODWORD(v3) = v8;
    }
  }
  result = (unsigned int)(4 * v3);
  *(_DWORD *)a1 = v3;
  *(_DWORD *)(a1 + 12) = result;
  return result;
}
