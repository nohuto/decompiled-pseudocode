/*
 * XREFs of ParseTcgMethodData @ 0x1C007FA18
 * Callers:
 *     TcglibpCallMethod @ 0x1C007C734 (TcglibpCallMethod.c)
 * Callees:
 *     WPP_SF_dd @ 0x1C003E890 (WPP_SF_dd.c)
 *     TcglibReverseBytes @ 0x1C0079CB8 (TcglibReverseBytes.c)
 *     WPP_SF_ii @ 0x1C008050C (WPP_SF_ii.c)
 */

__int64 __fastcall ParseTcgMethodData(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  _QWORD *v4; // r10
  unsigned int v5; // ebx
  _QWORD *v8; // rdi
  __int64 v9; // r8
  int v10; // r9d
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // rdx
  __int64 Source2; // [rsp+50h] [rbp+20h] BYREF

  v4 = *(_QWORD **)(a1 + 72);
  v5 = 0;
  if ( *((_DWORD *)v4 + 2) == 4 && *((_DWORD *)v4 + 3) == 3 )
  {
    v8 = (_QWORD *)v4[2];
    Source2 = a2;
    TcglibReverseBytes((char *)&Source2, 8u);
    v9 = Source2;
    if ( v8[1] == 0x80000000FLL )
    {
      if ( RtlCompareMemory(v8 + 2, &Source2, 8uLL) == 8 )
      {
        v8 = (_QWORD *)*v8;
        Source2 = a3;
        TcglibReverseBytes((char *)&Source2, 8u);
        v9 = Source2;
        if ( v8[1] == 0x80000000FLL )
        {
          if ( RtlCompareMemory(v8 + 2, &Source2, 8uLL) == 8 )
          {
            v4 = (_QWORD *)*v8;
            goto LABEL_8;
          }
          v9 = Source2;
        }
        v11 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
          return (unsigned int)-1073741435;
        v12 = 26LL;
LABEL_17:
        WPP_SF_ii(v11->AttachedDevice, v12, v9, v8[2], v9);
        return (unsigned int)-1073741435;
      }
      v9 = Source2;
    }
    v11 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      return (unsigned int)-1073741435;
    v12 = 25LL;
    goto LABEL_17;
  }
LABEL_8:
  v10 = *((_DWORD *)v4 + 2);
  if ( v10 != 5 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x1Bu,
        (__int64)&WPP_d27db7d0d3983550ea60457830c64ea4_Traceguids,
        v10,
        *((_DWORD *)v4 + 3));
    return (unsigned int)-1073741435;
  }
  if ( a4 )
    *a4 = v4;
  return v5;
}
