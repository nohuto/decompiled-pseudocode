/*
 * XREFs of sub_1407FE82C @ 0x1407FE82C
 * Callers:
 *     sub_14038B628 @ 0x14038B628 (sub_14038B628.c)
 *     sub_14038BAA8 @ 0x14038BAA8 (sub_14038BAA8.c)
 *     sub_1407EF120 @ 0x1407EF120 (sub_1407EF120.c)
 *     sub_1407FE700 @ 0x1407FE700 (sub_1407FE700.c)
 *     sub_1407FE774 @ 0x1407FE774 (sub_1407FE774.c)
 *     sub_1407FE79C @ 0x1407FE79C (sub_1407FE79C.c)
 *     sub_1407FE7BC @ 0x1407FE7BC (sub_1407FE7BC.c)
 *     sub_1407FE7DC @ 0x1407FE7DC (sub_1407FE7DC.c)
 *     sub_1407FFCB0 @ 0x1407FFCB0 (sub_1407FFCB0.c)
 *     sub_1407FFD04 @ 0x1407FFD04 (sub_1407FFD04.c)
 *     sub_1407FFD64 @ 0x1407FFD64 (sub_1407FFD64.c)
 *     sub_1407FFDDC @ 0x1407FFDDC (sub_1407FFDDC.c)
 *     sub_14098C0DC @ 0x14098C0DC (sub_14098C0DC.c)
 *     sub_14098FC84 @ 0x14098FC84 (sub_14098FC84.c)
 *     sub_14098FDA8 @ 0x14098FDA8 (sub_14098FDA8.c)
 *     sub_14098FDE4 @ 0x14098FDE4 (sub_14098FDE4.c)
 * Callees:
 *     sub_14035EDE4 @ 0x14035EDE4 (sub_14035EDE4.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_1407F2AD0 @ 0x1407F2AD0 (sub_1407F2AD0.c)
 */

__int64 __fastcall sub_1407FE82C(_DWORD *a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v6; // eax
  unsigned int v7; // [rsp+30h] [rbp-30h] BYREF
  int *v8; // [rsp+38h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+44h] [rbp-1Ch]
  _DWORD v11[4]; // [rsp+48h] [rbp-18h] BYREF

  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v6 = a1[1];
    v10 = 0;
    v11[0] = v6;
    v11[1] = a1[2];
    v11[2] = a1[3];
    v11[3] = a1[4];
    v8 = v11;
    v9 = 16;
    sub_14035EDE4((__int64)&v8, 1u, 0x80008000, 0x1228u, 0x401802u);
  }
  v4 = sub_1407F2AD0(4, (__int64)a1, 2 - (unsigned int)(a2 != 0), (unsigned int *)(a2 & -(__int64)(a2 != 0)));
  if ( (xmmword_140D06910 & 0x8000) != 0 )
  {
    v10 = 0;
    v8 = (int *)&v7;
    v7 = v4;
    v9 = 4;
    sub_14035EDE4((__int64)&v8, 1u, 0x80008000, 0x1229u, 0x401802u);
  }
  return v4;
}
