/*
 * XREFs of ?SendSynchronousIoControl@RimBackedDeviceBase@Rim@@QEBAJKPEAXK0KPEAK@Z @ 0x1C023F160
 * Callers:
 *     ?CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z @ 0x1C0251AA0 (-CreateAndSendSuperWetInkPayloadForCommand@InkDevice@@EEAAJW4INK_FEEDBACK_COMMAND@@PEBXIM@Z.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C02522C0 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     ??1DeviceObjectPointer@Io@@QEAA@XZ @ 0x1C023EDC4 (--1DeviceObjectPointer@Io@@QEAA@XZ.c)
 *     ?GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z @ 0x1C023EE68 (-GetByObjectName@DeviceObjectPointer@Io@@SAJPEBU_UNICODE_STRING@@KKPEAV12@@Z.c)
 *     SendSynchronousIoControl @ 0x1C023F270 (SendSynchronousIoControl.c)
 */

__int64 __fastcall Rim::RimBackedDeviceBase::SendSynchronousIoControl(
        Rim::RimBackedDeviceBase *this,
        ULONG a2,
        __int64 a3,
        ULONG a4,
        PVOID a5,
        ULONG a6,
        unsigned int *a7)
{
  bool v7; // zf
  int v10; // ebx
  __int128 v12; // [rsp+40h] [rbp-28h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v13 = 0LL;
  v7 = *((_BYTE *)this + 12) == 0;
  v12 = 0LL;
  if ( !v7
    || (v10 = Io::DeviceObjectPointer::GetByObjectName(
                (struct _UNICODE_STRING *)((*((_QWORD *)this + 2) + 296LL) & -(__int64)(*((_QWORD *)this + 2) != 0LL)),
                *((_QWORD *)this + 2) + 296LL,
                a3,
                (void **)&v12),
        v10 >= 0) )
  {
    v10 = SendSynchronousIoControl(a2, a4, a5, a6, (__int64)a7);
  }
  Io::DeviceObjectPointer::~DeviceObjectPointer((Io::DeviceObjectPointer *)&v12);
  return (unsigned int)v10;
}
