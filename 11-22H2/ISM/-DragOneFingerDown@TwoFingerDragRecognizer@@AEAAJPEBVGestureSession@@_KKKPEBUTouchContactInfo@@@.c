/*
 * XREFs of ?DragOneFingerDown@TwoFingerDragRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E4228
 * Callers:
 *     ?Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801E3E40 (-Add@TwoFingerDragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801E31E4 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 *     ?ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z @ 0x1801E3F50 (-ContactsAreValid@TwoFingerDragRecognizer@@AEAA_NKPEBUTouchContactInfo@@@Z.c)
 */

__int64 __fastcall TwoFingerDragRecognizer::DragOneFingerDown(
        TwoFingerDragRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        __int64 a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  unsigned int v7; // r8d
  const struct TouchContactInfo *v9; // rdi
  _QWORD *v10; // rdx
  _DWORD *v11; // r8
  __int64 v12; // r9
  __int64 *v13; // rcx
  __int64 v14; // rax
  int v15; // eax
  const struct GestureSession *v16; // rax
  const struct GestureSession *v17; // [rsp+48h] [rbp+10h] BYREF

  v17 = a2;
  if ( (a3 & 4) != 0 )
    goto LABEL_5;
  if ( a5 != 1 )
  {
    if ( a5 == 2 )
    {
      v9 = a6;
      v10 = (_QWORD *)((char *)this + 36);
      v11 = (_DWORD *)((char *)this + 28);
      v12 = 2LL;
      v13 = (__int64 *)((char *)a6 + 4);
      do
      {
        *v11++ = *((unsigned __int16 *)v13 - 1);
        v14 = *v13;
        v13 += 5;
        *v10++ = v14;
        --v12;
      }
      while ( v12 );
      if ( TwoFingerDragRecognizer::ContactsAreValid(this, 2, v9) )
      {
        *((_WORD *)this + 8) &= ~8u;
        LODWORD(v17) = (*((_DWORD *)v9 + 11) + *((_DWORD *)v9 + 1)) / 2;
        v15 = *((_DWORD *)v9 + 12) + *((_DWORD *)v9 + 2);
        *((_DWORD *)this + 5) = 2;
        HIDWORD(v17) = v15 / 2;
        v16 = v17;
        *(_QWORD *)((char *)this + 68) = v17;
        *(_QWORD *)((char *)this + 52) = v16;
        return 0LL;
      }
    }
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 7) != *((unsigned __int16 *)a6 + 1)
    || (v7 = *((unsigned __int16 *)this + 39),
        LODWORD(v17) = *((_DWORD *)a6 + 1) - *((_DWORD *)this + 9),
        HIDWORD(v17) = *((_DWORD *)a6 + 2) - *((_DWORD *)this + 10),
        GestureRecognizer::ExceedsThreshold(a6, (const struct tagPOINT *)&v17, v7)) )
  {
LABEL_5:
    *((_WORD *)this + 8) = 0;
    *((_DWORD *)this + 5) = 4;
  }
  return 0LL;
}
