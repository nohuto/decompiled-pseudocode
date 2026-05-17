/*
 * XREFs of RtlWow64GetThreadSelectorEntry @ 0x1800E66E0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryInformationThread @ 0x18009F290 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlWow64GetThreadSelectorEntry(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int InformationThread; // r8d
  unsigned int v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // eax
  int v12; // [rsp+48h] [rbp-30h]

  if ( a3 != 12 )
    return 3221225476LL;
  InformationThread = 0;
  v8 = *(_DWORD *)a2 & 0xFFFFFFFC;
  if ( v8 )
  {
    if ( v8 == 32 )
    {
      *(_BYTE *)(a2 + 11) = 0;
      *(_BYTE *)(a2 + 8) = 0;
      v10 = *(_DWORD *)(a2 + 8) & 0xFFFFE0FF | 0x1B00;
    }
    else
    {
      if ( v8 != 40 )
      {
        if ( v8 == 80 )
        {
          InformationThread = ZwQueryInformationThread();
          if ( InformationThread >= 0 )
          {
            *(_WORD *)(a2 + 4) = 4095;
            *(_WORD *)(a2 + 6) = v12 + 0x2000;
            *(_BYTE *)(a2 + 11) = (unsigned int)(v12 + 0x2000) >> 24;
            *(_BYTE *)(a2 + 8) = (unsigned int)(v12 + 0x2000) >> 16;
            v9 = *(_DWORD *)(a2 + 8) & 0xFFFFE0FF | 0x1300;
            *(_DWORD *)(a2 + 8) = v9;
            v9 |= 0x6000u;
            *(_DWORD *)(a2 + 8) = v9;
            v9 |= 0x8000u;
            *(_DWORD *)(a2 + 8) = v9;
            v9 &= 0xFFF0FFFF;
            *(_DWORD *)(a2 + 8) = v9;
            v9 &= ~0x100000u;
            *(_DWORD *)(a2 + 8) = v9;
            v9 &= ~0x200000u;
            *(_DWORD *)(a2 + 8) = v9;
            v9 |= 0x400000u;
            *(_DWORD *)(a2 + 8) = v9;
            *(_DWORD *)(a2 + 8) = v9 & 0xFF7FFFFF;
          }
        }
        else
        {
          InformationThread = -1073741823;
        }
        goto LABEL_14;
      }
      *(_BYTE *)(a2 + 11) = 0;
      *(_BYTE *)(a2 + 8) = 0;
      v10 = *(_DWORD *)(a2 + 8) & 0xFFFFE0FF | 0x1300;
    }
    *(_DWORD *)(a2 + 4) = 0xFFFF;
    *(_DWORD *)(a2 + 8) = v10;
    v11 = v10 | 0x6000;
    *(_DWORD *)(a2 + 8) = v11;
    v11 |= 0x8000u;
    *(_DWORD *)(a2 + 8) = v11;
    v11 |= 0xF0000u;
    *(_DWORD *)(a2 + 8) = v11;
    v11 &= ~0x100000u;
    *(_DWORD *)(a2 + 8) = v11;
    v11 &= ~0x200000u;
    *(_DWORD *)(a2 + 8) = v11;
    v11 |= 0x400000u;
    *(_DWORD *)(a2 + 8) = v11;
    *(_DWORD *)(a2 + 8) = v11 | 0x800000;
  }
  else
  {
    *(_QWORD *)(a2 + 4) = 0LL;
  }
LABEL_14:
  if ( InformationThread >= 0 )
  {
    if ( a4 )
      *a4 = 8;
  }
  return (unsigned int)InformationThread;
}
