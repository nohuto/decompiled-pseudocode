/*
 * XREFs of HalpIommuQueryAcpiDeviceMapping @ 0x1403B4674
 * Callers:
 *     HalpIommuDmaRemappingCapable @ 0x1403B4620 (HalpIommuDmaRemappingCapable.c)
 *     HalpIommuBlockDevice @ 0x140517830 (HalpIommuBlockDevice.c)
 *     HalpIommuUnblockDevice @ 0x1405187A0 (HalpIommuUnblockDevice.c)
 *     HalpIommuCreateDevice @ 0x140829048 (HalpIommuCreateDevice.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HalpIommuQueryAcpiDeviceMapping(__int64 a1, __int64 a2)
{
  ULONG_PTR v4; // rbx
  __int64 result; // rax

  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  v4 = HalpIommuList;
  result = 3221226021LL;
  while ( (ULONG_PTR *)v4 != &HalpIommuList )
  {
    if ( *(_QWORD *)(v4 + 360) )
    {
      result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(v4 + 360))(*(_QWORD *)(v4 + 16), a1, a2);
      if ( (_DWORD)result != -1073741275 )
        break;
    }
    v4 = *(_QWORD *)v4;
  }
  return result;
}
