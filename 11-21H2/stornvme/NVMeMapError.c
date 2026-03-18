/*
 * XREFs of NVMeMapError @ 0x1C0001D84
 * Callers:
 *     NVMeCompletionDpcRoutine @ 0x1C0002000 (NVMeCompletionDpcRoutine.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000A1DC (WaitForCommandCompleteWithCustomTimeout.c)
 * Callees:
 *     GetSrbScsiData @ 0x1C00031F8 (GetSrbScsiData.c)
 *     GetLunExtension @ 0x1C00035D4 (GetLunExtension.c)
 *     NVMeZeroMemory @ 0x1C0005100 (NVMeZeroMemory.c)
 *     GetSrbExtension @ 0x1C00053D0 (GetSrbExtension.c)
 *     NVMeAdminCommandErrorLog @ 0x1C000DD7C (NVMeAdminCommandErrorLog.c)
 *     memmove @ 0x1C0010700 (memmove.c)
 *     NVMeIsAllowedWithinThrottleLimit @ 0x1C001DEC8 (NVMeIsAllowedWithinThrottleLimit.c)
 */

__int64 __fastcall NVMeMapError(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  char v6; // di
  __int64 SrbExtension; // r13
  char v9; // si
  __int64 v10; // r9
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // ecx
  __int64 result; // rax
  unsigned int v16; // edx
  unsigned int v17; // r15d
  unsigned int v18; // edx
  char v19; // al
  char *v20; // rdi
  unsigned int v21; // edx
  __int64 LunExtension; // r10
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned int v26; // edx
  int v27; // ecx
  bool v28; // zf
  int v29; // ecx
  bool v30; // zf
  int v31; // ecx
  char v32; // al
  unsigned int v33; // ebx
  __int128 Src; // [rsp+D0h] [rbp-80h] BYREF
  __int16 v35; // [rsp+E0h] [rbp-70h]
  unsigned int v36; // [rsp+E8h] [rbp-68h] BYREF
  char *v37; // [rsp+F0h] [rbp-60h] BYREF
  void *v38; // [rsp+F8h] [rbp-58h] BYREF
  __int128 v39; // [rsp+100h] [rbp-50h]
  __int128 v40; // [rsp+120h] [rbp-30h]
  __int128 v41; // [rsp+130h] [rbp-20h]
  unsigned __int8 v42; // [rsp+180h] [rbp+30h] BYREF
  int v43; // [rsp+190h] [rbp+40h]

  LOBYTE(v43) = a3;
  v6 = a3;
  SrbExtension = GetSrbExtension(a2);
  v9 = 0;
  v37 = 0LL;
  v38 = 0LL;
  v10 = 0LL;
  v11 = *(_OWORD *)(SrbExtension + 4096);
  v42 = 0;
  v12 = *(_OWORD *)(SrbExtension + 4144);
  v36 = 0;
  v39 = v11;
  v13 = *(_OWORD *)(SrbExtension + 4128);
  v41 = v12;
  v28 = (*(_BYTE *)(SrbExtension + 4253) & 1) == 0;
  v40 = v13;
  Src = 0LL;
  v35 = 0;
  if ( v28 )
  {
    if ( (_BYTE)v39 )
    {
      if ( (unsigned __int8)v39 == 1 )
      {
        if ( !(unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 2LL, &v36, 0LL) || !*(_BYTE *)(a1 + 22) )
          goto LABEL_6;
      }
      else if ( (unsigned __int8)v39 != 2
             || !(unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 1LL, &v36, 0LL)
             || !*(_BYTE *)(a1 + 22) )
      {
        goto LABEL_6;
      }
    }
    else if ( !(unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 0LL, &v36, 0LL) || !*(_BYTE *)(a1 + 22) )
    {
      goto LABEL_6;
    }
    LunExtension = GetLunExtension(a1, DWORD1(v39));
    StorPortExtendedFunction(86LL, a1, LunExtension, 1LL);
    goto LABEL_6;
  }
  if ( (unsigned __int8)v39 > 0x11u )
  {
    if ( (unsigned __int8)v39 < 0x19u )
      goto LABEL_31;
    if ( (unsigned __int8)v39 <= 0x1Au )
    {
      if ( (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 3LL, &v36, 0LL) && *(_BYTE *)(a1 + 22) )
      {
        v25 = GetLunExtension(a1, DWORD1(v39));
        StorPortExtendedFunction(87LL, a1, v25, 1LL);
        v6 = v43;
      }
    }
    else
    {
      if ( (unsigned __int8)v39 == 128 )
      {
        if ( !*(_BYTE *)(a1 + 22) )
          goto LABEL_6;
        v23 = 0LL;
        goto LABEL_75;
      }
      if ( (unsigned int)(unsigned __int8)v39 - 129 > 1 )
        goto LABEL_31;
      if ( (unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, 4LL, &v36, 0LL) && *(_BYTE *)(a1 + 22) )
      {
        v23 = GetLunExtension(a1, DWORD1(v39));
        goto LABEL_75;
      }
    }
  }
  else
  {
    switch ( (unsigned __int8)v39 )
    {
      case 0x11u:
        if ( !*(_BYTE *)(a1 + 22) )
          goto LABEL_6;
LABEL_58:
        v23 = 0LL;
LABEL_75:
        StorPortExtendedFunction(87LL, a1, v23, 1LL);
        goto LABEL_6;
      case 2u:
        if ( (unsigned int)BYTE8(v40) - 192 <= 1 )
          goto LABEL_6;
        if ( BYTE8(v40) != 2 )
        {
LABEL_63:
          NVMeAdminCommandErrorLog(a1, a2, a4, v10);
          goto LABEL_6;
        }
        v24 = 6LL;
LABEL_61:
        if ( !(unsigned __int8)NVMeIsAllowedWithinThrottleLimit(a1, v24, &v36, 0LL) )
          goto LABEL_6;
        v10 = v36;
        goto LABEL_63;
      case 9u:
        if ( BYTE8(v40) != 2 )
          goto LABEL_63;
        v24 = 7LL;
        goto LABEL_61;
    }
    if ( (unsigned __int8)v39 != 10 )
    {
      if ( (unsigned __int8)v39 != 16 )
      {
LABEL_31:
        NVMeAdminCommandErrorLog(a1, a2, a4, 0LL);
        goto LABEL_6;
      }
      if ( !*(_BYTE *)(a1 + 22) )
        goto LABEL_6;
      goto LABEL_58;
    }
    if ( BYTE8(v40) != 208 && BYTE8(v40) != 2 )
      goto LABEL_31;
  }
LABEL_6:
  v14 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
  result = 0xFFFFFFFFLL;
  if ( v14 == -1 || *(_DWORD *)(*(_QWORD *)(a1 + 176) + 20LL) == -1 )
  {
    if ( *(_BYTE *)(a1 + 22) )
      result = StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
  }
  else
  {
    v43 = *(_DWORD *)(*(_QWORD *)(a1 + 176) + 28LL);
    if ( (v14 & 2) != 0 )
      result = StorPortExtendedFunction(98LL, a1, 0LL, 7LL);
  }
  if ( !v6 )
  {
    v16 = *(unsigned __int16 *)(SrbExtension + 4250);
    v17 = 18;
    if ( ((v16 >> 9) & 7) != 0 )
    {
      if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) != 1 )
      {
        if ( ((*(unsigned __int16 *)(SrbExtension + 4250) >> 9) & 7) == 2 )
        {
          v26 = v16 >> 1;
          *(_BYTE *)(a2 + 3) = 4;
          switch ( (unsigned __int8)v26 )
          {
            case 0x80u:
              v9 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 3;
              break;
            case 0x81u:
              v9 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 17;
              break;
            case 0x82u:
              v9 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 272;
              break;
            case 0x83u:
              v9 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 529;
              break;
            case 0x84u:
              v9 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 3;
              WORD6(Src) = 785;
              break;
            case 0x85u:
              v9 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 0xE;
              WORD6(Src) = 29;
              break;
            case 0x86u:
              v9 = 2;
              LOBYTE(Src) = -16;
              BYTE7(Src) = 10;
              BYTE2(Src) = BYTE2(Src) & 0xF0 | 5;
              WORD6(Src) = 2336;
              break;
          }
          goto LABEL_23;
        }
        goto LABEL_22;
      }
      v18 = v16 >> 1;
      if ( (unsigned __int8)v18 > 0x80u )
      {
        v31 = (unsigned __int8)v18 - 129;
        v30 = (unsigned __int8)v18 == 129;
      }
      else
      {
        if ( (unsigned __int8)v18 == 128 )
        {
LABEL_19:
          WORD6(Src) = 36;
          v19 = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_20;
        }
        if ( (unsigned __int8)v18 <= 0x11u )
        {
          if ( (unsigned __int8)v18 != 17 )
          {
            if ( (unsigned __int8)v18 <= 9u )
            {
              if ( (unsigned __int8)v18 == 9 )
                goto LABEL_19;
              if ( !(_BYTE)v18 || (unsigned __int8)v18 == 1 )
              {
                WORD6(Src) = 38;
                v19 = BYTE2(Src) & 0xF0 | 5;
                goto LABEL_20;
              }
              if ( (unsigned __int8)v18 != 2 && (unsigned __int8)v18 != 3 && (unsigned __int8)v18 != 5 )
              {
                if ( (unsigned __int8)v18 == 6 )
                  goto LABEL_19;
                v27 = (unsigned __int8)v18 - 7;
                if ( (unsigned __int8)v18 != 7 )
                  goto LABEL_105;
              }
              goto LABEL_128;
            }
            if ( (unsigned __int8)v18 == 10 )
            {
              WORD6(Src) = 305;
              v19 = BYTE2(Src) & 0xF0 | 5;
              goto LABEL_20;
            }
            if ( (unsigned __int8)v18 != 11 )
            {
              if ( (unsigned __int8)v18 == 12
                || (unsigned __int8)v18 == 13
                || (unsigned __int8)v18 == 14
                || (unsigned __int8)v18 == 15 )
              {
                goto LABEL_19;
              }
              if ( (unsigned __int8)v18 != 16 )
                goto LABEL_22;
            }
          }
          goto LABEL_117;
        }
        if ( (unsigned __int8)v18 <= 0x1Au )
        {
          if ( (unsigned __int8)v18 == 26 || (unsigned __int8)v18 == 18 )
          {
LABEL_117:
            v19 = BYTE2(Src) & 0xF0 | 6;
            goto LABEL_180;
          }
          if ( (unsigned __int8)v18 == 19
            || (unsigned __int8)v18 == 20
            || (unsigned __int8)v18 == 21
            || (unsigned __int8)v18 == 22 )
          {
            goto LABEL_19;
          }
          v29 = (unsigned __int8)v18 - 24;
          if ( (unsigned __int8)v18 != 24 )
            goto LABEL_127;
LABEL_128:
          v19 = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_180;
        }
        if ( (unsigned __int8)v18 == 27
          || (unsigned __int8)v18 == 28
          || (unsigned __int8)v18 == 30
          || (unsigned __int8)v18 == 31 )
        {
          goto LABEL_19;
        }
        v31 = (unsigned __int8)v18 - 32;
        v30 = (unsigned __int8)v18 == 32;
      }
      if ( v30 )
        goto LABEL_19;
      v27 = v31 - 1;
      if ( !v27 )
        goto LABEL_19;
LABEL_105:
      v28 = v27 == 1;
      goto LABEL_107;
    }
    v21 = v16 >> 1;
    if ( (unsigned __int8)v21 > 0x80u )
    {
      if ( (unsigned __int8)v21 != 129 )
      {
        if ( (unsigned __int8)v21 == 130 )
        {
          v9 = 2;
          v32 = BYTE2(Src) & 0xF2;
          *(_BYTE *)(a2 + 3) = 4;
          LOBYTE(Src) = -16;
          BYTE7(Src) = 10;
          BYTE2(Src) = v32 | 2;
          if ( _bittest16((const signed __int16 *)(SrbExtension + 4250), 0xFu) )
            WORD6(Src) = 4;
          else
            WORD6(Src) = 260;
          goto LABEL_23;
        }
        if ( (unsigned __int8)v21 != 131 )
          goto LABEL_22;
        v9 = 24;
        WORD6(Src) = 2348;
        v19 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_21;
      }
LABEL_179:
      v19 = BYTE2(Src) & 0xF0 | 3;
      goto LABEL_180;
    }
    if ( (unsigned __int8)v21 == 128 )
    {
      WORD6(Src) = 33;
      v19 = BYTE2(Src) & 0xF0 | 5;
      goto LABEL_20;
    }
    if ( (unsigned __int8)v21 > 0xEu )
    {
      if ( (unsigned __int8)v21 <= 0x16u )
      {
        if ( (unsigned __int8)v21 == 22 )
          goto LABEL_19;
        if ( (unsigned __int8)v21 == 15 || (unsigned __int8)v21 == 16 || (unsigned __int8)v21 == 17 )
          goto LABEL_128;
        if ( (unsigned __int8)v21 != 18 )
        {
          if ( (unsigned __int8)v21 == 19 || (unsigned __int8)v21 == 20 )
            goto LABEL_19;
          if ( (unsigned __int8)v21 != 21 )
            goto LABEL_22;
        }
        goto LABEL_163;
      }
      switch ( (unsigned __int8)v21 )
      {
        case 0x18u:
          goto LABEL_19;
        case 0x19u:
          WORD6(Src) = 42;
          v19 = BYTE2(Src) & 0xF0 | 5;
          goto LABEL_20;
        case 0x1Au:
          goto LABEL_19;
      }
      if ( (unsigned __int8)v21 != 27 )
      {
        if ( (unsigned __int8)v21 != 28 )
        {
          v28 = (unsigned __int8)v21 == 30;
LABEL_107:
          if ( !v28 )
            goto LABEL_22;
          goto LABEL_19;
        }
        v19 = BYTE2(Src) & 0xF0 | 4;
LABEL_180:
        WORD6(Src) = 0;
        goto LABEL_20;
      }
    }
    else
    {
      if ( (unsigned __int8)v21 == 14 )
        goto LABEL_128;
      if ( (unsigned __int8)v21 > 7u )
      {
        if ( (unsigned __int8)v21 != 8 && (unsigned __int8)v21 != 9 && (unsigned __int8)v21 != 10 )
        {
          if ( (unsigned __int8)v21 == 11 )
          {
            WORD6(Src) = 2336;
            v19 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_20;
          }
          v29 = (unsigned __int8)v21 - 12;
          if ( (unsigned __int8)v21 == 12 )
          {
            WORD6(Src) = 44;
            v19 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_20;
          }
LABEL_127:
          if ( v29 != 1 )
            goto LABEL_22;
          goto LABEL_128;
        }
      }
      else if ( (unsigned __int8)v21 != 7 )
      {
        if ( !(_BYTE)v21 )
        {
          *(_BYTE *)(a2 + 3) = 1;
          v9 = 0;
          goto LABEL_23;
        }
        if ( (unsigned __int8)v21 != 1 )
        {
          if ( (unsigned __int8)v21 == 2 )
            goto LABEL_19;
          if ( (unsigned __int8)v21 == 3 )
          {
            WORD6(Src) = 35;
            v19 = BYTE2(Src) & 0xF0 | 5;
            goto LABEL_20;
          }
          if ( (unsigned __int8)v21 != 4 )
          {
            if ( (unsigned __int8)v21 == 5 )
            {
              v9 = 34;
              WORD6(Src) = 2059;
              v19 = BYTE2(Src) & 0xF0 | 0xB;
              goto LABEL_21;
            }
            if ( (unsigned __int8)v21 != 6 )
              goto LABEL_22;
            WORD6(Src) = 68;
            v19 = BYTE2(Src) & 0xF0 | 4;
LABEL_20:
            v9 = 2;
LABEL_21:
            LOBYTE(Src) = -16;
            BYTE7(Src) = 10;
            BYTE2(Src) = v19;
LABEL_22:
            *(_BYTE *)(a2 + 3) = 4;
LABEL_23:
            result = GetSrbScsiData(a2, 0, (unsigned int)&v37, (unsigned int)&v38, (__int64)&v42);
            if ( v37 )
              *v37 = v9;
            if ( (Src & 0x80u) != 0LL )
            {
              v20 = (char *)v38;
              if ( v38 )
              {
                v33 = v42;
                if ( v42 )
                {
                  if ( v42 <= 0x12u )
                    v17 = v42;
                  result = (__int64)memmove(v38, &Src, v17);
                  *(_BYTE *)(a2 + 3) |= 0x80u;
                  if ( v33 > v17 )
                    return NVMeZeroMemory(&v20[v17], v33 - v17);
                }
              }
            }
            return result;
          }
          goto LABEL_179;
        }
LABEL_163:
        WORD6(Src) = 32;
        v19 = BYTE2(Src) & 0xF0 | 5;
        goto LABEL_20;
      }
    }
    v9 = 34;
    v19 = BYTE2(Src) & 0xF0 | 0xB;
    WORD6(Src) = 0;
    goto LABEL_21;
  }
  return result;
}
