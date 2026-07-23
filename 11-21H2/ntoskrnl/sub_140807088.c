/*
 * XREFs of sub_140807088 @ 0x140807088
 * Callers:
 *     sub_140809BEC @ 0x140809BEC (sub_140809BEC.c)
 * Callees:
 *     sub_140346D64 @ 0x140346D64 (sub_140346D64.c)
 *     sub_1403B5B68 @ 0x1403B5B68 (sub_1403B5B68.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140807088(ULONG *a1)
{
  ULONG v2; // r11d
  __int64 result; // rax
  ULONG v4; // ebx
  ULONGLONG v5; // rsi
  ULONG v6; // r9d
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int16 *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  ULONGLONG v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  char v18; // [rsp+30h] [rbp-D0h] BYREF
  ULONG i; // [rsp+34h] [rbp-CCh] BYREF
  int v20; // [rsp+38h] [rbp-C8h] BYREF
  int v21; // [rsp+3Ch] [rbp-C4h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v22; // [rsp+40h] [rbp-C0h] BYREF
  ULONG *v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]

  v20 = 0;
  v18 = 0;
  v21 = 0;
  if ( byte_140C1C830 )
  {
    v2 = a1[4];
    if ( v2 )
    {
      v4 = 0;
      v5 = (ULONGLONG)(a1 + 2);
      i = 0;
      do
      {
        v6 = v4 + 4 * v4 + 2;
        v7 = 2LL * (v6 + 2);
        v20 = **(unsigned __int16 **)&a1[6 * v4 + 6] >> 1;
        v8 = 2LL * (v6 + 1);
        v21 = LOWORD(a1[6 * v4 + 8]) >> 1;
        v9 = 2LL * v6;
        *(&v22.Ptr + v9) = v5;
        *((_QWORD *)&v22.Size + v9) = 16LL;
        *(&v22.Ptr + v8) = (ULONGLONG)&v20;
        *((_QWORD *)&v22.Size + v8) = 4LL;
        v10 = *(unsigned __int16 **)&a1[6 * v4 + 6];
        v11 = *v10;
        *(&v22.Ptr + v7) = *((_QWORD *)v10 + 1);
        v12 = 2LL * (v6 + 3);
        *(&v22.Size + 2 * v7) = v11;
        *(&v22.Reserved + 2 * v7) = 0;
        *(&v22.Ptr + v12) = (ULONGLONG)&v21;
        *((_QWORD *)&v22.Size + v12) = 4LL;
        LODWORD(v7) = LOWORD(a1[6 * v4 + 8]);
        v13 = 2LL * (v6 + 4);
        v14 = *(_QWORD *)&a1[6 * ++v4 + 4];
        i = v4;
        *(&v22.Size + 2 * v13) = v7;
        *(&v22.Ptr + v13) = v14;
        *(&v22.Reserved + 2 * v13) = 0;
      }
      while ( v4 < v2 );
      v18 = qword_140C1C3B0;
      *(_QWORD *)&v22.Size = 1LL;
      v22.Ptr = (ULONGLONG)&v18;
      v24 = 4LL;
      v23 = &i;
      v15 = 2LL * (v2 + 4 * v2 + 2);
      *(&v22.Ptr + v15) = (ULONGLONG)&qword_140C1C3B0;
      *((_QWORD *)&v22.Size + v15) = 8LL;
      sub_1403B5B68(v15, &stru_14003C138, v11, v4 + 4 * v4 + 3, &v22);
    }
  }
  result = 0LL;
  for ( i = 0; (unsigned int)result < a1[4]; i = result )
  {
    v16 = result + 1;
    v17 = 3 * v16;
    sub_140346D64(*(void **)&a1[6 * v16 + 4], *a1);
    *(_OWORD *)&a1[2 * v17] = 0LL;
    *(_QWORD *)&a1[2 * v17 + 4] = 0LL;
    result = i + 1;
  }
  a1[4] = 0;
  return result;
}
