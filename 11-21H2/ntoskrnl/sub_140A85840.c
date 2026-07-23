/*
 * XREFs of sub_140A85840 @ 0x140A85840
 * Callers:
 *     <none>
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_140A83924 @ 0x140A83924 (sub_140A83924.c)
 *     sub_140A83D24 @ 0x140A83D24 (sub_140A83D24.c)
 *     sub_140A88430 @ 0x140A88430 (sub_140A88430.c)
 *     sub_140A88738 @ 0x140A88738 (sub_140A88738.c)
 *     sub_140A8883C @ 0x140A8883C (sub_140A8883C.c)
 *     sub_140A895A4 @ 0x140A895A4 (sub_140A895A4.c)
 */

void __fastcall sub_140A85840(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, char a5)
{
  __int64 v8; // r14
  __int64 v9; // rdi
  char v10; // al
  char v11; // r15
  char v12; // si
  __int64 v13; // r9
  __int64 v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v8 = sub_140A88738(a1);
  v9 = sub_140A88430(a1);
  v10 = sub_140A8883C(&v14);
  v11 = a5;
  v12 = v10;
  if ( !v9 || v10 || (sub_140A83D24(), LOBYTE(v13) = v11, !(unsigned int)sub_140A895A4(v8, v9, a4, v13)) )
  {
    sub_14042A5E0(a1, a2);
    if ( v9 )
    {
      if ( !v12 )
        sub_140A83924(v9);
    }
  }
}
