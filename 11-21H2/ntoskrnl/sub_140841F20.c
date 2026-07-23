/*
 * XREFs of sub_140841F20 @ 0x140841F20
 * Callers:
 *     sub_140841B4C @ 0x140841B4C (sub_140841B4C.c)
 * Callees:
 *     sub_1402D87F0 @ 0x1402D87F0 (sub_1402D87F0.c)
 *     sub_1402E0198 @ 0x1402E0198 (sub_1402E0198.c)
 *     sub_1402E0200 @ 0x1402E0200 (sub_1402E0200.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1406E0C3C @ 0x1406E0C3C (sub_1406E0C3C.c)
 *     sub_140841E78 @ 0x140841E78 (sub_140841E78.c)
 *     sub_14084205C @ 0x14084205C (sub_14084205C.c)
 */

__int64 __fastcall sub_140841F20(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdi
  int v11; // ebx
  __int64 v12; // r11
  int v13; // eax
  unsigned __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+50h] [rbp-B0h]
  wchar_t v23[128]; // [rsp+60h] [rbp-A0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v22 = a6;
  v23[0] = 0;
  v21 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  while ( 1 )
  {
    v11 = sub_1402E0200(v23, 128LL, (__int64)off_140009908[v10]);
    if ( v11 < 0 )
      break;
    v11 = sub_1402D87F0(v23, 128LL, v12);
    if ( v11 < 0 )
      break;
    v13 = sub_14084205C(a3, v23, &v19, &v18);
    v11 = v13;
    if ( v13 >= 0 )
    {
      if ( (int)sub_140841E78(&v21, &v20, v19, v18) >= 0 )
      {
LABEL_9:
        *a2 = v20;
        *a1 = v21;
        return 0LL;
      }
LABEL_11:
      if ( !a4 )
        return 3221226021LL;
      v15 = 0LL;
      if ( !a5 )
        return 3221226021LL;
      while ( 1 )
      {
        LODWORD(v17) = a4[1];
        v11 = sub_1402E0198(v23, 128LL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v17, v22);
        if ( v11 < 0 )
          goto LABEL_21;
        v16 = sub_14084205C(a3, v23, &v19, &v18);
        v11 = v16;
        if ( v16 >= 0 )
        {
          if ( (int)sub_140841E78(&v21, &v20, v19, v18) < 0 )
            return 3221226021LL;
          goto LABEL_9;
        }
        if ( v16 != -1073741275 )
          goto LABEL_21;
        ++v15;
        a4 += 2;
        if ( v15 >= a5 )
          return 3221226021LL;
      }
    }
    if ( v13 != -1073741275 )
      break;
    if ( (unsigned __int64)++v10 >= 4 )
      goto LABEL_11;
  }
LABEL_21:
  sub_1406E0C3C(1LL, (__int64)"AslpFileQueryVersionString");
  return (unsigned int)v11;
}
