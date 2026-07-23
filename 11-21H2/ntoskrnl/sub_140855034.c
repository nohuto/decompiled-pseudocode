/*
 * XREFs of sub_140855034 @ 0x140855034
 * Callers:
 *     sub_140854E78 @ 0x140854E78 (sub_140854E78.c)
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     sub_1402E0AC4 @ 0x1402E0AC4 (sub_1402E0AC4.c)
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14099D79C @ 0x14099D79C (sub_14099D79C.c)
 */

char __fastcall sub_140855034(char a1)
{
  _UNKNOWN **v1; // rax
  const EVENT_DESCRIPTOR *v3; // rdx
  __int64 *v4; // rdi
  unsigned __int8 v5; // bl
  _WORD **v6; // r11
  ULONGLONG *v7; // r11
  ULONGLONG v8; // r8
  ULONGLONG v9; // kr00_8
  const EVENT_DESCRIPTOR *v10; // rdx
  __int64 v12; // [rsp+38h] [rbp-79h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-69h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-61h] BYREF
  __int64 v16; // [rsp+58h] [rbp-59h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-49h] BYREF
  ULONGLONG *v18; // [rsp+78h] [rbp-39h]
  int v19; // [rsp+80h] [rbp-31h]
  int v20; // [rsp+84h] [rbp-2Dh]
  ULONGLONG *v21; // [rsp+88h] [rbp-29h]
  int v22; // [rsp+90h] [rbp-21h]
  int v23; // [rsp+94h] [rbp-1Dh]
  char *v24; // [rsp+98h] [rbp-19h]
  int v25; // [rsp+A0h] [rbp-11h]
  int v26; // [rsp+A4h] [rbp-Dh]
  char *v27; // [rsp+A8h] [rbp-9h]
  int v28; // [rsp+B0h] [rbp-1h]
  int v29; // [rsp+B4h] [rbp+3h]
  ULONGLONG *v30; // [rsp+B8h] [rbp+7h]
  int v31; // [rsp+C0h] [rbp+Fh]
  int v32; // [rsp+C4h] [rbp+13h]
  unsigned __int64 *v33; // [rsp+C8h] [rbp+17h]
  int v34; // [rsp+D0h] [rbp+1Fh]
  int v35; // [rsp+D4h] [rbp+23h]
  unsigned __int64 *v36; // [rsp+D8h] [rbp+27h]
  int v37; // [rsp+E0h] [rbp+2Fh]
  int v38; // [rsp+E4h] [rbp+33h]
  unsigned __int64 *v39; // [rsp+E8h] [rbp+37h]
  int v40; // [rsp+F0h] [rbp+3Fh]
  int v41; // [rsp+F4h] [rbp+43h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+5Fh] BYREF

  v1 = &retaddr;
  v12 = 0LL;
  if ( byte_140C5AE30 )
  {
    v3 = &stru_140038BF8;
    if ( a1 )
      v3 = &stru_140037E88;
    LOBYTE(v1) = EtwEventEnabled(qword_140C1F580, v3);
    if ( (_BYTE)v1 )
    {
      v4 = off_140C03040;
      v5 = 0;
      v16 = MEMORY[0xFFFFF78000000008];
      sub_14099D79C(off_140C03040, MEMORY[0xFFFFF78000000008]);
      while ( 1 )
      {
        sub_1402E0AC4(*v6, 0x7FFFFFFFuLL, &v12);
        v8 = *v7;
        UserData.Reserved = 0;
        v20 = 0;
        v23 = 0;
        v26 = 0;
        v29 = 0;
        UserData.Ptr = v8;
        v19 = 1;
        v22 = 1;
        v25 = 4;
        UserData.Size = 2 * v12 + 2;
        v18 = v7 + 1;
        v21 = v7 + 4;
        v24 = (char *)v7 + 28;
        v27 = (char *)v7 + 12;
        v28 = 16;
        v13 = v7[1075] / 0xA;
        v14 = v7[1076] / 0xA;
        v9 = v7[1077];
        v32 = 0;
        v35 = 0;
        v38 = 0;
        v41 = 0;
        v30 = v7 + 1074;
        v33 = &v13;
        v36 = &v14;
        v39 = &v15;
        v15 = v9 / 0xA;
        v10 = &stru_140037E88;
        v31 = 8;
        v34 = 8;
        v37 = 8;
        v40 = 8;
        if ( !a1 )
          v10 = &stru_140038BF8;
        LOBYTE(v1) = EtwWrite(qword_140C1F580, v10, 0LL, 9u, &UserData);
        if ( v5 == byte_140C1D020 )
          break;
        v6 = (_WORD **)(qword_140C1D018 + 8624LL * v5++);
      }
      v4[1073] = v16;
    }
  }
  return (char)v1;
}
