/*
 * XREFs of ?AddPoint@DragRecognizer@@AEAAXPEBVGestureSession@@PEBUtagPOINT@@_N@Z @ 0x1801D577C
 * Callers:
 *     ?Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801D5640 (-Add@DragRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801D5974 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 *     ?ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z @ 0x1801D59A4 (-ExceedsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@KK@Z.c)
 */

void __fastcall DragRecognizer::AddPoint(
        DragRecognizer *this,
        const struct GestureSession *a2,
        const struct tagPOINT *a3,
        char a4)
{
  int v4; // eax
  int v6; // ebx
  unsigned int v8; // r9d
  unsigned int v10; // r8d
  unsigned __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // r11
  char v14; // r9
  char v15; // r10
  struct tagPOINT v16; // r12
  unsigned __int8 v17; // si
  bool v18; // zf
  bool v19; // sf
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  int v22; // r14d
  int v23; // edx
  int v24; // ebp
  int v25; // ecx
  int v26; // r8d
  int v27; // ebx
  int v28; // edx
  LONG y; // eax
  __int16 v30; // ax
  struct tagPOINT v31; // [rsp+50h] [rbp+8h] BYREF

  v4 = a3->y - *((_DWORD *)this + 15);
  v6 = a3->x - *((_DWORD *)this + 14);
  v8 = *((unsigned __int16 *)this + 19);
  v10 = *((unsigned __int16 *)this + 18);
  v31 = (struct tagPOINT)__PAIR64__(v4, v6);
  if ( !GestureRecognizer::ExceedsThreshold((GestureRecognizer *)__PAIR64__(v4, v6), &v31, v10, v8) && !a4 )
    return;
  v14 = *(_BYTE *)(v13 + 30);
  v15 = 0;
  v16 = *a3;
  *(struct tagPOINT *)(v13 + 56) = *a3;
  if ( (v14 & 2) == 0 )
  {
    v14 |= 2u;
    *(_BYTE *)(v13 + 30) = v14;
    v15 = 1;
    if ( abs32(v6) <= v12 )
    {
      v20 = HIDWORD(v11);
      v17 = 0;
      v18 = (_DWORD)v20 == 0;
      v19 = (v20 & 0x80000000) != 0LL;
    }
    else
    {
      v17 = 1;
      v18 = v6 == 0;
      v19 = v6 < 0;
    }
    v21 = *((_QWORD *)a2 + 149);
    v22 = *(unsigned __int16 *)(v13 + 24);
    v23 = *(unsigned __int16 *)(v13 + 22) >> 1;
    v24 = *(unsigned __int16 *)(v13 + 22) - v23;
    v25 = -(v23 + *(unsigned __int16 *)(v13 + 16));
    if ( !v19 && !v18 )
      v25 = v23 + *(unsigned __int16 *)(v13 + 16);
    if ( v17 )
    {
      v26 = v22 + HIDWORD(v21);
      v27 = v24 + v25 + v21;
      v28 = HIDWORD(v21) - v22;
      v11 = (unsigned int)(v21 + v25 - v24);
    }
    else
    {
      v28 = v25 - v24 + HIDWORD(v21);
      v27 = v22 + v21;
      v26 = v24 + v25 + HIDWORD(v21);
      v11 = (unsigned int)(v21 - v22);
    }
    *(_DWORD *)(v13 + 40) = v11;
    *(_DWORD *)(v13 + 48) = v27;
    *(_DWORD *)(v13 + 44) = v28;
    *(_DWORD *)(v13 + 52) = v26;
    *(struct tagPOINT *)(v13 + 64) = v16;
    *(_DWORD *)(v13 + 72) &= ~(16 * (v17 + 1));
  }
  LOBYTE(v11) = v14;
  if ( (v14 & 6) == 2 )
  {
    if ( !*(_WORD *)(v13 + 22) )
    {
      LOBYTE(v11) = v14 | 4;
LABEL_22:
      *(_BYTE *)(v13 + 30) = v11;
      goto LABEL_23;
    }
    if ( a3->x < *(_DWORD *)(v13 + 40) || a3->x > *(_DWORD *)(v13 + 48) )
    {
      LOBYTE(v11) = v14 | 4;
      *(_DWORD *)(v13 + 72) &= ~0x20u;
      goto LABEL_22;
    }
    y = a3->y;
    if ( y < *(_DWORD *)(v13 + 44) || y > *(_DWORD *)(v13 + 52) )
    {
      LOBYTE(v11) = v14 | 4;
      *(_DWORD *)(v13 + 72) &= ~0x10u;
      goto LABEL_22;
    }
  }
LABEL_23:
  v30 = *(_WORD *)(v13 + 28);
  *(_WORD *)(v13 + 36) = v30;
  *(_WORD *)(v13 + 38) = v30;
  v31.x = v16.x - *(_DWORD *)(v13 + 64);
  v31.y = *(_DWORD *)(v13 + 60) - *(_DWORD *)(v13 + 68);
  if ( v15 || a4 || GestureRecognizer::ExceedsThreshold((GestureRecognizer *)v11, &v31, *(unsigned __int16 *)(v13 + 26)) )
    *(_BYTE *)(v13 + 30) = v11 | 8;
}
