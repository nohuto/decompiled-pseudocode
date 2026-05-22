/*
 * XREFs of ?SetTransformList@CTransformGroupProxy@DirectComposition@@QEAAJPEAPEAUIDCompositionTransform@@I@Z @ 0x1800FD68C
 * Callers:
 *     ?CreateTransformGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTransform@@I0@Z @ 0x1800F0FE0 (-CreateTransformGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionTransform@@I0@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18001B130 (--3@YAXPEAX@Z.c)
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ?SetReferenceArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBI_K@Z @ 0x180033800 (-SetReferenceArrayProperty@CResourceProxy@DirectComposition@@QEAAJIPEBI_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x18004400C (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CTransformGroupProxy::SetTransformList(
        DirectComposition::CTransformGroupProxy *this,
        struct IDCompositionTransform **a2,
        unsigned int a3)
{
  DirectComposition::CResourceProxy *v3; // r14
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rcx
  unsigned int *v7; // rdi
  struct DirectComposition::CDevice *v8; // rbp
  __int64 i; // r11
  struct IDCompositionTransform *v10; // rcx
  __int64 v11; // r11
  unsigned int v12; // ebx
  struct DirectComposition::CDevice *v14; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+70h] [rbp+18h] BYREF
  struct DirectComposition::CDevice *v16; // [rsp+78h] [rbp+20h] BYREF

  v14 = 0LL;
  v3 = (DirectComposition::CTransformGroupProxy *)((char *)this + 8);
  v16 = 0LL;
  v5 = a3;
  v6 = ((unsigned __int64)this + 8) & -(__int64)(this != 0LL);
  DirectComposition::CDevice::GetDeviceAndHandleWorker((v6 - 8) & -(__int64)(v6 != 0), &v14, &v15);
  v7 = (unsigned int *)DefaultHeap::Alloc(4 * v5);
  if ( v7 )
  {
    v8 = v14;
    for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(v11 + 1) )
    {
      v10 = a2[i];
      if ( !v10
        || (DirectComposition::CDevice::GetDeviceAndHandleWorker((unsigned __int64)v10, &v16, &v15), !v15)
        || v8 != v16 )
      {
        v12 = -2147024809;
        goto LABEL_11;
      }
      v7[v11] = v15;
    }
    v12 = DirectComposition::CResourceProxy::SetReferenceArrayProperty(v3, 0, v7, v5);
  }
  else
  {
    v12 = -2147024882;
  }
LABEL_11:
  operator delete(v7);
  return v12;
}
