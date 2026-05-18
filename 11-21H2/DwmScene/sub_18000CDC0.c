/*
 * XREFs of sub_18000CDC0 @ 0x18000CDC0
 * Callers:
 *     sub_18000CB18 @ 0x18000CB18 (sub_18000CB18.c)
 * Callees:
 *     sub_18000E014 @ 0x18000E014 (sub_18000E014.c)
 *     sub_18000E82C @ 0x18000E82C (sub_18000E82C.c)
 *     sub_18000F0B0 @ 0x18000F0B0 (sub_18000F0B0.c)
 *     sub_180010208 @ 0x180010208 (sub_180010208.c)
 *     _alloca_probe @ 0x1800FEE40 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall __noreturn sub_18000CDC0(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v9; // edi
  int v10; // ecx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  _DWORD v14[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v15; // [rsp+28h] [rbp-D8h]
  int v16; // [rsp+2Ch] [rbp-D4h]
  signed __int32 v17; // [rsp+30h] [rbp-D0h]
  __int64 v18; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v20; // [rsp+48h] [rbp-B8h]
  __int64 v21; // [rsp+50h] [rbp-B0h]
  const char *v22; // [rsp+58h] [rbp-A8h]
  int v23; // [rsp+60h] [rbp-A0h]
  int v24; // [rsp+64h] [rbp-9Ch]
  __int128 v25; // [rsp+68h] [rbp-98h]
  __int128 v26; // [rsp+78h] [rbp-88h]
  __int128 v27; // [rsp+88h] [rbp-78h]
  __int64 v28; // [rsp+98h] [rbp-68h]
  __int64 v29; // [rsp+A0h] [rbp-60h]
  __int64 v30; // [rsp+A8h] [rbp-58h]
  __int64 v31; // [rsp+B0h] [rbp-50h]
  _BYTE v32[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2064]; // [rsp+4C0h] [rbp+3C0h] BYREF

  OutputString[0] = 0;
  v32[0] = 0;
  v15 = *(_DWORD *)a7;
  v16 = *(_DWORD *)(a7 + 4);
  v9 = sub_18000F0B0();
  v14[0] = 3;
  v10 = 0;
  if ( *(_BYTE *)(a7 + 8) )
    v10 = 8;
  v14[1] = v10;
  v17 = _InterlockedIncrement(&dword_1801F7408);
  v18 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v22 = "onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h";
  v23 = a2;
  v24 = v9;
  v20 = 0LL;
  v21 = 0LL;
  v30 = a6;
  v31 = a1;
  v27 = 0LL;
  v28 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( qword_1801F73F8 )
    v29 = qword_1801F73F8(v11);
  else
    v29 = 0LL;
  if ( qword_1801F73B0 )
    qword_1801F73B0(v14, v32, 1024LL);
  if ( qword_1801F73A0 )
    qword_1801F73A0(v14);
  if ( qword_1801F73D0 )
    qword_1801F73D0(v14);
  if ( v15 >= 0 )
  {
    v15 = -2147418113;
    v16 = sub_18000E82C(2147549183LL);
  }
  if ( byte_1801F7368
    || (!qword_1801F7358 ? (v12 = IsDebuggerPresent()) : (v12 = (unsigned __int8)qword_1801F7358(v11)), v12) )
  {
    if ( qword_1801F7370 && !byte_1801F7388 )
      qword_1801F7370(v14, OutputString, 2048LL);
    if ( !OutputString[0] )
      sub_18000E014(OutputString, 2048LL, v14);
    OutputDebugStringW(OutputString);
  }
  else if ( qword_1801F7370 && !byte_1801F7388 )
  {
    qword_1801F7370(v14, 0LL, 0LL);
  }
  if ( byte_1801F7378 )
  {
    if ( qword_1801F73C0 )
      qword_1801F73C0(v13);
  }
  sub_180010208(v14);
}
