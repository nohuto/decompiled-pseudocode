/*
 * XREFs of sub_140509960 @ 0x140509960
 * Callers:
 *     sub_1403AAA10 @ 0x1403AAA10 (sub_1403AAA10.c)
 *     sub_1403AAB4C @ 0x1403AAB4C (sub_1403AAB4C.c)
 *     sub_140509880 @ 0x140509880 (sub_140509880.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140509BBC @ 0x140509BBC (sub_140509BBC.c)
 *     sub_14051BC80 @ 0x14051BC80 (sub_14051BC80.c)
 */

char __fastcall sub_140509960(int a1, char a2, __int64 a3)
{
  int v5; // ebp
  __int64 v6; // rax
  unsigned int v7; // r12d
  unsigned int v8; // r14d
  unsigned int v9; // esi
  int v10; // r13d
  int v11; // r9d
  int v12; // edi
  unsigned int v13; // ebp
  __int64 v14; // r12
  int v15; // eax
  int v16; // r9d
  int v17; // edx
  int v18; // eax
  int v19; // r9d
  int v20; // eax
  int v21; // r9d
  int v23; // [rsp+30h] [rbp-48h]
  unsigned int v25; // [rsp+98h] [rbp+20h]

  v5 = a1;
  if ( byte_140D016E8 )
  {
    sub_14042A5E0(a3, 3221226512LL);
    sub_14042A5E0(a3, 3221226512LL);
  }
  LOBYTE(v6) = byte_140C549B0;
  if ( !byte_140C549B0 )
  {
    v6 = __readmsr(0x179u);
    byte_140C549B0 = v6;
  }
  v7 = (unsigned __int8)byte_140C549B0;
  v8 = 0;
  v25 = (unsigned __int8)byte_140C549B0;
  if ( byte_140C549B0 )
  {
    v9 = -1073733622;
    v10 = 1027;
    do
    {
      v6 = sub_14051BC80(a3, v8);
      v23 = v6;
      v12 = v6;
      if ( v6 < 0 )
      {
        if ( BYTE3(v6) )
        {
          if ( byte_140D016E8 )
            v13 = v9;
          else
            v13 = 8 * BYTE3(v6) - 1073740800;
          v14 = 4LL;
          do
          {
            v15 = sub_14042A5E0(a3, v13);
            LOBYTE(v16) = a2;
            sub_140509BBC(a1, v13++, v15, v16, a3);
            --v14;
          }
          while ( v14 );
          v12 = v23;
          v7 = v25;
          v5 = a1;
        }
        v17 = v9 - 7;
        if ( !byte_140D016E8 )
          v17 = v10;
        LOBYTE(v11) = a2;
        LOBYTE(v6) = sub_140509BBC(v5, v17, v12, v11, a3);
        if ( byte_140D016E8 )
        {
          sub_14042A5E0(a3, v9 - 6);
          sub_14042A5E0(a3, v9 - 6);
          v18 = sub_14042A5E0(a3, v9);
          LOBYTE(v19) = a2;
          sub_140509BBC(v5, v9, v18, v19, a3);
          v20 = sub_14042A5E0(a3, v9 + 1);
          LOBYTE(v21) = a2;
          LOBYTE(v6) = sub_140509BBC(v5, v9 + 1, v20, v21, a3);
        }
      }
      ++v8;
      v10 += 4;
      v9 += 16;
    }
    while ( v8 < v7 );
  }
  return v6;
}
