/*
 * XREFs of sub_1409A5F60 @ 0x1409A5F60
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     sub_1409A37AC @ 0x1409A37AC (sub_1409A37AC.c)
 */

__int64 __fastcall sub_1409A5F60(LPCGUID SettingGuid, unsigned int *Value, ULONG ValueLength, _DWORD *Context)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rax
  unsigned int v10; // r8d
  unsigned int v11; // r9d

  CurrentThread = KeGetCurrentThread();
  --*((_WORD *)CurrentThread + 242);
  ExAcquireResourceExclusiveLite(&stru_140C1C020, 1u);
  if ( ValueLength == 4 && *((_BYTE *)Context + 240) && (Context[1] & 4) == 0 )
  {
    v9 = *(_QWORD *)&SettingGuid->Data1 - 0x4B948B4317AAA29BLL;
    v10 = *Value;
    if ( *(_QWORD *)&SettingGuid->Data1 == 0x4B948B4317AAA29BLL )
      v9 = *(_QWORD *)SettingGuid->Data4 + 0x110E55B209CA0156LL;
    if ( v9 )
    {
      Context[67] = v10;
      v11 = v10;
      v10 = Context[66];
    }
    else
    {
      v11 = Context[67];
      Context[66] = v10;
    }
    sub_1409A37AC(Context, *((_QWORD *)Context + 4), v10, v11);
  }
  ExReleaseResourceLite(&stru_140C1C020);
  KeLeaveCriticalRegion();
  return 0LL;
}
