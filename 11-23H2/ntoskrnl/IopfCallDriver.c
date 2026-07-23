/*
 * XREFs of IopfCallDriver @ 0x14028D254
 * Callers:
 *     IofCallDriverSpecifyReturn @ 0x14028D3F0 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x14045FC8A (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140AC11C0 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140AC195C (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140AC19A4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     IopPoHandleIrp @ 0x14028D9BC (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall IopfCallDriver(__int64 a1, ULONG_PTR a2)
{
  unsigned __int8 *v2; // rax
  __int64 v3; // r9

  if ( (char)--*(_BYTE *)(a2 + 67) <= 0 )
    KeBugCheckEx(0x35u, a2, 0LL, 0LL, 0LL);
  v2 = (unsigned __int8 *)(*(_QWORD *)(a2 + 184) - 72LL);
  *(_QWORD *)(a2 + 184) = v2;
  v3 = *v2;
  *((_QWORD *)v2 + 5) = a1;
  if ( (_BYTE)v3 == 22 && (unsigned __int8)(v2[1] - 2) <= 1u )
    return IopPoHandleIrp(a2);
  else
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 + 8) + 8 * v3 + 112))(a1);
}
