/*
 * XREFs of sub_14081C1B0 @ 0x14081C1B0
 * Callers:
 *     sub_1407496A8 @ 0x1407496A8 (sub_1407496A8.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x14042A1E0 (RtlCompareMemory.c)
 */

char __fastcall sub_14081C1B0(__int64 a1, const void *a2, unsigned int a3)
{
  SIZE_T v3; // rax
  __int64 v4; // rdi
  _DWORD *v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int16 *v8; // rdx
  int v9; // r9d
  __int64 v10; // rax
  int *v11; // rcx
  int *v12; // rax
  int v13; // r9d
  __int64 v14; // rax
  ULONG v16; // [rsp+20h] [rbp-69h]
  int v17; // [rsp+30h] [rbp-59h] BYREF
  _DWORD v18[3]; // [rsp+34h] [rbp-55h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v19; // [rsp+40h] [rbp-49h] BYREF
  const char *v20; // [rsp+60h] [rbp-29h]
  int v21; // [rsp+68h] [rbp-21h]
  int v22; // [rsp+6Ch] [rbp-1Dh]
  int *v23; // [rsp+70h] [rbp-19h]
  __int64 v24; // [rsp+78h] [rbp-11h]
  int *v25; // [rsp+80h] [rbp-9h]
  _QWORD v26[4]; // [rsp+88h] [rbp-1h] BYREF
  _DWORD v27[2]; // [rsp+A8h] [rbp+1Fh] BYREF

  v3 = *(_QWORD *)(a1 + 312);
  v4 = a3;
  v5 = *(_DWORD **)(v3 + 88);
  v6 = *(_QWORD *)(v3 + 40);
  if ( v5 )
  {
    if ( *v5 == a3 )
    {
      v3 = RtlCompareMemory(v5 + 1, a2, a3);
      if ( v3 != v4 && (unsigned int)dword_140C06550 > 5 )
      {
        LOBYTE(v3) = sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL);
        if ( (_BYTE)v3 )
        {
          v14 = -1LL;
          do
            ++v14;
          while ( aCompareFailed[v14] );
          v20 = "Compare Failed";
          v21 = v14 + 1;
          v11 = &v17;
          v12 = v18;
          v18[0] = v13;
          v17 = v4;
          v8 = word_14002BBAA;
LABEL_20:
          v23 = v12;
          v26[1] = v27;
          v26[3] = *(_QWORD *)(v6 + 48);
          v27[0] = *(unsigned __int16 *)(v6 + 40);
          v16 = 7;
          v27[1] = 0;
          v26[2] = 2LL;
          v26[0] = 4LL;
          v25 = v11;
          v24 = 4LL;
LABEL_21:
          v22 = 0;
          LOBYTE(v3) = sub_14020A9C4((__int64)&dword_140C06550, (unsigned __int8 *)v8, 0LL, 0LL, v16, &v19);
        }
      }
    }
    else if ( (unsigned int)dword_140C06550 > 5 )
    {
      LOBYTE(v3) = sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL);
      if ( (_BYTE)v3 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( aSizeMismatch[v10] );
        v20 = "Size Mismatch";
        v21 = v10 + 1;
        v11 = v18;
        v12 = &v17;
        v17 = v9;
        v18[0] = v4;
        v8 = word_14002BC4A;
        goto LABEL_20;
      }
    }
  }
  else if ( (unsigned int)dword_140C06550 > 5 )
  {
    LOBYTE(v3) = sub_1402A2000((__int64)&dword_140C06550, 0x400000000000LL);
    if ( (_BYTE)v3 )
    {
      v7 = -1LL;
      do
        ++v7;
      while ( aNotFound_0[v7] );
      v20 = "Not Found";
      v21 = v7 + 1;
      v8 = (__int16 *)byte_14002BC01;
      v24 = 2LL;
      v23 = (int *)v26;
      v25 = *(int **)(v6 + 48);
      v26[0] = *(unsigned __int16 *)(v6 + 40);
      v16 = 5;
      goto LABEL_21;
    }
  }
  return v3;
}
