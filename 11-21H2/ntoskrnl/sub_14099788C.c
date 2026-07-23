/*
 * XREFs of sub_14099788C @ 0x14099788C
 * Callers:
 *     sub_14099D500 @ 0x14099D500 (sub_14099D500.c)
 *     sub_14099DAA8 @ 0x14099DAA8 (sub_14099DAA8.c)
 * Callees:
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 *     sub_140849940 @ 0x140849940 (sub_140849940.c)
 *     sub_140854A90 @ 0x140854A90 (sub_140854A90.c)
 *     sub_14098B1A8 @ 0x14098B1A8 (sub_14098B1A8.c)
 */

void __fastcall sub_14099788C(__int64 *a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 v4; // rsi
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r13
  unsigned int v11; // r15d
  __int64 v12; // rsi
  __int64 v13; // rbp
  unsigned int v14; // r12d
  __int64 v15; // r14
  char *v16; // r8
  unsigned __int64 v17; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+80h] [rbp+8h] BYREF
  __int64 v19; // [rsp+88h] [rbp+10h]
  __int64 v20; // [rsp+90h] [rbp+18h]
  __int64 v21; // [rsp+98h] [rbp+20h] BYREF

  v20 = a3;
  v19 = a2;
  v3 = 0;
  v18 = 0;
  LODWORD(v21) = 0;
  if ( dword_140D0696C && byte_140D068E7 )
  {
    v3 = 4098;
    v18 = 4098;
  }
  v4 = *a1;
  v21 = 0LL;
  v5 = 0LL;
  v6 = v4 & 0x3CFFFFD8030FC0LL;
  if ( v6 )
  {
    v7 = !_BitScanForward64((unsigned __int64 *)&v8, v6);
    if ( !v7 )
    {
      v9 = v20;
      do
      {
        v10 = 5 * v8;
        v17 = v6 & ~(1LL << v8);
        v11 = 0;
        v12 = v19;
        v13 = 1LL << *((_BYTE *)&off_140D05FC0 + 40 * v8 + 36);
        v14 = ((*((_BYTE *)&off_140D05FC0 + 40 * v8 + 37) & 4) != 0) + 1;
        do
        {
          v15 = LODWORD((&off_140D05FC0)[v10 + 4]);
          v16 = &(&off_140D05FC0)[v10 + 3][v11 * LODWORD((&off_140D05FC0)[v10 + 4])];
          if ( RtlCompareMemory(&v16[v12], &v16[v9], (unsigned int)v15) != v15 )
            v5 |= v13;
          ++v11;
        }
        while ( v11 < v14 );
        v6 = v17;
        v7 = !_BitScanForward64((unsigned __int64 *)&v8, v17);
        v21 = v5;
      }
      while ( !v7 );
      v3 = v18;
      if ( v5 )
      {
        sub_140854A90(&v21, &v18);
        v3 = v18;
      }
    }
  }
  if ( (v3 & 1) != 0 )
  {
    sub_14098B1A8();
    v3 &= ~1u;
    v18 = v3;
  }
  sub_1402935D0((ULONG_PTR)&qword_140C23010);
  if ( (_WORD)v3 )
    sub_140849940(&v18);
  else
    sub_140224C00(&qword_140C22FE0);
}
