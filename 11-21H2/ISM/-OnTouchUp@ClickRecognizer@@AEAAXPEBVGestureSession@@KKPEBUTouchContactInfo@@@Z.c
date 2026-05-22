/*
 * XREFs of ?OnTouchUp@ClickRecognizer@@AEAAXPEBVGestureSession@@KKPEBUTouchContactInfo@@@Z @ 0x1801B6DE4
 * Callers:
 *     ?Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B6890 (-Add@ClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z @ 0x1801B6E78 (-PointsWithinThreshold@ClickRecognizer@@AEAA_NPEBUtagPOINT@@0K@Z.c)
 */

void __fastcall ClickRecognizer::OnTouchUp(
        ClickRecognizer *this,
        const struct GestureSession *a2,
        __int64 a3,
        __int64 a4,
        const struct TouchContactInfo *a5)
{
  __int16 v5; // r11
  ClickRecognizer *v6; // r10
  __int64 v7; // rax
  struct tagPOINT v8; // [rsp+30h] [rbp+8h] BYREF

  v5 = *((_WORD *)this + 8);
  v6 = this;
  v8 = (struct tagPOINT)*((_QWORD *)a2 + 149);
  if ( (v5 & 2) != 0
    || !ClickRecognizer::PointsWithinThreshold(
          this,
          &v8,
          (const struct tagPOINT *)((char *)a5 + 4),
          *((unsigned __int16 *)this + 18))
    || (unsigned int)(((int)(*((_DWORD *)v6 + 5) << 28) >> 28) - 1) > 2
    || (v5 & 1) != 0 )
  {
    *((_WORD *)v6 + 8) = v5 & 0xFF7F;
    v7 = *((_QWORD *)v6 + 14);
  }
  else
  {
    v7 = *((_QWORD *)v6 + 14);
    *(_QWORD *)((char *)v6 + 44) = v7;
    *((_WORD *)v6 + 8) = v5 | 0x84;
  }
  *((_QWORD *)v6 + 15) = v7;
  ClickRecognizer::CancelTapAndHold(v6);
}
