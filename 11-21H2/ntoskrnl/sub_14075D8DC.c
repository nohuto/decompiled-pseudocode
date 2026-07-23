/*
 * XREFs of sub_14075D8DC @ 0x14075D8DC
 * Callers:
 *     sub_14075D1B4 @ 0x14075D1B4 (sub_14075D1B4.c)
 *     sub_1408104C0 @ 0x1408104C0 (sub_1408104C0.c)
 * Callees:
 *     sub_14075D9BC @ 0x14075D9BC (sub_14075D9BC.c)
 *     sub_14075DA88 @ 0x14075DA88 (sub_14075DA88.c)
 *     sub_14075DBD8 @ 0x14075DBD8 (sub_14075DBD8.c)
 *     sub_1407838E0 @ 0x1407838E0 (sub_1407838E0.c)
 *     sub_140784160 @ 0x140784160 (sub_140784160.c)
 *     sub_14080EEFC @ 0x14080EEFC (sub_14080EEFC.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_14075D8DC(ULONG_PTR a1, unsigned int a2)
{
  __int64 v4; // rdx
  void *v5; // rbx
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rsi
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+70h] [rbp+18h] BYREF
  void *v12; // [rsp+78h] [rbp+20h] BYREF

  sub_140784160(a1);
  v4 = 0LL;
  v11 = 0;
  v5 = 0LL;
  v6 = *(_QWORD **)(a1 + 40);
  v10 = 0;
  v12 = 0LL;
  if ( v6 != (_QWORD *)(a1 + 40) )
  {
    do
    {
      v7 = v6 - 5;
      if ( (*(_DWORD *)(v6 - 3) & 8) == 0 )
      {
        v8 = v7[7] + 72LL;
        sub_14075D9BC(*((_DWORD *)v7 + 14) + 72, (_DWORD)v6 - 40, (unsigned int)&v10, (unsigned int)&v11, (__int64)&v12);
        if ( a2 == 1 )
        {
          sub_14075DA88(v8, v6 - 5);
        }
        else if ( a2 == 2 )
        {
          sub_14080EEFC(v8, v6 - 5);
        }
      }
      v6 = (_QWORD *)*v6;
    }
    while ( v6 != (_QWORD *)(a1 + 40) );
    v5 = v12;
    v4 = v10;
  }
  sub_14075DBD8(a2, v4, v5);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return sub_1407838E0(&off_140C037E0, a1);
}
