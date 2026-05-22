/*
 * XREFs of ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801B7190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1801B72D4 (-AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z.c)
 */

__int64 __fastcall DragRecognizer::Add(DragRecognizer *this, const struct GestureSession *a2, __int16 a3)
{
  unsigned int v5; // esi
  int v6; // ecx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // r14
  int v9; // ebp
  bool v10; // dl
  char v11; // cl
  char v12; // cl
  const struct tagPOINT *v13; // r10
  int v14; // r8d
  char v15; // cl
  char v16; // cl

  if ( (a3 & 0x100) == 0 )
  {
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
      goto LABEL_22;
    v11 = *((_BYTE *)this + 30);
    if ( (v11 & 1) != 0 )
    {
      v14 = *((_DWORD *)this + 8);
      v13 = (const struct tagPOINT *)((char *)a2 + v8);
    }
    else
    {
      v12 = v11 | 1;
      v13 = (const struct tagPOINT *)((char *)a2 + v8);
      *((_BYTE *)this + 30) = v12;
      *((_QWORD *)this + 7) = *(_QWORD *)((char *)a2 + v8);
      *((_QWORD *)this + 8) = *(_QWORD *)((char *)a2 + v8);
      v14 = *(unsigned __int16 *)((char *)a2 + v7 + 1154);
      v10 = (v12 & 2) != 0;
      *((_DWORD *)this + 8) = v14;
    }
    if ( *(unsigned __int16 *)((char *)a2 + v7 + 1154) != v14 || (DragRecognizer::AddPoint(this, a2, v13, v10), v5 != 1) )
    {
LABEL_22:
      v15 = *((_BYTE *)this + 30);
      if ( (v15 & 1) != 0 )
      {
        v16 = v15 & 0xFE;
        *((_BYTE *)this + 30) = v16;
        if ( (v16 & 2) != 0 )
        {
          v16 |= 8u;
          *((_BYTE *)this + 30) = v16;
        }
        if ( v5 > 1 && (v16 & 6) == 2 )
        {
          *((_DWORD *)this + 18) &= 0xFFFFFFCF;
          *((_BYTE *)this + 30) = v16 | 4;
        }
      }
    }
  }
  return 0LL;
}
