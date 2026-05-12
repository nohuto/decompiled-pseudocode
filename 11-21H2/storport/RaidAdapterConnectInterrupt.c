/*
 * XREFs of RaidAdapterConnectInterrupt @ 0x1C0034020
 * Callers:
 *     RaidAdapterStartMiniport @ 0x1C0038568 (RaidAdapterStartMiniport.c)
 * Callees:
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     RaidGetResourceListInterrupt @ 0x1C004C2A0 (RaidGetResourceListInterrupt.c)
 *     RaidAdapterConnectMSIInterrupt @ 0x1C008BC48 (RaidAdapterConnectMSIInterrupt.c)
 *     RaidAdapterConnectNonMSIInterrupt @ 0x1C008BDFC (RaidAdapterConnectNonMSIInterrupt.c)
 */

__int64 __fastcall RaidAdapterConnectInterrupt(__int64 a1)
{
  _QWORD *v2; // rcx
  bool v3; // zf
  __int64 v4; // rdx
  unsigned int ResourceListInterrupt; // edi
  int v6; // r8d
  int v7; // r9d
  PDEVICE_OBJECT v8; // rcx
  __int64 v9; // rdx
  unsigned __int8 v11; // si
  int v12; // eax
  int v13; // edx
  int v14; // [rsp+20h] [rbp-48h]
  char v15; // [rsp+28h] [rbp-40h]
  int v16; // [rsp+40h] [rbp-28h] BYREF
  _OWORD v17[2]; // [rsp+48h] [rbp-20h] BYREF
  unsigned __int8 v18; // [rsp+90h] [rbp+28h] BYREF
  char v19; // [rsp+98h] [rbp+30h] BYREF
  unsigned __int8 v20; // [rsp+A0h] [rbp+38h] BYREF
  int v21; // [rsp+A8h] [rbp+40h] BYREF

  v21 = 0;
  v16 = 0;
  v2 = (_QWORD *)(a1 + 320);
  v20 = 0;
  v17[0] = 0LL;
  v19 = 0;
  v3 = *v2 == 0LL;
  v18 = 0;
  if ( !v3 && *(_QWORD *)(a1 + 328) )
  {
    ResourceListInterrupt = RaidGetResourceListInterrupt(
                              (_DWORD)v2,
                              *(_BYTE *)(a1 + 4240),
                              (unsigned int)&v21,
                              (unsigned int)&v20,
                              (__int64)&v16,
                              (__int64)&v19,
                              (__int64)v17,
                              (__int64)&v18);
    if ( (ResourceListInterrupt & 0x80000000) == 0 )
    {
      if ( *(_BYTE *)(a1 + 4240) )
      {
        v11 = v18;
        LOBYTE(v4) = v18;
        v12 = RaidAdapterConnectMSIInterrupt(a1, v4);
      }
      else
      {
        v11 = v20;
        v13 = v21;
        LOBYTE(v7) = v20;
        LOBYTE(v6) = v20;
        v15 = v19;
        *(_BYTE *)(a1 + 4241) = 0;
        v12 = RaidAdapterConnectNonMSIInterrupt(a1, v13, v6, v7, v14, v15, (__int64)v17);
      }
      ResourceListInterrupt = v12;
      if ( v12 >= 0 )
      {
        *(_DWORD *)(a1 + 728) = v11;
        return ResourceListInterrupt;
      }
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return ResourceListInterrupt;
      }
      v9 = 21LL;
    }
    else
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x2000) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        return ResourceListInterrupt;
      }
      v9 = 20LL;
    }
    WPP_SF_(v8->AttachedDevice, v9, &WPP_086a7ae95d483ea027c404bc5e9f61c7_Traceguids);
    return ResourceListInterrupt;
  }
  return 0LL;
}
