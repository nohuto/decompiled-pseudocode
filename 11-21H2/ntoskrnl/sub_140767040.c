/*
 * XREFs of sub_140767040 @ 0x140767040
 * Callers:
 *     sub_140766C3C @ 0x140766C3C (sub_140766C3C.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1405641AC @ 0x1405641AC (sub_1405641AC.c)
 *     sub_1406619F8 @ 0x1406619F8 (sub_1406619F8.c)
 *     sub_140767130 @ 0x140767130 (sub_140767130.c)
 *     sub_140811C50 @ 0x140811C50 (sub_140811C50.c)
 *     sub_140953508 @ 0x140953508 (sub_140953508.c)
 */

void __fastcall sub_140767040(__int64 a1)
{
  char *v1; // rbp
  __int64 v3; // rdx
  __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rdi
  __int64 *v7; // rax
  char *v8; // r8
  wchar_t *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  struct _DEVICE_OBJECT *v12; // r14
  __int64 *DeviceExtension; // r15
  char *DeviceNode; // rcx
  __int64 v15; // rdx
  int v16; // r11d
  const wchar_t *v17; // r10
  const wchar_t *v18; // r8
  const wchar_t *v19; // r9
  const wchar_t *v20; // rcx

  v1 = 0LL;
  if ( a1 )
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v3 = 0LL;
  v4 = (v3 + 40) & -(__int64)(v3 != 0);
  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C44820, 1u);
  v6 = (__int64 *)qword_140C44890;
  while ( v6 != &qword_140C44890 )
  {
    v7 = v6;
    v8 = v1;
    v6 = (__int64 *)*v6;
    if ( v7[2] == a1 )
    {
      v12 = (struct _DEVICE_OBJECT *)v7[3];
      DeviceExtension = (__int64 *)v12->DeviceExtension;
      DeviceNode = (char *)v12->DeviceObjectExtension->DeviceNode;
      v15 = *DeviceExtension;
      v1 = DeviceNode + 40;
      if ( !DeviceNode )
        v1 = v8;
      if ( (byte_140C0DD4C & 2) != 0 )
      {
        if ( v15 )
          v16 = *(_DWORD *)(v15 + 4);
        else
          LOBYTE(v16) = 0;
        if ( v4 )
          v17 = *(const wchar_t **)(v4 + 8);
        else
          v17 = &word_140867F00;
        if ( v1 )
          v18 = (const wchar_t *)*((_QWORD *)v1 + 1);
        else
          v18 = &word_140867F00;
        if ( v15 )
        {
          v19 = *(const wchar_t **)(v15 + 8);
          v20 = *(const wchar_t **)(v15 + 16);
        }
        else
        {
          v19 = &word_140867F00;
          v20 = &word_140867F00;
        }
        sub_1405641AC((__int64)v20, v15, (__int64)v18, v19, v20, v18, v17, v16, *((_DWORD *)DeviceExtension + 2));
      }
      if ( (DeviceExtension[1] & 0x20) == 0 )
        sub_1406619F8((__int64)v12, 0);
      sub_140953508(v12);
    }
  }
  if ( v4 )
  {
    v9 = *(wchar_t **)(v4 + 8);
    if ( v9 )
    {
      v10 = sub_140767130(v9);
      if ( !v10 || (*(_DWORD *)(v10 + 4) & 1) == 0 && !*(_DWORD *)(v10 + 180) )
      {
        LOBYTE(v11) = 1;
        sub_140811C50(v4, v11);
      }
    }
  }
  ExReleaseResourceLite(&stru_140C44820);
  KeLeaveCriticalRegion();
}
