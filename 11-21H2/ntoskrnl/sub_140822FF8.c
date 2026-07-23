/*
 * XREFs of sub_140822FF8 @ 0x140822FF8
 * Callers:
 *     sub_1403BB0A0 @ 0x1403BB0A0 (sub_1403BB0A0.c)
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_1403B3BA0 @ 0x1403B3BA0 (sub_1403B3BA0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void sub_140822FF8()
{
  unsigned int v0; // eax
  unsigned int v1; // r9d
  unsigned int *v2; // rcx
  __int64 v3; // rdx
  unsigned int v4; // eax
  int v5; // r9d
  char v6; // [rsp+30h] [rbp-19h] BYREF
  int v7; // [rsp+34h] [rbp-15h] BYREF
  ULONG_PTR v8; // [rsp+38h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+40h] [rbp-9h] BYREF
  char *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  ULONG_PTR *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  int *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  if ( qword_140C4C738 )
  {
    v0 = sub_1403B3BA0();
    v1 = 0;
    if ( v0 )
    {
      v2 = (unsigned int *)qword_140C4C738;
      v3 = v0;
      do
      {
        v4 = v1;
        v1 = *v2++;
        if ( v1 <= v4 )
          v1 = v4;
        --v3;
      }
      while ( v3 );
    }
    if ( (unsigned int)dword_140C04538 > 5 )
    {
      if ( sub_1402A2000((__int64)&dword_140C04538, 0x400000000000LL) )
      {
        v12 = 0;
        v15 = 0;
        v18 = 0;
        v6 = byte_140C4C77C;
        v10 = &v6;
        v8 = qword_140C4C760;
        v13 = &v8;
        v16 = &v7;
        v7 = v5;
        v11 = 1;
        v14 = 8;
        v17 = 4;
        sub_14020A9C4((__int64)&dword_140C04538, (unsigned __int8 *)byte_14002837B, 0LL, 0LL, 5u, &v9);
      }
    }
  }
}
