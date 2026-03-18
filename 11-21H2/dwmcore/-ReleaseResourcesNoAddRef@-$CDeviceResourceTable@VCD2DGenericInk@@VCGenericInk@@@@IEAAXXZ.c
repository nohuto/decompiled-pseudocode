/*
 * XREFs of ?ReleaseResourcesNoAddRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@IEAAXXZ @ 0x1801A1F2C
 * Callers:
 *     ??1?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ @ 0x18019D820 (--1-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAA@XZ.c)
 *     ?NotifyInvalidResource@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801A1890 (-NotifyInvalidResource@-$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@@@UEAAXPEBVIDeviceR.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x180032D6C (-RemoveResourceNotifier@CD2DResource@@UEAAXPEBVIDeviceResourceNotify@@@Z.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18019AB3C (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCD2DGenericInk@@Uerr_returncode_policy@wil@@@wil@@@.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk>::ReleaseResourcesNoAddRef(
        struct IDeviceResourceNotify *a1)
{
  __int64 v1; // rsi
  __int64 i; // rdi
  __int64 result; // rax

  v1 = *((_QWORD *)a1 + 3);
  for ( i = *((_QWORD *)a1 + 2); i != v1; i += 8LL )
    CD2DResource::RemoveResourceNotifier((CD2DResource *)(*(_QWORD *)i + 104LL), a1);
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CD2DGenericInk,wil::err_returncode_policy>>>(
    *((volatile signed __int32 ***)a1 + 2),
    *((volatile signed __int32 ***)a1 + 3));
  result = *((_QWORD *)a1 + 2);
  *((_QWORD *)a1 + 3) = result;
  return result;
}
