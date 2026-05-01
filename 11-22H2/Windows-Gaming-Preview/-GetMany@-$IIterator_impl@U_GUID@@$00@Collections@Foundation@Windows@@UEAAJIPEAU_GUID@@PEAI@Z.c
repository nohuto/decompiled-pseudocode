/*
 * XREFs of ?GetMany@?$IIterator_impl@U_GUID@@$00@Collections@Foundation@Windows@@UEAAJIPEAU_GUID@@PEAI@Z @ 0x18003E2D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18004C634 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004CEC0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::IIterator_impl<_GUID,1>::GetMany(
        __int64 a1,
        unsigned int a2,
        void *a3,
        unsigned int *a4)
{
  unsigned int v8; // ebx
  __int64 result; // rax
  char v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = 0;
  v8 = 0;
  memset_0(a3, 0, 16LL * a2);
  *a4 = 0;
  result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 56LL))(a1, &v10);
  if ( (int)result >= 0 )
  {
    while ( v10 )
    {
      if ( v8 < a2 )
      {
        result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, (__int64)a3 + 16 * v8);
        if ( (int)result < 0 )
          return result;
        ++v8;
        result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a1 + 64LL))(a1, &v10);
        if ( (int)result >= 0 )
          continue;
      }
      if ( (int)result < 0 )
        return result;
      break;
    }
    *a4 = v8;
  }
  return result;
}
