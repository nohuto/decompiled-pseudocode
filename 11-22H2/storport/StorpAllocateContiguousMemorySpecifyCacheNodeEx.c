/*
 * XREFs of StorpAllocateContiguousMemorySpecifyCacheNodeEx @ 0x1C0020334
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     _guard_dispatch_icall_nop @ 0x1C00235E0 (_guard_dispatch_icall_nop.c)
 */

__int64 StorpAllocateContiguousMemorySpecifyCacheNodeEx(__int64 a1, unsigned __int64 a2, ...)
{
  _DWORD *Adapter; // rax
  __int64 v4; // r10
  __int64 v5; // r11
  int v6; // edx
  void *Pool; // rax
  __int64 *v8; // rbx
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  __int64 v11; // rax
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  va_list va; // [rsp+70h] [rbp+18h]
  __int64 v14; // [rsp+78h] [rbp+20h] BYREF
  va_list va1; // [rsp+78h] [rbp+20h]
  __int64 v16; // [rsp+80h] [rbp+28h]
  __int64 v17; // [rsp+88h] [rbp+30h]
  __int64 v18; // [rsp+90h] [rbp+38h]
  __int64 *v19; // [rsp+98h] [rbp+40h]
  PHYSICAL_ADDRESS *v20; // [rsp+A0h] [rbp+48h]
  va_list va2; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  v16 = va_arg(va2, _QWORD);
  v17 = va_arg(va2, _QWORD);
  v18 = va_arg(va2, _QWORD);
  v19 = va_arg(va2, __int64 *);
  v20 = va_arg(va2, PHYSICAL_ADDRESS *);
  Adapter = RaidpPortGetAdapter(a1);
  if ( !Adapter )
    return 3238002694LL;
  v6 = 4;
  if ( (_DWORD)v17 != 1 )
  {
    v6 = 516;
    if ( (_DWORD)v17 == 2 )
      v6 = 1028;
  }
  if ( *((_BYTE *)Adapter + 768) && Adapter[197] == 3 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int64 *, __int64 *, _QWORD, _DWORD, _QWORD, _DWORD, PHYSICAL_ADDRESS *))(*(_QWORD *)(*((_QWORD *)Adapter + 95) + 8LL) + 272LL))(
            *((_QWORD *)Adapter + 95),
            (__int64 *)va,
            (__int64 *)va1,
            (unsigned int)a2,
            0,
            0LL,
            v18,
            v20);
    v8 = v19;
    *v19 = v11;
  }
  else
  {
    if ( (*(_DWORD *)(*((_QWORD *)Adapter + 71) + 184LL) & 0x2000) != 0 && a2 <= 0x1000 )
      Pool = (void *)RaidAllocatePool(72LL, 4096LL, 1161912658LL, *((_QWORD *)Adapter + 1));
    else
      Pool = (void *)MmAllocateContiguousNodeMemory(a2, v5, v4, v16, v6, v18);
    v8 = v19;
    *v19 = (__int64)Pool;
    if ( Pool )
    {
      PhysicalAddress = MmGetPhysicalAddress(Pool);
      *v20 = PhysicalAddress;
    }
  }
  return *v8 == 0 ? 0xC1000003 : 0;
}
