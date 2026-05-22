/*
 * XREFs of ?AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180034488
 * Callers:
 *     ?End@CAnimationBuilder@DirectComposition@@UEAAJNM@Z @ 0x18000FF50 (-End@CAnimationBuilder@DirectComposition@@UEAAJNM@Z.c)
 *     ?AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x180035D80 (-AddCubic@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z.c)
 *     ?AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z @ 0x180036C40 (-AddRepeat@CAnimationBuilder@DirectComposition@@UEAAJNN@Z.c)
 *     ?AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z @ 0x180088600 (-AddFreeze@CAnimationBuilder@DirectComposition@@UEAAJN@Z.c)
 *     ?AddReverse@CAnimationBuilder@DirectComposition@@UEAAJN@Z @ 0x1800E83F0 (-AddReverse@CAnimationBuilder@DirectComposition@@UEAAJN@Z.c)
 *     ?AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z @ 0x1800E8490 (-AddSinusoidal@CAnimationBuilder@DirectComposition@@UEAAJNMMMM@Z.c)
 * Callees:
 *     ?AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ @ 0x180032860 (-AssertIsOwned@CDeviceLock@DirectComposition@@QEBAXXZ.c)
 *     ?AddPrimitiveInternal@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x18003463C (-AddPrimitiveInternal@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 *     ?PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z @ 0x180063D90 (-PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::AddPrimitive(
        DirectComposition::CAnimationBuilder *this,
        const struct DwmAnimationPrimitive *a2)
{
  unsigned int v4; // ebx
  char v5; // r14
  __int128 v7; // xmm6
  __int128 v8; // xmm7
  struct DwmAnimationPrimitive *v9; // rax

  DirectComposition::CDeviceLock::AssertIsOwned((DirectComposition::CDeviceLock *)(*((_QWORD *)this + 3) + 96LL));
  v4 = 0;
  v5 = 0;
  if ( (*((_BYTE *)this + 40) & 1) != 0
    || *((_QWORD *)this + 10)
    && *((_QWORD *)a2 + 1) < *((_QWORD *)DirectComposition::CAnimationData::PrimitiveAtIndex(
                                           (DirectComposition::CAnimationBuilder *)((char *)this + 48),
                                           *((_QWORD *)this + 10) - 1LL)
                             + 1)
    || ((*(_DWORD *)a2 - 3) & 0xFFFFFFFC) == 0
    && *(_DWORD *)a2 != 4
    && *(int *)(*((_QWORD *)this + 3) + 368LL) < 2
    && (!*((_QWORD *)this + 10)
     || *((_QWORD *)a2 + 1) == *((_QWORD *)DirectComposition::CAnimationData::PrimitiveAtIndex(
                                             (DirectComposition::CAnimationBuilder *)((char *)this + 48),
                                             0LL)
                               + 1)) )
  {
    return (unsigned int)-2147024809;
  }
  if ( *(int *)(*((_QWORD *)this + 3) + 368LL) < 2
    && *((_QWORD *)this + 10)
    && *((_QWORD *)DirectComposition::CAnimationData::PrimitiveAtIndex(
                     (DirectComposition::CAnimationBuilder *)((char *)this + 48),
                     *((_QWORD *)this + 10) - 1LL)
       + 1) == *((_QWORD *)a2 + 1) )
  {
    v5 = 1;
  }
  switch ( *(_DWORD *)a2 )
  {
    case 1:
    case 2:
      if ( !_finite(*((float *)a2 + 4))
        || !_finite(*((float *)a2 + 5))
        || !_finite(*((float *)a2 + 6))
        || !_finite(*((float *)a2 + 7)) )
      {
        return (unsigned int)-2147024809;
      }
      break;
    case 3:
      if ( *(int *)(*((_QWORD *)this + 3) + 368LL) < 2
        && *((_QWORD *)a2 + 2) > *((_QWORD *)a2 + 1)
                               - *((_QWORD *)DirectComposition::CAnimationData::PrimitiveAtIndex(
                                               (DirectComposition::CAnimationBuilder *)((char *)this + 48),
                                               0LL)
                                 + 1) )
      {
        return (unsigned int)-2147024809;
      }
      break;
    case 4:
      if ( !_finite(*((float *)a2 + 4)) )
        return (unsigned int)-2147024809;
      *((_BYTE *)this + 40) |= 1u;
      break;
    default:
      if ( (unsigned int)(*(_DWORD *)a2 - 5) >= 2 )
        return (unsigned int)-2147467259;
      break;
  }
  if ( v5 )
  {
    v7 = *(_OWORD *)a2;
    v8 = *((_OWORD *)a2 + 1);
    v9 = DirectComposition::CAnimationData::PrimitiveAtIndex(
           (DirectComposition::CAnimationBuilder *)((char *)this + 48),
           *((_QWORD *)this + 10) - 1LL);
    *(_OWORD *)v9 = v7;
    *((_OWORD *)v9 + 1) = v8;
  }
  else
  {
    return (unsigned int)DirectComposition::CAnimationBuilder::AddPrimitiveInternal(this, a2);
  }
  return v4;
}
