/*
 * XREFs of UsbhBusifGetSSHub @ 0x1C004C3A0
 * Callers:
 *     UsbhPdoPnp_QueryInterface @ 0x1C0055B70 (UsbhPdoPnp_QueryInterface.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 */

__int64 __fastcall UsbhBusifGetSSHub(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v4 = FdoExt(a1);
  v5 = *(_QWORD *)(*(_QWORD *)(a3 + 184) + 24LL);
  *(_QWORD *)(v5 + 16) = UsbhBusIfSSReference;
  *(_QWORD *)(v5 + 24) = UsbhBusIfSSDereference;
  *(_QWORD *)(v5 + 32) = UsbhBusIf_SuspendChildHub;
  *(_QWORD *)(v5 + 40) = UsbhBusIf_ResumeChildHub;
  *(_QWORD *)(v5 + 8) = v4;
  *(_DWORD *)v5 = 48;
  _InterlockedIncrement(v4 + 853);
  *(_DWORD *)(a3 + 48) = 0;
  result = 0LL;
  *(_QWORD *)(a3 + 56) = 0LL;
  return result;
}
