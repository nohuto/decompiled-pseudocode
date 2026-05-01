/*
 * XREFs of sub_18000C640 @ 0x18000C640
 * Callers:
 *     sub_18000C09C @ 0x18000C09C (sub_18000C09C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000AD40 (__security_check_cookie.c)
 *     sub_18000DF94 @ 0x18000DF94 (sub_18000DF94.c)
 *     sub_18000FBA8 @ 0x18000FBA8 (sub_18000FBA8.c)
 *     sub_180011578 @ 0x180011578 (sub_180011578.c)
 *     sub_180011784 @ 0x180011784 (sub_180011784.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 *     sub_180016AC0 @ 0x180016AC0 (sub_180016AC0.c)
 */

// positive sp value has been detected, the output may be wrong!
void __fastcall sub_18000C640(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, int *a7)
{
  int v9; // eax
  int v10; // eax
  __int64 v11; // r8
  bool v12; // zf
  int v13; // ebx
  int v14; // ecx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // [rsp+20h] [rbp-E0h] BYREF
  int v18; // [rsp+24h] [rbp-DCh]
  int v19; // [rsp+28h] [rbp-D8h]
  int v20; // [rsp+2Ch] [rbp-D4h]
  signed __int32 v21; // [rsp+30h] [rbp-D0h]
  __int64 v22; // [rsp+38h] [rbp-C8h]
  DWORD CurrentThreadId; // [rsp+40h] [rbp-C0h]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  const char *v26; // [rsp+58h] [rbp-A8h]
  int v27; // [rsp+60h] [rbp-A0h]
  int v28; // [rsp+64h] [rbp-9Ch]
  __int128 v29; // [rsp+68h] [rbp-98h]
  __int128 v30; // [rsp+78h] [rbp-88h]
  __int128 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+98h] [rbp-68h]
  __int64 v33; // [rsp+A0h] [rbp-60h]
  __int64 v34; // [rsp+A8h] [rbp-58h]
  __int64 v35; // [rsp+B0h] [rbp-50h]
  char v36[1024]; // [rsp+C0h] [rbp-40h] BYREF
  WCHAR OutputString[2048]; // [rsp+4C0h] [rbp+3C0h] BYREF

  OutputString[0] = 0;
  v36[0] = 0;
  v9 = a7[1];
  v19 = *a7;
  v20 = v9;
  v10 = sub_18000FBA8();
  v12 = *(_BYTE *)(v11 + 8) == 0;
  v13 = v10;
  v17 = 1;
  v14 = 0;
  if ( !v12 )
    v14 = 8;
  v18 = v14;
  v22 = 0LL;
  v21 = _InterlockedIncrement(&dword_180032BC8);
  v27 = a2;
  CurrentThreadId = GetCurrentThreadId();
  v28 = v13;
  v26 = "wil";
  v32 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v34 = a6;
  v35 = a1;
  v31 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  if ( qword_180032950 )
    v33 = qword_180032950(v15);
  else
    v33 = 0LL;
  if ( qword_180032910 )
    qword_180032910(&v17);
  if ( qword_180032930 )
    qword_180032930(&v17, v36, 1024LL);
  if ( qword_180032D60 )
    qword_180032D60(&v17);
  if ( qword_180032D68 && (v18 & 2) == 0 )
    qword_180032D68(&v17);
  if ( v19 >= 0 )
    ((void (__fastcall __noreturn *)(__int64))sub_180011784)(v15);
  if ( (byte_180032D40
     || (!qword_180032D38 ? (v16 = IsDebuggerPresent()) : (v16 = (unsigned __int8)qword_180032D38(v15)), v16))
    && (v18 & 2) == 0 )
  {
    if ( qword_180032D48 && !byte_180032D51 )
      qword_180032D48(&v17, OutputString, 2048LL);
    if ( !OutputString[0] )
      sub_18000DF94(OutputString, 2048LL, &v17);
    OutputDebugStringW(OutputString);
  }
  else if ( qword_180032D48 && !byte_180032D51 )
  {
    qword_180032D48(&v17, 0LL, 0LL);
  }
  if ( ((v18 & 4) != 0 || byte_180032D50) && qword_180032940 )
    qword_180032940(v15);
  if ( (v18 & 1) != 0 )
    sub_180011578(&v17);
}
