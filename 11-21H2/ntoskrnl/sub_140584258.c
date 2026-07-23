/*
 * XREFs of sub_140584258 @ 0x140584258
 * Callers:
 *     sub_14096A278 @ 0x14096A278 (sub_14096A278.c)
 * Callees:
 *     sub_140281620 @ 0x140281620 (sub_140281620.c)
 *     sub_14032E700 @ 0x14032E700 (sub_14032E700.c)
 *     sub_14096D7C4 @ 0x14096D7C4 (sub_14096D7C4.c)
 */

__int64 __fastcall sub_140584258(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  ULONG_PTR v4; // rax
  __int64 v5; // rax
  int v6; // edx
  int v8; // [rsp+38h] [rbp+10h] BYREF
  int v9; // [rsp+3Ch] [rbp+14h]

  v9 = HIDWORD(a2);
  v3 = 0;
  v8 = 0;
  v4 = sub_14096D7C4(*((_QWORD *)KeGetCurrentThread() + 23), a3);
  v5 = sub_140281620(v4, &v8);
  v6 = *(_DWORD *)(v5 + 48) & 0x70;
  if ( ((v6 - 16) & 0xFFFFFFCF) != 0 || v6 == 32 )
    v3 = 1;
  sub_14032E700((char *)v5);
  return v3;
}
