/*
 * XREFs of sub_14045D27C @ 0x14045D27C
 * Callers:
 *     sub_14037B44C @ 0x14037B44C (sub_14037B44C.c)
 * Callees:
 *     sub_14024A9B0 @ 0x14024A9B0 (sub_14024A9B0.c)
 *     sub_1402A2000 @ 0x1402A2000 (sub_1402A2000.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 */

void __fastcall sub_14045D27C(int a1)
{
  __int64 v1; // r8
  int v2; // r9d
  __int64 v3; // r10
  int v4; // r11d
  int v5; // [rsp+20h] [rbp-88h]
  int v6; // [rsp+28h] [rbp-80h]
  int v7; // [rsp+40h] [rbp-68h] BYREF
  int v8; // [rsp+44h] [rbp-64h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v9; // [rsp+50h] [rbp-58h] BYREF
  int *v10; // [rsp+70h] [rbp-38h]
  int v11; // [rsp+78h] [rbp-30h]
  int v12; // [rsp+7Ch] [rbp-2Ch]
  int *v13; // [rsp+80h] [rbp-28h]
  int v14; // [rsp+88h] [rbp-20h]
  int v15; // [rsp+8Ch] [rbp-1Ch]

  if ( *(_QWORD *)&qword_140C53448 && a1 != -1073741401 && **(_DWORD **)&qword_140C53448 > 5u )
  {
    if ( sub_1402A2000(*(__int64 *)&qword_140C53448, 0x400000000002LL) )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v7 = v2;
      v13 = &v8;
      v11 = 4;
      v14 = 4;
      v8 = v4;
      sub_14024A9B0(v3, (unsigned __int8 *)&dword_14002DF5D + 3, v1, 1u, v5, v6, 4u, &v9);
    }
  }
}
