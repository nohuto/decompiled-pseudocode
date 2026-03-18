/*
 * XREFs of IopfCallDriver @ 0x14028CFC4
 * Callers:
 *     IofCallDriverSpecifyReturn @ 0x14028D160 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x14045F88A (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140AC11D0 (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140AC196C (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x140AC19B4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     IopPoHandleIrp @ 0x14028D72C (IopPoHandleIrp.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
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
