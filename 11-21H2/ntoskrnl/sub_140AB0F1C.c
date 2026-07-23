/*
 * XREFs of sub_140AB0F1C @ 0x140AB0F1C
 * Callers:
 *     sub_140AB12E0 @ 0x140AB12E0 (sub_140AB12E0.c)
 * Callees:
 *     sub_14064D5F4 @ 0x14064D5F4 (sub_14064D5F4.c)
 */

__int64 sub_140AB0F1C()
{
  unsigned int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rax
  unsigned __int16 v3; // r11
  __int64 v4; // rax
  int v5; // ecx
  int v6; // edx
  unsigned __int64 v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+60h] [rbp+8h] BYREF
  int v10; // [rsp+68h] [rbp+10h] BYREF

  v0 = *(_DWORD *)(qword_140CE1AD8 + 76);
  if ( v0 )
  {
    v6 = *(_DWORD *)(qword_140CE1AD8 + 16);
    v5 = *(_DWORD *)(qword_140CE1AD8 + 12);
    if ( v0 >= 0x22 )
    {
      v3 = 9604;
      if ( v0 >= 0x43 )
        v3 = 9608;
    }
    else
    {
      v3 = 95;
    }
  }
  else
  {
    v1 = 25LL * *(unsigned int *)(qword_140CE1AD8 + 68);
    v2 = *(unsigned int *)(qword_140CE1AD8 + 72);
    v3 = *(_WORD *)(qword_140CE1AD8 + 12 * (v2 + v1) + 88);
    v4 = 3 * (v2 + v1);
    v5 = *(_DWORD *)(qword_140CE1AD8 + 4 * v4 + 80);
    v6 = *(_DWORD *)(qword_140CE1AD8 + 4 * v4 + 84);
  }
  return sub_14064D5F4(
           v3,
           *(__int64 **)(qword_140CE1AD8 + 40),
           *(_DWORD *)(qword_140CE1AD8 + 60) + *(_DWORD *)(qword_140CE1AD8 + 68) * *(_DWORD *)(qword_140CE1AD8 + 48),
           *(_DWORD *)(qword_140CE1AD8 + 64) + *(_DWORD *)(qword_140CE1AD8 + 72) * *(_DWORD *)(qword_140CE1AD8 + 52),
           v6,
           v5,
           &v10,
           &v9,
           v8);
}
