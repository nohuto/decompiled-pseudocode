/*
 * XREFs of ?DoHitTest@CVisual@@UEAA_NAEBUtagPOINT@@PEAPEAV1@PEAI@Z @ 0x18006EE30
 * Callers:
 *     ?DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z @ 0x1800E5810 (-DoHitTest@CTopLevelWindow@@UEAA_NAEBUtagPOINT@@PEAPEAVCVisual@@PEAI@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800663A0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?MovePrevious@VisualCollectionIterator@@QEAA_NXZ @ 0x180105864 (-MovePrevious@VisualCollectionIterator@@QEAA_NXZ.c)
 *     ?TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z @ 0x180105C3C (-TransformFromParent@CVisual@@QEAA_NAEBUtagPOINT@@PEAU2@@Z.c)
 */

bool __fastcall CVisual::DoHitTest(CVisual *this, const struct tagPOINT *a2, struct CVisual **a3, unsigned int *a4)
{
  struct CVisual *v5; // rax
  unsigned int v6; // ecx
  CVisual *v10; // rsi
  LONG y; // ecx
  bool result; // al
  char *v13; // [rsp+30h] [rbp-20h] BYREF
  int v14; // [rsp+38h] [rbp-18h]
  unsigned int v15; // [rsp+3Ch] [rbp-14h]
  __int16 v16; // [rsp+40h] [rbp-10h]
  unsigned int v17; // [rsp+80h] [rbp+30h] BYREF
  struct CVisual *v18; // [rsp+90h] [rbp+40h] BYREF
  struct tagPOINT v19; // [rsp+98h] [rbp+48h] BYREF

  v5 = 0LL;
  v6 = 0;
  v18 = 0LL;
  v17 = 0;
  if ( !*((_QWORD *)this + 3) || (*((_BYTE *)this + 92) & 4) != 0 && *((_DWORD *)this + 50) != -1 )
  {
    v16 = 0;
    v14 = *((_DWORD *)this + 20);
    v13 = (char *)this + 32;
    v15 = -1;
    while ( VisualCollectionIterator::MovePrevious((VisualCollectionIterator *)&v13) )
    {
      v10 = *(CVisual **)(*((_QWORD *)v13 + 2) + 8LL * v15);
      if ( CVisual::TransformFromParent(v10, a2, &v19) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(CVisual *, struct tagPOINT *, struct CVisual **, unsigned int *))(*(_QWORD *)v10 + 144LL))(
               v10,
               &v19,
               &v18,
               &v17) )
        {
          break;
        }
      }
    }
    v5 = v18;
    if ( v18 || a2->x < 0 || a2->x >= *((_DWORD *)this + 32) || (y = a2->y, y < 0) || y >= *((_DWORD *)this + 33) )
    {
      v6 = v17;
    }
    else
    {
      v6 = *((_DWORD *)this + 50);
      v5 = this;
    }
  }
  *a3 = v5;
  result = v5 != 0LL;
  *a4 = v6;
  return result;
}
