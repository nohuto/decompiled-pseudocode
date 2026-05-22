/*
 * XREFs of ?TapInactive@TwoFingerClickRecognizer@@AEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801D7258
 * Callers:
 *     ?Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801D6DE0 (-Add@TwoFingerClickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x1801D59A4 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 */

__int64 __fastcall TwoFingerClickRecognizer::TapInactive(
        TwoFingerClickRecognizer *this,
        const struct GestureSession *a2,
        char a3,
        int a4,
        unsigned int a5,
        const struct TouchContactInfo *a6)
{
  const struct TouchContactInfo *v6; // r10
  unsigned int v8; // edx
  __int16 v9; // r11
  _QWORD *v10; // r9
  __int64 v11; // rsi
  __int64 *v12; // r8
  _DWORD *v13; // rbx
  __int64 v14; // rax
  unsigned int v15; // r9d
  struct tagPOINT v17; // [rsp+38h] [rbp+10h] BYREF

  v17 = (struct tagPOINT)a2;
  v6 = a6;
  if ( (a3 & 1) != 0 )
  {
    v8 = a5;
    v9 = 0;
    if ( a5 <= 2 )
    {
      if ( a5 )
      {
        v10 = (_QWORD *)((char *)this + 44);
        v11 = a5;
        v12 = (__int64 *)((char *)a6 + 4);
        v13 = (_DWORD *)((char *)this + 36);
        do
        {
          *v13++ = *((unsigned __int16 *)v12 - 1);
          v14 = *v12;
          v12 += 5;
          *v10++ = v14;
          --v11;
        }
        while ( v11 );
      }
      if ( v8 == 1 )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 31);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 1;
        return 0LL;
      }
      v15 = *((unsigned __int16 *)this + 30);
      v17.x = *((_DWORD *)v6 + 1) - *((_DWORD *)v6 + 11);
      v17.y = *((_DWORD *)v6 + 2) - *((_DWORD *)v6 + 12);
      if ( !GestureRecognizer::ExceedsThreshold(this, &v17, v15, v15) )
      {
        *((_DWORD *)this + 6) = a4 + *((unsigned __int16 *)this + 32);
        *((_WORD *)this + 8) |= 0x10u;
        *((_DWORD *)this + 5) = 2;
        return 0LL;
      }
    }
    *((_WORD *)this + 8) = v9;
    *((_DWORD *)this + 5) = 4;
  }
  return 0LL;
}
