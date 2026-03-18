/*
 * XREFs of ResetAccelerationCurves @ 0x1C00A0780
 * Callers:
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0148CEC (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     ?ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ @ 0x1C00A07A8 (-ResetAccelerationCurves@CDeviceAcceleration@@QEAAXXZ.c)
 */

void __fastcall ResetAccelerationCurves(int a1)
{
  CDeviceAcceleration::ResetAccelerationCurves(*(&qword_1C0288098 + 3 * a1));
}
