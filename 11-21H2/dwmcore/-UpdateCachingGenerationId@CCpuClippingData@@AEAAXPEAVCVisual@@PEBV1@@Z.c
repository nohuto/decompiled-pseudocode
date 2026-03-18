/*
 * XREFs of ?UpdateCachingGenerationId@CCpuClippingData@@AEAAXPEAVCVisual@@PEBV1@@Z @ 0x1800954A0
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum@CpuClippingScopeMode@@@Z @ 0x180095830 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@PEBVCShape@@PEBVCMILMatrix@@2W4Enum.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800D36F8 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CCpuClippingData::UpdateCachingGenerationId(
        CCpuClippingData *this,
        struct CVisual *a2,
        const struct CCpuClippingData *a3)
{
  bool v4; // r9
  char v5; // r11
  unsigned __int64 v6; // r10
  char v7; // di
  unsigned __int64 v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // edx
  unsigned __int64 v12; // rax

  v4 = a3 && *((_DWORD *)a3 + 12);
  *((_DWORD *)this + 12) = 0;
  v5 = 0;
  v6 = *((_QWORD *)this + 5);
  v7 = 0;
  v8 = *(_QWORD *)this;
  if ( v6 < *(_QWORD *)this )
  {
    *((_QWORD *)this + 5) = v8;
    v7 = 1;
    v6 = v8;
  }
  v9 = *((_DWORD *)this + 4);
  v10 = 0;
  v11 = v9 - 1;
  if ( v11 )
  {
    if ( v11 != 1 )
    {
      v7 = 1;
LABEL_17:
      CShapePtr::Release((CCpuClippingData *)((char *)this + 56));
      goto LABEL_15;
    }
  }
  else
  {
    v12 = *((_QWORD *)a3 + 5);
    if ( v6 < v12 )
    {
      *((_QWORD *)this + 5) = v12;
      v7 = 1;
    }
    if ( v4 )
    {
      v10 = *((_DWORD *)a3 + 12);
      *((_DWORD *)this + 12) = v10;
      if ( *((_BYTE *)this + 98) )
      {
        v7 = 1;
        *((_QWORD *)this + 5) = *((_QWORD *)this + 1);
      }
    }
  }
  if ( *((_BYTE *)this + 99) )
  {
    v5 = 1;
    *((_QWORD *)this + 5) = *((_QWORD *)this + 1);
    v7 = 1;
  }
  if ( v4 || *((_BYTE *)this + 96) )
  {
    if ( *((_BYTE *)this + 100) )
      *((_QWORD *)this + 5) = *((_QWORD *)this + 1);
    if ( *((_BYTE *)this + 96) )
      *((_DWORD *)this + 12) = v10 + 1;
  }
  if ( v5 )
    goto LABEL_17;
LABEL_15:
  if ( v7 )
    CShapePtr::Release((CCpuClippingData *)((char *)this + 80));
}
