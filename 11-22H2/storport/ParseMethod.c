/*
 * XREFs of ParseMethod @ 0x1C007F770
 * Callers:
 *     ParseToken @ 0x1C007FEE0 (ParseToken.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     ParseToken @ 0x1C007FEE0 (ParseToken.c)
 */

__int64 __fastcall ParseMethod(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  _DWORD *v5; // rdi
  int v6; // r9d
  int v7; // eax
  unsigned __int16 v8; // dx
  _DEVICE_OBJECT *AttachedDevice; // rcx
  PDEVICE_OBJECT v10; // r10
  int v11; // [rsp+20h] [rbp-18h]

  *(_DWORD *)(a2 + 12) = 0;
  result = ParseToken(a1, a2 + 16);
  if ( (int)result < 0 )
    return result;
  ++*(_DWORD *)(a2 + 12);
  v5 = *(_DWORD **)(a2 + 16);
  v6 = v5[2];
  if ( *((_QWORD *)v5 + 1) != 0x80000000FLL )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      return 3221225861LL;
    v8 = 31;
LABEL_16:
    AttachedDevice = v10->AttachedDevice;
    v7 = v5[3];
    goto LABEL_17;
  }
  result = ParseToken(a1, *(_QWORD *)(a2 + 16));
  if ( (int)result < 0 )
    return result;
  ++*(_DWORD *)(a2 + 12);
  v5 = *(_DWORD **)v5;
  v6 = v5[2];
  if ( *((_QWORD *)v5 + 1) != 0x80000000FLL )
  {
    v10 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      return 3221225861LL;
    v8 = 32;
    goto LABEL_16;
  }
  result = ParseToken(a1, v5);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a2 + 12);
    v6 = *(_DWORD *)(*(_QWORD *)v5 + 8LL);
    if ( v6 != 5 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
        return 3221225861LL;
      v7 = *(_DWORD *)(*(_QWORD *)v5 + 12LL);
      v8 = 33;
      AttachedDevice = WPP_GLOBAL_Control->AttachedDevice;
LABEL_17:
      v11 = v7;
      WPP_SF_dd((__int64)AttachedDevice, v8, (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids, v6, v11);
      return 3221225861LL;
    }
  }
  return result;
}
