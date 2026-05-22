/*
 * XREFs of ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B5D50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x1801B5ED4 (-AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z.c)
 *     ?CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z @ 0x1801B5FD4 (-CheckForFlick@FlickRecognizer@@AEAAXPEBVGestureSession@@@Z.c)
 */

__int64 __fastcall FlickRecognizer::Add(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        __int16 a3,
        unsigned int a4)
{
  char v5; // r15
  unsigned int v8; // r12d
  int v9; // ecx
  unsigned __int64 v10; // r14
  __int64 v11; // rax

  v5 = a3;
  if ( (a3 & 0x100) == 0 )
  {
    v8 = 1;
    v9 = *((_DWORD *)a2 + 3) & 0x7880;
    if ( v9 )
      v8 = *((_DWORD *)a2 + 187);
    v10 = -(__int64)(v9 != 0) & 0xFFFFFFFFFFFFFE70uLL;
    if ( (a3 & 1) != 0 )
    {
      (*(void (__fastcall **)(FlickRecognizer *))(*(_QWORD *)this + 32LL))(this);
      *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + v10 + 1154);
    }
    if ( v8 <= 1 )
    {
      if ( *(unsigned __int16 *)((char *)a2 + v10 + 1154) != *((_DWORD *)this + 35) )
      {
        (*(void (__fastcall **)(FlickRecognizer *, const struct GestureSession *))(*(_QWORD *)this + 32LL))(this, a2);
        *((_DWORD *)this + 35) = *(unsigned __int16 *)((char *)a2 + v10 + 1154);
      }
      FlickRecognizer::AddPoint(this, a2, *(struct tagPOINT *)((char *)a2 + v10 + 1156), a4);
      if ( (v5 & 4) != 0 )
      {
        v11 = *((unsigned __int8 *)this + 137);
        if ( (_BYTE)v11 != 10 && a4 - *((_DWORD *)this + 3 * v11 + 6) > *((unsigned __int16 *)this + 81) )
          (*(void (__fastcall **)(FlickRecognizer *, const struct GestureSession *))(*(_QWORD *)this + 32LL))(this, a2);
        FlickRecognizer::CheckForFlick(this, a2);
      }
    }
    else
    {
      (*(void (__fastcall **)(FlickRecognizer *, const struct GestureSession *))(*(_QWORD *)this + 32LL))(this, a2);
    }
  }
  return 0LL;
}
