/*
 * XREFs of sub_1408647A0 @ 0x1408647A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1402935D0 @ 0x1402935D0 (sub_1402935D0.c)
 *     sub_1402D66A8 @ 0x1402D66A8 (sub_1402D66A8.c)
 *     sub_140368A78 @ 0x140368A78 (sub_140368A78.c)
 *     sub_14038B428 @ 0x14038B428 (sub_14038B428.c)
 *     sub_1407FEC6C @ 0x1407FEC6C (sub_1407FEC6C.c)
 *     sub_140A47CF8 @ 0x140A47CF8 (sub_140A47CF8.c)
 *     sub_140A48330 @ 0x140A48330 (sub_140A48330.c)
 */

void sub_1408647A0()
{
  int v0; // ebx
  unsigned int v1; // edi
  __int64 v2; // rdx
  __int64 v3; // r8
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  _DWORD v7[4]; // [rsp+30h] [rbp-38h] BYREF
  _OWORD v8[2]; // [rsp+40h] [rbp-28h] BYREF

  memset(v8, 0, 24);
  v0 = 0;
  v1 = 2;
  while ( 1 )
  {
    sub_1402D66A8((ULONG_PTR)&qword_140C22200);
    if ( !(_BYTE)word_140C22211 && (!byte_140C22213 || !byte_140C22214) )
      break;
    if ( !byte_140C22210 )
      break;
    if ( (_BYTE)word_140C22211 )
    {
      v0 = 3;
      word_140C22211 = 256;
      v1 = 2;
    }
    if ( byte_140C22213 && byte_140C22214 )
    {
      v0 = 6;
      byte_140C22213 = 0;
      v1 = 3;
    }
    sub_1402935D0((ULONG_PTR)&qword_140C22200);
    sub_1402D66A8((ULONG_PTR)&qword_140C22060);
    sub_14038B428(v1, v2, v3);
    sub_1402935D0((ULONG_PTR)&qword_140C22060);
    v7[2] = 0;
    v8[0] = 0x8000000001uLL;
    v7[0] = v0;
    v7[1] = -1073741820;
    sub_140A48330(v4);
    if ( v0 == 6 )
      byte_140D069CC = 1;
    sub_1407FEC6C((unsigned int *)v8, 0, v7, 5, 1u);
    sub_140A47CF8(v6, v5);
  }
  sub_140368A78((__int64)&unk_140C22220);
  sub_1402935D0((ULONG_PTR)&qword_140C22200);
}
