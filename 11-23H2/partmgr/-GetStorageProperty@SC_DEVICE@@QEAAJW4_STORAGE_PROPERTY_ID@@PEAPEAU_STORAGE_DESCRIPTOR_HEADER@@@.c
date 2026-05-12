/*
 * XREFs of ?GetStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@PEAPEAU_STORAGE_DESCRIPTOR_HEADER@@@Z @ 0x1C0008F54
 * Callers:
 *     ?UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z @ 0x1C0009124 (-UpdateStorageProperty@SC_DEVICE@@QEAAJW4_STORAGE_PROPERTY_ID@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000B3D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000B6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SC_DEVICE::GetStorageProperty(
        SC_DEVICE *this,
        enum _STORAGE_PROPERTY_ID a2,
        struct _STORAGE_DESCRIPTOR_HEADER **a3)
{
  __int64 v4; // rax
  int v6; // edi
  __int64 Size; // rsi
  __int64 Pool2; // rax
  struct _STORAGE_DESCRIPTOR_HEADER *v9; // rbx
  unsigned int v11; // [rsp+40h] [rbp-38h] BYREF
  _DWORD v12[4]; // [rsp+48h] [rbp-30h] BYREF

  *a3 = 0LL;
  v4 = *(_QWORD *)this;
  v11 = 0;
  v12[2] = 0;
  v6 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, unsigned int *))(v4 + 32))(this, 6LL, &v11);
  if ( v6 >= 0 )
  {
    v12[1] = 0;
    Size = v11;
    v12[0] = 6;
    while ( 1 )
    {
      Pool2 = ExAllocatePool2(64LL, Size, 1833984851LL);
      v9 = (struct _STORAGE_DESCRIPTOR_HEADER *)Pool2;
      if ( !Pool2 )
        return (unsigned int)-1073741670;
      v6 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, _DWORD *, __int64, __int64, _DWORD))(*(_QWORD *)this + 16LL))(
             this,
             2954240LL,
             v12,
             12LL,
             Pool2,
             Size);
      if ( (int)(v6 + 0x80000000) >= 0 && v6 != -2147483643 )
        break;
      if ( v9->Size <= (unsigned int)Size )
      {
        v9->Size = Size;
        v6 = (*(__int64 (__fastcall **)(SC_DEVICE *, __int64, struct _STORAGE_DESCRIPTOR_HEADER *))(*(_QWORD *)this
                                                                                                  + 40LL))(
               this,
               6LL,
               v9);
        if ( v6 >= 0 )
        {
          *a3 = v9;
          return (unsigned int)v6;
        }
        break;
      }
      Size = v9->Size;
      ExFreePoolWithTag(v9, 0);
    }
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  return (unsigned int)v6;
}
