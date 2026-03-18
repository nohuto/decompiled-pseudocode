/*
 * XREFs of xxxEndScroll @ 0x1C0241878
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0107A0C (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxTrackBox @ 0x1C0242A00 (xxxTrackBox.c)
 *     xxxTrackThumb @ 0x1C0242B70 (xxxTrackThumb.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0069680 (SetOrClrWF.c)
 *     xxxWindowEvent @ 0x1C0073AB0 (xxxWindowEvent.c)
 *     PtInRect @ 0x1C0077984 (PtInRect.c)
 *     xxxReleaseCapture @ 0x1C00AA35C (xxxReleaseCapture.c)
 *     _GetMessagePos @ 0x1C0101D84 (_GetMessagePos.c)
 *     FindTimer @ 0x1C01041A4 (FindTimer.c)
 *     safe_cast_fnid_to_PSBWND @ 0x1C01D0504 (safe_cast_fnid_to_PSBWND.c)
 *     zzzShowCaret @ 0x1C023AA6C (zzzShowCaret.c)
 *     ??$UserFreeIsolatedType@V?$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C023FDC0 (--$UserFreeIsolatedType@V-$CTypeIsolation@$0HAAA@$0HA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?DrawCtlThumb@@YAXPEAUtagSBWND@@@Z @ 0x1C02402EC (-DrawCtlThumb@@YAXPEAUtagSBWND@@@Z.c)
 *     ?xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z @ 0x1C0240A10 (-xxxDoScroll@@YAXPEAUtagWND@@0HHH@Z.c)
 *     ?xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z @ 0x1C0240ACC (-xxxDrawThumb@@YAXPEAUtagWND@@PEAUtagSBCALC@@H@Z.c)
 *     ?zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z @ 0x1C0241180 (-zzzDrawInvertScrollArea@@YAXPEAUtagWND@@PEAUtagSBTRACK@@HI@Z.c)
 */

unsigned __int8 **__fastcall xxxEndScroll(struct tagWND *a1, int a2)
{
  unsigned __int8 **result; // rax
  __int64 v5; // rbx
  unsigned int v6; // ebp
  __int64 (__fastcall *v7)(struct tagWND *); // rax
  struct tagSBCALC *v8; // rdx
  struct tagSBWND *v9; // rax
  int MessagePos; // eax
  __int64 v11; // r8
  struct tagWND *v12; // rdx
  struct tagWND *v13; // rdx
  unsigned int v14; // r8d
  struct tagWND *v15; // rcx
  unsigned __int64 v16; // [rsp+50h] [rbp+8h]

  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  v5 = (__int64)result[90];
  if ( !v5 )
    return result;
  result = *(unsigned __int8 ***)(gptiCurrent + 432LL);
  if ( result[13] != (unsigned __int8 *)a1 )
    return result;
  if ( !*(_QWORD *)(v5 + 48) )
    return result;
  v6 = *(_DWORD *)(v5 + 56);
  *(_DWORD *)(v5 + 56) = 0;
  xxxReleaseCapture();
  result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
  if ( (unsigned __int8 *)v5 != result[90] )
    return result;
  v7 = *(__int64 (__fastcall **)(struct tagWND *))(v5 + 48);
  if ( (char *)v7 != (char *)xxxTrackThumb )
  {
    if ( v7 == xxxTrackBox )
    {
      if ( *(_QWORD *)(v5 + 64) )
      {
        FindTimer((__int64)a1, 65534LL, 2u, 1, 0LL);
        *(_QWORD *)(v5 + 64) = 0LL;
      }
      MessagePos = GetMessagePos();
      v11 = *((_QWORD *)a1 + 5);
      if ( (*(_BYTE *)(v11 + 26) & 0x40) != 0 )
        LODWORD(v16) = *(_DWORD *)(v11 + 96) - (__int16)MessagePos;
      else
        LODWORD(v16) = (__int16)MessagePos - *(_DWORD *)(v11 + 88);
      HIDWORD(v16) = SHIWORD(MessagePos) - *(_DWORD *)(v11 + 92);
      if ( PtInRect((_DWORD *)(v5 + 32), v16) )
        zzzDrawInvertScrollArea(a1, (struct tagSBTRACK *)v5, 0, v6);
    }
    goto LABEL_22;
  }
  if ( a2 )
    *(_DWORD *)(v5 + 80) = *(_DWORD *)(*(_QWORD *)(v5 + 96) + 12LL);
  v8 = *(struct tagSBCALC **)(v5 + 24);
  if ( !v8
    || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v8, 4LL, *(unsigned int *)(v5 + 80), (*(_DWORD *)v5 >> 1) & 1),
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
        (unsigned __int8 *)v5 == result[90]) )
  {
    if ( (*(_DWORD *)v5 & 4) != 0 )
    {
      v9 = (struct tagSBWND *)safe_cast_fnid_to_PSBWND((__int64)a1);
      if ( v9 )
        DrawCtlThumb(v9);
    }
    else
    {
      xxxDrawThumb(a1, v8, (*(_DWORD *)v5 >> 1) & 1);
    }
LABEL_22:
    result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
    if ( (unsigned __int8 *)v5 == result[90] )
    {
      v12 = *(struct tagWND **)(v5 + 24);
      if ( !v12
        || (xxxDoScroll(*(struct tagWND **)(v5 + 16), v12, 8LL, 0LL, (*(_DWORD *)v5 >> 1) & 1),
            result = (unsigned __int8 **)*((_QWORD *)a1 + 2),
            (unsigned __int8 *)v5 == result[90]) )
      {
        SetOrClrWF(0, a1, 0x610u, 1);
        SetOrClrWF(0, a1, 0x620u, 1);
        if ( gpqForeground )
        {
          v13 = *(struct tagWND **)(gpqForeground + 112LL);
          if ( v13 )
          {
            if ( gpqForeground == *(_QWORD *)(gptiCurrent + 432LL) )
              xxxWindowEvent(0x80000005, v13, 0, 3u, 33);
          }
        }
        if ( (*(_DWORD *)v5 & 4) != 0 )
          v14 = -4;
        else
          v14 = ((*(_DWORD *)v5 & 2) != 0) | 0xFFFFFFFA;
        xxxWindowEvent(0x13u, a1, v14, 0, 0);
        result = (unsigned __int8 **)*((_QWORD *)a1 + 2);
        if ( (unsigned __int8 *)v5 == result[90] )
        {
          v15 = *(struct tagWND **)(v5 + 16);
          if ( !v15
            || (zzzShowCaret(v15), result = (unsigned __int8 **)*((_QWORD *)a1 + 2), (unsigned __int8 *)v5 == result[90]) )
          {
            *(_QWORD *)(v5 + 48) = 0LL;
            *(_QWORD *)(*((_QWORD *)a1 + 2) + 720LL) = 0LL;
            HMAssignmentUnlock(v5 + 16);
            HMAssignmentUnlock(v5 + 24);
            HMAssignmentUnlock(v5 + 8);
            return UserFreeIsolatedType<NSInstrumentation::CTypeIsolation<28672,112>>(v5);
          }
        }
      }
    }
  }
  return result;
}
