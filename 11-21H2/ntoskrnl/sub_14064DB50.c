/*
 * XREFs of sub_14064DB50 @ 0x14064DB50
 * Callers:
 *     sub_14064DF74 @ 0x14064DF74 (sub_14064DF74.c)
 *     sub_14064E9C0 @ 0x14064E9C0 (sub_14064E9C0.c)
 * Callees:
 *     sub_14064D5F4 @ 0x14064D5F4 (sub_14064D5F4.c)
 */

__int64 __fastcall sub_14064DB50(__int16 a1, int a2)
{
  int v2; // esi
  unsigned int v3; // r8d
  int v4; // ebx
  unsigned int v5; // r9d
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 result; // rax
  int v9; // edx
  unsigned __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+60h] [rbp+8h] BYREF
  int v12; // [rsp+70h] [rbp+18h] BYREF

  LOWORD(v11) = a1;
  v2 = qword_140C4EF78;
  v3 = qword_140C4EF78;
  v4 = HIDWORD(qword_140C4EF78);
  v5 = HIDWORD(qword_140C4EF78);
  v12 = 0;
  v6 = *(_QWORD *)(qword_140C5A830 + 24);
  v11 = 0;
  v7 = dword_140C4EF80;
  *(_DWORD *)(v6 + 56) = a2;
  *(_DWORD *)(qword_140C5A830 + 8) = a2;
  result = sub_14064D5F4(0x20u, (__int64 *)qword_140C5A830, v3, v5, *(_DWORD *)(v6 + 40), -1, &v12, &v11, v10);
  if ( (int)result >= 0 )
  {
    v9 = v4 + v11;
    HIDWORD(qword_140C4EF78) = v4;
    LODWORD(qword_140C4EF78) = v2 + v12;
    if ( v7 >= v4 + v11 )
      v9 = v7;
    dword_140C4EF80 = v9;
  }
  return result;
}
