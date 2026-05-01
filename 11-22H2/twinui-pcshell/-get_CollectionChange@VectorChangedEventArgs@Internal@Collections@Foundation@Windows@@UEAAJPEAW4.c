/*
 * XREFs of ?get_CollectionChange@VectorChangedEventArgs@Internal@Collections@Foundation@Windows@@UEAAJPEAW4CollectionChange@345@@Z @ 0x1801C1690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::VectorChangedEventArgs::get_CollectionChange(
        Windows::Foundation::Collections::Internal::VectorChangedEventArgs *this,
        enum Windows::Foundation::Collections::CollectionChange *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 8);
  return 0LL;
}
