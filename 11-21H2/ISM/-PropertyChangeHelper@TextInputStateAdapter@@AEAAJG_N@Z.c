/*
 * XREFs of ?PropertyChangeHelper@TextInputStateAdapter@@AEAAJG_N@Z @ 0x1801D64BC
 * Callers:
 *     ?OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801D6310 (-OnConnected@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z @ 0x1801D6400 (-OnPropertyChanged@TextInputStateAdapter@@UEAAJPEAUIMessageProxy@@G@Z.c)
 * Callees:
 *     memset_0 @ 0x18004A918 (memset_0.c)
 *     __security_check_cookie @ 0x18004A930 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18004E9E0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0sqq_EventWriteTransfer @ 0x1801975C4 (McTemplateU0sqq_EventWriteTransfer.c)
 */

__int64 __fastcall TextInputStateAdapter::PropertyChangeHelper(TextInputStateAdapter *this, unsigned __int16 a2)
{
  unsigned int v2; // esi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r9
  _BYTE v10[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  __int16 v12; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  int v14; // [rsp+48h] [rbp-B8h] BYREF
  int v15; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+60h] [rbp-A0h] BYREF
  int v19; // [rsp+68h] [rbp-98h]
  __m128i si128; // [rsp+70h] [rbp-90h] BYREF
  __int128 v21; // [rsp+80h] [rbp-80h] BYREF
  int v22; // [rsp+90h] [rbp-70h]
  _BYTE v23[96]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = a2;
  v13 = 0LL;
  v16 = 0LL;
  if ( a2 >= 0x26u || !*((_BYTE *)this + a2 + 57) )
    goto LABEL_57;
  v11 = 0;
  v17 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
  v12 = 0;
  v10[0] = 0;
  v14 = 0;
  memset_0(v23, 0, 0x54uLL);
  v15 = -1;
  v18 = 0LL;
  v19 = 0;
  v22 = 0;
  v21 = 0LL;
  if ( v2 > 0x14 )
  {
    if ( v2 <= 0x1E )
    {
      switch ( v2 )
      {
        case 0x1Eu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 272LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1110LL;
            goto LABEL_32;
          }
          break;
        case 0x15u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 200LL))(*((_QWORD *)this + 5), &v14);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1017LL;
            goto LABEL_32;
          }
LABEL_131:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v14,
                 4LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1211LL;
            goto LABEL_32;
          }
          goto LABEL_57;
        case 0x16u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 208LL))(
                 *((_QWORD *)this + 5),
                 v23);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 960LL;
            goto LABEL_32;
          }
LABEL_137:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 v23,
                 84LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1251LL;
            goto LABEL_32;
          }
          goto LABEL_57;
        case 0x17u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 216LL))(
                 *((_QWORD *)this + 5),
                 &v16);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 966LL;
            goto LABEL_32;
          }
LABEL_134:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v16,
                 8LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1242LL;
            goto LABEL_32;
          }
          goto LABEL_57;
        case 0x18u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 224LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1023LL;
            goto LABEL_32;
          }
          break;
        case 0x19u:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 232LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1095LL;
            goto LABEL_32;
          }
          break;
        case 0x1Au:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 240LL))(
                 *((_QWORD *)this + 5),
                 v10);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1105LL;
            goto LABEL_32;
          }
          break;
        case 0x1Bu:
          v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 248LL))(*((_QWORD *)this + 5), &v11);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1100LL;
            goto LABEL_32;
          }
          goto LABEL_125;
        case 0x1Du:
          v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 264LL))(
                 *((_QWORD *)this + 5),
                 &v17);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1047LL;
            goto LABEL_32;
          }
LABEL_128:
          v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
                 *((_QWORD *)this + 3),
                 (unsigned __int16)v2,
                 &v17,
                 8LL);
          v7 = v4;
          if ( v4 < 0 )
          {
            if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
              goto LABEL_58;
            v8 = 1185LL;
            goto LABEL_32;
          }
          goto LABEL_57;
        default:
          goto LABEL_124;
      }
LABEL_170:
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _BYTE *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             v10,
             1LL);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_58;
        v8 = 1202LL;
        goto LABEL_32;
      }
      goto LABEL_57;
    }
    switch ( v2 )
    {
      case 0x1Fu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int16 *))(**((_QWORD **)this + 5) + 280LL))(
               *((_QWORD *)this + 5),
               &v12);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1115LL;
          goto LABEL_32;
        }
LABEL_182:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &v12,
               2LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1176LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0x20u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 288LL))(
               *((_QWORD *)this + 5),
               &v13);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1120LL;
          goto LABEL_32;
        }
LABEL_176:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &v13,
               8LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1233LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0x21u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 296LL))(*((_QWORD *)this + 5), v10);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1125LL;
          goto LABEL_32;
        }
        goto LABEL_170;
      case 0x22u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 5) + 304LL))(
               *((_QWORD *)this + 5),
               &v21);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1130LL;
          goto LABEL_32;
        }
LABEL_164:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int128 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &v21,
               20LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1288LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0x23u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 312LL))(
               *((_QWORD *)this + 5),
               &v13);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1135LL;
          goto LABEL_32;
        }
        break;
      case 0x24u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 320LL))(
               *((_QWORD *)this + 5),
               &v13);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1140LL;
          goto LABEL_32;
        }
        break;
      case 0x25u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 328LL))(*((_QWORD *)this + 5), v10);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1029LL;
          goto LABEL_32;
        }
        goto LABEL_170;
      default:
        goto LABEL_124;
    }
LABEL_158:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           (unsigned __int16)v2,
           &v13,
           8LL);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_58;
      v8 = 1223LL;
      goto LABEL_32;
    }
    goto LABEL_57;
  }
  if ( v2 == 20 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 192LL))(*((_QWORD *)this + 5), v10);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_58;
      v8 = 1011LL;
      goto LABEL_32;
    }
    goto LABEL_170;
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
            goto LABEL_58;
          v8 = 1053LL;
          goto LABEL_32;
        }
