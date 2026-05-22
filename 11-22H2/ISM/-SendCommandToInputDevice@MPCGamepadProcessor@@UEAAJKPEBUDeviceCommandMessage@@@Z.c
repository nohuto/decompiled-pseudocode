/*
 * XREFs of ?SendCommandToInputDevice@MPCGamepadProcessor@@UEAAJKPEBUDeviceCommandMessage@@@Z @ 0x1801F2700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MPCGamepadProcessor::SendCommandToInputDevice(
        MPCGamepadProcessor *this,
        __int64 a2,
        const struct DeviceCommandMessage *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct DeviceCommandMessage *))(**((_QWORD **)this + 460)
                                                                                         + 24LL))(
           *((_QWORD *)this + 460),
           a2,
           a3);
}
