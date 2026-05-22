/*
 * XREFs of ?Initialize@LampArrayDeviceView@@QEAAXPEAGPEAUHardwareAttributes@@PEAUDeviceAttributes@@PEAULampAttributes@@@Z @ 0x1800D7C0C
 * Callers:
 *     ?CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@PEAPEAULampArrayDeviceView@@@Z @ 0x1800D6ABC (-CreateClientView@HidLampArrayDevice@@QEAAJPEAUISIPCEndpoint@@PEAPEAULampArrayDeviceView@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall LampArrayDeviceView::Initialize(
        LampArrayDeviceView *this,
        unsigned __int16 *a2,
        struct HardwareAttributes *a3,
        struct DeviceAttributes *a4,
        struct LampAttributes *a5)
{
  _DWORD *v8; // r8
  int v9; // edx
  struct LampAttributes *v10; // rcx
  __int64 v11; // rsi
  __int128 v12; // xmm0

  *(_DWORD *)this = 1;
  _o_wcscpy_s((char *)this + 4, 257LL, a2);
  v8 = (_DWORD *)((char *)this + 524);
  *(_DWORD *)((char *)this + 518) = *(_DWORD *)a3;
  v9 = 0;
  *((_WORD *)this + 261) = *((_WORD *)a3 + 2);
  *(_OWORD *)((char *)this + 524) = *(_OWORD *)a4;
  *(_QWORD *)((char *)this + 540) = *((_QWORD *)a4 + 2);
  _InterlockedExchange((volatile __int32 *)this + 1024, 0);
  _InterlockedExchange((volatile __int32 *)this + 1025, 0);
  _InterlockedExchange((volatile __int32 *)this + 1046, 0);
  _InterlockedExchange((volatile __int32 *)this + 1047, 0);
  *((_BYTE *)this + 4112) = 0;
  *((_DWORD *)this + 1026) = 0;
  _InterlockedExchange((volatile __int32 *)this + 1027, 0);
  *((_BYTE *)this + 4113) = 0;
  *(_OWORD *)((char *)this + 4114) = 0LL;
  *(_OWORD *)((char *)this + 4130) = 0LL;
  *(_OWORD *)((char *)this + 4146) = 0LL;
  *(_QWORD *)((char *)this + 4162) = 0LL;
  *(_DWORD *)((char *)this + 4170) = 0;
  *((_WORD *)this + 2087) = 0;
  *((_BYTE *)this + 4176) = 0;
  *((_QWORD *)this + 524) = 0x3FF0000000000000LL;
  *((_DWORD *)this + 1045) = -2147418113;
  if ( *((int *)this + 131) > 0 )
  {
    v10 = a5;
    v11 = this - a5;
    do
    {
      v12 = *(_OWORD *)v10;
      ++v9;
      v10 = (struct LampAttributes *)((char *)v10 + 36);
      *(_OWORD *)((char *)v10 + v11 + 5188) = v12;
      *(_OWORD *)((char *)v10 + v11 + 5204) = *(_OWORD *)((char *)v10 - 20);
      *(_DWORD *)((char *)v10 + v11 + 5220) = *((_DWORD *)v10 - 1);
    }
    while ( v9 < *v8 );
  }
}
