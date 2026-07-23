/*
 * XREFs of sub_140920AB4 @ 0x140920AB4
 * Callers:
 *     sub_14091EEC4 @ 0x14091EEC4 (sub_14091EEC4.c)
 * Callees:
 *     sub_1406BF278 @ 0x1406BF278 (sub_1406BF278.c)
 *     sub_1406BF400 @ 0x1406BF400 (sub_1406BF400.c)
 *     sub_1406BF450 @ 0x1406BF450 (sub_1406BF450.c)
 *     sub_1407164DC @ 0x1407164DC (sub_1407164DC.c)
 *     sub_1407C97C0 @ 0x1407C97C0 (sub_1407C97C0.c)
 *     sub_1407C9820 @ 0x1407C9820 (sub_1407C9820.c)
 *     sub_14082F12C @ 0x14082F12C (sub_14082F12C.c)
 *     sub_14091F960 @ 0x14091F960 (sub_14091F960.c)
 *     sub_1409222C0 @ 0x1409222C0 (sub_1409222C0.c)
 */

bool __fastcall sub_140920AB4(ULONG_PTR BugCheckParameter3, __int64 a2, ULONG_PTR a3, _DWORD *a4, _WORD *a5)
{
  unsigned int v5; // r14d
  int v10; // ebx
  ULONG_PTR v11; // rax
  ULONG_PTR v12; // rbx
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-20h] BYREF
  int BugCheckParameter4_4; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  UNICODE_STRING v17; // [rsp+30h] [rbp-10h] BYREF

  BugCheckParameter4 = 0;
  v5 = 0;
  v16 = 0xFFFFFFFFLL;
  v17 = 0LL;
  while ( 1 )
  {
    v10 = sub_1406BF278(a3, a4, v5, &BugCheckParameter4);
    if ( v10 < 0 || BugCheckParameter4 == -1 )
      break;
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      v11 = sub_1406BF400(a3, BugCheckParameter4, &v16);
    else
      v11 = sub_1407C9820(a3, BugCheckParameter4, (unsigned int *)&v16);
    v12 = v11;
    if ( !v11 )
    {
      v10 = -1073741670;
      return v10 >= 0;
    }
    sub_14091F960(v11, (__int64)&v17, a5);
    BugCheckParameter4_4 = 0;
    sub_14082F12C(BugCheckParameter3, a2, &v17, &BugCheckParameter4_4);
    if ( BugCheckParameter4_4 == -1 )
    {
      if ( *(_DWORD *)(v12 + 20) + *(_DWORD *)(v12 + 24) )
        sub_1409222C0(a3, BugCheckParameter4);
      v10 = sub_1407164DC(a3, BugCheckParameter4, 1);
      if ( v10 < 0 )
      {
        if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
          sub_1406BF450(a3, &v16);
        else
          sub_1407C97C0(a3, (unsigned int *)&v16);
        return v10 >= 0;
      }
    }
    else
    {
      ++v5;
    }
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      sub_1406BF450(a3, &v16);
    else
      sub_1407C97C0(a3, (unsigned int *)&v16);
  }
  return v10 >= 0;
}
