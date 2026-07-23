/*
 * XREFs of sub_1402ACAD0 @ 0x1402ACAD0
 * Callers:
 *     sub_1402D6B0C @ 0x1402D6B0C (sub_1402D6B0C.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140502A6C @ 0x140502A6C (sub_140502A6C.c)
 *     sub_140502B60 @ 0x140502B60 (sub_140502B60.c)
 *     sub_14053FE50 @ 0x14053FE50 (sub_14053FE50.c)
 */

__int64 __fastcall sub_1402ACAD0(__int64 a1, unsigned int a2, int a3, int a4, unsigned int a5, int a6, unsigned int a7)
{
  unsigned int v7; // r14d
  volatile signed __int32 *v11; // rbx
  int v12; // ecx
  unsigned int v13; // ecx
  signed __int32 v14; // eax
  int v15; // edx
  unsigned int v16; // edx
  unsigned __int32 v17; // eax
  unsigned __int32 v18; // ett
  unsigned int v20; // [rsp+30h] [rbp-50h] BYREF
  int v21; // [rsp+34h] [rbp-4Ch]
  __int128 v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int64 v25; // [rsp+60h] [rbp-20h]

  v7 = 0;
  v23 = 0LL;
  v11 = (volatile signed __int32 *)a1;
  v22 = 0LL;
  switch ( a5 )
  {
    case 0u:
    case 4u:
      sub_140502B60(a1, a5, a7, &v22);
      break;
    case 1u:
    case 5u:
      sub_140502A6C(a1, a5, a7, &v22);
      break;
    case 2u:
    case 3u:
    case 6u:
    case 7u:
      v12 = 0;
      switch ( a5 )
      {
        case 2u:
          v12 = 2;
          break;
        case 3u:
          v12 = 8;
          break;
        case 6u:
          v12 = 4;
          break;
        case 7u:
          v12 = 16;
          break;
      }
      v13 = v12 | 1;
      _m_prefetchw((const void *)v11);
      v14 = _InterlockedOr(v11, v13);
      v15 = v22;
      if ( (v14 & 1) == 0 )
        v15 = 1;
      a1 = v13 & 0xFFFFFFFE;
      LODWORD(v22) = v15;
      LODWORD(v23) = (v14 & (unsigned int)a1) == a1;
      break;
    default:
      v16 = a5 - 320;
      if ( a5 - 320 < 0x40 )
      {
        v17 = *(_DWORD *)(a1 + 4);
        do
        {
          if ( (v17 & 0x10) == 0 || (LODWORD(v23) = 1, ((v17 >> 5) & 0x3F) != v16) )
            LODWORD(v23) = 0;
          a1 = (32 * (v16 & 0x3F)) | v17 & 0xFFFFF81F | 0x10;
          v18 = v17;
          v17 = _InterlockedCompareExchange(v11 + 1, a1, v17);
        }
        while ( v18 != v17 );
      }
      DWORD1(v22) = a7;
      *((_QWORD *)&v22 + 1) = a5;
      break;
  }
  v25 = v23;
  v24 = v22;
  if ( qword_140D010D0 )
    sub_14042A5E0(a2, a5);
  if ( a3 && a5 != 254 )
  {
    v20 = a2;
    v21 = (unsigned __int16)a5;
    if ( a4 )
      HIWORD(v21) |= 1u;
    sub_14053FE50(a1, &v20);
  }
  LOBYTE(v7) = (_DWORD)v25 == 0;
  return v7;
}
