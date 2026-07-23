/*
 * XREFs of sub_14021C050 @ 0x14021C050
 * Callers:
 *     sub_14021BC70 @ 0x14021BC70 (sub_14021BC70.c)
 * Callees:
 *     sub_14021C1E0 @ 0x14021C1E0 (sub_14021C1E0.c)
 *     KeEnumerateNextProcessor @ 0x140294050 (KeEnumerateNextProcessor.c)
 *     EtwWriteEx @ 0x140300C00 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     sub_140348800 @ 0x140348800 (sub_140348800.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1405DA274 @ 0x1405DA274 (sub_1405DA274.c)
 */

__int64 sub_14021C050()
{
  int v0; // r15d
  __int64 v1; // rcx
  __int64 result; // rax
  unsigned __int16 v3; // di
  unsigned __int8 v4; // r12
  unsigned __int8 i; // r13
  __int64 v6; // rbx
  REGHANDLE v7; // rsi
  int v8; // ecx
  unsigned __int8 v9; // r14
  char *v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r9
  unsigned __int64 v13; // rcx
  char v14; // r8
  char v15; // dl
  unsigned __int64 v16; // rsi
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  __int64 v19; // rax
  unsigned int v20; // r10d
  char v21; // cl
  char v22; // cl
  char v23; // [rsp+48h] [rbp-C0h] BYREF
  char v24; // [rsp+50h] [rbp-B8h] BYREF
  char v25; // [rsp+58h] [rbp-B0h]
  char v26; // [rsp+59h] [rbp-AFh]
  unsigned __int16 v27; // [rsp+5Ah] [rbp-AEh]
  int v28; // [rsp+60h] [rbp-A8h] BYREF
  unsigned int v29; // [rsp+68h] [rbp-A0h]
  unsigned int v30; // [rsp+6Ch] [rbp-9Ch] BYREF
  __int64 v31; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v32; // [rsp+78h] [rbp-90h]
  unsigned __int64 v33; // [rsp+80h] [rbp-88h]
  unsigned __int64 v34; // [rsp+88h] [rbp-80h]
  unsigned __int64 v35; // [rsp+90h] [rbp-78h]
  __int128 v36; // [rsp+98h] [rbp-70h] BYREF
  __int64 v37; // [rsp+A8h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+B8h] [rbp-50h] BYREF
  __int64 *v39; // [rsp+C8h] [rbp-40h]
  __int64 v40; // [rsp+D0h] [rbp-38h]
  char *v41; // [rsp+D8h] [rbp-30h]
  __int64 v42; // [rsp+E0h] [rbp-28h]
  __int64 v43; // [rsp+E8h] [rbp-20h]
  __int64 v44; // [rsp+F0h] [rbp-18h]
  __int64 v45; // [rsp+F8h] [rbp-10h]
  int v46; // [rsp+100h] [rbp-8h]
  int v47; // [rsp+104h] [rbp-4h]
  char *v48; // [rsp+108h] [rbp+0h]
  __int64 v49; // [rsp+110h] [rbp+8h]

  v0 = dword_140C20488;
  v1 = 534LL * dword_140C232CC;
  result = 0LL;
  v3 = 0;
  v27 = 0;
  v4 = BYTE5(off_140C03040[v1 + 20]);
  for ( i = HIBYTE(off_140C03040[v1 + 20]); v3 < (unsigned int)dword_140C1CF34; v27 = v3 )
  {
    v6 = qword_140C1CF38 + 336LL * v3;
    if ( (unsigned __int8)sub_14021C1E0(v0, v4, i, (int)v6 + 80, v6 + 140, v6 + 141, v6 + 142) )
    {
      v24 = *(_BYTE *)(v6 + 142);
      v23 = *(_BYTE *)(v6 + 140);
      v31 = *(_QWORD *)(v6 + 8);
      LOWORD(v28) = *(_WORD *)(v6 + 4);
      if ( byte_140C5AE30 )
      {
        v7 = qword_140C1F580;
        if ( EtwEventEnabled(qword_140C1F580, &stru_14000E6F0) )
        {
          *(_QWORD *)&UserData.Size = 2LL;
          UserData.Ptr = (ULONGLONG)&v28;
          v40 = 8LL;
          v39 = &v31;
          v42 = 1LL;
          v41 = &v23;
          v44 = 4LL;
          v43 = v6 + 120;
          v8 = *(_DWORD *)(v6 + 120);
          v45 = *(_QWORD *)(v6 + 88);
          v47 = 0;
          v49 = 1LL;
          v46 = 8 * v8;
          v48 = &v24;
          EtwWriteEx(v7, &stru_14000E6F0, 0LL, 0, 0LL, 0LL, 6u, &UserData);
        }
      }
    }
    if ( *(_BYTE *)(v6 + 6) != *(_BYTE *)(v6 + 128) )
    {
      v9 = 0;
      v10 = (char *)(v6 + 268);
      v11 = v6 + 168;
      do
      {
        if ( (unsigned __int8)sub_14021C1E0(v0, v4, i, v11, (__int64)(v10 - 2), (__int64)v10, (__int64)(v10 - 4)) )
          sub_1405DA274(
            *(unsigned __int16 *)(v6 + 4),
            *(_QWORD *)(v6 + 8),
            v9,
            (unsigned __int8)*(v10 - 2),
            *v10,
            v11,
            *(v10 - 4));
        ++v9;
        v11 += 48LL;
        ++v10;
      }
      while ( v9 < 2u );
      v3 = v27;
    }
    v36 = 0LL;
    v37 = 0LL;
    v30 = 0;
    if ( byte_140D068BC )
    {
      v12 = 0LL;
      v29 = 0;
      v13 = 0LL;
      v14 = -1;
      v15 = -1;
      if ( dword_140C0C64C )
      {
        do
        {
          v16 = 0LL;
          v17 = v29;
          v18 = 0LL;
          LOWORD(v37) = *(_WORD *)(v6 + 4);
          *((_QWORD *)&v36 + 1) = *(_QWORD *)(v6 + 8);
          v34 = v13;
          v26 = v15;
          v35 = v13;
          v32 = v12;
          v25 = v14;
          v33 = v12;
          *(_QWORD *)&v36 = 0LL;
          while ( !(unsigned int)KeEnumerateNextProcessor(&v30, &v36) )
          {
            v19 = sub_140348800(v30);
            v16 += *(_QWORD *)(*(_QWORD *)(v19 + 34144) + 8 * v17 + 8);
            v18 += *(_QWORD *)(*(_QWORD *)(v19 + 34136) + 8 * v17 + 8);
          }
          v12 = v16;
          v20 = v29;
          v13 = v18;
          if ( v16 <= v32 )
            v12 = v32;
          v15 = v29;
          v14 = v29;
          if ( v16 <= v33 )
            v14 = v25;
          if ( v18 <= v34 )
            v13 = v34;
          if ( v18 <= v35 )
            v15 = v26;
          ++v29;
        }
        while ( v20 + 1 < dword_140C0C64C );
        v3 = v27;
      }
      *(_QWORD *)(v6 + 320) = v13;
      v21 = 0;
      *(_QWORD *)(v6 + 304) = v12;
      if ( v15 != -1 )
        v21 = v15;
      *(_BYTE *)(v6 + 328) = v21;
      v22 = 0;
      if ( v14 != -1 )
        v22 = v14;
      *(_BYTE *)(v6 + 312) = v22;
    }
    result = ++v3;
  }
  return result;
}
