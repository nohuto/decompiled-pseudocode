/*
 * XREFs of sub_14079B0D0 @ 0x14079B0D0
 * Callers:
 *     sub_14068C820 @ 0x14068C820 (sub_14068C820.c)
 *     sub_1406C61D8 @ 0x1406C61D8 (sub_1406C61D8.c)
 *     sub_14071F430 @ 0x14071F430 (sub_14071F430.c)
 *     sub_14091A9EC @ 0x14091A9EC (sub_14091A9EC.c)
 *     sub_14091ADA0 @ 0x14091ADA0 (sub_14091ADA0.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14068DE2C @ 0x14068DE2C (sub_14068DE2C.c)
 *     sub_14068DF38 @ 0x14068DF38 (sub_14068DF38.c)
 *     sub_1406C9BF4 @ 0x1406C9BF4 (sub_1406C9BF4.c)
 *     sub_14079B740 @ 0x14079B740 (sub_14079B740.c)
 *     sub_140AB44A4 @ 0x140AB44A4 (sub_140AB44A4.c)
 *     sub_140AB44C0 @ 0x140AB44C0 (sub_140AB44C0.c)
 *     sub_140AB451C @ 0x140AB451C (sub_140AB451C.c)
 *     sub_140AB4534 @ 0x140AB4534 (sub_140AB4534.c)
 */

__int64 __fastcall sub_14079B0D0(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3, unsigned int a3, int a4)
{
  unsigned int v7; // ebx
  int v8; // r8d
  __int64 v9; // rax
  __int64 v10; // rax
  unsigned int *v11; // rcx
  unsigned int v12; // r11d
  __int64 v13; // rax
  __int64 v14; // rcx
  char v15; // r8
  __int64 v16; // r10
  int v17; // r11d
  unsigned int v18; // esi
  ULONG_PTR v19; // rcx
  __int64 result; // rax
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned int v23; // r11d
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int16 v27; // [rsp+50h] [rbp+8h] BYREF

  v27 = 0;
  v7 = BugCheckParameter3;
  sub_140AB4534(&v27);
  if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x11) == 0 && v8 )
  {
    do
    {
      v9 = sub_140AB44C0(BugCheckParameter2, v7);
      if ( !v9 )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x445uLL);
      if ( (*(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF0uLL) == 0 )
      {
        v7 += 4096;
        a3 -= 4096;
        continue;
      }
      v10 = sub_14079B740(v9);
      if ( v10 )
        v12 = v7 - *(_DWORD *)(v10 + 20);
      else
        v12 = *v11;
      v13 = sub_140AB44C0(BugCheckParameter2, v7 - v12);
      v18 = *(_DWORD *)(v13 + 16) - v17;
      if ( a3 < v18 )
        v18 = a3;
      if ( (v15 & 8) != 0 )
      {
        v21 = sub_140AB451C(v14, v16, &v27);
        v24 = sub_1406C9BF4(BugCheckParameter2, v21, v22, v23, v18, a4 == 4);
        sub_140AB44A4(v24 >= 0, v25, &v27);
        result = v26;
        if ( !v26 )
          goto LABEL_23;
      }
      else if ( (*(_DWORD *)(BugCheckParameter2 + 160) & 0x20000) != 0 )
      {
        v19 = BugCheckParameter2 + 224;
        if ( a4 == 2 )
        {
          sub_14068DE2C(v19, v7, v18);
        }
        else if ( (int)sub_14068DF38(v19, v7, v18) < 0 )
        {
          result = 0LL;
LABEL_23:
          if ( a4 == 4 )
            return result;
        }
      }
      a3 -= v18;
      v7 += v18;
    }
    while ( a3 );
  }
  return 1LL;
}
