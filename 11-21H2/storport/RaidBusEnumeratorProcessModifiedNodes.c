/*
 * XREFs of RaidBusEnumeratorProcessModifiedNodes @ 0x1C001AC6C
 * Callers:
 *     RaidAdapterRescanBus @ 0x1C001A8B0 (RaidAdapterRescanBus.c)
 * Callees:
 *     McTemplateK0zqjqq_EtwWriteTransfer @ 0x1C001E90C (McTemplateK0zqjqq_EtwWriteTransfer.c)
 *     RaidBusEnumeratorProcessNewUnit @ 0x1C001E9DC (RaidBusEnumeratorProcessNewUnit.c)
 *     RaidUnitNotifyHardwareGone @ 0x1C0022B7C (RaidUnitNotifyHardwareGone.c)
 *     WPP_SF_qqddds @ 0x1C003CE48 (WPP_SF_qqddds.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessModifiedNodes(__int64 *a1, int a2, int a3)
{
  __int64 v3; // rdi
  __int64 *v4; // r12
  __int64 *v5; // rsi
  int v6; // ebp
  int v7; // r14d
  unsigned int v9; // r15d
  int v11; // ecx
  int v12; // eax
  const char *v13; // rcx

  v3 = *a1;
  v4 = a1 + 15;
  v5 = (__int64 *)a1[15];
  v6 = 0;
  v7 = 0;
  v9 = 0;
  while ( v5 != v4 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
    {
      v12 = *((_DWORD *)v5 + 18);
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v13 = "new";
        }
        else
        {
          v13 = "matched";
          if ( v12 != 2 )
            v13 = "invalid";
        }
      }
      else
      {
        v13 = "unmatched";
      }
      WPP_SF_qqddds(
        WPP_GLOBAL_Control->AttachedDevice,
        *((unsigned __int8 *)v5 - 11),
        *((unsigned __int8 *)v5 - 12),
        v3,
        *(v5 - 1),
        *((_BYTE *)v5 - 12),
        *((_BYTE *)v5 - 11),
        *((_BYTE *)v5 - 10),
        (__int64)v13);
    }
    v11 = *((_DWORD *)v5 + 18);
    if ( v11 )
    {
      if ( v11 == 1 )
      {
        RaidBusEnumeratorProcessNewUnit(a1, v5 - 2);
        ++v6;
        v9 = 1;
      }
    }
    else
    {
      v9 = (unsigned __int8)RaidUnitNotifyHardwareGone(*(v5 - 1));
      ++v7;
    }
    v5 = (__int64 *)*v5;
  }
  if ( *(_BYTE *)(v3 + 4242) && (v6 || v7) && (byte_1C00799E6 & 1) != 0 )
    McTemplateK0zqjqq_EtwWriteTransfer(
      *(_DWORD *)(v3 + 56),
      a2,
      a3,
      *(_QWORD *)(v3 + 4592),
      *(_DWORD *)(v3 + 56),
      v3 + 4936,
      v6,
      v7);
  return v9;
}
