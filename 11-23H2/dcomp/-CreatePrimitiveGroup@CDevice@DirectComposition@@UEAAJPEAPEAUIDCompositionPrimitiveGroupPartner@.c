/*
 * XREFs of ?CreatePrimitiveGroup@CDevice@DirectComposition@@UEAAJPEAPEAUIDCompositionPrimitiveGroupPartner@@@Z @ 0x180017FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ @ 0x180018050 (-Release@CTransformGroupProxy@DirectComposition@@UEAAKXZ.c)
 *     ?Create@CPrimitiveGroup@DirectComposition@@SAJPEAVCPrimitiveGroupProxy@2@PEAPEAV12@@Z @ 0x180018078 (-Create@CPrimitiveGroup@DirectComposition@@SAJPEAVCPrimitiveGroupProxy@2@PEAPEAV12@@Z.c)
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z @ 0x18005ADD4 (-CreateProxyInternal@CDevice@DirectComposition@@AEAAJI_NPEAPEAXPEAI@Z.c)
 */

__int64 __fastcall DirectComposition::CDevice::CreatePrimitiveGroup(
        DirectComposition::CDevice *this,
        struct IDCompositionPrimitiveGroupPartner **a2)
{
  struct DirectComposition::CPrimitiveGroup *v2; // rbx
  int v4; // edi
  struct DirectComposition::CPrimitiveGroupProxy *v5; // rsi
  struct DirectComposition::CPrimitiveGroupProxy *v6; // rcx
  unsigned int v8; // [rsp+58h] [rbp+10h] BYREF
  struct DirectComposition::CPrimitiveGroup *v9; // [rsp+60h] [rbp+18h] BYREF
  struct DirectComposition::CPrimitiveGroupProxy *v10; // [rsp+68h] [rbp+20h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    *a2 = 0LL;
    v4 = DirectComposition::CDevice::CreateProxyInternal(
           (DirectComposition::CDevice *)((char *)this - 24),
           0x81u,
           0,
           (void **)&v10,
           &v8);
    if ( v4 >= 0 )
    {
      v5 = v10;
      v6 = v10;
      *((_DWORD *)v10 + 3) = v8;
      *(_QWORD *)v6 = &DirectComposition::CFilterEffectProxy::`vftable';
      *((_DWORD *)v6 + 2) = 1;
      v4 = DirectComposition::CPrimitiveGroup::Create(v6, &v9);
      if ( v4 < 0 )
        v2 = v9;
      else
        *a2 = v9;
      DirectComposition::CTransformGroupProxy::Release(v5);
    }
  }
  else
  {
    v4 = -2147024809;
  }
  if ( v2 )
    DirectComposition::CDelayedDestructionObject::Release((struct DirectComposition::CPrimitiveGroup *)((char *)v2 + 8));
  return (unsigned int)v4;
}
