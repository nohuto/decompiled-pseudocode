/*
 * XREFs of ?_TTWindowPenalty@@YAIPEAUtagWND@@PEAUtagPNTRWINDOWHITTTESTARGS@@I@Z @ 0x1C0155652
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C01E5494 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 * Callees:
 *     _GetProp @ 0x1C00F21FC (_GetProp.c)
 *     TouchTargetingDownrank @ 0x1C0157AD2 (TouchTargetingDownrank.c)
 *     TouchTargetingBigTargetWindow @ 0x1C024DE04 (TouchTargetingBigTargetWindow.c)
 */

__int64 __fastcall _TTWindowPenalty(struct tagWND *a1, struct tagPNTRWINDOWHITTTESTARGS *a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned int Prop; // eax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0;
  if ( !a3 )
  {
    v6 = *((_QWORD *)a2 + 5);
    v10 = *(_OWORD *)(*((_QWORD *)a1 + 5) + 88LL);
    if ( (unsigned int)TouchTargetingBigTargetWindow(&v10, v6) )
    {
      Prop = GetProp((__int64)a1, (unsigned __int16)gatomPtrTargetFlags, 1LL, v7);
      return (unsigned int)TouchTargetingDownrank(*((_QWORD *)a2 + 5), Prop);
    }
  }
  return v3;
}
