/*
 * XREFs of ?xxxMNItemSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagWND@@HPEAUHDC__@@PEAUtagITEM@@HPEAUtagPOINT@@@Z @ 0x1C00BF15C
 * Callers:
 *     xxxMNCompute @ 0x1C00BEB88 (xxxMNCompute.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C0027B74 (GreExtGetObjectW.c)
 *     GetDpiDependentMetric @ 0x1C006718C (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C006878C (GetDpiForSystem.c)
 *     MNGetpItemIndex @ 0x1C0068DA4 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     GetDPIMETRICSForDpi @ 0x1C00BF104 (GetDPIMETRICSForDpi.c)
 *     ?xxxMNGetBitmapSize@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@@Z @ 0x1C00BF2D8 (-xxxMNGetBitmapSize@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUtagWND@@HPEAUHDC__@@.c)
 *     MNIsOwnerDrawItem @ 0x1C00BF45C (MNIsOwnerDrawItem.c)
 *     GreSelectFontInternal @ 0x1C00BFA08 (GreSelectFontInternal.c)
 *     GetOemBitmapInfoForDpi @ 0x1C00C3124 (GetOemBitmapInfoForDpi.c)
 *     GetDPIServerInfoForDpi @ 0x1C00C76E0 (GetDPIServerInfoForDpi.c)
 *     FindCharPosition @ 0x1C025AE7C (FindCharPosition.c)
 *     xxxPSMGetTextExtent @ 0x1C025D454 (xxxPSMGetTextExtent.c)
 *     GreGetTextCharacterExtra @ 0x1C02BAFBC (GreGetTextCharacterExtra.c)
 *     GreSetTextCharacterExtra @ 0x1C02BB004 (GreSetTextCharacterExtra.c)
 */

