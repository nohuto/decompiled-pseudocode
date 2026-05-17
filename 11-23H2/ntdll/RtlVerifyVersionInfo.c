/*
 * XREFs of RtlVerifyVersionInfo @ 0x1800852D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetVersion @ 0x18002F620 (RtlGetVersion.c)
 *     RtlpVerCompare @ 0x18004A100 (RtlpVerCompare.c)
 *     RtlpVerGetConditionMask @ 0x18004A1F8 (RtlpVerGetConditionMask.c)
 *     __security_check_cookie @ 0x18008EF90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180132010 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlVerifyVersionInfo(__int64 a1, int a2, signed __int64 a3)
{
  char v4; // si
  char v6; // di
  __int64 result; // rax
  bool v8; // al
  int ConditionMask; // edi
  int v10; // eax
  unsigned int v11; // r10d
  int v12; // r11d
  int v13; // eax
  unsigned __int16 v14; // r9
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  bool v18[16]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  int v20[68]; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int16 v21; // [rsp+154h] [rbp+54h]
  unsigned __int16 v22; // [rsp+156h] [rbp+56h]
  unsigned __int16 v23; // [rsp+158h] [rbp+58h]
  unsigned __int8 v24; // [rsp+15Ah] [rbp+5Ah]

  v4 = a2;
  v6 = 0;
  if ( !a2 )
    return 3221225485LL;
  memset_thunk_772440563353939046(v20, 0, 0x118uLL);
  v19 = 284;
  result = RtlGetVersion(&v19);
  if ( !(_DWORD)result )
  {
    if ( (v4 & 0x40) != 0 && *(_WORD *)(a1 + 280) )
    {
      v11 = 0;
      v12 = *(unsigned __int16 *)(a1 + 280);
      do
      {
        if ( (v12 & (1 << v11)) != 0 )
        {
          if ( a3 >= 0 )
            return 3221225485LL;
          v13 = RtlpVerGetConditionMask(a3, 0x40u) - 6;
          if ( v13 )
          {
            if ( v13 != 1 )
              return 3221225485LL;
            if ( (v23 & v14) != 0 )
              v6 = 1;
          }
          else if ( (v23 & v14) == 0 )
          {
            return 3221225561LL;
          }
        }
        ++v11;
      }
      while ( v11 < 0x10 );
      if ( (unsigned int)RtlpVerGetConditionMask(a3, 0x40u) == 7 && !v6 )
        return 3221225561LL;
    }
    v8 = 1;
    v18[0] = 1;
    ConditionMask = 1;
    if ( (v4 & 2) != 0 )
    {
      if ( a3 < 0 )
        ConditionMask = RtlpVerGetConditionMask(a3, 2u);
      else
        ConditionMask = (unsigned __int8)((unsigned __int64)a3 >> 4);
      v15 = !RtlpVerCompare(ConditionMask, *(_DWORD *)(a1 + 4), v20[0], v18, 0);
      v8 = v18[0];
      if ( v15 )
      {
        if ( !v18[0] )
          return 3221225561LL;
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
    v15 = !RtlpVerCompare(ConditionMask, *(_DWORD *)(a1 + 8), v20[1], v18, 1);
    v8 = v18[0];
    if ( v15 )
    {
      if ( !v18[0] )
        return 3221225561LL;
    }
    else
    {
LABEL_6:
      if ( !v8 )
        goto LABEL_10;
    }
    if ( (v4 & 0x20) == 0 )
      goto LABEL_8;
    if ( ConditionMask == 1 )
    {
      if ( a3 < 0 )
        ConditionMask = RtlpVerGetConditionMask(a3, 0x20u);
      else
        ConditionMask = 0;
    }
    if ( RtlpVerCompare(ConditionMask, *(unsigned __int16 *)(a1 + 276), v21, v18, 0) )
    {
      v8 = v18[0];
LABEL_8:
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
          if ( !RtlpVerCompare(ConditionMask, *(unsigned __int16 *)(a1 + 278), v22, v18, 1) )
            return 3221225561LL;
        }
      }
LABEL_10:
      if ( (v4 & 4) != 0 )
      {
        v16 = a3 < 0 ? RtlpVerGetConditionMask(a3, 4u) : BYTE2(a3);
        if ( !RtlpVerCompare(v16, *(_DWORD *)(a1 + 12), v20[2], v18, 0) )
          return 3221225561LL;
      }
      if ( (v4 & 8) != 0 )
      {
        v17 = a3 < 0 ? RtlpVerGetConditionMask(a3, 8u) : 0;
        if ( !RtlpVerCompare(v17, *(_DWORD *)(a1 + 16), v20[3], v18, 0) )
          return 3221225561LL;
      }
      if ( v4 >= 0 )
        return 0LL;
      if ( a3 >= 0 )
        v10 = 0;
      else
        v10 = RtlpVerGetConditionMask(a3, 0x80u);
      return !RtlpVerCompare(v10, *(unsigned __int8 *)(a1 + 282), v24, v18, 0) ? 0xC0000059 : 0;
    }
    if ( v18[0] )
      goto LABEL_9;
    return 3221225561LL;
  }
  return result;
}
