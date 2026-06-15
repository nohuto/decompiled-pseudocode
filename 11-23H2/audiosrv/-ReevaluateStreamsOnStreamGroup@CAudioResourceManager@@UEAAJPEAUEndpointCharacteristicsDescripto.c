/*
 * XREFs of ?ReevaluateStreamsOnStreamGroup@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIStreamGroupProxy@@@Z @ 0x1800DC4E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioResourceManager::ReevaluateStreamsOnStreamGroup(
        CAudioResourceManager *this,
        struct EndpointCharacteristicsDescriptor *a2,
        struct IStreamGroupProxy *a3)
{
  void (__fastcall *v3)(struct IStreamGroupProxy *, __int64 (__fastcall ***)()); // r9
  __int128 v5; // [rsp+20h] [rbp-68h]
  __int64 (__fastcall **v6)(); // [rsp+40h] [rbp-48h] BYREF
  __int128 v7; // [rsp+48h] [rbp-40h]
  struct IStreamGroupProxy *v8; // [rsp+58h] [rbp-30h]
  __int64 (__fastcall ***v9)(); // [rsp+78h] [rbp-10h]

  *((_QWORD *)&v5 + 1) = a2;
  v3 = *(void (__fastcall **)(struct IStreamGroupProxy *, __int64 (__fastcall ***)()))(*(_QWORD *)a3 + 384LL);
  *(_QWORD *)&v5 = (char *)this - 8;
  v6 = off_180170010;
  v7 = v5;
  v8 = a3;
  v9 = &v6;
  v3(a3, &v6);
  return 0LL;
}
