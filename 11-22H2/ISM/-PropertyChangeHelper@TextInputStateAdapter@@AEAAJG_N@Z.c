/*
 * XREFs of ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x18020122C
 * Callers:
 *     ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x180201080 (-OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x180201170 (-OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801C2D98 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall TextInputStateAdapter::PropertyChangeHelper(TextInputStateAdapter *this, unsigned __int16 a2)
{
  unsigned int v2; // r14d
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r9
  unsigned int v9; // ebx
  _BYTE v11[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v13; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v16[3]; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+68h] [rbp-98h] BYREF
  int v20; // [rsp+70h] [rbp-90h]
  __m128i si128; // [rsp+78h] [rbp-88h] BYREF
  __int128 v22; // [rsp+88h] [rbp-78h] BYREF
  int v23; // [rsp+98h] [rbp-68h]
  _BYTE v24[96]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = a2;
  v14 = 0LL;
  v17 = 0LL;
  if ( a2 >= 0x27u || !*((_BYTE *)this + a2 + 57) )
    goto LABEL_167;
  v12 = 0;
  v18 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v13 = 0;
  v11[0] = 0;
  v16[0] = 0;
  memset_0(v24, 0, 0x58uLL);
  v15 = -1;
  v19 = 0LL;
  v20 = 0;
  v23 = 0;
  v22 = 0LL;
  if ( v2 > 0x14 )
  {
    if ( v2 <= 0x1E )
    {
      switch ( v2 )
      {
        case 0x1Eu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 272LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1122LL;
            goto LABEL_32;
          }
          goto LABEL_205;
        case 0x15u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 5) + 200LL))(
                 *((_QWORD *)this + 5),
                 v16);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1029LL;
            goto LABEL_32;
          }
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _DWORD *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 v16,
                 4LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1229LL;
            goto LABEL_32;
          }
          goto LABEL_167;
        case 0x16u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 208LL))(
                 *((_QWORD *)this + 5),
                 v24);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 972LL;
            goto LABEL_32;
          }
          goto LABEL_182;
        case 0x17u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 216LL))(
                 *((_QWORD *)this + 5),
                 &v17);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 978LL;
            goto LABEL_32;
          }
          goto LABEL_182;
        case 0x18u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 224LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1035LL;
            goto LABEL_32;
          }
          goto LABEL_182;
        case 0x19u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 232LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1107LL;
            goto LABEL_32;
          }
          goto LABEL_182;
        case 0x1Au:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 240LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1117LL;
            goto LABEL_32;
          }
          goto LABEL_182;
        case 0x1Bu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 248LL))(*((_QWORD *)this + 5), &v12);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1112LL;
            goto LABEL_32;
          }
          goto LABEL_182;
        case 0x1Du:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 264LL))(
                 *((_QWORD *)this + 5),
                 &v18);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1059LL;
            goto LABEL_32;
          }
          goto LABEL_182;
      }
      goto LABEL_156;
    }
    if ( v2 != 31 )
    {
      switch ( v2 )
      {
        case ' ':
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 288LL))(
                 *((_QWORD *)this + 5),
                 &v14);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1132LL;
            goto LABEL_32;
          }
          break;
        case '!':
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 296LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1137LL;
            goto LABEL_32;
          }
          break;
        case '"':
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 304LL))(
                 *((_QWORD *)this + 5),
                 &v22);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1142LL;
            goto LABEL_32;
          }
          break;
        case '#':
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 312LL))(
                 *((_QWORD *)this + 5),
                 &v14);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1147LL;
            goto LABEL_32;
          }
          break;
        case '$':
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 320LL))(
                 *((_QWORD *)this + 5),
                 &v14);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1152LL;
            goto LABEL_32;
          }
          break;
        case '%':
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 328LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1157LL;
            goto LABEL_32;
          }
          goto LABEL_156;
        case '&':
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 336LL))(
                 *((_QWORD *)this + 5),
                 v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1041LL;
            goto LABEL_32;
          }
          break;
        default:
          goto LABEL_156;
      }
LABEL_198:
      if ( v2 == 31 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               31LL,
               &v13,
               2LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1193LL;
          goto LABEL_32;
        }
        goto LABEL_167;
      }
      if ( v2 == 32 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               32LL,
               &v14,
               8LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1251LL;
          goto LABEL_32;
        }
        goto LABEL_167;
      }
      if ( v2 != 33 )
      {
        if ( v2 != 34 )
        {
          if ( v2 == 35 || (v9 = v2 - 36, v2 == 36) )
          {
LABEL_208:
            v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                   *((_QWORD *)this + 3),
                   (unsigned __int16)v2,
                   &v14,
                   8LL);
            v7 = v4;
            if ( v4 < 0 )
            {
              if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
                goto LABEL_168;
              v8 = 1241LL;
              goto LABEL_32;
            }
            goto LABEL_167;
          }
          goto LABEL_204;
        }
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int128 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               34LL,
               &v22,
               20LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1306LL;
          goto LABEL_32;
        }
LABEL_167:
        v7 = 0;
        goto LABEL_168;
      }
LABEL_205:
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             v11,
             1LL);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_168;
        v8 = 1220LL;
        goto LABEL_32;
      }
      goto LABEL_167;
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 5) + 280LL))(*((_QWORD *)this + 5), &v13);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_168;
      v8 = 1127LL;
      goto LABEL_32;
    }
LABEL_156:
    if ( v2 <= 0x15 )
    {
LABEL_57:
      if ( v2 == 10 || v2 == 13 || v2 == 14 || v2 == 15 )
        goto LABEL_63;
      if ( v2 == 16 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               16LL,
               &v19,
               12LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1288LL;
          goto LABEL_32;
        }
        goto LABEL_167;
      }
      v9 = v2 - 18;
      if ( v2 == 18 )
        goto LABEL_63;
LABEL_204:
      if ( v9 - 1 > 1 )
        goto LABEL_167;
      goto LABEL_205;
    }
    if ( v2 <= 0x1E )
    {
LABEL_182:
      if ( v2 == 22 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               22LL,
               v24,
               88LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1269LL;
          goto LABEL_32;
        }
        goto LABEL_167;
      }
      if ( v2 == 23 )
      {
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               23LL,
               &v17,
               8LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1260LL;
          goto LABEL_32;
        }
        goto LABEL_167;
      }
      if ( v2 != 24 && v2 != 25 && v2 != 26 )
      {
        if ( v2 == 27 )
          goto LABEL_63;
        if ( v2 != 28 )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 29LL,
                 &v18,
                 8LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1202LL;
            goto LABEL_32;
          }
          goto LABEL_167;
        }
      }
      goto LABEL_205;
    }
    goto LABEL_198;
  }
  if ( v2 == 20 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 192LL))(*((_QWORD *)this + 5), v11);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_168;
      v8 = 1023LL;
      goto LABEL_32;
    }
    goto LABEL_57;
  }
  if ( v2 > 8 )
  {
    switch ( v2 )
    {
      case 9u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 5) + 104LL))(
               *((_QWORD *)this + 5),
               &si128);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1065LL;
          goto LABEL_32;
        }
LABEL_172:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __m128i *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &si128,
               16LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1279LL;
          goto LABEL_32;
        }
        goto LABEL_167;
      case 0xAu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 112LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1053LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0xDu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 136LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1002LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0xEu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 144LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1092LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0xFu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 152LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1097LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0x10u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 160LL))(
               *((_QWORD *)this + 5),
               &v19);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1102LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0x12u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 176LL))(*((_QWORD *)this + 5), &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1008LL;
          goto LABEL_32;
        }
        if ( *((_DWORD *)this + 24) == v12 )
          goto LABEL_167;
        goto LABEL_57;
      case 0x13u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 184LL))(*((_QWORD *)this + 5), v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1017LL;
          goto LABEL_32;
        }
        goto LABEL_57;
    }
    goto LABEL_156;
  }
  switch ( v2 )
  {
    case 8u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __m128i *))(**((_QWORD **)this + 5) + 96LL))(
             *((_QWORD *)this + 5),
             &si128);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_168;
        v8 = 1047LL;
        goto LABEL_32;
      }
      goto LABEL_158;
    case 0u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), &v12);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_168;
        v8 = 1077LL;
        goto LABEL_32;
      }
      goto LABEL_158;
    case 1u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5), &v14);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_168;
        v8 = 1082LL;
        goto LABEL_32;
      }
      goto LABEL_158;
    case 2u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), &v12);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 966LL;
          goto LABEL_32;
        }
        goto LABEL_168;
      }
      goto LABEL_158;
    case 3u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5), &v14);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 984LL;
          goto LABEL_32;
        }
        goto LABEL_168;
      }
      goto LABEL_158;
    case 4u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5), &v15);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 990LL;
          goto LABEL_32;
        }
        goto LABEL_168;
      }
      goto LABEL_158;
    case 5u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5), &v12);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 996LL;
          goto LABEL_32;
        }
        goto LABEL_168;
      }
      goto LABEL_158;
  }
  if ( v2 != 6 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v12);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      {
        v8 = 1071LL;
LABEL_32:
        McTemplateU0sqq_EventWriteTransfer(v6, v5, "TextInputStateAdapter::PropertyChangeHelper", v8, v4);
        goto LABEL_168;
      }
      goto LABEL_168;
    }
    goto LABEL_158;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), &v12);
  v7 = v4;
  if ( v4 >= 0 )
  {
LABEL_158:
    if ( !v2 )
      goto LABEL_63;
    if ( v2 != 1 )
    {
      if ( v2 == 2 )
        goto LABEL_63;
      if ( v2 != 3 )
      {
        if ( v2 == 4 )
        {
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 4LL,
                 &v15,
                 4LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_168;
            v8 = 1297LL;
            goto LABEL_32;
          }
          goto LABEL_167;
        }
        if ( v2 != 5 && v2 != 6 && v2 != 7 )
          goto LABEL_172;
LABEL_63:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &v12,
               4LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_168;
          v8 = 1184LL;
          goto LABEL_32;
        }
        goto LABEL_167;
      }
    }
    goto LABEL_208;
  }
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v8 = 1087LL;
    goto LABEL_32;
  }
LABEL_168:
  MsgRelease(v14);
  MsgRelease(v17);
  return v7;
}
