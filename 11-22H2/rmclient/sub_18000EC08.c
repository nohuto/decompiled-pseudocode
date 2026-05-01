/*
 * XREFs of sub_18000EC08 @ 0x18000EC08
 * Callers:
 *     sub_18000C948 @ 0x18000C948 (sub_18000C948.c)
 * Callees:
 *     sub_18000C2A0 @ 0x18000C2A0 (sub_18000C2A0.c)
 *     sub_18000DF94 @ 0x18000DF94 (sub_18000DF94.c)
 *     sub_18000E81C @ 0x18000E81C (sub_18000E81C.c)
 *     sub_18000F9E4 @ 0x18000F9E4 (sub_18000F9E4.c)
 *     sub_18000FA10 @ 0x18000FA10 (sub_18000FA10.c)
 *     sub_18000FB88 @ 0x18000FB88 (sub_18000FB88.c)
 *     sub_18000FBA8 @ 0x18000FBA8 (sub_18000FBA8.c)
 *     sub_180011784 @ 0x180011784 (sub_180011784.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180016AA0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18000EC08(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        _WORD *a9,
        int a10,
        WCHAR *lpOutputString,
        int a12,
        _BYTE *a13,
        int a14,
        __int64 a15)
{
  int v17; // esi
  unsigned int v18; // edi
  int v19; // eax
  _WORD *v20; // rax
  DWORD CurrentThreadId; // eax
  __int64 v22; // rcx
  __int64 (*v23)(void); // rax
  __int64 v24; // rax
  int v25; // eax
  int v27; // [rsp+88h] [rbp+10h]

  v27 = a2;
  v17 = 0;
  *lpOutputString = 0;
  *a13 = 0;
  v18 = *(_DWORD *)a8;
  *(_DWORD *)(a15 + 8) = *(_DWORD *)a8;
  *(_DWORD *)(a15 + 12) = *(_DWORD *)(a8 + 4);
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v19 = sub_18000FBA8(v18);
        break;
      case 2:
        if ( (v18 & 0x80000000) == 0 )
        {
          v18 = -2147024228;
          sub_18000C2A0(a1, a2, a3, a4, a5, a6, 0x8007029C);
          *(_DWORD *)(a15 + 8) = -2147024228;
          *(_DWORD *)(a15 + 12) = sub_18000E81C(-2147024228);
        }
        v19 = sub_18000FB88(v18);
        break;
      case 3:
        v19 = sub_18000FA10(v18);
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    v19 = sub_18000F9E4(v18);
  }
  v17 = v19;
LABEL_12:
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = 0;
  if ( *(_BYTE *)(a8 + 8) )
    *(_DWORD *)(a15 + 4) = 8;
  *(_DWORD *)(a15 + 16) = _InterlockedIncrement(&dword_180032BC8);
  v20 = a9;
  if ( !a9 || !*a9 )
    v20 = 0LL;
  *(_QWORD *)(a15 + 24) = v20;
  CurrentThreadId = GetCurrentThreadId();
  *(_QWORD *)(a15 + 56) = a3;
  *(_DWORD *)(a15 + 32) = CurrentThreadId;
  *(_DWORD *)(a15 + 64) = v27;
  *(_QWORD *)(a15 + 40) = a5;
  *(_QWORD *)(a15 + 136) = a6;
  *(_QWORD *)(a15 + 144) = a1;
  v23 = (__int64 (*)(void))qword_180032950;
  *(_DWORD *)(a15 + 68) = v17;
  *(_QWORD *)(a15 + 48) = a4;
  *(_QWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 80) = 0LL;
  *(_OWORD *)(a15 + 96) = 0LL;
  *(_OWORD *)(a15 + 112) = 0LL;
  if ( v23 )
    v24 = v23();
  else
    v24 = 0LL;
  *(_QWORD *)(a15 + 128) = v24;
  if ( qword_180032910 )
    qword_180032910(a15);
  if ( qword_180032930 )
    qword_180032930(a15, a13, 1024LL);
  if ( qword_180032D60 )
    qword_180032D60(a15);
  if ( qword_180032D68 && (*(_BYTE *)(a15 + 4) & 2) == 0 )
    qword_180032D68(a15);
  if ( *(int *)(a15 + 8) >= 0 )
  {
    if ( a7 != 3 )
      sub_180011784();
    *(_DWORD *)(a15 + 8) = -2147418113;
    *(_DWORD *)(a15 + 12) = sub_18000E81C(-2147418113);
  }
  if ( (byte_180032D40
     || (!qword_180032D38 ? (v25 = IsDebuggerPresent()) : (v25 = (unsigned __int8)qword_180032D38(v22)), v25))
    && (*(_BYTE *)(a15 + 4) & 2) == 0 )
  {
    if ( qword_180032D48 && !byte_180032D51 )
      qword_180032D48(a15, lpOutputString, 2048LL);
    if ( !*lpOutputString )
      sub_18000DF94(lpOutputString, 2048LL, a15);
    OutputDebugStringW(lpOutputString);
  }
  else if ( qword_180032D48 && !byte_180032D51 )
  {
    qword_180032D48(a15, 0LL, 0LL);
  }
  if ( (*(_BYTE *)(a15 + 4) & 4) != 0 || byte_180032D50 )
  {
    if ( qword_180032940 )
      qword_180032940(v22);
  }
}