LABEL_140:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __m128i *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &si128,
               16LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1261LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0xAu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 112LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1041LL;
          goto LABEL_32;
        }
        goto LABEL_125;
      case 0xDu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 136LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 990LL;
          goto LABEL_32;
        }
        goto LABEL_125;
      case 0xEu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 144LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1080LL;
          goto LABEL_32;
        }
        goto LABEL_125;
      case 0xFu:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 152LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1085LL;
          goto LABEL_32;
        }
        goto LABEL_125;
      case 0x10u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 160LL))(
               *((_QWORD *)this + 5),
               &v18);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1090LL;
          goto LABEL_32;
        }
LABEL_143:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *, __int64))(**((_QWORD **)this + 3) + 24LL))(
               *((_QWORD *)this + 3),
               (unsigned __int16)v2,
               &v18,
               12LL);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1270LL;
          goto LABEL_32;
        }
        goto LABEL_57;
      case 0x12u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 176LL))(*((_QWORD *)this + 5), &v11);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 996LL;
          goto LABEL_32;
        }
        if ( *((_DWORD *)this + 24) == v11 )
          goto LABEL_57;
        goto LABEL_125;
      case 0x13u:
        v4 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 5) + 184LL))(*((_QWORD *)this + 5), v10);
        v7 = v4;
        if ( v4 < 0 )
        {
          if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
            goto LABEL_58;
          v8 = 1005LL;
          goto LABEL_32;
        }
        goto LABEL_170;
    }
LABEL_124:
    switch ( (unsigned int)&_ImageBase )
    {
      case 0u:
      case 2u:
      case 5u:
      case 6u:
      case 7u:
      case 0xAu:
      case 0xDu:
      case 0xEu:
      case 0xFu:
      case 0x12u:
      case 0x1Bu:
        goto LABEL_125;
      case 1u:
      case 3u:
      case 0x23u:
      case 0x24u:
        goto LABEL_158;
      case 4u:
        goto LABEL_146;
      case 8u:
      case 9u:
        goto LABEL_140;
      case 0x10u:
        goto LABEL_143;
      case 0x13u:
      case 0x14u:
      case 0x18u:
      case 0x19u:
      case 0x1Au:
      case 0x1Cu:
      case 0x1Eu:
      case 0x21u:
      case 0x25u:
        goto LABEL_170;
      case 0x15u:
        goto LABEL_131;
      case 0x16u:
        goto LABEL_137;
      case 0x17u:
        goto LABEL_134;
      case 0x1Du:
        goto LABEL_128;
      case 0x1Fu:
        goto LABEL_182;
      case 0x20u:
        goto LABEL_176;
      case 0x22u:
        goto LABEL_164;
      default:
        goto LABEL_57;
    }
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
          goto LABEL_58;
        v8 = 1035LL;
        goto LABEL_32;
      }
      goto LABEL_140;
    case 0u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 32LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_58;
        v8 = 1065LL;
        goto LABEL_32;
      }
      goto LABEL_125;
    case 1u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 40LL))(*((_QWORD *)this + 5), &v13);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_58;
        v8 = 1070LL;
        goto LABEL_32;
      }
      goto LABEL_158;
    case 2u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 48LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 954LL;
          goto LABEL_32;
        }
        goto LABEL_58;
      }
      goto LABEL_125;
    case 3u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 5) + 56LL))(*((_QWORD *)this + 5), &v13);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 972LL;
          goto LABEL_32;
        }
        goto LABEL_58;
      }
      goto LABEL_158;
    case 4u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 64LL))(*((_QWORD *)this + 5), &v15);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 978LL;
          goto LABEL_32;
        }
        goto LABEL_58;
      }
LABEL_146:
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
             *((_QWORD *)this + 3),
             (unsigned __int16)v2,
             &v15,
             4LL);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
          goto LABEL_58;
        v8 = 1279LL;
        goto LABEL_32;
      }
LABEL_57:
      v7 = 0;
      goto LABEL_58;
    case 5u:
      v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 72LL))(*((_QWORD *)this + 5), &v11);
      v7 = v4;
      if ( v4 < 0 )
      {
        if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
        {
          v8 = 984LL;
          goto LABEL_32;
        }
        goto LABEL_58;
      }
      goto LABEL_125;
  }
  if ( v2 != 6 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 88LL))(*((_QWORD *)this + 5), &v11);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
      {
        v8 = 1059LL;
LABEL_32:
        McTemplateU0sqq_EventWriteTransfer(v6, v5, "TextInputStateAdapter::PropertyChangeHelper", v8, v4);
        goto LABEL_58;
      }
      goto LABEL_58;
    }
    goto LABEL_125;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 5) + 80LL))(*((_QWORD *)this + 5), &v11);
  v7 = v4;
  if ( v4 >= 0 )
  {
LABEL_125:
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, int *, __int64))(**((_QWORD **)this + 3) + 24LL))(
           *((_QWORD *)this + 3),
           (unsigned __int16)v2,
           &v11,
           4LL);
    v7 = v4;
    if ( v4 < 0 )
    {
      if ( (Microsoft_WindowsPhone_InputEnableBits & 1) == 0 )
        goto LABEL_58;
      v8 = 1167LL;
      goto LABEL_32;
    }
    goto LABEL_57;
  }
  if ( (Microsoft_WindowsPhone_InputEnableBits & 1) != 0 )
  {
    v8 = 1075LL;
    goto LABEL_32;
  }
LABEL_58:
  MsgRelease(v13);
  MsgRelease(v16);
  return v7;
}
