/*
 * XREFs of ?CreateHolographicComposition@CDevice@DirectComposition@@UEAAJAEBU_GUID@@IPEAPEAUIDCompositionHolographicComposition@@@Z @ 0x1800FFD90
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 *     ?Initialize@CHolographicCompositionProxy@DirectComposition@@QEAAJAEBU_GUID@@I@Z @ 0x180100168 (-Initialize@CHolographicCompositionProxy@DirectComposition@@QEAAJAEBU_GUID@@I@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreateHolographicComposition(
        DirectComposition::CDevice *this,
        const struct _GUID *a2,
        unsigned int a3,
        struct IDCompositionHolographicComposition **a4)
{
  int v7; // ebx
  DirectComposition::CHolographicCompositionProxy *v8; // rdi
  DirectComposition::CHolographicCompositionProxy *v9; // rcx
  DirectComposition::CHolographicCompositionProxy *v11; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v12; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    v7 = DirectComposition::CDevice::CreateProxyInternal(
           (DirectComposition::CDevice *)((char *)this - 32),
           75,
           0,
           (void **)&v11,
           &v12);
    if ( v7 < 0 )
    {
      *a4 = 0LL;
    }
    else
    {
      v8 = v11;
      v9 = v11;
      *((_DWORD *)v11 + 3) = v12;
      *(_QWORD *)v9 = &DirectComposition::CHolographicCompositionProxy::`vftable';
      *((_DWORD *)v9 + 2) = 1;
      v7 = DirectComposition::CHolographicCompositionProxy::Initialize(v9, a2, a3);
      if ( v7 < 0 )
        DirectComposition::CTransformGroupProxy::Release(v8);
      else
        *a4 = v8;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v7;
}
