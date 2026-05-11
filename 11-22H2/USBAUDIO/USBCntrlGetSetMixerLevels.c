/*
 * XREFs of USBCntrlGetSetMixerLevels @ 0x1C003DA40
 * Callers:
 *     <none>
 * Callees:
 *     USBHwGetSetProperty @ 0x1C0038404 (USBHwGetSetProperty.c)
 */

__int64 __fastcall USBCntrlGetSetMixerLevels(
        __int64 a1,
        __int64 a2,
        UCHAR a3,
        int a4,
        int a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int16 v7; // bx
  int SetProperty; // ebx
  __int64 v11; // r15
  __int64 Pool2; // rax
  void *v13; // rsi
  _DWORD *v14; // r14
  int v15; // ebp
  _WORD *v16; // rcx
  int *v17; // r8
  __int64 v18; // r9
  int v19; // eax
  int v20; // eax
  __int16 *v21; // rdx
  __int16 v22; // cx
  __int64 v24; // [rsp+50h] [rbp-48h]

  v7 = a4;
  if ( a6 <= 1 || a4 == a5 && (unsigned int)(a4 - 1) > 0xFFFFFFFD )
  {
    v11 = a6;
    v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
    Pool2 = ExAllocatePool2(64LL, 2LL * a6, 1096972357LL);
    v13 = (void *)Pool2;
    if ( Pool2 )
    {
      v14 = a7;
      v15 = a3 & 0x80;
      if ( !v15 && a6 )
      {
        v16 = (_WORD *)Pool2;
        v17 = a7;
        v18 = a6;
        do
        {
          v19 = *v17++;
          *v16++ = v19 / 256;
          --v18;
        }
        while ( v18 );
      }
      SetProperty = USBHwGetSetProperty(
                      a1,
                      0x1Bu,
                      v15 != 0,
                      a3,
                      v7,
                      a5,
                      *(_WORD *)(a2 + 80),
                      *(unsigned __int8 *)(*(_QWORD *)(v24 + 48) + 2LL),
                      v13,
                      2 * a6);
      if ( SetProperty < 0 )
      {
        v20 = *(_DWORD *)(a2 + 100);
        if ( (v20 & 1) == 0 )
          *(_DWORD *)(a2 + 100) = v20 | 1;
        SetProperty = 0;
      }
      if ( v15 && a6 )
      {
        v21 = (__int16 *)v13;
        do
        {
          v22 = *v21++;
          *v14++ = (__int16)(v22 << 8);
          --v11;
        }
        while ( v11 );
      }
      ExFreePool(v13);
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)SetProperty;
}
