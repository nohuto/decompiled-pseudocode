/*
 * XREFs of sub_1407C04B4 @ 0x1407C04B4
 * Callers:
 *     sub_140346910 @ 0x140346910 (sub_140346910.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 *     sub_1407C0160 @ 0x1407C0160 (sub_1407C0160.c)
 *     sub_14090EF60 @ 0x14090EF60 (sub_14090EF60.c)
 *     sub_14090F750 @ 0x14090F750 (sub_14090F750.c)
 *     sub_14090F9B0 @ 0x14090F9B0 (sub_14090F9B0.c)
 * Callees:
 *     sub_1402ACD00 @ 0x1402ACD00 (sub_1402ACD00.c)
 *     sub_140735760 @ 0x140735760 (sub_140735760.c)
 */

__int64 __fastcall sub_1407C04B4(unsigned int a1, __int64 a2, unsigned int a3, __int64 a4, _QWORD *a5)
{
  _QWORD v10[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v11; // [rsp+58h] [rbp-30h]
  __int128 v12; // [rsp+60h] [rbp-28h]
  __int64 v13; // [rsp+70h] [rbp-18h]

  if ( dword_140C54CA8 && !sub_1402ACD00() && (_QWORD *)*a5 != a5 )
  {
    v13 = 0LL;
    v10[0] = a2;
    v10[1] = a3;
    v11 = a3;
    v12 = 0LL;
    v10[2] = a4;
    sub_140735760(a1, (__int64)v10, 0LL, 0, a1, a2, (__int64)a5);
    return (unsigned int)v11;
  }
  return a3;
}
