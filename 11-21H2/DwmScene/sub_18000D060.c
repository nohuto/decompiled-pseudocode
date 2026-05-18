/*
 * XREFs of sub_18000D060 @ 0x18000D060
 * Callers:
 *     sub_18000CAC8 @ 0x18000CAC8 (sub_18000CAC8.c)
 * Callees:
 *     __security_check_cookie @ 0x18000B300 (__security_check_cookie.c)
 *     sub_18000E014 @ 0x18000E014 (sub_18000E014.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18001031C @ 0x18001031C (sub_18001031C.c)
 *     _alloca_probe @ 0x1800FEE40 (_alloca_probe.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_18000D060(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6, int *a7)
{
  int v10; // ebx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  _DWORD v16[2]; // [rsp+20h] [rbp-E0h] BYREF
  int v17; // [rsp+28h] [rbp-D8h]
  int v18; // [rsp+2Ch] [rbp-D4h]
  signed __int32 v19; // [rsp+30h] [rbp-D0h]
  __int64 v20; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  __int64 v23; // [rsp+50h] [rbp-B0h]
  __int64 v24; // [rsp+58h] [rbp-A8h]
  int v25; // [rsp+60h] [rbp-A0h]
  int v26; // [rsp+64h] [rbp-9Ch]
  __int128 v27; // [rsp+68h] [rbp-98h]
  __int128 v28; // [rsp+78h] [rbp-88h]
  __int128 v29; // [rsp+88h] [rbp-78h]
  __int64 v30; // [rsp+98h] [rbp-68h]
  __int64 v31; // [rsp+A0h] [rbp-60h]
  __int64 v32; // [rsp+A8h] [rbp-58h]
  __int64 v33; // [rsp+B0h] [rbp-50h]
  char v34[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2048]; // [rsp+4C0h] [rbp+3C0h] BYREF

  OutputString[0] = 0;
  v34[0] = 0;
  v17 = *a7;
  v18 = a7[1];
  v10 = sub_18000F0E4();
  v16[0] = 1;
  v11 = 0;
  if ( *(_BYTE *)(v12 + 8) )
    v11 = 8;
  v16[1] = v11;
  v19 = _InterlockedIncrement(&dword_1801F7408);
  v20 = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v24 = a3;
  v25 = a2;
  v26 = v10;
  v22 = 0LL;
  v23 = 0LL;
  v32 = a6;
  v33 = a1;
  v29 = 0LL;
  v30 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  if ( qword_1801F73F8 )
    v31 = qword_1801F73F8(v13);
  else
    v31 = 0LL;
  if ( qword_1801F73B0 )
    qword_1801F73B0(v16, v34, 1024LL);
  if ( qword_1801F73A0 )
    qword_1801F73A0(v16);
  if ( qword_1801F73D0 )
    qword_1801F73D0(v16);
  if ( v17 >= 0 )
    sub_18001031C(v13);
  if ( byte_1801F7368
    || (!qword_1801F7358 ? (v14 = IsDebuggerPresent()) : (v14 = (unsigned __int8)qword_1801F7358(v13)), v14) )
  {
    if ( qword_1801F7370 && !byte_1801F7388 )
      qword_1801F7370(v16, OutputString, 2048LL);
    if ( !OutputString[0] )
      sub_18000E014(OutputString, 2048LL, v16);
    OutputDebugStringW(OutputString);
  }
  else if ( qword_1801F7370 && !byte_1801F7388 )
  {
    qword_1801F7370(v16, 0LL, 0LL);
  }
  if ( byte_1801F7378 )
  {
    if ( qword_1801F73C0 )
      qword_1801F73C0(v15);
  }
}
