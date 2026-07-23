/*
 * XREFs of HalpIommuGetAcpiDeviceMapCount @ 0x14051873C
 * Callers:
 *     HalpIommuDmaRemappingCapable @ 0x1403B4800 (HalpIommuDmaRemappingCapable.c)
 *     HalpIommuUnblockDevice @ 0x140518CF0 (HalpIommuUnblockDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuGetAcpiDeviceMapCount(__int64 a1)
{
  ULONG_PTR v1; // rbx
  __int64 result; // rax

  v1 = HalpIommuList;
  result = 0LL;
  while ( (ULONG_PTR *)v1 != &HalpIommuList )
  {
    if ( *(_QWORD *)(v1 + 368) )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64))(v1 + 368))(*(_QWORD *)(v1 + 16), a1);
      if ( (_DWORD)result )
        break;
    }
    v1 = *(_QWORD *)v1;
  }
  return result;
}
