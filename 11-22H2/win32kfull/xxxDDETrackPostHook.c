/*
 * XREFs of xxxDDETrackPostHook @ 0x1C01FB334
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C011E780 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 *     ?FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z @ 0x1C01F997C (-FindDdeConv@@YAPEAUtagDDECONV@@PEAUtagWND@@0@Z.c)
 *     ?xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z @ 0x1C01FA858 (-xxxFreeListFree@@YAXPEAUtagFREELIST@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FAE68 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01FAF30 (-xxxUnexpectedServerPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxClientFreeDDEHandle @ 0x1C0212740 (xxxClientFreeDDEHandle.c)
 *     xxxClientGetDDEHookData @ 0x1C02128F8 (xxxClientGetDDEHookData.c)
 *     xxxMessageEvent @ 0x1C022B658 (xxxMessageEvent.c)
 */

__int64 __fastcall xxxDDETrackPostHook(unsigned int *a1, struct tagWND *a2, __int64 a3, void **a4)
{
  struct tagDDECONV *DdeConv; // rdi
  unsigned int v6; // ebx
  __int64 v10; // rcx
  struct tagWND *v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  struct tagFREELIST *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int128 v22; // [rsp+30h] [rbp-68h] BYREF
  __int64 v23; // [rsp+40h] [rbp-58h]
  _OWORD v24[3]; // [rsp+48h] [rbp-50h] BYREF
  __int64 v25; // [rsp+78h] [rbp-20h]

  DdeConv = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  v6 = 2;
  if ( (MonitorFlags & 0x4000000) != 0 )
  {
    v10 = *a1;
    memset(v24, 0, sizeof(v24));
    v25 = 0LL;
    if ( (_DWORD)v10 == 994 || (_DWORD)v10 == 996 || (_DWORD)v10 == 997 || (unsigned int)(v10 - 999) < 2 )
    {
      xxxClientGetDDEHookData(v10, *a4, v24);
    }
    else
    {
      *(_QWORD *)&v24[0] = *(unsigned __int16 *)a4;
      *((_QWORD *)&v24[0] + 1) = *((unsigned __int16 *)a4 + 1);
    }
    xxxMessageEvent((_DWORD)a2, *a1, a3, (unsigned int)*a4, 0x4000000, (__int64)v24);
  }
  if ( *(_QWORD *)(gptiCurrent + 424LL) != *(_QWORD *)(*((_QWORD *)a2 + 2) + 424LL) )
  {
    if ( *a1 == 992 )
      return 0;
    v11 = (struct tagWND *)ValidateHwnd(a3);
    if ( v11 )
    {
      DdeConv = FindDdeConv(v11, a2, v12, v13);
      if ( DdeConv )
      {
        if ( gptiCurrent != *((_QWORD *)DdeConv + 2) && *(_WORD *)(gptiCurrent + 632LL) != 1024 )
        {
          UserSetLastError(1408);
          return 0;
        }
        ThreadLockAlways(DdeConv, &v22);
        v14 = (struct tagFREELIST *)*((_QWORD *)DdeConv + 9);
        *((_QWORD *)DdeConv + 9) = 0LL;
        xxxFreeListFree(v14);
        if ( (*(_BYTE *)(_HMPheFromObject(DdeConv) + 25) & 1) != 0 || *a1 != 993 && (*((_DWORD *)DdeConv + 20) & 6) != 0 )
        {
          v6 = 1;
        }
        else
        {
          v18 = *((_QWORD *)DdeConv + 7);
          if ( v18 )
            v19 = (*(__int64 (__fastcall **)(unsigned int *, void **, struct tagDDECONV *))(v18 + 32))(a1, a4, DdeConv);
          else
            v19 = (*((_DWORD *)DdeConv + 20) & 1) != 0
                ? xxxUnexpectedServerPost(a1, a4, DdeConv)
                : xxxUnexpectedClientPost(a1, a4, DdeConv);
          v6 = v19;
        }
        DdeConv = (struct tagDDECONV *)ThreadUnlock1(v16, v15, v17);
      }
      else
      {
        v6 = *a1 == 993;
      }
    }
    else
    {
      v6 = (*a1 == 993) + 1;
    }
    if ( v6 == 1 && (*(_DWORD *)(gptiCurrent + 488LL) & 1) == 0 )
    {
      v20 = 0x8000LL;
      switch ( (unsigned __int16)*a1 )
      {
        case 0x3E2u:
          v20 = 33025LL;
          break;
        case 0x3E3u:
          break;
        case 0x3E4u:
          v20 = 32769LL;
          break;
        default:
          if ( (unsigned __int16)*a1 != 997 )
          {
            if ( (unsigned __int16)*a1 == 998 )
              break;
            if ( (unsigned __int16)*a1 != 999 )
            {
              if ( (unsigned __int16)*a1 != 1000 )
                return v6;
              v20 = 34816LL;
              break;
            }
          }
          v20 = 32899LL;
          break;
      }
      if ( DdeConv )
      {
        xxxClientFreeDDEHandle(*a4, v20);
        return 3;
      }
    }
  }
  return v6;
}
