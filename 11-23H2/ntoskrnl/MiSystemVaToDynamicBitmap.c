/*
 * XREFs of MiSystemVaToDynamicBitmap @ 0x140210FC4
 * Callers:
 *     MiObtainSystemVa @ 0x140210F9C (MiObtainSystemVa.c)
 *     MiMakeSystemRangeAvailable @ 0x140212A98 (MiMakeSystemRangeAvailable.c)
 *     MiIsSystemVaAllocated @ 0x14063744C (MiIsSystemVaAllocated.c)
 *     MiMarkSystemVaAllocated @ 0x140637800 (MiMarkSystemVaAllocated.c)
 *     MiBuildPagedPool @ 0x140B43794 (MiBuildPagedPool.c)
 *     MiInitializeSystemPtes @ 0x140B4420C (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x140B460A0 (MiInitializeDriverImages.c)
 *     MiInitializeKernelStacks @ 0x140B463B4 (MiInitializeKernelStacks.c)
 *     MiInitializeNonPagedPool @ 0x140B5E52C (MiInitializeNonPagedPool.c)
 *     MiInitializeDynamicRegion @ 0x140B6E7AC (MiInitializeDynamicRegion.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall MiSystemVaToDynamicBitmap(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v8; // ecx
  int v9; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return (__int64 *)&unk_140C66E30;
  v2 = v1 - 5;
  if ( !v2 )
    return &qword_140C66E78;
  v3 = v2 - 2;
  if ( !v3 )
    return &qword_140C66EC0;
  v4 = v3 - 1;
  if ( !v4 )
    return &qword_140C66DA0;
  v5 = v4 - 3;
  if ( !v5 )
    return &qword_140C66DE8;
  v6 = v5 - 1;
  if ( !v6 )
    return &qword_140C66DA0;
  v8 = v6 - 1;
  if ( !v8 )
    return &qword_140C66D10;
  v9 = v8 - 1;
  if ( !v9 )
    return (__int64 *)&unk_140C66F08;
  if ( v9 == 1 )
    return (__int64 *)&unk_140C66D58;
  return 0LL;
}
