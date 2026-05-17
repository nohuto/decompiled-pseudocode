/*
 * XREFs of RtlVerifyVersionInfo @ 0x180089A50
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x18004ED20 (RtlGetVersion.c)
 *     RtlpVerGetConditionMask @ 0x1800521F0 (RtlpVerGetConditionMask.c)
 *     RtlpVerCompare @ 0x180052210 (RtlpVerCompare.c)
 *     __security_check_cookie @ 0x180093840 (__security_check_cookie.c)
 *     memset @ 0x1800AAE00 (memset.c)
 */

NTSTATUS __fastcall RtlVerifyVersionInfo(__int64 a1, int a2, signed __int64 a3)
{
  char v4; // si
  char v6; // di
  NTSTATUS result; // eax
  bool v8; // al
  int ConditionMask; // edi
  int v10; // eax
  bool v11; // zf
  unsigned int v12; // r10d
  int v13; // r11d
  int v14; // eax
  unsigned __int16 v15; // r9
  int v16; // eax
  int v17; // eax
  bool v18[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v19[72]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return -1073741811;
  memset(&v19[1], 0, 0x118uLL);
  v19[0] = 284;
  result = RtlGetVersion(v19);
  if ( !result )
  {
    if ( (v4 & 0x40) != 0 && *(_WORD *)(a1 + 280) )
    {
      v12 = 0;
      v13 = *(unsigned __int16 *)(a1 + 280);
      do
      {
        if ( (v13 & (1 << v12)) != 0 )
        {
          if ( a3 >= 0 )
            return -1073741811;
          v14 = RtlpVerGetConditionMask(a3, 0x40u) - 6;
          if ( v14 )
          {
            if ( v14 != 1 )
              return -1073741811;
            if ( (v19[70] & v15) != 0 )
              v6 = 1;
          }
          else if ( (v19[70] & v15) == 0 )
          {
            return -1073741735;
          }
        }
        ++v12;
      }
      while ( v12 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(a3, 0x40u) == 7 && !v6 )
        return -1073741735;
    }
    v8 = 1;
    v18[0] = 1;
    ConditionMask = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( a3 >= 0 )
        ConditionMask = (unsigned __int8)((unsigned __int64)a3 >> 4);
      else
        ConditionMask = RtlpVerGetConditionMask(a3, 2u);
      v11 = !RtlpVerCompare(ConditionMask, *(_DWORD *)(a1 + 4), v19[1], v18, 0);
      v8 = v18[0];
      if ( v11 )
      {
        if ( !v18[0] )
          return -1073741735;
      }
      else if ( !v18[0] )
      {
        goto LABEL_10;
      }
    }
    if ( (v4 & 1) == 0 )
      goto LABEL_6;
    if ( ConditionMask == 1 )
    {
      if ( a3 < 0 )
        ConditionMask = RtlpVerGetConditionMask(a3, 1u);
      else
        ConditionMask = (unsigned __int8)((unsigned __int64)a3 >> 2);
    }
    v11 = !RtlpVerCompare(ConditionMask, *(_DWORD *)(a1 + 8), v19[2], v18, 1);
    v8 = v18[0];
    if ( v11 )
    {
      if ( !v18[0] )
        return -1073741735;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) != 0 )
    {
      if ( ConditionMask == 1 )
      {
        if ( a3 < 0 )
          ConditionMask = RtlpVerGetConditionMask(a3, 0x20u);
        else
          ConditionMask = 0;
      }
      if ( !RtlpVerCompare(ConditionMask, *(unsigned __int16 *)(a1 + 276), LOWORD(v19[69]), v18, 0) )
      {
        if ( !v18[0] )
          return -1073741735;
        goto LABEL_9;
      }
      v8 = v18[0];
    }
    if ( v8 )
    {
LABEL_9:
      if ( (v4 & 0x10) != 0 )
      {
        if ( ConditionMask == 1 )
        {
          if ( a3 < 0 )
            ConditionMask = RtlpVerGetConditionMask(a3, 0x10u);
          else
            ConditionMask = 0;
        }
        if ( !RtlpVerCompare(ConditionMask, *(unsigned __int16 *)(a1 + 278), HIWORD(v19[69]), v18, 1) )
          return -1073741735;
      }
    }
LABEL_10:
    if ( (v4 & 4) != 0 )
    {
      v16 = a3 < 0 ? RtlpVerGetConditionMask(a3, 4u) : BYTE2(a3);
      if ( !RtlpVerCompare(v16, *(_DWORD *)(a1 + 12), v19[3], v18, 0) )
        return -1073741735;
    }
    if ( (v4 & 8) != 0 )
    {
      v17 = a3 < 0 ? RtlpVerGetConditionMask(a3, 8u) : 0;
      if ( !RtlpVerCompare(v17, *(_DWORD *)(a1 + 16), v19[4], v18, 0) )
        return -1073741735;
    }
    if ( v4 < 0 )
    {
      v10 = a3 >= 0 ? 0 : RtlpVerGetConditionMask(a3, 0x80u);
      if ( !RtlpVerCompare(v10, *(unsigned __int8 *)(a1 + 282), BYTE2(v19[70]), v18, 0) )
        return -1073741735;
    }
    return 0;
  }
  return result;
}