__int64 __fastcall xxxMNItemSize(__int64 **a1, int a2, unsigned int a3, HDC a4, _QWORD *a5, int a6, unsigned int *a7)
{
  int v7; // ebx
  int DpiDependentMetric; // ebp
  unsigned int v9; // r14d
  __int64 *v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // r10
  __int64 v28; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v30; // [rsp+30h] [rbp-58h]
  _DWORD v31[10]; // [rsp+38h] [rbp-50h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp+30h]

  v7 = a6;
  DpiDependentMetric = 0;
  v9 = 0;
  memset(v31, 0, 32);
  if ( !a6 )
    DpiDependentMetric = GetDpiDependentMetric(26LL, a3);
  v30 = 0LL;
  if ( (*(_DWORD *)(*a5 + 4LL) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(GetDPIMETRICSForDpi(a3) + 48) )
    {
      v30 = GreSelectFontInternal(a4);
    }
    else
    {
      GreGetTextCharacterExtra(a4);
      GetDPIServerInfoForDpi(a3);
      GetDPIMETRICSForDpi(a3);
      GreSetTextCharacterExtra(a4);
      v7 = a6;
    }
  }
  v14 = a1[2];
  if ( !v14 )
    v14 = (__int64 *)**a1;
  v16 = MNIsOwnerDrawItem(v14, a5);
  v32 = v16;
  if ( !*(_QWORD *)(*a5 + 96LL) )
    goto LABEL_7;
  v21 = (__int64)a1[2];
  if ( !v21 )
    v21 = **a1;
  if ( (unsigned int)MNIsUAHMenu(v21) && (v22 = *(_DWORD *)(*a5 + 96LL)) != 0 && (v22 <= 3 || v22 - 5 <= 6) )
  {
LABEL_7:
    if ( !v16 )
    {
LABEL_58:
      v27 = a5[3];
      if ( v27 )
      {
        if ( v7 )
        {
          if ( DpiDependentMetric <= *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 28) )
            DpiDependentMetric = *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 28);
          v27 = a5[3];
        }
        FindCharPosition(v27, 9LL);
        xxxPSMGetTextExtent(a4);
        if ( v9 )
          v9 += 2;
        else
          v9 = 0;
      }
      if ( v7 )
      {
        v28 = **a1;
        if ( (*(_DWORD *)(*(_QWORD *)(v28 + 40) + 40LL) & 0x4000000) != 0
          || (v28 = **a1, *(int *)(*(_QWORD *)(v28 + 40) + 40LL) >= 0) )
        {
          DpiForSystem = GetDpiForSystem(v28, v15);
          v9 += *(__int16 *)(GetOemBitmapInfoForDpi(63LL, DpiForSystem) + 4);
        }
        v9 += 6;
        DpiDependentMetric += 2;
      }
      goto LABEL_16;
    }
    xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, a3, (__int64)a4);
    v17 = (__int64)a1[2];
    if ( !v17 )
      v17 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v17, (__int64)a5) != -1 )
    {
      v9 = *(_DWORD *)(*a5 + 104LL);
      if ( v7 )
      {
        DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
        v9 += 2 * *(_DWORD *)(GetDPIMETRICSForDpi(a3) + 8);
      }
      else
      {
        v18 = (__int64)a1[2];
        if ( !v18 )
          v18 = **a1;
        if ( (unsigned int)MNIsUAHMenu(v18) )
          DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
      }
LABEL_16:
      v19 = (__int64)a1[2];
      if ( !v19 )
        v19 = **a1;
      if ( (unsigned int)MNGetpItemIndex(v19, (__int64)a5) != -1 && (*(_DWORD *)(*a5 + 4LL) & 0x1000) != 0 )
      {
        if ( v30 )
          GreSelectFontInternal(a4);
        else
          GreSetTextCharacterExtra(a4);
      }
    }
  }
  else
  {
    v23 = *a5;
    if ( *(_QWORD *)(*a5 + 96LL) != -1LL )
    {
      if ( *(_DWORD *)(v23 + 104) != -1 )
        goto LABEL_49;
      if ( (*(_DWORD *)(v23 + 4) & 0x20000000) != 0 )
      {
        *(_DWORD *)(*a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
        *(_DWORD *)(*a5 + 108LL) = GetDpiDependentMetric(26LL, a3);
        if ( *(_QWORD *)(*a5 + 96LL) == 1LL )
          *(_DWORD *)(*a5 + 104LL) += 2;
        goto LABEL_48;
      }
      v25 = (__int64)a1[2];
      if ( !v25 )
        v25 = **a1;
      if ( !(unsigned int)MNIsUAHMenu(v25) )
      {
        if ( (unsigned int)GreExtGetObjectW(*(HBRUSH *)(*a5 + 96LL), 32LL, (char *)v31) )
        {
          *(_DWORD *)(*a5 + 104LL) = v31[1];
          v26 = v31[2];
        }
        else
        {
          *(_DWORD *)(*a5 + 104LL) = GetDpiDependentMetric(25LL, a3);
          v26 = GetDpiDependentMetric(26LL, a3);
        }
        *(_DWORD *)(*a5 + 108LL) = v26;
LABEL_48:
        v16 = v32;
LABEL_49:
        v9 = *(_DWORD *)(*a5 + 104LL);
        if ( *(_DWORD *)(**a1 + 72) <= v9 )
          v15 = v9;
        else
          v15 = *(unsigned int *)(**a1 + 72);
        *(_DWORD *)(**a1 + 72) = v15;
        if ( v7 )
        {
          DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
        }
        else if ( *(_DWORD *)(*a5 + 108LL) > DpiDependentMetric )
        {
          DpiDependentMetric = *(_DWORD *)(*a5 + 108LL);
        }
        if ( v16 )
          goto LABEL_16;
        goto LABEL_58;
      }
    }
    xxxMNGetBitmapSize((_DWORD)a1, (_DWORD)a5, a2, a3, (__int64)a4);
    v24 = (__int64)a1[2];
    if ( !v24 )
      v24 = **a1;
    if ( (unsigned int)MNGetpItemIndex(v24, (__int64)a5) != -1 )
      goto LABEL_48;
  }
  a7[1] = DpiDependentMetric;
  *a7 = v9;
  return v32;
}
