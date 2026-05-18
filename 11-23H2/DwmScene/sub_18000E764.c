/*
 * XREFs of sub_18000E764 @ 0x18000E764
 * Callers:
 *     sub_18000CDAC @ 0x18000CDAC (sub_18000CDAC.c)
 *     sub_18000D130 @ 0x18000D130 (sub_18000D130.c)
 * Callees:
 *     sub_18000CCD8 @ 0x18000CCD8 (sub_18000CCD8.c)
 *     sub_18000DD04 @ 0x18000DD04 (sub_18000DD04.c)
 *     sub_18000E55C @ 0x18000E55C (sub_18000E55C.c)
 *     sub_18000EDF4 @ 0x18000EDF4 (sub_18000EDF4.c)
 *     sub_18000EE20 @ 0x18000EE20 (sub_18000EE20.c)
 *     sub_18000EE34 @ 0x18000EE34 (sub_18000EE34.c)
 *     sub_18000EE54 @ 0x18000EE54 (sub_18000EE54.c)
 *     sub_18000FB9C @ 0x18000FB9C (sub_18000FB9C.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800E39B0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall sub_18000E764(
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
  int v18; // esi
  int v19; // eax
  _WORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  int v25; // [rsp+88h] [rbp+10h]

  v25 = a2;
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
        v19 = sub_18000EE54(v17);
        break;
      case 2:
        if ( (v17 & 0x80000000) == 0 )
        {
          v17 = -2147024228;
          sub_18000CCD8(a1, a2, a3, a4, a5, a6, 0x8007029C);
          *(_DWORD *)(a15 + 8) = -2147024228;
          *(_DWORD *)(a15 + 12) = sub_18000E55C(-2147024228);
        }
        v19 = sub_18000EE34(v17);
        break;
      case 3:
        v19 = sub_18000EE20(v17);
        break;
      default:
        goto LABEL_12;
    }
  }
  else
  {
    v19 = sub_18000EDF4(v17);
  }
  v18 = v19;
LABEL_12:
  *(_DWORD *)a15 = a7;
  *(_DWORD *)(a15 + 4) = 0;
  if ( *(_BYTE *)(a8 + 8) )
    *(_DWORD *)(a15 + 4) = 8;
  *(_DWORD *)(a15 + 16) = _InterlockedIncrement(&dword_1801D32E4);
  v20 = a9;
  if ( !a9 || !*a9 )
    v20 = 0LL;
  *(_QWORD *)(a15 + 24) = v20;
  *(_DWORD *)(a15 + 32) = GetCurrentThreadId();
  *(_QWORD *)(a15 + 56) = a3;
  *(_DWORD *)(a15 + 64) = v25;
  *(_DWORD *)(a15 + 68) = v18;
  *(_QWORD *)(a15 + 40) = a5;
  *(_QWORD *)(a15 + 48) = a4;
  *(_QWORD *)(a15 + 136) = a6;
  *(_QWORD *)(a15 + 144) = a1;
  *(_QWORD *)(a15 + 72) = 0LL;
  *(_OWORD *)(a15 + 80) = 0LL;
  *(_OWORD *)(a15 + 96) = 0LL;
  *(_OWORD *)(a15 + 112) = 0LL;
  if ( qword_1801D32D0 )
    v22 = qword_1801D32D0(v21);
  else
    v22 = 0LL;
  *(_QWORD *)(a15 + 128) = v22;
  if ( qword_1801D3250 )
    qword_1801D3250(a15);
  if ( qword_1801D3288 )
    qword_1801D3288(a15, a13, 1024LL);
  if ( qword_1801D3278 )
    qword_1801D3278(a15);
  if ( qword_1801D32A8 && (*(_BYTE *)(a15 + 4) & 2) == 0 )
    qword_1801D32A8(a15);
  if ( *(int *)(a15 + 8) >= 0 )
  {
    if ( a7 != 3 )
      sub_18000FB9C(v21);
    *(_DWORD *)(a15 + 8) = -2147418113;
    *(_DWORD *)(a15 + 12) = sub_18000E55C(-2147418113);
  }
  if ( (byte_1801D3238
     || (!qword_1801D3228 ? (v23 = IsDebuggerPresent()) : (v23 = (unsigned __int8)qword_1801D3228(v21)), v23))
    && (*(_BYTE *)(a15 + 4) & 2) == 0 )
  {
    if ( qword_1801D3240 && !byte_1801D3260 )
      qword_1801D3240(a15, lpOutputString, 2048LL);
    if ( !*lpOutputString )
      sub_18000DD04(lpOutputString, 2048LL, a15);
    OutputDebugStringW(lpOutputString);
  }
  else if ( qword_1801D3240 && !byte_1801D3260 )
  {
    qword_1801D3240(a15, 0LL, 0LL);
  }
  if ( (*(_BYTE *)(a15 + 4) & 4) != 0 || byte_1801D3248 )
  {
    if ( qword_1801D3298 )
      qword_1801D3298(v21);
  }
}
