/*
 * XREFs of ?QueryInterface@SpatialRimDeviceCollectionCallbacks@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E9BD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SpatialRimDeviceCollectionCallbacks::QueryInterface(
        SpatialRimDeviceCollectionCallbacks *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_29142625_c7e0_4063_9efd_d8dab74e528b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_29142625_c7e0_4063_9efd_d8dab74e528b.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_29142625_c7e0_4063_9efd_d8dab74e528b.Data4;
  if ( v3 )
    goto LABEL_8;
  result = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    result = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( result )
  {
LABEL_8:
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
    *a3 = this;
    ++*((_DWORD *)this + 6);
  }
  return result;
}
