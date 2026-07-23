/*
 * XREFs of sub_14069DF5C @ 0x14069DF5C
 * Callers:
 *     sub_140224F04 @ 0x140224F04 (sub_140224F04.c)
 *     sub_140864680 @ 0x140864680 (sub_140864680.c)
 * Callees:
 *     EtwWrite @ 0x140300BC0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x14030F640 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

char __fastcall sub_14069DF5C(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v2; // rax
  const EVENT_DESCRIPTOR *v3; // rbx
  __int64 v4; // rsi
  char *v6; // rcx
  _WORD *v7; // rdx
  __int16 v8; // ax
  int v10; // [rsp+38h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-C0h] BYREF
  int *v12; // [rsp+58h] [rbp-B0h]
  __int64 v13; // [rsp+60h] [rbp-A8h]
  char *v14; // [rsp+68h] [rbp-A0h]
  __int64 v15; // [rsp+70h] [rbp-98h]
  __int64 v16; // [rsp+78h] [rbp-90h]
  int v17; // [rsp+80h] [rbp-88h]
  int v18; // [rsp+84h] [rbp-84h]
  char v19; // [rsp+88h] [rbp-80h] BYREF
  char v20; // [rsp+8Ah] [rbp-7Eh] BYREF

  v2 = &stru_14000E960;
  v3 = (const EVENT_DESCRIPTOR *)qword_1400371B0;
  v4 = 6LL;
  if ( !a2 )
    v3 = &stru_14000E960;
  v10 = 6;
  if ( byte_140C5AE30 )
  {
    LOBYTE(v2) = EtwEventEnabled(qword_140C1F580, v3);
    if ( (_BYTE)v2 )
    {
      v6 = &v20;
      v7 = (_WORD *)(a1 + 528);
      do
      {
        *((_WORD *)v6 - 1) = *(v7 - 4);
        *(_WORD *)v6 = *(v7 - 2);
        v6 += 25;
        v8 = *v7;
        v7 += 14;
        *(_WORD *)(v6 - 23) = v8;
        *(_DWORD *)(v6 - 21) = *((_DWORD *)v7 - 6);
        *(v6 - 17) = *((_BYTE *)v7 - 20);
        *((_DWORD *)v6 - 4) = *((unsigned __int8 *)v7 - 16);
        *((_DWORD *)v6 - 3) = *((unsigned __int8 *)v7 - 15);
        *(v6 - 8) = *((_BYTE *)v7 - 14);
        *(v6 - 7) = *((_BYTE *)v7 - 13);
        *(_DWORD *)(v6 - 6) = *((unsigned __int8 *)v7 - 12);
        --v4;
      }
      while ( v4 );
      UserData.Reserved = 0;
      v18 = 0;
      UserData.Ptr = a1 + 432;
      v12 = &v10;
      v14 = &v19;
      v16 = a1 + 688;
      UserData.Size = 4;
      v13 = 2LL;
      v15 = 150LL;
      v17 = 24;
      LOBYTE(v2) = EtwWrite(qword_140C1F580, v3, 0LL, 4u, &UserData);
    }
  }
  return (char)v2;
}
