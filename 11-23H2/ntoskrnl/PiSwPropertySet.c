/*
 * XREFs of PiSwPropertySet @ 0x14079CC50
 * Callers:
 *     PiSwIrpPropertySet @ 0x14079C8E8 (PiSwIrpPropertySet.c)
 *     PiSwIrpStartCreateWorker @ 0x14081931C (PiSwIrpStartCreateWorker.c)
 *     PiSwCompleteCreate @ 0x140819AB4 (PiSwCompleteCreate.c)
 *     PiSwIrpInterfaceRegister @ 0x14081B064 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14081B3F4 (PiSwIrpInterfacePropertySet.c)
 * Callees:
 *     ZwClose @ 0x14041B2D0 (ZwClose.c)
 *     _PnpOpenObjectRegKey @ 0x1406CF990 (_PnpOpenObjectRegKey.c)
 *     PiPnpRtlEndOperation @ 0x1407889BC (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140788BC0 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlSetObjectProperty @ 0x140796978 (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiSwPropertySet(const WCHAR *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  int v8; // ebx
  unsigned int v9; // esi
  STRSAFE_PCNZWCH *v10; // rdi
  int v11; // eax
  HANDLE Handle; // [rsp+58h] [rbp-30h] BYREF
  PVOID P; // [rsp+60h] [rbp-28h] BYREF

  P = 0LL;
  Handle = 0LL;
  v8 = PiPnpRtlBeginOperation((__int64 **)&P);
  if ( v8 >= 0 )
  {
    v8 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, (__int64)a1, a2, 7, 0, (__int64)&Handle);
    if ( v8 >= 0 )
    {
      v9 = 0;
      if ( a4 )
      {
        v10 = (STRSAFE_PCNZWCH *)(a3 + 40);
        do
        {
          v11 = PiPnpRtlSetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  a1,
                  a2,
                  (__int64)Handle,
                  (__int64)*(v10 - 2),
                  (__int64)(v10 - 5),
                  *((_DWORD *)v10 - 2),
                  *v10,
                  *((_DWORD *)v10 - 1),
                  0);
          v8 = v11;
          if ( v11 == -1073741275 )
          {
            if ( *((_DWORD *)v10 - 2) )
              break;
            v8 = 0;
          }
          else if ( v11 < 0 )
          {
            break;
          }
          ++v9;
          v10 += 6;
        }
        while ( v9 < a4 );
      }
    }
  }
  if ( Handle )
    ZwClose(Handle);
  if ( P )
    PiPnpRtlEndOperation((PVOID **)P);
  return (unsigned int)v8;
}
