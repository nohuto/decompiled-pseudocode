/*
 * XREFs of sub_18001F06C @ 0x18001F06C
 * Callers:
 *     sub_18001F2B4 @ 0x18001F2B4 (sub_18001F2B4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000C1F8 @ 0x18000C1F8 (sub_18000C1F8.c)
 *     sub_180010884 @ 0x180010884 (sub_180010884.c)
 *     sub_180012190 @ 0x180012190 (sub_180012190.c)
 *     sub_18001DE64 @ 0x18001DE64 (sub_18001DE64.c)
 *     sub_18001E4A4 @ 0x18001E4A4 (sub_18001E4A4.c)
 *     sub_18001EA20 @ 0x18001EA20 (sub_18001EA20.c)
 *     sub_18001EC5C @ 0x18001EC5C (sub_18001EC5C.c)
 *     sub_18001EC78 @ 0x18001EC78 (sub_18001EC78.c)
 *     sub_18001ED90 @ 0x18001ED90 (sub_18001ED90.c)
 *     sub_180020EC0 @ 0x180020EC0 (sub_180020EC0.c)
 *     _alloca_probe @ 0x1800FEE40 (_alloca_probe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18001F06C(__int64 a1, int a2)
{
  int v4; // r12d
  size_t v5; // rdi
  size_t v6; // r8
  _BYTE *v7; // rdx
  int v8; // [rsp+40h] [rbp-C0h]
  int v9; // [rsp+44h] [rbp-BCh]
  char *v10[2]; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v11; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v12; // [rsp+60h] [rbp-A0h]
  char *v13[3]; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v14; // [rsp+80h] [rbp-80h]
  char *v15[3]; // [rsp+88h] [rbp-78h] BYREF
  unsigned __int64 v16; // [rsp+A0h] [rbp-60h]
  char *v17; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v18; // [rsp+C0h] [rbp-40h]
  CHAR OutputString[2112]; // [rsp+D0h] [rbp-30h] BYREF

  if ( *(int *)sub_18001DE64((__int64)&unk_1801F74A8) <= 0 )
  {
    v8 = *(_DWORD *)(a1 + 8);
    v4 = *(_DWORD *)(a1 + 4);
    v9 = *(_DWORD *)a1;
    v5 = -1LL;
    sub_18000C1F8();
    GetCurrentThreadId();
    sub_18001EA20(a1, (__int64 *)&v17);
    sub_18001EC5C(a2);
    sub_18001EC78((__int64 *)v15);
    sub_18001E4A4();
    if ( v16 >= 0x10 )
      sub_180010884(v15[0], v16 + 1);
    v15[2] = 0LL;
    v16 = 15LL;
    LOBYTE(v15[0]) = 0;
    if ( v18 >= 0x10 )
      sub_180010884(v17, v18 + 1);
    if ( a2 >= v4 )
    {
      v13[2] = 0LL;
      v14 = 15LL;
      LOBYTE(v13[0]) = 0;
      v6 = -1LL;
      do
        ++v6;
      while ( OutputString[v6] );
      sub_180012190((__int64 *)v13, OutputString, v6);
      v7 = *(_BYTE **)(a1 + 16);
      v11 = 0LL;
      v12 = 15LL;
      LOBYTE(v10[0]) = 0;
      do
        ++v5;
      while ( v7[v5] );
      sub_180012190((__int64 *)v10, v7, v5);
      sub_18001ED90((__int64)v10, a2, (__int64)v13);
      if ( v12 >= 0x10 )
        sub_180010884(v10[0], v12 + 1);
      v11 = 0LL;
      v12 = 15LL;
      LOBYTE(v10[0]) = 0;
      if ( v14 >= 0x10 )
        sub_180010884(v13[0], v14 + 1);
    }
    if ( a2 >= v8 )
      sub_180020EC0(OutputString);
    OutputDebugStringA(OutputString);
    if ( a2 >= v9 )
    {
      if ( !IsDebuggerPresent() )
        __fastfail(7u);
      __debugbreak();
    }
  }
}
