/*
 * XREFs of sub_14080BBA0 @ 0x14080BBA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020A9C4 @ 0x14020A9C4 (sub_14020A9C4.c)
 *     sub_1402246C0 @ 0x1402246C0 (sub_1402246C0.c)
 *     sub_140224C00 @ 0x140224C00 (sub_140224C00.c)
 *     sub_140224E90 @ 0x140224E90 (sub_140224E90.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     sub_140368A78 @ 0x140368A78 (sub_140368A78.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

__int64 sub_14080BBA0()
{
  _QWORD *v0; // r10
  _DWORD *v1; // r11
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // kr00_8
  unsigned __int128 v6; // rax
  int v8; // [rsp+38h] [rbp-49h] BYREF
  int v9; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 v10; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-39h] BYREF
  int *v12; // [rsp+68h] [rbp-19h]
  __int64 v13; // [rsp+70h] [rbp-11h]
  int *v14; // [rsp+78h] [rbp-9h]
  __int64 v15; // [rsp+80h] [rbp-1h]
  _BYTE *v16; // [rsp+88h] [rbp+7h]
  __int64 v17; // [rsp+90h] [rbp+Fh]
  __int64 *v18; // [rsp+98h] [rbp+17h]
  __int64 v19; // [rsp+A0h] [rbp+1Fh]
  _BYTE v20[40]; // [rsp+A8h] [rbp+27h] BYREF

  sub_140224E90((struct _KTHREAD **)&qword_140C22FE0);
  sub_1402246C0(0LL);
  v0 = &unk_140D07350;
  v1 = v20;
  v2 = qword_140D072E8 - qword_140D072F0;
  qword_140D072F0 = qword_140D072E8;
  v3 = 9LL;
  v4 = v2 / 0x989680;
  v5 = qword_140D072F8 - qword_140D07300;
  qword_140D07300 = qword_140D072F8;
  do
  {
    v6 = (unsigned __int64)(*(v0 - 9) - *v0) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
    *v0 = *(v0 - 9);
    ++v0;
    *v1++ = *((_QWORD *)&v6 + 1) >> 23;
    --v3;
  }
  while ( v3 );
  sub_140224C00(&qword_140C22FE0);
  if ( (unsigned int)dword_140C03A00 > 5 && sub_1402A2000((__int64)&dword_140C03A00, 0x400000000000LL) )
  {
    v8 = v4;
    v12 = &v8;
    v13 = 4LL;
    v14 = &v9;
    v9 = v5 / 0x989680;
    v16 = v20;
    v15 = 4LL;
    v18 = &v10;
    v17 = 36LL;
    v10 = 0x1000000LL;
    v19 = 8LL;
    sub_14020A9C4((__int64)&dword_140C03A00, (unsigned __int8 *)byte_14002E34D, 0LL, 0LL, 6u, &v11);
  }
  return sub_140368A78((__int64)&unk_140C23A88);
}
