/*
 * XREFs of sub_180035390 @ 0x180035390
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010530 @ 0x180010530 (sub_180010530.c)
 *     sub_180011020 @ 0x180011020 (sub_180011020.c)
 *     sub_180027964 @ 0x180027964 (sub_180027964.c)
 *     sub_18002A404 @ 0x18002A404 (sub_18002A404.c)
 *     sub_18002B3EC @ 0x18002B3EC (sub_18002B3EC.c)
 *     sub_18002B8E0 @ 0x18002B8E0 (sub_18002B8E0.c)
 *     sub_180032AE4 @ 0x180032AE4 (sub_180032AE4.c)
 *     sub_180033400 @ 0x180033400 (sub_180033400.c)
 *     sub_1800341C8 @ 0x1800341C8 (sub_1800341C8.c)
 *     sub_180034264 @ 0x180034264 (sub_180034264.c)
 *     sub_180038658 @ 0x180038658 (sub_180038658.c)
 *     sub_180038880 @ 0x180038880 (sub_180038880.c)
 *     sub_180050550 @ 0x180050550 (sub_180050550.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180035390(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 result; // rax
  __int64 v6[3]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002A404(a1 + 8);
  while ( (unsigned int)sub_180034264(a1) )
  {
    v2 = sub_180034264(a1);
    sub_1800341C8(a1, v6, v2 - 1);
    sub_180033400((_QWORD *)a1, v6);
    if ( v6[1] )
      sub_180010530(v6[1]);
  }
  sub_180050550(*(_QWORD *)(a1 + 512));
  *(_OWORD *)v6 = 0LL;
  sub_180011020((_QWORD *)(a1 + 512), v6);
  if ( v6[1] )
    sub_180010530(v6[1]);
  sub_180032AE4(a1);
  sub_180038658(a1 + 728);
  *(_QWORD *)(a1 + 480) = 0LL;
  v3 = *(_QWORD *)(a1 + 488);
  *(_QWORD *)(a1 + 488) = 0LL;
  if ( v3 )
    sub_180010530(v3);
  *(_QWORD *)(a1 + 496) = 0LL;
  v4 = *(_QWORD *)(a1 + 504);
  *(_QWORD *)(a1 + 504) = 0LL;
  if ( v4 )
    sub_180010530(v4);
  result = sub_180027964((__int64 *)(a1 + 704));
  if ( *(_DWORD *)(a1 + 1192) )
  {
    sub_18002B3EC((__int64)v6, (struct _Mtx_internal_imp_t *)(a1 + 1280));
    *(_BYTE *)(a1 + 1360) = 1;
    Cnd_signal((_Cnd_t)(a1 + 1208));
    sub_18002B8E0((__int64)v6);
    return sub_180038880(a1 + 1184);
  }
  return result;
}
