/*
 * XREFs of ??1CLightStack@@QEAA@XZ @ 0x1800A12F8
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x18001D994 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800A0C9C (--1COcclusionContext@@QEAA@XZ.c)
 *     ??1CDrawingContext@@MEAA@XZ @ 0x1800A11C4 (--1CDrawingContext@@MEAA@XZ.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007F480 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z @ 0x1800A1330 (--$ReleaseInterface@VCHwLightCollectionBuffer@@@@YAXAEAPEAVCHwLightCollectionBuffer@@@Z.c)
 *     ?Clear@CLightStack@@QEAAXXZ @ 0x1800A136C (-Clear@CLightStack@@QEAAXXZ.c)
 */

void __fastcall CLightStack::~CLightStack(CLightStack *this)
{
  CLightStack::Clear(this);
  ReleaseInterface<CHwLightCollectionBuffer>((char *)this + 104);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this + 184);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)this);
}
