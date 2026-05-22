/*
 * XREFs of ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801D5640
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180065970 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1801D577C (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall DragRecognizer::Add(DragRecognizer *this, const struct GestureSession *a2, __int16 a3)
{
  unsigned int v5; // ebp
  int v6; // ecx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  int v9; // ebx
  bool v10; // dl
  _BYTE *v11; // rbx
  char v12; // cl
  char v13; // cl
  char v14; // cl

  if ( (a3 & 0x100) != 0 )
    return 0LL;
  v5 = 1;
  v6 = *((_DWORD *)a2 + 3) & 0x7880;
  if ( v6 )
    v5 = *((_DWORD *)a2 + 187);
  v7 = -(__int64)(v6 != 0) & 0xFFFFFFFFFFFFFE70uLL;
  v8 = v7 + 1156;
  v9 = a3 & 1;
  if ( (a3 & 1) != 0 )
    (*(void (__fastcall **)(DragRecognizer *))(*(_QWORD *)this + 32LL))(this);
  v10 = 0;
  if ( v5 != 1 && !v9 )
  {
    v11 = (char *)this + 30;
LABEL_13:
    if ( (*v11 & 1) != 0 )
    {
      v14 = *v11 & 0xFE;
      *v11 = v14;
      if ( (v14 & 2) != 0 )
      {
        v14 |= 8u;
        *v11 = v14;
      }
      if ( v5 > 1 && (v14 & 6) == 2 )
      {
        *((_DWORD *)this + 18) &= 0xFFFFFFCF;
        *v11 = v14 | 4;
      }
    }
    return 0LL;
  }
  v11 = (char *)this + 30;
  v12 = *((_BYTE *)this + 30);
  if ( (v12 & 1) == 0 )
  {
    v13 = v12 | 1;
    *v11 = v13;
    *((_QWORD *)this + 7) = *(_QWORD *)((char *)a2 + v8);
    *((_QWORD *)this + 8) = *(_QWORD *)((char *)a2 + v8);
    v10 = (v13 & 2) != 0;
    *((_DWORD *)this + 8) = *(unsigned __int16 *)((char *)a2 + v7 + 1154);
  }
  if ( *(unsigned __int16 *)((char *)a2 + v7 + 1154) != *((_DWORD *)this + 8) )
    goto LABEL_13;
  DragRecognizer::AddPoint(this, a2, (const struct tagPOINT *)((char *)a2 + v8), v10);
  if ( v5 != 1 )
    goto LABEL_13;
  return 0LL;
}
