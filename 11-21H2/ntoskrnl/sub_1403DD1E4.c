/*
 * XREFs of sub_1403DD1E4 @ 0x1403DD1E4
 * Callers:
 *     sub_1403B3320 @ 0x1403B3320 (sub_1403B3320.c)
 * Callees:
 *     sub_1403DD284 @ 0x1403DD284 (sub_1403DD284.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

bool __fastcall sub_1403DD1E4(int *a1, int *a2)
{
  char v4; // al
  __int64 v5; // rdx
  int v6; // ebx
  char v7; // r8
  int v8; // ebp
  bool v9; // di
  unsigned __int64 v10; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  char v14; // [rsp+40h] [rbp+8h] BYREF

  v14 = 0;
  v4 = sub_1403DD284(0LL, 0LL, 0LL, &v14);
  v6 = 0;
  v7 = v4 != 0 ? v14 : 0;
  v8 = 0;
  v9 = 0;
  v14 = v7;
  if ( v7 == 2 )
  {
    v10 = __readmsr(0x179u);
    LODWORD(v10) = v10 & 0x400;
    v9 = (_DWORD)v10 != 0;
    v6 = (unsigned int)v10 != 0LL ? 0x2F0 : 0;
  }
  else if ( v7 == 1 && (int)sub_14042A5E0(48LL, v5) < 0 )
  {
    v13 = sub_14042A5E0(1024LL, v12) & 0xFF0000;
    v6 = (unsigned int)v13 > 0x10000 ? 0x510 : 0;
    v9 = (unsigned int)v13 > 0x10000;
    if ( (unsigned int)v13 > 0x20000 )
      v8 = 1312;
  }
  if ( a1 && v9 )
    *a1 = v6;
  if ( a2 )
    *a2 = v8;
  return v9;
}
