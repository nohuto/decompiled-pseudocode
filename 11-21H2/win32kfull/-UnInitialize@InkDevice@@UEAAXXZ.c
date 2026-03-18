/*
 * XREFs of ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C0253160
 * Callers:
 *     ??1InkDevice@@UEAA@XZ @ 0x1C0251A4C (--1InkDevice@@UEAA@XZ.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02522C0 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ?UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C023F230 (-UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 */

void __fastcall InkDevice::UnInitialize(InkDevice *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_QWORD *)this + 2) )
  {
    Rim::RimBackedDeviceBase::UnInitialize(this);
    v2 = *((_QWORD *)this + 19);
    *((_DWORD *)this + 37) = 0;
    *((_QWORD *)this + 13) = 0LL;
    *((_DWORD *)this + 28) = 0;
    *(_OWORD *)((char *)this + 116) = 0LL;
    *(_OWORD *)((char *)this + 132) = 0LL;
    if ( v2 )
    {
      Win32FreePool(v2);
      *((_QWORD *)this + 19) = 0LL;
    }
    v3 = *((_QWORD *)this + 20);
    if ( v3 )
    {
      Win32FreePool(v3);
      *((_QWORD *)this + 20) = 0LL;
    }
  }
}
