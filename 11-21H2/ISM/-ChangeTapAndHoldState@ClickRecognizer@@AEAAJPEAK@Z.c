/*
 * XREFs of ?ChangeTapAndHoldState@ClickRecognizer@@AEAAJPEAK@Z @ 0x1801B6994
 * Callers:
 *     ?OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B6C78 (-OnTouch@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ClickRecognizer::ChangeTapAndHoldState(ClickRecognizer *this, unsigned int *a2)
{
  unsigned int v2; // r8d
  int v3; // eax
  int v4; // r9d
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rax
  int v8; // r9d
  int v9; // r9d

  v2 = *((_DWORD *)this + 5);
  v3 = (int)(v2 << 28) >> 28;
  if ( v3 && v3 != 5 )
  {
    if ( v3 != 1
      || (v2 = v2 & 0xFFFFFFF0 | 2,
          *((_DWORD *)this + 5) = v2,
          *((_WORD *)this + 8) |= 0x40u,
          v4 = *((unsigned __int16 *)this + 15),
          *((_QWORD *)this + 12) = *((_QWORD *)this + 14),
          v5 = v4 - *((unsigned __int16 *)this + 14),
          v5 <= 0) )
    {
      v6 = (int)(v2 << 28) >> 28;
      if ( v6 == 2 )
      {
        *((_DWORD *)this + 5) = v2 & 0xFFFFFFF0 | 3;
        *((_WORD *)this + 8) |= 0x10u;
        v7 = *((_QWORD *)this + 14);
        *((_DWORD *)this + 19) = 0;
        *(_QWORD *)((char *)this + 68) = v7;
        *a2 = *((unsigned __int16 *)this + 16);
        return 0LL;
      }
      if ( v6 != 3 )
        goto LABEL_10;
      v2 = v2 & 0xFFFFFFF0 | 4;
      *((_DWORD *)this + 5) = v2;
      *((_WORD *)this + 8) |= 0x20u;
      v8 = *((unsigned __int16 *)this + 17);
      *(_QWORD *)((char *)this + 84) = *((_QWORD *)this + 14);
      v9 = v8 - *((unsigned __int16 *)this + 16);
      *((_DWORD *)this + 23) = 1;
      v5 = v9 - *((unsigned __int16 *)this + 15);
      if ( v5 <= 0 )
      {
LABEL_10:
        if ( (v2 & 0xF) == 4 )
        {
          *((_DWORD *)this + 5) = v2 & 0xFFFFFFF0 | 5;
          *((_WORD *)this + 8) |= 0x100u;
          *((_QWORD *)this + 13) = *((_QWORD *)this + 14);
        }
        return 0LL;
      }
    }
    *a2 = v5;
    return 0LL;
  }
  return 2147942487LL;
}
