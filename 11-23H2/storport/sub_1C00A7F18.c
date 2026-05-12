/*
 * XREFs of sub_1C00A7F18 @ 0x1C00A7F18
 * Callers:
 *     sub_1C00A81A4 @ 0x1C00A81A4 (sub_1C00A81A4.c)
 *     sub_1C00A85AC @ 0x1C00A85AC (sub_1C00A85AC.c)
 * Callees:
 *     sub_1C00084E4 @ 0x1C00084E4 (sub_1C00084E4.c)
 *     sub_1C0011B08 @ 0x1C0011B08 (sub_1C0011B08.c)
 *     sub_1C001A4C0 @ 0x1C001A4C0 (sub_1C001A4C0.c)
 *     sub_1C0022CC4 @ 0x1C0022CC4 (sub_1C0022CC4.c)
 *     sub_1C00353FC @ 0x1C00353FC (sub_1C00353FC.c)
 *     sub_1C003EDF0 @ 0x1C003EDF0 (sub_1C003EDF0.c)
 *     sub_1C004BA18 @ 0x1C004BA18 (sub_1C004BA18.c)
 *     sub_1C0059B74 @ 0x1C0059B74 (sub_1C0059B74.c)
 *     sub_1C0066128 @ 0x1C0066128 (sub_1C0066128.c)
 *     sub_1C00668A4 @ 0x1C00668A4 (sub_1C00668A4.c)
 *     sub_1C0066ACC @ 0x1C0066ACC (sub_1C0066ACC.c)
 */

void __fastcall sub_1C00A7F18(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  struct _IO_WORKITEM *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  unsigned int i; // edi
  unsigned int j; // edi
  __int64 v11; // rcx
  __int64 v12; // rdx
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
  if ( *(_QWORD *)(a1 + 336) && (*(_BYTE *)(a1 + 108) & 0x40) != 0 )
    sub_1C001A4C0(*(_QWORD *)(a1 + 8), v4, a3, 0LL, 0);
  v5 = *(struct _IO_WORKITEM **)(a1 + 5600);
  if ( v5 )
  {
    IoFreeWorkItem(v5);
    *(_QWORD *)(a1 + 5600) = 0LL;
  }
  sub_1C004BA18(a1);
  v6 = *(void **)(a1 + 5304);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0x57506152u);
    *(_QWORD *)(a1 + 5304) = 0LL;
  }
  v7 = *(void **)(a1 + 5312);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x504F6152u);
    *(_QWORD *)(a1 + 5312) = 0LL;
  }
  v8 = *(void **)(a1 + 5624);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0x504E6152u);
    *(_QWORD *)(a1 + 5624) = 0LL;
  }
  sub_1C00353FC(a1);
  Interval.QuadPart = -10000000LL;
  KeDelayExecutionThread(0, 0, &Interval);
  sub_1C0011B08(a1);
  for ( i = 0; i < 0x258; ++i )
  {
    if ( !*(_DWORD *)(a1 + 4824) && !*(_DWORD *)(a1 + 4064) )
      break;
    if ( i < 0x32
      && off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
      && (HIDWORD(off_1C0093070->Timer) & 2) != 0
      && BYTE1(off_1C0093070->Timer) >= 4u )
    {
      sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x1Bu, (__int64)&unk_1C0083210);
    }
    Interval.QuadPart = -1000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
  }
  if ( i >= 0x258
    && off_1C0093070 != (PDEVICE_OBJECT)&off_1C0093070
    && (HIDWORD(off_1C0093070->Timer) & 2) != 0
    && BYTE1(off_1C0093070->Timer) >= 2u )
  {
    sub_1C003EDF0((__int64)off_1C0093070->AttachedDevice, 0x1Cu, (__int64)&unk_1C0083210);
  }
  for ( j = 0; j < *(_DWORD *)(a1 + 904); ++j )
    sub_1C0066128(*(_QWORD *)(a1 + 896) + 320LL * j, *(_QWORD *)(a1 + 8), *(_BYTE *)(a1 + 4306));
  *(_DWORD *)(a1 + 904) = 0;
  sub_1C0066ACC(a1);
  sub_1C00668A4(a1);
  sub_1C0059B74((void **)(a1 + 832));
  v11 = *(_QWORD *)(a1 + 6000);
  if ( v11 )
  {
    sub_1C0022CC4(v11);
    ExFreePoolWithTag(**(PVOID **)(a1 + 6000), 0x57526152u);
    ExFreePoolWithTag(*(PVOID *)(a1 + 6000), 0x57526152u);
    *(_QWORD *)(a1 + 6000) = 0LL;
  }
  v12 = *(_QWORD *)(a1 + 120);
  if ( v12 )
  {
    sub_1C00084E4(a1, v12);
    *(_DWORD *)(a1 + 128) &= ~2u;
    *(_QWORD *)(a1 + 120) = 0LL;
  }
}
