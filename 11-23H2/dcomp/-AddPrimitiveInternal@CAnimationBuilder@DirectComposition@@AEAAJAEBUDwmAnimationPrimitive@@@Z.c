/*
 * XREFs of ?AddPrimitiveInternal@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x18003463C
 * Callers:
 *     ?AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z @ 0x180034488 (-AddPrimitive@CAnimationBuilder@DirectComposition@@AEAAJAEBUDwmAnimationPrimitive@@@Z.c)
 * Callees:
 *     ?Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ @ 0x180028CC0 (-Release@CDelayedDestructionObject@DirectComposition@@UEAAKXZ.c)
 *     ?AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z @ 0x1800520F0 (-AllocateSharedMemory@CDevice@DirectComposition@@QEAAJ_KPEAPEAVCSharedAllocation@2@@Z.c)
 *     ?PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z @ 0x180063D90 (-PrimitiveAtIndex@CAnimationData@DirectComposition@@QEBAAEAUDwmAnimationPrimitive@@_K@Z.c)
 *     memcpy_0 @ 0x1800A812C (memcpy_0.c)
 */

__int64 __fastcall DirectComposition::CAnimationBuilder::AddPrimitiveInternal(
        DirectComposition::CAnimationBuilder *this,
        const struct DwmAnimationPrimitive *a2)
{
  unsigned __int64 v2; // r9
  signed int v3; // edi
  unsigned __int64 v4; // r8
  struct DwmAnimationPrimitive *v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int64 v11; // r8
  struct DirectComposition::CSharedAllocation *v12; // rsi
  DirectComposition::CDelayedDestructionObject *v13; // rcx
  __int64 v14; // rax
  unsigned __int64 v15; // kr00_8
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int128 v18; // [rsp+20h] [rbp-28h]
  __int128 v19; // [rsp+20h] [rbp-28h]
  __int128 v20; // [rsp+30h] [rbp-18h]
  __int128 v21; // [rsp+30h] [rbp-18h]
  struct DirectComposition::CSharedAllocation *v22; // [rsp+50h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 10);
  v3 = 0;
  v4 = *((_QWORD *)this + 9);
  if ( v2 >= v4 )
  {
    v22 = 0LL;
    if ( v2 == v4 )
    {
      if ( v4 )
      {
        if ( v4 >= 0x400 )
        {
          v16 = v4;
          v17 = v4 + 1024;
          v4 = -1LL;
          if ( v17 >= v16 )
            v4 = v17;
          v3 = v17 < v16 ? 0x80070216 : 0;
          *((_QWORD *)this + 9) = v4;
        }
        else
        {
          v15 = v4;
          v14 = 2 * v4;
          v4 *= 2LL;
          if ( is_mul_ok(v15, 2uLL) )
          {
            *((_QWORD *)this + 9) = v14;
          }
          else
          {
            v4 = -1LL;
            v3 = -2147024362;
            *((_QWORD *)this + 9) = -1LL;
          }
        }
        if ( v3 < 0 )
          return (unsigned int)v3;
      }
      else
      {
        v4 = 4LL;
        *((_QWORD *)this + 9) = 4LL;
      }
    }
  }
  else
  {
    if ( (unsigned int)(*(_DWORD *)(*((_QWORD *)this + 8) + 24LL) - 3) > 1 )
    {
      *((_QWORD *)this + 10) = v2 + 1;
      v18 = *(_OWORD *)a2;
      v20 = *((_OWORD *)a2 + 1);
      v7 = DirectComposition::CAnimationData::PrimitiveAtIndex(
             (DirectComposition::CAnimationBuilder *)((char *)this + 48),
             *((_QWORD *)this + 10) - 1LL);
      v8 = v18;
      v9 = v20;
LABEL_4:
      *(_OWORD *)v7 = v8;
      *((_OWORD *)v7 + 1) = v9;
      return (unsigned int)v3;
    }
    v22 = 0LL;
  }
  if ( !is_mul_ok(v4, 0x20uLL) )
    return (unsigned int)-2147024362;
  v3 = DirectComposition::CDevice::AllocateSharedMemory(*((DirectComposition::CDevice **)this + 3), 32 * v4, &v22);
  if ( v3 >= 0 )
  {
    v11 = *((_QWORD *)this + 10);
    v12 = v22;
    if ( v11 )
      memcpy_0((char *)v22 + 56, (const void *)(*((_QWORD *)this + 8) + 56LL), 32 * v11);
    v13 = (DirectComposition::CDelayedDestructionObject *)*((_QWORD *)this + 8);
    if ( v13 )
      DirectComposition::CDelayedDestructionObject::Release(v13);
    ++*((_QWORD *)this + 10);
    *((_QWORD *)this + 8) = v12;
    v21 = *(_OWORD *)a2;
    v19 = *((_OWORD *)a2 + 1);
    v7 = DirectComposition::CAnimationData::PrimitiveAtIndex(
           (DirectComposition::CAnimationBuilder *)((char *)this + 48),
           *((_QWORD *)this + 10) - 1LL);
    v8 = v21;
    v9 = v19;
    goto LABEL_4;
  }
  return (unsigned int)v3;
}
