/*
 * XREFs of sub_14053B22C @ 0x14053B22C
 * Callers:
 *     sub_14032AD00 @ 0x14032AD00 (sub_14032AD00.c)
 * Callees:
 *     sub_1402477A4 @ 0x1402477A4 (sub_1402477A4.c)
 *     sub_140247800 @ 0x140247800 (sub_140247800.c)
 *     sub_140247840 @ 0x140247840 (sub_140247840.c)
 *     sub_140247914 @ 0x140247914 (sub_140247914.c)
 *     sub_140285740 @ 0x140285740 (sub_140285740.c)
 *     RtlRaiseStatus @ 0x1402D37A0 (RtlRaiseStatus.c)
 */

void __fastcall sub_14053B22C(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rdx
  __int64 v6; // r8
  _QWORD v7[3]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-10h]
  int v9; // [rsp+3Ch] [rbp-Ch]

  if ( *(__int64 *)(a1 + 32) > 0x2000000 )
  {
    v9 = 0;
    v4 = *(_DWORD *)(a1 + 152);
    v7[2] = 0LL;
    v7[1] = v7;
    v7[0] = v7;
    v8 = 0;
    if ( !sub_140247914(dword_140C09594 - 1, (v4 & 0x200) != 0, (__int64)v7) )
      RtlRaiseStatus(-1073741670);
    sub_140247840(1, (struct _FAST_MUTEX *)a1);
    sub_140285740(a1, a2, 0xFFFFFFFFFFFFFFFFuLL, (__int64)v7);
    sub_140247800(1, (struct _FAST_MUTEX *)a1);
    sub_1402477A4((__int64)v7, v5, v6);
  }
}
