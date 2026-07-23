/*
 * XREFs of _PnpContainerRaiseDevicesChangeEvent @ 0x140882600
 * Callers:
 *     _PnpObjectRaiseDevicesChangeEvent @ 0x1408825C0 (_PnpObjectRaiseDevicesChangeEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PnpContainerRaiseDevicesChangeEvent(
        __int64 a1,
        __int64 a2,
        void (__fastcall *a3)(__int64, __int64, __int64))
{
  DEVPROPKEY **v6; // rbx
  __int64 v7; // rdi
  __int64 result; // rax

  a3(a1, a2, 5LL);
  v6 = off_1400095F8;
  v7 = 3LL;
  do
  {
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64))a3)(a1, a2, 5LL);
    ++v6;
    --v7;
  }
  while ( v7 );
  return result;
}
