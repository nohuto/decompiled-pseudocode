/*
 * XREFs of sub_1409A14A0 @ 0x1409A14A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14025B380 @ 0x14025B380 (sub_14025B380.c)
 *     sub_1406E7220 @ 0x1406E7220 (sub_1406E7220.c)
 *     sub_1407F1400 @ 0x1407F1400 (sub_1407F1400.c)
 *     sub_1407F15C0 @ 0x1407F15C0 (sub_1407F15C0.c)
 *     sub_140853E30 @ 0x140853E30 (sub_140853E30.c)
 */

__int64 __fastcall sub_1409A14A0(__int64 a1, __int64 a2, struct _DEVICE_OBJECT *a3, KSPIN_LOCK **a4)
{
  KSPIN_LOCK *v4; // rsi
  __int64 *v5; // rdi
  int v9; // ebx
  int v10; // eax
  __int64 *v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13[3]; // [rsp+28h] [rbp-30h] BYREF
  KSPIN_LOCK *v14; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v14 = 0LL;
  v12 = 0LL;
  v13[0] = 0LL;
  if ( a1 && a2 && a3 && a4 )
  {
    v9 = sub_1406E7220(a2, v13);
    if ( v9 < 0 )
      return (unsigned int)v9;
    v10 = sub_140853E30(a1, v13, a3, &v12);
    v5 = v12;
    v9 = v10;
    if ( v10 >= 0 )
    {
      v9 = sub_1407F1400(v12, &v14);
      if ( v9 >= 0 )
      {
        *a4 = v14;
        return (unsigned int)v9;
      }
      v4 = v14;
    }
  }
  else
  {
    v9 = -1073741811;
  }
  if ( v5 )
    sub_1407F15C0(v5);
  if ( v4 )
    sub_14025B380(v4);
  return (unsigned int)v9;
}
