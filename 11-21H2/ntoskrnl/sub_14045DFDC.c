/*
 * XREFs of sub_14045DFDC @ 0x14045DFDC
 * Callers:
 *     sub_14045E5E0 @ 0x14045E5E0 (sub_14045E5E0.c)
 *     sub_14045E6A0 @ 0x14045E6A0 (sub_14045E6A0.c)
 * Callees:
 *     sub_140355058 @ 0x140355058 (sub_140355058.c)
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 */

char __fastcall sub_14045DFDC(__int64 a1, int a2, int a3, char a4)
{
  __int64 v4; // rax
  char v5; // di
  char v7; // al
  char v8; // cl
  __int64 v10; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+2Ch] [rbp-1Ch]
  char v13; // [rsp+30h] [rbp-18h]
  char v14; // [rsp+31h] [rbp-17h]
  int v15; // [rsp+32h] [rbp-16h]
  __int16 v16; // [rsp+36h] [rbp-12h]

  v4 = *(_QWORD *)(a1 + 72);
  v5 = a2;
  v15 = 0;
  v16 = 0;
  v10 = v4;
  v11 = a2;
  v12 = a3;
  v13 = a4;
  v14 = 0;
  v7 = sub_14042A5E0(19LL, &v10);
  v8 = v14;
  if ( !v7 )
    v8 = 1;
  v14 = v8;
  if ( !v8 )
  {
    sub_140355058(*(_QWORD *)(a1 + 48), v5, 18, 0LL);
    return v14;
  }
  return v8;
}
