/*
 * XREFs of sub_140810990 @ 0x140810990
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140368A78 @ 0x140368A78 (sub_140368A78.c)
 *     RtlComputeCrc32 @ 0x140369820 (RtlComputeCrc32.c)
 *     sub_1403A68B0 @ 0x1403A68B0 (sub_1403A68B0.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 */

void sub_140810990()
{
  char v0; // bl
  int v1; // edi
  int v2; // esi
  int v3; // ebx
  __int128 v4; // [rsp+28h] [rbp-39h] BYREF
  __int128 v5; // [rsp+38h] [rbp-29h]
  __int128 v6; // [rsp+48h] [rbp-19h] BYREF
  __int128 v7; // [rsp+58h] [rbp-9h]
  _OWORD v8[4]; // [rsp+68h] [rbp+7h] BYREF

  memset(v8, 0, sizeof(v8));
  v4 = 0LL;
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  while ( 1 )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C24600);
    v0 = dword_140C245E8;
    if ( !dword_140C245E8 )
      break;
    v1 = dword_140C245E8 & 1;
    if ( (dword_140C245E8 & 1) != 0 )
    {
      *(_QWORD *)&xmmword_140C547A8 = MEMORY[0xFFFFF78000000014];
      DWORD2(xmmword_140C547A8) = RtlComputeCrc32(0, &xmmword_140C547A8, 8u);
      v4 = xmmword_140C54798;
      v5 = xmmword_140C547A8;
    }
    v2 = v0 & 2;
    if ( (v0 & 2) != 0 )
    {
      v6 = xmmword_140C548E0;
      v7 = unk_140C548F0;
    }
    v3 = v0 & 4;
    if ( v3 )
    {
      v8[0] = xmmword_140C5ACC0;
      v8[1] = xmmword_140C5ACD0;
      v8[2] = xmmword_140C5ACE0;
      v8[3] = xmmword_140C5ACF0;
    }
    dword_140C245E8 = 0;
    sub_1402935D0((ULONG_PTR)&qword_140C24600);
    if ( v1 )
      sub_1403A68B0(7u, &v4);
    if ( v2 )
      sub_1403A68B0(0x10u, &v6);
    if ( v3 )
      sub_1403A68B0(0xEu, v8);
  }
  sub_140368A78((__int64)&unk_140C24620);
  sub_1402935D0((ULONG_PTR)&qword_140C24600);
}
