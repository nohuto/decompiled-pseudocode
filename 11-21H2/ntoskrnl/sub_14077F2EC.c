/*
 * XREFs of sub_14077F2EC @ 0x14077F2EC
 * Callers:
 *     sub_140697EF0 @ 0x140697EF0 (sub_140697EF0.c)
 *     sub_1406BA720 @ 0x1406BA720 (sub_1406BA720.c)
 *     IoOpenDeviceRegistryKey @ 0x1406C54A0 (IoOpenDeviceRegistryKey.c)
 *     sub_1406CF708 @ 0x1406CF708 (sub_1406CF708.c)
 *     sub_1406DA4DC @ 0x1406DA4DC (sub_1406DA4DC.c)
 *     sub_1407446E0 @ 0x1407446E0 (sub_1407446E0.c)
 *     sub_1407448BC @ 0x1407448BC (sub_1407448BC.c)
 *     sub_140745F48 @ 0x140745F48 (sub_140745F48.c)
 *     sub_14074856C @ 0x14074856C (sub_14074856C.c)
 *     sub_140748758 @ 0x140748758 (sub_140748758.c)
 *     sub_140748B18 @ 0x140748B18 (sub_140748B18.c)
 *     sub_140749A80 @ 0x140749A80 (sub_140749A80.c)
 *     sub_140766A5C @ 0x140766A5C (sub_140766A5C.c)
 *     sub_140768C60 @ 0x140768C60 (sub_140768C60.c)
 *     sub_14076B030 @ 0x14076B030 (sub_14076B030.c)
 *     sub_14076B1A8 @ 0x14076B1A8 (sub_14076B1A8.c)
 *     sub_14076B788 @ 0x14076B788 (sub_14076B788.c)
 *     sub_14076C544 @ 0x14076C544 (sub_14076C544.c)
 *     sub_14076E894 @ 0x14076E894 (sub_14076E894.c)
 *     sub_14076FF88 @ 0x14076FF88 (sub_14076FF88.c)
 *     sub_1407743C8 @ 0x1407743C8 (sub_1407743C8.c)
 *     sub_14077CF10 @ 0x14077CF10 (sub_14077CF10.c)
 *     sub_14077F420 @ 0x14077F420 (sub_14077F420.c)
 *     sub_1407855F0 @ 0x1407855F0 (sub_1407855F0.c)
 *     sub_140785B98 @ 0x140785B98 (sub_140785B98.c)
 *     sub_14078600C @ 0x14078600C (sub_14078600C.c)
 *     sub_140805024 @ 0x140805024 (sub_140805024.c)
 *     sub_14080E438 @ 0x14080E438 (sub_14080E438.c)
 *     IoReportDetectedDevice @ 0x14081EB20 (IoReportDetectedDevice.c)
 *     sub_14081EFBC @ 0x14081EFBC (sub_14081EFBC.c)
 *     sub_14081FDD8 @ 0x14081FDD8 (sub_14081FDD8.c)
 *     sub_14084F060 @ 0x14084F060 (sub_14084F060.c)
 *     sub_140851A60 @ 0x140851A60 (sub_140851A60.c)
 *     ntoskrnl_15 @ 0x140945E70 (ntoskrnl_15.c)
 *     sub_140947E30 @ 0x140947E30 (sub_140947E30.c)
 *     sub_14094C428 @ 0x14094C428 (sub_14094C428.c)
 *     sub_14094D930 @ 0x14094D930 (sub_14094D930.c)
 *     sub_140954434 @ 0x140954434 (sub_140954434.c)
 *     sub_14095975C @ 0x14095975C (sub_14095975C.c)
 *     sub_140A24104 @ 0x140A24104 (sub_140A24104.c)
 *     sub_140A245FC @ 0x140A245FC (sub_140A245FC.c)
 *     sub_140A2A168 @ 0x140A2A168 (sub_140A2A168.c)
 *     sub_140A2A2CC @ 0x140A2A2CC (sub_140A2A2CC.c)
 *     sub_140A2C368 @ 0x140A2C368 (sub_140A2C368.c)
 * Callees:
 *     sub_14042A5E0 @ 0x14042A5E0 (sub_14042A5E0.c)
 *     sub_14077F420 @ 0x14077F420 (sub_14077F420.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_14077F2EC(__int64 a1, __int64 a2, int a3, int a4, int a5, char a6, __int64 a7, _DWORD *a8)
{
  __int64 v8; // rsi
  __int64 Pool2; // rax
  __int64 v14; // rdi
  int v15; // eax
  int v16; // eax
  int v17; // ebx
  int v19; // eax

  v8 = *(_QWORD *)(a1 + 504);
  Pool2 = ExAllocatePool2(256LL, 88LL, 1380994640LL);
  v14 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  *(_DWORD *)(Pool2 + 16) = a3;
  *(_DWORD *)(Pool2 + 20) = a4;
  *(_DWORD *)(Pool2 + 24) = a5;
  *(_BYTE *)(Pool2 + 28) = a6;
  *(_QWORD *)(Pool2 + 32) = a7;
  if ( v8 )
  {
    v15 = sub_14042A5E0(a1, a2);
    if ( v15 == -1073741822 )
    {
      v8 = 0LL;
    }
    else
    {
      if ( v15 == -1073741536 )
        goto LABEL_15;
      if ( v15 )
        goto LABEL_14;
    }
  }
  v16 = sub_14077F420(
          a1,
          a2,
          *(_DWORD *)(v14 + 16),
          *(_DWORD *)(v14 + 20),
          *(_DWORD *)(v14 + 24),
          *(_BYTE *)(v14 + 28),
          *(_QWORD *)(v14 + 32),
          v14 + 40);
  v17 = v16;
  if ( !v8 || (*(_DWORD *)v14 = v16, v19 = sub_14042A5E0(a1, a2), v19 == -1073741822) )
  {
LABEL_6:
    if ( v17 >= 0 && a8 )
      *a8 = *(_DWORD *)(v14 + 40);
    goto LABEL_9;
  }
  if ( v19 == -1073741536 )
  {
LABEL_15:
    v17 = *(_DWORD *)v14;
    goto LABEL_6;
  }
  if ( !v19 )
    goto LABEL_6;
LABEL_14:
  v17 = -1073741595;
LABEL_9:
  ExFreePoolWithTag((PVOID)v14, 0);
  return (unsigned int)v17;
}
