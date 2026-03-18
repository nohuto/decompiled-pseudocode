/*
 * XREFs of ?GetOrUpdateCheckPointIfNotPresent@@YAPEAUtagCHECKPOINT@@PEAUMOVESIZEDATA@@@Z @ 0x1C016D756
 * Callers:
 *     ?SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C020B09C (-SizeRect@@YAHPEAUMOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C020F75C (-xxxSizeOrMoveRect@@YAHPEAUMOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 * Callees:
 *     GetRect @ 0x1C00688B4 (GetRect.c)
 *     _GetProp @ 0x1C006B844 (_GetProp.c)
 *     CkptRestore @ 0x1C007C97C (CkptRestore.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

struct tagRECT *__fastcall GetOrUpdateCheckPointIfNotPresent(struct MOVESIZEDATA *a1)
{
  __int64 v2; // rcx
  struct tagCHECKPOINT *Prop; // rcx
  struct tagRECT *result; // rax
  int v5; // eax
  __int128 v6; // xmm0
  struct tagRECT v7; // [rsp+20h] [rbp-28h] BYREF

  v2 = *((_QWORD *)a1 + 2);
  v7 = 0LL;
  Prop = (struct tagCHECKPOINT *)GetProp(v2, LOWORD(WPP_MAIN_CB.Dpc.TargetInfoAsUlong), 1u);
  if ( Prop
    || (GetRect(*((_QWORD *)a1 + 2), (__int64)&v7, 66),
        result = CkptRestore(*((struct tagWND **)a1 + 2), &v7),
        (Prop = (struct tagCHECKPOINT *)result) != 0LL) )
  {
    v5 = *((_DWORD *)a1 + 50);
    if ( (v5 & 0x1000000) == 0 )
    {
      v6 = *(_OWORD *)Prop;
      *((_DWORD *)a1 + 50) = v5 | 0x1000000;
      *(_OWORD *)((char *)a1 + 152) = v6;
    }
    return (struct tagRECT *)Prop;
  }
  return result;
}
