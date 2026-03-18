/*
 * XREFs of xxxMNDrawFullNC @ 0x1C0247E7C
 * Callers:
 *     xxxMNSetTop @ 0x1C0233C0C (xxxMNSetTop.c)
 *     xxxMenuWindowProc @ 0x1C0234200 (xxxMenuWindowProc.c)
 * Callees:
 *     NtGdiPatBlt @ 0x1C0042E10 (NtGdiPatBlt.c)
 *     ThreadLock @ 0x1C0068634 (ThreadLock.c)
 *     MNIsUAHMenu @ 0x1C0069238 (MNIsUAHMenu.c)
 *     ?GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z @ 0x1C00BD238 (-GetDPIMETRICS@@YAPEBUtagDPIMETRICS@@PEBUtagWND@@@Z.c)
 *     xxxSendUAHMenuMessage @ 0x1C00BD2C0 (xxxSendUAHMenuMessage.c)
 *     MNGetpItemFromIndex @ 0x1C00BF0D8 (MNGetpItemFromIndex.c)
 *     DrawEdge @ 0x1C00C17C0 (DrawEdge.c)
 *     GreSetBrushOrg @ 0x1C00C1C04 (GreSetBrushOrg.c)
 *     DrawFrame @ 0x1C00C35F4 (DrawFrame.c)
 *     GreGetBrushOrg @ 0x1C014F5CC (GreGetBrushOrg.c)
 *     MNDrawArrow @ 0x1C0247A88 (MNDrawArrow.c)
 *     MNDrawEdge @ 0x1C0247C54 (MNDrawEdge.c)
 */

__int64 __fastcall xxxMNDrawFullNC(struct tagWND *a1, HDC a2, __int64 **a3)
{
  __int64 result; // rax
  int v4; // ebx
  HDC DCEx; // rsi
  __int64 *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  _DWORD *v13; // rdx
  LONG bottom; // r12d
  LONG v15; // r12d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // ebx
  const struct tagDPIMETRICS *DPIMETRICS; // rax
  const struct tagDPIMETRICS *v21; // rax
  RECT v22; // [rsp+30h] [rbp-30h] BYREF
  __int128 v23; // [rsp+40h] [rbp-20h] BYREF
  __int64 v24; // [rsp+50h] [rbp-10h]
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h]

  result = (__int64)*a3;
  v4 = 0;
  v25 = 0LL;
  if ( *(_QWORD *)(*(_QWORD *)result + 40LL) )
  {
    if ( a2 )
      DCEx = a2;
    else
      DCEx = (HDC)_GetDCEx(a1, 0LL, 66561LL);
    result = MNIsUAHMenu(*(_QWORD *)(**a3 + 40));
    if ( (_DWORD)result )
    {
      result = (__int64)*a3;
      if ( *(_QWORD *)(**a3 + 16) )
      {
        v24 = 0LL;
        v9 = *a3;
        v23 = 0LL;
        ThreadLock(*(_QWORD *)(*v9 + 16), (__int64 *)&v23);
        v4 = xxxSendUAHMenuMessage(*(_QWORD *)(**a3 + 16), 149LL, *(_QWORD *)(**a3 + 40), (__int64)DCEx);
        result = ThreadUnlock1(v11, v10, v12);
      }
    }
    if ( *(_QWORD *)(**a3 + 40) )
    {
      if ( v4 )
      {
        MNDrawArrow(DCEx, a3, -3);
        result = MNDrawArrow(DCEx, a3, -4);
      }
      else
      {
        v13 = (_DWORD *)*((_QWORD *)a1 + 5);
        v22.top = 0;
        v22.left = 0;
        v22.right = v13[24] - v13[22];
        v22.bottom = v13[25] - v13[23];
        if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
        {
          MNDrawEdge(*(_QWORD *)(**a3 + 40), a2, &v22, 0x2000);
          bottom = v22.bottom;
        }
        else
        {
          DrawEdge(DCEx, &v22, 5, 8207);
          DrawFrame(DCEx, &v22.left, 1, 120);
          ++v22.left;
          --v22.right;
          ++v22.top;
          bottom = v22.bottom - 1;
        }
        v15 = bottom - *((_DWORD *)GetDPIMETRICS(a1) + 7);
        GreGetBrushOrg(DCEx, &v25);
        if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL) )
        {
          v16 = MNGetpItemFromIndex(*(_QWORD *)(**a3 + 40), *(_DWORD *)(*(_QWORD *)(**a3 + 40) + 116LL));
          GreSetBrushOrg(DCEx, 0, -*(_DWORD *)(*(_QWORD *)v16 + 68LL), 0LL);
          v17 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a3 + 40) + 40LL) + 24LL);
        }
        else
        {
          v17 = *(_QWORD *)(gpsi + 4728LL);
        }
        v18 = GreSelectBrush(DCEx, v17);
        v19 = v22.right - v22.left;
        v26 = v18;
        DPIMETRICS = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, v22.left, v22.top, v19, *((_DWORD *)DPIMETRICS + 7), 15728673);
        MNDrawArrow(DCEx, a3, -3);
        v21 = GetDPIMETRICS(a1);
        NtGdiPatBlt(DCEx, v22.left, v15, v19, *((_DWORD *)v21 + 7), 15728673);
        MNDrawArrow(DCEx, a3, -4);
        GreSetBrushOrg(DCEx, v25, SHIDWORD(v25), 0LL);
        result = GreSelectBrush(DCEx, v26);
      }
      if ( !a2 )
        return _ReleaseDC(DCEx);
    }
    else if ( !a2 && DCEx )
    {
      return _ReleaseDC(DCEx);
    }
  }
  return result;
}
