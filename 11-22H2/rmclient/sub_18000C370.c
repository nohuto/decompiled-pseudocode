/*
 * XREFs of sub_18000C370 @ 0x18000C370
 * Callers:
 *     sub_18000C0EC @ 0x18000C0EC (sub_18000C0EC.c)
 * Callees:
 *     sub_18000DF94 @ 0x18000DF94 (sub_18000DF94.c)
 *     sub_18000E81C @ 0x18000E81C (sub_18000E81C.c)
 *     sub_18000FA10 @ 0x18000FA10 (sub_18000FA10.c)
 *     sub_180011578 @ 0x180011578 (sub_180011578.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_180016AC0 @ 0x180016AC0 (sub_180016AC0.c)
 */

// bad sp value at call has been detected, the output may be wrong!
void __fastcall __noreturn sub_18000C370(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // eax
  bool v8; // zf
  int v9; // ecx
  __int64 v10; // rcx
  int v11; // eax
  _BYTE v12[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2064]; // [rsp+4C0h] [rbp+3C0h] BYREF
  int v14; // [rsp+14E0h] [rbp+13E0h] BYREF
  int v15; // [rsp+14E4h] [rbp+13E4h]
  int v16; // [rsp+14E8h] [rbp+13E8h]
  int v17; // [rsp+14ECh] [rbp+13ECh]
  signed __int32 vars0; // [rsp+14F0h] [rbp+13F0h]
  _UNKNOWN *retaddr; // [rsp+14F8h] [rbp+13F8h]

  OutputString[0] = 0;
  v12[0] = 0;
  v7 = *(_DWORD *)(a7 + 4);
  v16 = *(_DWORD *)a7;
  v17 = v7;
  sub_18000FA10();
  v8 = *(_BYTE *)(a7 + 8) == 0;
  v14 = 3;
  v9 = 0;
  if ( !v8 )
    v9 = 8;
  v15 = v9;
  retaddr = 0LL;
  vars0 = _InterlockedIncrement(&dword_180032BC8);
  GetCurrentThreadId();
  if ( qword_180032950 )
    qword_180032950(v10);
  if ( qword_180032910 )
    qword_180032910(&v14);
  if ( qword_180032930 )
    qword_180032930(&v14, v12, 1024LL);
  if ( qword_180032D60 )
    qword_180032D60(&v14);
  if ( qword_180032D68 && (v15 & 2) == 0 )
    qword_180032D68(&v14);
  if ( v16 >= 0 )
  {
    v16 = -2147418113;
    v17 = sub_18000E81C(2147549183LL);
  }
  if ( (byte_180032D40
     || (!qword_180032D38 ? (v11 = IsDebuggerPresent()) : (v11 = (unsigned __int8)qword_180032D38(v10)), v11))
    && (v15 & 2) == 0 )
  {
    if ( qword_180032D48 && !byte_180032D51 )
      qword_180032D48(&v14, OutputString, 2048LL);
    if ( !OutputString[0] )
      sub_18000DF94(OutputString, 2048LL, &v14);
    OutputDebugStringW(OutputString);
  }
  else if ( qword_180032D48 && !byte_180032D51 )
  {
    qword_180032D48(&v14, 0LL, 0LL);
  }
  if ( (v15 & 4) != 0 || byte_180032D50 )
  {
    if ( qword_180032940 )
      qword_180032940(v10);
  }
  sub_180011578(&v14);
}
