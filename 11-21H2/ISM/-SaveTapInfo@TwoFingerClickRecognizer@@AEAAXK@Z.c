/*
 * XREFs of ?SaveTapInfo@TwoFingerClickRecognizer@@AEAAXK@Z @ 0x1801B8C20
 * Callers:
 *     ?TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8F38 (-TapOneFingerUp@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 *     ?TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B8FAC (-TapStarted@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801B6228 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall TwoFingerClickRecognizer::SaveTapInfo(TwoFingerClickRecognizer *this, int a2)
{
  TwoFingerClickRecognizer *v2; // r11
  __int16 v3; // r10
  GestureRecognizer *v4; // rcx
  int v5; // r9d
  __int16 v6; // r10
  unsigned int v7; // r8d
  __int16 v8; // r10
  __int16 v9; // ax
  char v10; // cl
  __int16 v11; // r10
  __int16 v12; // ax
  struct tagPOINT v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h]

  v2 = this;
  v3 = *((_WORD *)this + 8);
  v4 = (GestureRecognizer *)(unsigned int)((*((_DWORD *)this + 11) + *((_DWORD *)this + 13)) / 2);
  LODWORD(v14) = (_DWORD)v4;
  v5 = (*((_DWORD *)v2 + 12) + *((_DWORD *)v2 + 14)) / 2;
  HIDWORD(v14) = v5;
  v6 = v3 & 0xFFE6 | 1;
  *((_WORD *)v2 + 8) = v6;
  if ( (v6 & 4) != 0 )
  {
    v7 = *((unsigned __int16 *)v2 + 34);
    v13.x = *((_DWORD *)v2 + 7) - (_DWORD)v4;
    v13.y = *((_DWORD *)v2 + 8) - v5;
    if ( !GestureRecognizer::MeetsThreshold(v4, &v13, v7) )
      v8 |= 2u;
  }
  else
  {
    *((_DWORD *)v2 + 6) = a2 + *((unsigned __int16 *)v2 + 35);
    v8 = v6 | 0x18;
  }
  v9 = v8;
  v10 = v8;
  v11 = v8 | 4;
  v12 = v9 & 0xFFFB;
  if ( (v10 & 2) != 0 )
    v11 = v12;
  *((_WORD *)v2 + 8) = v11;
  if ( (v11 & 2) == 0 )
    *(_QWORD *)((char *)v2 + 28) = v14;
  *((_DWORD *)v2 + 5) = 0;
}
