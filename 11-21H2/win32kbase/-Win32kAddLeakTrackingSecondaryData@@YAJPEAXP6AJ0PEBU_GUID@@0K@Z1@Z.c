/*
 * XREFs of ?Win32kAddLeakTrackingSecondaryData@@YAJPEAXP6AJ0PEBU_GUID@@0K@Z1@Z @ 0x1C01465FC
 * Callers:
 *     ?Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x1C0146780 (-Win32kLeakTrackingLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00D59D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 *     ?Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z @ 0x1C0179FF0 (-Dump@CLeakTrackingAllocator@NSInstrumentation@@QEAAXPEAU_DUMP_CONTEXT@2@@Z.c)
 */

__int64 __fastcall Win32kAddLeakTrackingSecondaryData(
        NSInstrumentation::CLeakTrackingAllocator *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int),
        const struct _GUID *a3)
{
  __int128 v3; // xmm0
  unsigned int v7; // esi
  __int64 Pool2; // rax
  NSInstrumentation::CLeakTrackingAllocator *v10; // rcx
  _DWORD *v11; // rdi
  unsigned int v12; // ebx
  unsigned int v13; // esi
  __int64 v14; // [rsp+30h] [rbp-58h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-50h]
  int v16; // [rsp+3Ch] [rbp-4Ch]
  __int128 v17; // [rsp+40h] [rbp-48h]

  v3 = (__int128)*a3;
  v14 = 0LL;
  v16 = 0;
  v17 = v3;
  v15 = 8;
  NSInstrumentation::CLeakTrackingAllocator::Dump(a1, (struct NSInstrumentation::_DUMP_CONTEXT *)&v14);
  v7 = v15;
  if ( v15 <= 8 )
    return 0LL;
  Pool2 = ExAllocatePool2(262LL, v15);
  v11 = (_DWORD *)Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v14 = Pool2 + 8;
  v15 = v7 - 8;
  NSInstrumentation::CLeakTrackingAllocator::Dump(v10, (struct NSInstrumentation::_DUMP_CONTEXT *)&v14);
  if ( v15 < v7 - 8 )
  {
    v13 = v7 - v15;
    *v11 = v13;
    v11[1] = 1;
    v12 = ((__int64 (__fastcall *)(NSInstrumentation::CLeakTrackingAllocator *, const struct _GUID *, _DWORD *, _QWORD))a2)(
            a1,
            a3,
            v11,
            v13);
  }
  else
  {
    v12 = -1073741675;
  }
  ExFreePoolWithTag(v11, 0);
  return v12;
}
