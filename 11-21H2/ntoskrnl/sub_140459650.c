/*
 * XREFs of sub_140459650 @ 0x140459650
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140459650(unsigned int a1, __int64 a2, _DWORD *a3)
{
  unsigned int v6; // r9d
  unsigned __int64 v7; // rax
  __int64 v8; // rsi
  int v9; // r11d
  char v10; // bl
  char v11; // r10
  unsigned int v12; // r8d
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rax
  __int64 v15; // rdx

  *a3 = 0;
  if ( !dword_140C4A000 )
    return 3221225659LL;
  v6 = dword_140C49FF4;
  if ( a1 < 24 * dword_140C49FF4 )
    return 3221225476LL;
  v7 = __readmsr(0x1C9u);
  v8 = 0LL;
  v9 = (dword_140C49FF4 - 1) & v7;
  if ( dword_140C49FF4 )
  {
    v10 = 63 - byte_140C097A5;
    v11 = 63 - byte_140C0CAB0;
    do
    {
      v12 = (v9 - (int)v8) % v6;
      v13 = __readmsr(v12 + 1664);
      v14 = __readmsr(v12 + 1728);
      if ( !v13 )
        break;
      v15 = 3 * v8;
      *(_QWORD *)(a2 + 8 * v15 + 16) = 0LL;
      v8 = (unsigned int)(v8 + 1);
      *(_QWORD *)(a2 + 8 * v15 + 8) = (__int64)(v14 << v11) >> v11;
      *(_QWORD *)(a2 + 8 * v15) = (__int64)(v13 << v10) >> v10;
      *a3 += 24;
    }
    while ( (unsigned int)v8 < v6 );
  }
  return 0LL;
}
