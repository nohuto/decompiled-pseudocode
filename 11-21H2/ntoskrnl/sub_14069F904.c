/*
 * XREFs of sub_14069F904 @ 0x14069F904
 * Callers:
 *     sub_14069F7AC @ 0x14069F7AC (sub_14069F7AC.c)
 *     sub_14090D9E8 @ 0x14090D9E8 (sub_14090D9E8.c)
 *     sub_14091CA90 @ 0x14091CA90 (sub_14091CA90.c)
 * Callees:
 *     InitializeListHead @ 0x1402AD320 (InitializeListHead.c)
 *     sub_140346C60 @ 0x140346C60 (sub_140346C60.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     sub_14069FA30 @ 0x14069FA30 (sub_14069FA30.c)
 *     sub_14069FB00 @ 0x14069FB00 (sub_14069FB00.c)
 *     sub_1407C09E0 @ 0x1407C09E0 (sub_1407C09E0.c)
 *     sub_140AB4550 @ 0x140AB4550 (sub_140AB4550.c)
 *     sub_140AB4580 @ 0x140AB4580 (sub_140AB4580.c)
 */

__int64 __fastcall sub_14069F904(__int64 a1)
{
  unsigned int v1; // r14d
  __int64 v2; // rbp
  __int64 v3; // rsi
  __int64 *v4; // rdi
  __int64 i; // rax
  ULONG_PTR v7; // rbx
  __int64 *v8; // rax
  _LIST_ENTRY ListHead; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v10[3]; // [rsp+30h] [rbp-58h] BYREF

  v1 = *(_DWORD *)(a1 + 1656);
  v2 = *(_QWORD *)(a1 + 1648);
  memset(v10, 0, sizeof(v10));
  ListHead = 0LL;
  sub_140AB4550(v10);
  InitializeListHead(&ListHead);
  v3 = 0LL;
  if ( v1 )
  {
    v4 = (__int64 *)(v2 + 16);
    do
    {
      for ( i = *v4; i; i = *v8 )
      {
        v7 = i - 16;
        if ( *(_QWORD *)(i - 16) )
        {
          v8 = (__int64 *)(v7 + 24);
        }
        else
        {
          sub_14069FB00(i - 16);
          sub_1407C09E0(v7);
          if ( (*(_DWORD *)(v7 + 8) & 0x80000) != 0 )
            sub_14069FA30(v7);
          sub_140346C60(&ListHead);
          v8 = (__int64 *)(v2 + 16 + 24 * v3);
        }
      }
      v3 = (unsigned int)(v3 + 1);
      v4 += 3;
    }
    while ( (unsigned int)v3 < v1 );
  }
  return sub_140AB4580(v10);
}
