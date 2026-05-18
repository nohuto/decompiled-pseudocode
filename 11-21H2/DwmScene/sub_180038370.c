/*
 * XREFs of sub_180038370 @ 0x180038370
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180010910 @ 0x180010910 (sub_180010910.c)
 *     sub_1800126E8 @ 0x1800126E8 (sub_1800126E8.c)
 *     sub_18002C7C4 @ 0x18002C7C4 (sub_18002C7C4.c)
 *     sub_180030E20 @ 0x180030E20 (sub_180030E20.c)
 *     sub_180032D74 @ 0x180032D74 (sub_180032D74.c)
 *     sub_180034B88 @ 0x180034B88 (sub_180034B88.c)
 *     sub_180035810 @ 0x180035810 (sub_180035810.c)
 *     sub_180036948 @ 0x180036948 (sub_180036948.c)
 *     sub_1800369F8 @ 0x1800369F8 (sub_1800369F8.c)
 *     sub_18003C998 @ 0x18003C998 (sub_18003C998.c)
 *     sub_180057AF8 @ 0x180057AF8 (sub_180057AF8.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180038370(__int64 a1)
{
  int v2; // eax
  _QWORD *v3; // r15
  char *v4; // rsi
  char *v5; // rbx
  __int64 result; // rax
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  __int64 v9; // [rsp+28h] [rbp-18h]
  __int128 v10; // [rsp+30h] [rbp-10h] BYREF

  sub_18002C7C4(a1 + 8);
  while ( (unsigned int)sub_1800369F8(a1) )
  {
    v2 = sub_1800369F8(a1);
    sub_180036948(a1, &v8, v2 - 1);
    sub_180035810((_QWORD *)a1, (__int64)&v8);
    sub_180010910((__int64)&v8);
  }
  sub_180057AF8(*(_QWORD *)(a1 + 512));
  v10 = 0LL;
  v8 = *(_QWORD *)(a1 + 512);
  *(_QWORD *)(a1 + 512) = 0LL;
  v9 = *(_QWORD *)(a1 + 520);
  *(_QWORD *)(a1 + 520) = 0LL;
  sub_180010910((__int64)&v8);
  sub_180010910((__int64)&v10);
  sub_180034B88(a1);
  v3 = *(_QWORD **)(a1 + 728);
  v4 = (char *)v3[1];
  while ( !v4[25] )
  {
    sub_180030E20(a1 + 728, a1 + 728, *((char **)v4 + 2));
    v5 = v4;
    v4 = *(char **)v4;
    sub_180032D74((__int64)(v5 + 32));
    sub_180010884(v5, 0x48uLL);
  }
  v3[1] = v3;
  *v3 = v3;
  v3[2] = v3;
  *(_QWORD *)(a1 + 736) = 0LL;
  v10 = 0LL;
  v8 = *(_QWORD *)(a1 + 480);
  *(_QWORD *)(a1 + 480) = 0LL;
  v9 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 488) = 0LL;
  sub_180010910((__int64)&v8);
  sub_180010910((__int64)&v10);
  v10 = 0LL;
  v8 = *(_QWORD *)(a1 + 496);
  *(_QWORD *)(a1 + 496) = 0LL;
  v9 = *(_QWORD *)(a1 + 504);
  *(_QWORD *)(a1 + 504) = 0LL;
  sub_180010910((__int64)&v8);
  sub_180010910((__int64)&v10);
  sub_1800126E8(*(_QWORD *)(a1 + 704), *(_QWORD *)(a1 + 712));
  result = *(_QWORD *)(a1 + 704);
  *(_QWORD *)(a1 + 712) = result;
  if ( *(_DWORD *)(a1 + 1192) )
  {
    v7 = Mtx_lock((_Mtx_t)(a1 + 1280));
    if ( v7 )
    {
      std::_Throw_C_error(v7);
      __debugbreak();
    }
    *(_BYTE *)(a1 + 1360) = 1;
    Cnd_signal((_Cnd_t)(a1 + 1208));
    Mtx_unlock((_Mtx_t)(a1 + 1280));
    return sub_18003C998(a1 + 1184);
  }
  return result;
}
