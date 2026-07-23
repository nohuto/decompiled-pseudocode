/*
 * XREFs of sub_1402EDC48 @ 0x1402EDC48
 * Callers:
 *     sub_14024DB60 @ 0x14024DB60 (sub_14024DB60.c)
 *     sub_1407B9FA0 @ 0x1407B9FA0 (sub_1407B9FA0.c)
 *     sub_1407BE3C0 @ 0x1407BE3C0 (sub_1407BE3C0.c)
 * Callees:
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_140318330 @ 0x140318330 (sub_140318330.c)
 *     sub_14079EC14 @ 0x14079EC14 (sub_14079EC14.c)
 */

__int64 __fastcall sub_1402EDC48(__int64 a1, __int64 a2, __int64 a3, char a4, unsigned __int64 a5, unsigned __int64 a6)
{
  unsigned int v6; // ebx
  int v8; // r13d
  int v10; // edi
  int v11; // r8d
  unsigned __int8 v12; // r12
  int v13; // eax
  int v14; // ecx
  _WORD v16[2]; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch] BYREF
  int v18; // [rsp+58h] [rbp-18h] BYREF
  int v19; // [rsp+5Ch] [rbp-14h] BYREF
  unsigned __int64 v20; // [rsp+60h] [rbp-10h] BYREF

  v6 = 0;
  v20 = 0LL;
  v8 = a3;
  v19 = 0;
  v17 = 0;
  v18 = 0;
  v16[0] = 0;
  if ( (a4 & 2) != 0 && (*(_DWORD *)(a3 + 48) & 0xC00) == 3072 && (*(_DWORD *)(a3 + 48) & 0x380) != 0 )
    return 3221225541LL;
  v10 = 0;
  v12 = sub_1402CF4F0(a1 + 1664);
  v13 = a5;
  if ( a5 <= a6 )
  {
    while ( 1 )
    {
      LOBYTE(v11) = v12;
      sub_140318330(v13, a6, v11, v8, 0LL, (__int64)&v17, (__int64)&v19, (__int64)v16, (__int64)&v20, (__int64)&v18);
      v14 = v17;
      if ( v17 == -1 )
        v14 = 0;
      v17 = v14;
      if ( (v14 & 2) == 0 && (a4 & 2) != 0 || (v14 & 2) != 0 && (a4 & 4) != 0 )
        break;
      v13 = v20;
      if ( v20 > a6 )
        goto LABEL_11;
    }
    v10 = 1;
  }
LABEL_11:
  sub_1402B0CE0(a1 + 1664, v12);
  if ( v10 )
    return (unsigned int)sub_14079EC14(a2);
  return v6;
}
