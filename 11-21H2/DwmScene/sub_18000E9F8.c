/*
 * XREFs of sub_18000E9F8 @ 0x18000E9F8
 * Callers:
 *     sub_18000D318 @ 0x18000D318 (sub_18000D318.c)
 * Callees:
 *     sub_18000CCF8 @ 0x18000CCF8 (sub_18000CCF8.c)
 *     sub_18000E014 @ 0x18000E014 (sub_18000E014.c)
 *     sub_18000E82C @ 0x18000E82C (sub_18000E82C.c)
 *     sub_18000F090 @ 0x18000F090 (sub_18000F090.c)
 *     sub_18000F0B0 @ 0x18000F0B0 (sub_18000F0B0.c)
 *     sub_18000F0C4 @ 0x18000F0C4 (sub_18000F0C4.c)
 *     sub_18000F0E4 @ 0x18000F0E4 (sub_18000F0E4.c)
 *     sub_18001031C @ 0x18001031C (sub_18001031C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800FEEF0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18000E9F8(
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
  unsigned int v17; // edi
  int v18; // ebp
  int v19; // eax
  _WORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rcx
  int v26; // [rsp+88h] [rbp+10h]

  v26 = a2;
  *lpOutputString = 0;
  *a13 = 0;
  v17 = *(_DWORD *)a8;
  *(_DWORD *)(a15 + 8) = *(_DWORD *)a8;
  *(_DWORD *)(a15 + 12) = *(_DWORD *)(a8 + 4);
  v18 = 0;
  if ( a7 )
  {
    switch ( a7 )
    {
      case 1:
        v19 = sub_18000F0E4(v17);
        break;
      case 2:
        if ( (v17 & 0x80000000) == 0 )
        {
          v17 = -2147024228;
          sub_18000CCF8(a1, a2, a3, a4, a5, a6, 0x8007029C);
          *(_DWORD *)(a15 + 8) = -2147024228;
          *(_DWORD *)(a15 + 12) = sub_18000E82C(-2147024228);
        }
        v19 = sub_18000F0C4(v17);
        break;
      case 3:
        v19 = sub_18000F0B0(v17);
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    v19 = sub_18000F090(v17);
  }
  v18 = v19;
LABEL_12:
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = 0;
  if ( *(_BYTE *)(a8 + 8) )
    *(_DWORD *)(a15 + 4) = 8;
  *(_DWORD *)(a15 + 16) = _InterlockedIncrement(&dword_1801F7408);
  v20 = a9;
  if ( !a9 || !*a9 )
    v20 = 0LL;
  *(_QWORD *)(a15 + 24) = v20;
  *(_DWORD *)(a15 + 32) = GetCurrentThreadId();
  *(_QWORD *)(a15 + 56) = a3;
  *(_DWORD *)(a15 + 64) = v26;
  *(_DWORD *)(a15 + 68) = v18;
  *(_QWORD *)(a15 + 40) = a5;
  *(_QWORD *)(a15 + 48) = a4;
  *(_QWORD *)(a15 + 136) = a6;
  *(_QWORD *)(a15 + 144) = a1;
  *(_QWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 80) = 0LL;
  *(_OWORD *)(a15 + 96) = 0LL;
  *(_OWORD *)(a15 + 112) = 0LL;
  if ( qword_1801F73F8 )
    v22 = qword_1801F73F8(v21);
  else
    v22 = 0LL;
  *(_QWORD *)(a15 + 128) = v22;
  if ( qword_1801F73B0 )
    qword_1801F73B0(a15, a13, 1024LL);
  if ( qword_1801F73A0 )
    qword_1801F73A0(a15);
  if ( qword_1801F73D0 )
    qword_1801F73D0(a15);
  if ( *(int *)(a15 + 8) >= 0 )
  {
    if ( a7 != 3 )
      sub_18001031C(v21);
    *(_DWORD *)(a15 + 8) = -2147418113;
    *(_DWORD *)(a15 + 12) = sub_18000E82C(-2147418113);
  }
  if ( byte_1801F7368
    || (!qword_1801F7358 ? (v23 = IsDebuggerPresent()) : (v23 = (unsigned __int8)qword_1801F7358(v21)), v23) )
  {
    if ( qword_1801F7370 && !byte_1801F7388 )
      qword_1801F7370(a15, lpOutputString, 2048LL);
    if ( !*lpOutputString )
      sub_18000E014(lpOutputString, 2048LL, a15);
    OutputDebugStringW(lpOutputString);
  }
  else if ( qword_1801F7370 && !byte_1801F7388 )
  {
    qword_1801F7370(a15, 0LL, 0LL);
  }
  if ( byte_1801F7378 )
  {
    if ( qword_1801F73C0 )
      qword_1801F73C0(v24);
  }
}
