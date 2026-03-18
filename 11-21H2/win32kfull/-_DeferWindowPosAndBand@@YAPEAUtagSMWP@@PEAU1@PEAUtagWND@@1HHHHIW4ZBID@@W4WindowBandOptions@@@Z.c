/*
 * XREFs of ?_DeferWindowPosAndBand@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x1C002536C
 * Callers:
 *     NtUserDeferWindowPosAndBand @ 0x1C0024310 (NtUserDeferWindowPosAndBand.c)
 *     _lambda_febfd44819ec4f1448c7d434538d8b97_::operator() @ 0x1C009DB40 (_lambda_febfd44819ec4f1448c7d434538d8b97_--operator().c)
 * Callees:
 *     IAMThreadAccessGranted @ 0x1C0023254 (IAMThreadAccessGranted.c)
 *     ?_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x1C0048C48 (-_DeferWindowPos@@YAPEAUtagSMWP@@PEAU1@PEAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     _GetDesktopWindow @ 0x1C006FF60 (_GetDesktopWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsValidBandForProcess @ 0x1C009D1C0 (IsValidBandForProcess.c)
 *     IsValidBand @ 0x1C0107F88 (IsValidBand.c)
 */

__int64 __fastcall _DeferWindowPosAndBand(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        unsigned int a9,
        char a10)
{
  unsigned int v14; // ecx
  int v15; // ebx
  unsigned int v16; // edi
  int v17; // edx
  int v18; // edx
  int v19; // eax
  int v20; // r8d
  __int64 v22; // r9
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax

  if ( (a10 & 1) == 0 )
  {
    v14 = a8;
    v15 = 0;
    v16 = 0;
    v17 = 0;
    goto LABEL_3;
  }
  v16 = a9;
  v22 = gptiCurrent;
  if ( (unsigned __int64)a3 - 2 <= 0xFFFFFFFFFFFFFFFBuLL )
  {
    v26 = *(_DWORD *)(a3[5] + 236LL);
    if ( v26 != a9 && *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) != v26 )
      goto LABEL_37;
  }
  v15 = 0;
  if ( (a10 & 2) == 0 && !IAMThreadAccessGranted(gptiCurrent) )
    goto LABEL_37;
  if ( !(unsigned int)IsValidBand(a9, a2, a3, v22) )
    goto LABEL_35;
  if ( !(unsigned int)IsValidBandForProcess(*(_QWORD *)(v23 + 424), a9, 0LL)
    || a9 == 15
    || *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL) == 15 )
  {
LABEL_37:
    v25 = 5LL;
    goto LABEL_36;
  }
  if ( *(_QWORD *)(a2 + 104) != GetDesktopWindow(a2) || *(char *)(v24 + 20) < 0 )
    goto LABEL_35;
  if ( (unsigned __int64)a3 > 1 )
  {
    if ( (unsigned __int64)a3 <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v17 = 1;
      if ( *(_DWORD *)(a3[5] + 236LL) != a9 )
      {
        v27 = *(_DWORD *)(a1 + 28) - 1;
        if ( v27 >= 0 )
        {
          v28 = *(_QWORD *)(a1 + 40);
          v29 = v27;
          v30 = (_QWORD *)(v28 + 168LL * v27);
          while ( *v30 != *a3 )
          {
            --v27;
            v30 -= 21;
            if ( --v29 < 0 )
              goto LABEL_51;
          }
          if ( *(_DWORD *)(168LL * v27 + v28 + 152) != a9 )
            goto LABEL_35;
        }
LABEL_51:
        if ( v27 == -1 )
        {
LABEL_35:
          v25 = 87LL;
LABEL_36:
          UserSetLastError(v25);
          return 0LL;
        }
      }
      goto LABEL_33;
    }
    if ( a9 != 1 )
      goto LABEL_35;
  }
  v17 = 1;
LABEL_33:
  v14 = a8 & 0xFFF9FBFF | 0x60000;
LABEL_3:
  if ( ((v17 != 0 ? -459776 : -66560) & v14) != 0 )
    goto LABEL_35;
  if ( (v14 & 2) != 0 )
  {
    v18 = a5;
  }
  else
  {
    if ( a4 > 0x7FFF )
    {
      a4 = 0x7FFF;
    }
    else if ( a4 < -32768 )
    {
      a4 = -32768;
    }
    v18 = a5;
    if ( a5 > 0x7FFF )
    {
      v18 = 0x7FFF;
    }
    else if ( a5 < -32768 )
    {
      v18 = -32768;
    }
  }
  v19 = a6;
  if ( (v14 & 1) != 0 )
  {
    v15 = a7;
  }
  else
  {
    if ( a6 < 0 )
    {
      v19 = 0;
    }
    else if ( a6 > 0x7FFF )
    {
      v19 = 0x7FFF;
    }
    v20 = a7;
    if ( a7 >= 0 )
    {
      if ( a7 > 0x7FFF )
        v20 = 0x7FFF;
      v15 = v20;
    }
  }
  return _DeferWindowPos(a1, a2, a3, (unsigned int)a4, v18, v19, v15, v14, v16);
}
