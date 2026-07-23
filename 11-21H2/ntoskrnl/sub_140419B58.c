/*
 * XREFs of sub_140419B58 @ 0x140419B58
 * Callers:
 *     sub_140A4B5A0 @ 0x140A4B5A0 (sub_140A4B5A0.c)
 * Callees:
 *     sub_14025E708 @ 0x14025E708 (sub_14025E708.c)
 *     KeQueryInterruptTimePrecise @ 0x140303490 (KeQueryInterruptTimePrecise.c)
 *     sub_1403B4C90 @ 0x1403B4C90 (sub_1403B4C90.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

void __fastcall sub_140419B58(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 i; // rbx
  unsigned int j; // edi
  __int64 v6; // rcx
  __int64 *v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rax
  unsigned int k; // edi
  __int64 v12; // rcx
  int v13; // eax
  LARGE_INTEGER v14; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( !*(_DWORD *)(a1 + 36) )
  {
    for ( i = qword_140D06970; (__int64 *)i != &qword_140D06970; i = *(_QWORD *)i )
    {
      if ( *(_DWORD *)(i + 304) )
      {
        for ( j = 0; j < *(_DWORD *)(i + 296); ++j )
        {
          v6 = *(_QWORD *)(i + 312) + 136LL * j;
          if ( v2 )
          {
            if ( *(_DWORD *)(v6 + 16) == 1 )
              sub_1403B4C90(*(_QWORD *)v6);
          }
          else if ( *(_QWORD *)(i + 368) )
          {
            sub_14042A5E0(*(_QWORD *)(v6 + 8), a2);
          }
        }
      }
    }
  }
  v7 = (__int64 *)(a1 + 33968);
  v8 = *v7;
  v9 = v7[1];
  if ( *v7 && v9 )
  {
    if ( v2 )
    {
      if ( *(_QWORD *)(v8 + 408) )
      {
        v10 = KeQueryInterruptTimePrecise(&v14);
        sub_14042A5E0(*(_QWORD *)(v9 + 8), v10);
      }
    }
    else if ( *(_QWORD *)(v8 + 368) )
    {
      sub_14042A5E0(*(_QWORD *)(v9 + 8), a2);
    }
    if ( v7 == *(__int64 **)(v8 + 16) )
    {
      for ( k = 0; k < *(_DWORD *)(v8 + 296); ++k )
      {
        v12 = *(_QWORD *)(v8 + 312) + 136LL * k;
        v13 = *(_DWORD *)(v12 + 16);
        if ( v13 )
        {
          if ( v2 )
          {
            if ( v13 == 1 )
              sub_1403B4C90(*(_QWORD *)v12);
          }
          else if ( *(_QWORD *)(v8 + 368) )
          {
            sub_14042A5E0(*(_QWORD *)(v12 + 8), a2);
          }
        }
      }
    }
  }
  if ( v2 )
    sub_1403B4C90((__int64)v7);
  else
    sub_14025E708();
}
