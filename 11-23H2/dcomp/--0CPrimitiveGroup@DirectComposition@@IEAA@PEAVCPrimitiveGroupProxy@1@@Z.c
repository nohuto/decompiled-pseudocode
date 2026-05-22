/*
 * XREFs of ??0CPrimitiveGroup@DirectComposition@@IEAA@PEAVCPrimitiveGroupProxy@1@@Z @ 0x1800180E0
 * Callers:
 *     ?Create@CPrimitiveGroup@DirectComposition@@SAJPEAVCPrimitiveGroupProxy@2@PEAPEAV12@@Z @ 0x180018078 (-Create@CPrimitiveGroup@DirectComposition@@SAJPEAVCPrimitiveGroupProxy@2@PEAPEAV12@@Z.c)
 * Callees:
 *     ?GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z @ 0x18002400C (-GetDeviceAndHandleWorker@CDevice@DirectComposition@@CAXPEAXPEAPEAV12@PEAI@Z.c)
 *     ??0?$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ @ 0x18008EA30 (--0-$TMilRect_@MUMilRectF@@UMil3DRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@QEAA@XZ.c)
 *     memset_0 @ 0x18009698C (memset_0.c)
 */

DirectComposition::CPrimitiveGroup *__fastcall DirectComposition::CPrimitiveGroup::CPrimitiveGroup(
        DirectComposition::CPrimitiveGroup *this,
        struct DirectComposition::CPrimitiveGroupProxy *a2)
{
  char *v2; // rsi
  __int64 v4; // rbp
  volatile signed __int32 *v6; // rax
  DirectComposition::CPrimitiveGroup *result; // rax
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  struct DirectComposition::CDevice *v9; // [rsp+48h] [rbp+10h] BYREF

  *((_BYTE *)this + 40) &= 0xFCu;
  v2 = (char *)this + 312;
  *(_QWORD *)this = &DirectComposition::CPrimitiveGroup::`vftable'{for `IDCompositionPrimitiveGroupPartner'};
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = &DirectComposition::CPrimitiveGroup::`vftable'{for `DirectComposition::CDelayedDestructionObject'};
  v4 = 4LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 3) = &DirectComposition::CPrimitiveGroup::`vftable'{for `DirectComposition::CRebuildableObject'};
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_DWORD *)this + 36) = 0;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_DWORD *)this + 52) = 0;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = 0LL;
  *((_DWORD *)this + 60) = 0;
  *((_QWORD *)this + 33) = (char *)this + 256;
  *((_QWORD *)this + 32) = (char *)this + 256;
  *((_QWORD *)this + 36) = (char *)this + 280;
  *((_QWORD *)this + 35) = (char *)this + 280;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 68) = 0;
  *((_QWORD *)this + 38) = &CMergedRect::`vftable';
  do
  {
    TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>::TMilRect_<float,MilRectF,Mil3DRectF,MilPointAndSizeF,RectUniqueness::NotNeeded>(v2);
    v2 += 16;
    --v4;
  }
  while ( v4 );
  memset_0((char *)this + 312, 0, 0x50uLL);
  *((_DWORD *)this + 95) = 1;
  *((_QWORD *)this + 38) = &CMergedRect::`vftable';
  v6 = (volatile signed __int32 *)((char *)a2 + 8);
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_QWORD *)this + 7) = a2;
  v9 = 0LL;
  if ( a2 )
    _InterlockedIncrement(v6);
  DirectComposition::CDevice::GetDeviceAndHandleWorker(
    (void *)((((unsigned __int64)v6 & -(__int64)(a2 != 0LL)) - 8) & -(__int64)(((unsigned __int64)v6 & -(__int64)(a2 != 0LL)) != 0)),
    &v9,
    &v8);
  result = this;
  *((_QWORD *)this + 6) = v9;
  return result;
}
