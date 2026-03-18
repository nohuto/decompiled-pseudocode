/*
 * XREFs of RootHub_Read30PortSpeeds @ 0x1C0017624
 * Callers:
 *     RootHub_UcxEvtGet30PortInfo @ 0x1C0017420 (RootHub_UcxEvtGet30PortInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDD @ 0x1C000B300 (WPP_RECORDER_SF_DDDD.c)
 *     WPP_RECORDER_SF_d @ 0x1C0010010 (WPP_RECORDER_SF_d.c)
 *     XilRegister_ReadUlong @ 0x1C00139CC (XilRegister_ReadUlong.c)
 */

__int64 __fastcall RootHub_Read30PortSpeeds(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        __int64 a5,
        unsigned __int16 a6,
        char a7)
{
  unsigned int v7; // edi
  int v12; // r14d
  unsigned __int16 v13; // r12
  __int64 v14; // r8
  unsigned __int16 v15; // bx
  int Ulong; // eax
  int v17; // edx
  unsigned int v18; // ebp
  int v19; // r8d
  unsigned __int16 v20; // bx
  int v21; // edx
  unsigned __int16 v22; // cx
  __int64 v24; // rax
  int v25; // r8d
  int v26; // edx
  int v27; // r9d
  unsigned __int16 v28; // bx
  unsigned __int16 v29; // bx
  __int64 v30; // [rsp+90h] [rbp+8h]

  v7 = 0;
  v12 = 0;
  v13 = 0;
  v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL);
  *a3 = 0;
  v15 = 0;
  v30 = v14;
  if ( a6 )
  {
    while ( 1 )
    {
      Ulong = XilRegister_ReadUlong(v14, (unsigned int *)(a5 + 4LL * v13));
      v18 = Ulong & 0xF;
      if ( _bittest(&v12, v18) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 194;
LABEL_54:
          LOBYTE(v17) = 2;
          WPP_RECORDER_SF_d(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
            v17,
            11,
            v27,
            (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
            v18);
        }
        return (unsigned int)-1073741811;
      }
      v12 |= 1 << v18;
      v17 = v15;
      if ( v15 < a4 )
      {
        if ( !a7 || (v19 = 0x4000, v18 <= 4) )
          v19 = 0;
        *(_DWORD *)(a2 + 4LL * v15) = v19 | Ulong & 0x30;
        *(_WORD *)(a2 + 4LL * v15 + 2) = HIWORD(Ulong);
        *(_DWORD *)(a2 + 4LL * v15) = v18 | *(_DWORD *)(a2 + 4LL * v15) & 0xFFFFFFF0;
      }
      if ( (Ulong & 0xC0) == 0x80 )
        break;
      if ( (Ulong & 0xC0) == 0 )
      {
        if ( v15 < a4 )
          *(_DWORD *)(a2 + 4LL * v15) &= 0xFFFFFF3F;
        v20 = v15 + 1;
        if ( v20 < a4 )
        {
          if ( !a7 || (v21 = 0x4000, v18 <= 4) )
            v21 = 0;
          *(_DWORD *)(a2 + 4LL * v20) = v21 | Ulong & 0x30;
          *(_WORD *)(a2 + 4LL * v20 + 2) = HIWORD(Ulong);
          *(_DWORD *)(a2 + 4LL * v20) = Ulong & 0xF | *(_DWORD *)(a2 + 4LL * v20) & 0xFFFFFFB0 | 0x80;
        }
LABEL_15:
        v15 = v20 + 1;
        goto LABEL_16;
      }
      if ( (Ulong & 0xC0) == 0xC0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v27 = 197;
          goto LABEL_54;
        }
        return (unsigned int)-1073741811;
      }
LABEL_16:
      ++v13;
      v22 = v15;
      if ( v13 >= a6 )
      {
        if ( (v12 & 4) != 0 )
        {
          if ( v15 < a4 )
          {
            *(_DWORD *)(a2 + 4LL * v15) = 52;
            *(_WORD *)(a2 + 4LL * v15 + 2) = 5;
          }
          v28 = v15 + 1;
          if ( (unsigned __int16)(v22 + 1) < a4 )
          {
            *(_DWORD *)(a2 + 4LL * v28) = 180;
            *(_WORD *)(a2 + 4LL * v28 + 2) = 5;
          }
          v15 = v22 + 2;
        }
        if ( (v12 & 5) == 5 )
        {
          if ( v15 < a4 )
          {
            *(_DWORD *)(a2 + 4LL * v15) = (a7 != 0 ? 0x4000 : 0) | 0x35;
            *(_WORD *)(a2 + 4LL * v15 + 2) = 10;
          }
          v29 = v15 + 1;
          if ( v29 < a4 )
          {
            *(_DWORD *)(a2 + 4LL * v29) = (a7 != 0 ? 0x4000 : 0) | 0xB5;
            *(_WORD *)(a2 + 4LL * v29 + 2) = 10;
          }
          v15 = v29 + 1;
        }
        goto LABEL_22;
      }
      v14 = v30;
    }
    if ( v15 < a4 )
      *(_DWORD *)(a2 + 4LL * v15) = *(_DWORD *)(a2 + 4LL * v15) & 0xFFFFFF3F | 0x40;
    v20 = v15 + 1;
    if ( ++v13 >= a6 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v27 = 195;
        goto LABEL_54;
      }
      return (unsigned int)-1073741811;
    }
    v24 = XilRegister_ReadUlong(v30, (unsigned int *)(a5 + 4LL * v13));
    v25 = v24 & 0xF;
    if ( v25 != v18 || (unsigned __int8)v24 >> 6 != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDDD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
          2u,
          0xBu,
          0xC4u,
          (__int64)&WPP_6daf7e8d9b993c4f7f4c28abffa2458f_Traceguids,
          v18,
          2,
          v24 & 0xF,
          (unsigned __int8)v24 >> 6);
      return (unsigned int)-1073741811;
    }
    if ( v20 < a4 )
    {
      if ( !a7 || (v26 = 0x4000, v18 <= 4) )
        v26 = 0;
      *(_DWORD *)(a2 + 4LL * v20) = v26 | v24 & 0x30;
      *(_WORD *)(a2 + 4LL * v20 + 2) = WORD1(v24);
      *(_DWORD *)(a2 + 4LL * v20) = v25 | *(_DWORD *)(a2 + 4LL * v20) & 0xFFFFFFF0 | 0xC0;
    }
    goto LABEL_15;
  }
LABEL_22:
  *a3 = v15;
  return v7;
}
