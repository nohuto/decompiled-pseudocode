/*
 * XREFs of ?AddPoint@FlickRecognizer@@AEAAXPEBVGestureSession@@UtagPOINT@@K@Z @ 0x1801D4374
 * Callers:
 *     ?Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z @ 0x1801D41F0 (-Add@FlickRecognizer@@UEAAJPEBVGestureSession@@_KKKPEBUTouchContactInfo@@@Z.c)
 * Callees:
 *     ?MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z @ 0x1801D46B8 (-MeetsThreshold@GestureRecognizer@@IEAA_NPEBUtagPOINT@@K@Z.c)
 */

void __fastcall FlickRecognizer::AddPoint(
        FlickRecognizer *this,
        const struct GestureSession *a2,
        struct tagPOINT a3,
        int a4)
{
  char v5; // bl
  struct tagPOINT v6; // r10
  FlickRecognizer *v7; // r11
  __int64 v8; // rax
  bool v9; // al
  char v10; // r8
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  char v13; // cl
  char v14; // al
  struct tagPOINT v15; // [rsp+30h] [rbp+8h] BYREF

  v5 = *((_BYTE *)this + 138) & 0xFE;
  v6 = a3;
  *((_BYTE *)this + 138) = v5;
  v7 = this;
  if ( (v5 & 2) == 0 )
  {
    v8 = *((_QWORD *)a2 + 149);
    v15.x = a3.x - v8;
    a3.x = *((unsigned __int16 *)this + 79);
    v15.y = a3.y - HIDWORD(v8);
    v9 = GestureRecognizer::MeetsThreshold((GestureRecognizer *)(unsigned int)(a3.y - HIDWORD(v8)), &v15, a3.x);
    *((_BYTE *)v7 + 138) = (2 * v9) | v5 & 0xFD;
  }
  v10 = *((_BYTE *)v7 + 137);
  if ( v10 == 10 )
  {
    *((struct tagPOINT *)v7 + 2) = v6;
    *((_DWORD *)v7 + 6) = a4;
    *((_WORD *)v7 + 68) = 0;
  }
  else
  {
    v11 = 0;
    if ( v10 != 9 )
      v11 = v10 + 1;
    *((_BYTE *)v7 + 137) = v11;
    v12 = 3LL * v11;
    *(struct tagPOINT *)((char *)v7 + 4 * v12 + 16) = v6;
    *((_DWORD *)v7 + v12 + 6) = a4;
    v13 = *((_BYTE *)v7 + 136);
    if ( *((_BYTE *)v7 + 137) == v13 )
    {
      v14 = v13 + 1;
      if ( v13 == 9 )
        v14 = 0;
      *((_BYTE *)v7 + 136) = v14;
    }
  }
}
