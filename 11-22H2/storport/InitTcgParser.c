/*
 * XREFs of InitTcgParser @ 0x1C007F468
 * Callers:
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 *     TcglibpCloseSession @ 0x1C007ECFC (TcglibpCloseSession.c)
 *     TcglibpTransaction @ 0x1C007F260 (TcglibpTransaction.c)
 * Callees:
 *     memset_0 @ 0x1C0023980 (memset_0.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     TcglibReverseBytes @ 0x1C0079CB8 (TcglibReverseBytes.c)
 */

__int64 __fastcall InitTcgParser(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v4; // rsi
  PDEVICE_OBJECT v7; // rcx
  unsigned __int16 v8; // dx
  unsigned int v9; // edx
  unsigned __int64 v10; // r14
  unsigned int v11; // edx
  PDEVICE_OBJECT v12; // rcx
  unsigned __int16 v13; // dx
  int v15; // [rsp+20h] [rbp-10h]
  int v16; // [rsp+20h] [rbp-10h]
  unsigned int v17; // [rsp+70h] [rbp+40h] BYREF
  unsigned __int16 v18; // [rsp+88h] [rbp+58h] BYREF

  v3 = 0;
  v4 = a3;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), 1, 0) )
  {
    v3 = -1073740024;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids);
    return v3;
  }
  if ( a3 < 0x14 )
  {
    v3 = -1073741435;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      return v3;
    v8 = 11;
    v15 = 20;
    goto LABEL_9;
  }
  v17 = *(_DWORD *)(a2 + 16);
  TcglibReverseBytes((char *)&v17, 4u);
  v10 = v17;
  if ( v17 < 0x18 || (unsigned __int64)v17 + 20 > v4 )
  {
    v3 = -1073741435;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      return v3;
    v13 = 12;
    v16 = v4 - 20;
LABEL_30:
    WPP_SF_dd((__int64)v12->AttachedDevice, v13, (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids, v10, v16);
    return v3;
  }
  v17 = *(_DWORD *)(a2 + 40);
  TcglibReverseBytes((char *)&v17, v9);
  v4 = v17;
  if ( v17 < 0xC || (unsigned __int64)v17 + 24 > v10 )
  {
    v3 = -1073741435;
    v7 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      return v3;
    v8 = 13;
    v15 = v10 - 24;
LABEL_9:
    WPP_SF_dd((__int64)v7->AttachedDevice, v8, (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids, v4, v15);
    return v3;
  }
  v17 = *(_DWORD *)(a2 + 52);
  TcglibReverseBytes((char *)&v17, v11);
  LODWORD(v10) = v17;
  if ( (unsigned __int64)v17 + 12 > v4 )
  {
    v3 = -1073741435;
    v12 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      return v3;
    v13 = 14;
    v16 = v4 - 12;
    goto LABEL_30;
  }
  v18 = *(_WORD *)(a2 + 4);
  TcglibReverseBytes((char *)&v18, 2u);
  LOWORD(v17) = *(_WORD *)(a2 + 50);
  TcglibReverseBytes((char *)&v17, 2u);
  if ( v18 != *(_WORD *)(a1 + 28) || (_WORD)v17 )
  {
    v3 = -1073741435;
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xFu,
        (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
        v18,
        (unsigned __int16)v17);
  }
  else
  {
    memset_0((void *)(a1 + 68), 0, 0x181CuLL);
    *(_QWORD *)(a1 + 56) = a2 + 56;
    *(_DWORD *)(a1 + 64) = v10;
  }
  return v3;
}
