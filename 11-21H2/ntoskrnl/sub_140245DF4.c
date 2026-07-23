/*
 * XREFs of sub_140245DF4 @ 0x140245DF4
 * Callers:
 *     sub_1406C2718 @ 0x1406C2718 (sub_1406C2718.c)
 * Callees:
 *     sub_14020D8D0 @ 0x14020D8D0 (sub_14020D8D0.c)
 *     sub_14026DFC0 @ 0x14026DFC0 (sub_14026DFC0.c)
 *     sub_140274508 @ 0x140274508 (sub_140274508.c)
 *     sub_1402B0CE0 @ 0x1402B0CE0 (sub_1402B0CE0.c)
 *     sub_1402CF4F0 @ 0x1402CF4F0 (sub_1402CF4F0.c)
 *     sub_1402E20D0 @ 0x1402E20D0 (sub_1402E20D0.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAH@Z @ 0x1402EA644 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_140316400 @ 0x140316400 (sub_140316400.c)
 *     sub_140317A10 @ 0x140317A10 (sub_140317A10.c)
 *     sub_14031C860 @ 0x14031C860 (sub_14031C860.c)
 *     sub_14032CE60 @ 0x14032CE60 (sub_14032CE60.c)
 *     sub_14033A510 @ 0x14033A510 (sub_14033A510.c)
 *     sub_14033C2A0 @ 0x14033C2A0 (sub_14033C2A0.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     sub_14058DCA8 @ 0x14058DCA8 (sub_14058DCA8.c)
 *     sub_1405BCAF8 @ 0x1405BCAF8 (sub_1405BCAF8.c)
 */

__int64 __fastcall sub_140245DF4(ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // rbp
  __int64 v3; // rbx
  unsigned __int64 v4; // r15
  __int64 v5; // rsi
  int v6; // r9d
  char v7; // r12
  unsigned int v8; // r14d
  __int64 v9; // rax
  unsigned __int64 v10; // rdi
  char v11; // al
  __int64 v12; // rdx
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // eax
  ULONG_PTR v18; // rdi
  int v19; // [rsp+70h] [rbp+8h] BYREF
  __int64 v20; // [rsp+78h] [rbp+10h] BYREF

  v2 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = 0LL;
  v4 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = sub_14026DFC0(2LL);
  v7 = sub_1402CF4F0(v5);
  v8 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      LOBYTE(v6) = v7;
      sub_14032CE60(v2, 0, 0, v6, 4);
      v9 = sub_140317A10(v2);
      v20 = v9;
      if ( (v9 & 1) != 0 )
        break;
      sub_14020D8D0(v5, v4);
      LOBYTE(v16) = v7;
      sub_1402B0CE0(v5, v16);
      v17 = sub_14031C860(0LL, BugCheckParameter4);
      v18 = v17;
      if ( v17 < 0 )
      {
        sub_14058DCA8(1LL);
        KeBugCheckEx(0x7Au, 2uLL, v18, 0LL, BugCheckParameter4);
      }
LABEL_16:
      sub_1402CF4F0(v5);
    }
    if ( (v9 & 0x200) == 0 )
      break;
    v14 = sub_140316400((__int64)(v2 << 25) >> 16);
    sub_14020D8D0(v5, v4);
    if ( v14 < 0 )
    {
      LOBYTE(v15) = v7;
      sub_1402B0CE0(v5, v15);
      sub_1405BCAF8(v5, (unsigned int)v14);
      goto LABEL_16;
    }
  }
  v10 = 48 * (((unsigned __int64)sub_140317A10(&v20) >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
  v19 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
  {
    do
      sub_1402F32E0(&v19);
    while ( *(__int64 *)(v10 + 24) < 0 );
  }
  if ( (unsigned int)sub_140274508(v10, 0LL) )
    v3 = sub_14033C2A0(v10);
  else
    v8 = 0;
  _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v8 )
  {
    if ( v3 )
      sub_1402E20D0(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v10 + 40) >> 43) & 0x3FFLL)), v3, 1LL);
    v11 = sub_140317A10(v2);
    if ( (v11 & 0x20) == 0 || (v11 & 0x42) == 0 )
      sub_14033A510(v2, 3LL);
    if ( (dword_140D06880 & 0x100) == 0 )
      std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(BugCheckParameter4, 0LL, 1LL);
  }
  sub_14020D8D0(v5, v4);
  LOBYTE(v12) = v7;
  sub_1402B0CE0(v5, v12);
  return v8;
}
