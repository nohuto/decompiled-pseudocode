/*
 * XREFs of sub_140713230 @ 0x140713230
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402A1A20 @ 0x1402A1A20 (sub_1402A1A20.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     RtlInterlockedClearBitRun @ 0x1402A2030 (RtlInterlockedClearBitRun.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_140713440 @ 0x140713440 (sub_140713440.c)
 */

char sub_140713230()
{
  ULONG v0; // ebx
  __int64 *v1; // rdi
  __int64 v2; // rax
  _DWORD *v3; // r13
  unsigned int v4; // r12d
  _DWORD *v5; // r15
  unsigned int i; // r14d
  _DWORD *v7; // rbx
  unsigned int j; // edi
  int v9; // esi
  __int64 v10; // r8
  int v11; // r9d
  __int64 v12; // r10
  __int64 v14; // [rsp+30h] [rbp-89h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-81h] BYREF
  BOOL v16; // [rsp+3Ch] [rbp-7Dh] BYREF
  BOOL v17; // [rsp+40h] [rbp-79h] BYREF
  char *v18; // [rsp+48h] [rbp-71h]
  char *v19; // [rsp+50h] [rbp-69h]
  __int64 v20; // [rsp+58h] [rbp-61h] BYREF
  __int64 v21; // [rsp+60h] [rbp-59h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+70h] [rbp-49h] BYREF
  __int64 *v23; // [rsp+90h] [rbp-29h]
  __int64 v24; // [rsp+98h] [rbp-21h]
  unsigned int *v25; // [rsp+A0h] [rbp-19h]
  __int64 v26; // [rsp+A8h] [rbp-11h]
  BOOL *v27; // [rsp+B0h] [rbp-9h]
  __int64 v28; // [rsp+B8h] [rbp-1h]
  BOOL *v29; // [rsp+C0h] [rbp+7h]
  __int64 v30; // [rsp+C8h] [rbp+Fh]
  __int64 *v31; // [rsp+D0h] [rbp+17h]
  __int64 v32; // [rsp+D8h] [rbp+1Fh]

  v0 = 0;
  v1 = qword_140C25560;
  do
  {
    v2 = *v1;
    v14 = v2;
    if ( (v2 & 1) != 0 )
    {
      LODWORD(v14) = v2 & 0xFFFFFFFE;
      qword_140C25560[v0] = v14;
      RtlInterlockedClearBitRun(&stru_140C29560, v0, 1u);
      LOBYTE(v2) = sub_140713440(&v14);
    }
    ++v0;
    ++v1;
  }
  while ( v0 < 0x800 );
  v3 = &unk_140C29674;
  v4 = 0;
  v19 = (char *)&unk_140C29674;
  do
  {
    v5 = v3;
    v18 = (char *)v3;
    for ( i = 0; i < 2; ++i )
    {
      v7 = v5;
      for ( j = 0; j < 2; ++j )
      {
        v9 = *(v7 - 1);
        if ( v9 != *v7 )
        {
          if ( **(_DWORD **)&qword_140C53448 > 5u )
          {
            LOBYTE(v2) = sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000000LL);
            if ( (_BYTE)v2 )
            {
              v24 = 8LL;
              v15 = v4;
              v20 = (unsigned int)(v9 - v11);
              v26 = 4LL;
              v28 = 4LL;
              v23 = &v20;
              v30 = 4LL;
              v25 = &v15;
              v21 = 0x1000000LL;
              v32 = 8LL;
              v16 = i == 1;
              v27 = &v16;
              v17 = j == 1;
              v29 = &v17;
              v31 = &v21;
              LOBYTE(v2) = sub_1402A1A20(v12, (unsigned __int8 *)&byte_14002DCE1, v10, 7u, &v22);
            }
          }
          *v7 = v9;
        }
        v7 += 2;
      }
      v5 = v18 + 16;
      v18 += 16;
    }
    ++v4;
    v3 = v19 + 32;
    v19 += 32;
  }
  while ( v4 < 2 );
  word_140C296D0 = 0;
  return v2;
}
